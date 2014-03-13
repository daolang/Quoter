//
// $Id: server.cpp 82168 2008-06-25 11:50:02Z sma $
//

#include "Stock_Factory_i.h"
#include "Stock_i.h"
#include "ace/streams.h"

int ACE_TMAIN (int argc, ACE_TCHAR* argv[])
{
	try {
		// First initialize the ORB, that will remove some arguments...
		CORBA::ORB_var orb =
			CORBA::ORB_init (argc, argv);

		CORBA::Object_var poa_object =
			orb->resolve_initial_references ("RootPOA"); /*resolve_initial_references() is used to bootstrap all kinds of services*/
		PortableServer::POA_var poa =
			PortableServer::POA::_narrow (poa_object.in ());

		PortableServer::POAManager_var poa_manager =
			poa->the_POAManager ();/*The POA managers provide interfaces to activate and deactivate one or more POAs*/
		poa_manager->activate ();/*activate the POA*/

		CORBA::PolicyList policies (2);
		policies.length (2);

		policies[0] =
			poa->create_id_assignment_policy (PortableServer::USER_ID);
		policies[1] =
			poa->create_implicit_activation_policy (PortableServer::NO_IMPLICIT_ACTIVATION);

		PortableServer::POA_var stock_factory_poa =
			poa->create_POA ("Stock_Factory_POA",
			poa_manager.in (),
			policies);

		for (CORBA::ULong i = 0; i != policies.length (); ++i) {
			policies[i]->destroy ();
		}
		/* we assume that we read the list of stoks form the stdin*/
		while (!std::cin.eof () && std::cin.peek () != EOF) {
			const int max_symbol_length = 8;
			char symbol[max_symbol_length];
			const int max_full_name_length = 64;
			char full_name[max_full_name_length];
			double price;

			std::cin.getline (symbol, max_symbol_length, '\n');
			std::cin.getline (full_name, max_full_name_length, '\n');
			std::cin >> price;
			std::cin.ignore (1, '\n');

			PortableServer::ServantBase_var servant =
				new Quoter_Stock_i (symbol, full_name, price);

			PortableServer::ObjectId_var oid =
				PortableServer::string_to_ObjectId (symbol);

			stock_factory_poa->activate_object_with_id (oid.in (),
				servant.in ());
		}
		
		// Create the servant
		Quoter_Stock_Factory_i stock_factory_i (stock_factory_poa.in ());

		// Activate it to obtain the object reference 激活它获取对象引用
		Quoter::Stock_Factory_var stock_factory =
			stock_factory_i._this ();/*activate servant using _this() */

		// Put the object reference as an IOR string
		CORBA::String_var ior = orb->object_to_string (stock_factory.in ());
		// Print it out!
		cout << ior.in () << endl;

		orb->run ();/* run the ORB event loop to start processing requests from the client*/

		// Destroy the POA, waiting until the destruction terminates
		poa->destroy (1, 1);
		orb->destroy ();
	}
	catch (CORBA::Exception &) {
		cerr << "CORBA exception raised!" << endl;
	}
	return 0;
}