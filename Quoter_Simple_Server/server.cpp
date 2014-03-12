//
// $Id: server.cpp 82168 2008-06-25 11:50:02Z sma $
//

#include "Stock_Factory_i.h"
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

		// Create the servant
		Quoter_Stock_Factory_i stock_factory_i;

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