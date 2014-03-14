//
// $Id: server.cpp 82168 2008-06-25 11:50:02Z sma $
//

#include "Stock_Factory_i.h"
//#include "Stock_i.h"
#include "ace/streams.h"

int ACE_TMAIN (int argc, ACE_TCHAR* argv[])
{
	try {
		// First initialize the ORB, that will remove some arguments...
		CORBA::ORB_var orb =
			CORBA::ORB_init (argc, argv);

		CORBA::Object_var poa_object =
			orb->resolve_initial_references ("RootPOA"); /*resolve_initial_references() is used to bootstrap all kinds of services*/
		PortableServer::POA_var root_poa =
			PortableServer::POA::_narrow (poa_object.in ());

		PortableServer::POAManager_var poa_manager =
			root_poa->the_POAManager ();/*The POA managers provide interfaces to activate and deactivate one or more POAs*/
		poa_manager->activate ();/*activate the POA*/

		// Create a USER_ID IdAssignmentpolicy object.
		PortableServer::IdAssignmentPolicy_var idassignment =
			root_poa->create_id_assignment_policy (PortableServer::USER_ID);

		// Create a PERSISTENT LifespanPolicy object.
		PortableServer::LifespanPolicy_var lifespan =
			root_poa->create_lifespan_policy (PortableServer::PERSISTENT);

		CORBA::PolicyList policies (2);
		policies.length (2);

		policies[0] =
			PortableServer::IdAssignmentPolicy::_duplicate (idassignment.in ());

		policies[1] =
			PortableServer::LifespanPolicy::_duplicate (lifespan.in ());

		// Create the childPOA under the RootPOA.
		PortableServer::POA_var child_poa =
			root_poa->create_POA ("childPOA",
			poa_manager.in (),
			policies);

		// Destroy policy objects.
		idassignment->destroy ();
		lifespan->destroy ();

		// Create an instance of class Quoter_Stock_Factory_i.
		Quoter_Stock_Factory_i stock_factory_i;

		// Get the Object ID.
		PortableServer::ObjectId_var oid =
			PortableServer::string_to_ObjectId ("Stock_Factory");

		// Activate the Stock_Factory object.
		child_poa->activate_object_with_id (oid.in (),
			&stock_factory_i);

		// Get the object reference.
		CORBA::Object_var stock_factory =
			child_poa->id_to_reference (oid.in ());

		// Stringify all the object referencs.
		CORBA::String_var ior = orb->object_to_string (stock_factory.in ());
		// Print them out !
		cout << ior.in () << endl;

		orb-> run ();

		// Destroy POA, waiting until the destruction terminates.
		root_poa->destroy (1, 1);
		orb->destroy ();
	}
	catch (CORBA::Exception &) {
		cerr << "CORBA exception raised!" << endl;
	}
	return 0;
}