// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.2.5
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.dre.vanderbilt.edu/~schmidt/TAO.html
 **/


// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:652

#ifndef _TAO_IDL_QUOTERS_T2WM5J_CPP_
#define _TAO_IDL_QUOTERS_T2WM5J_CPP_


#include "QuoterS.h"
#include "tao/PortableServer/Operation_Table_Perfect_Hash.h"
#include "tao/PortableServer/Upcall_Command.h"
#include "tao/PortableServer/Upcall_Wrapper.h"
#include "tao/TAO_Server_Request.h"
#include "tao/ORB_Core.h"
#include "tao/Profile.h"
#include "tao/Stub.h"
#include "tao/IFR_Client_Adapter.h"
#include "tao/Object_T.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/DynamicC.h"
#include "tao/CDR.h"
#include "tao/operation_details.h"
#include "tao/PortableInterceptor.h"
#include "ace/Dynamic_Service.h"
#include "ace/Malloc_Allocator.h"

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_interface.cpp:1868

class TAO_Quoter_Stock_Factory_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_Quoter_Stock_Factory_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_Quoter_Stock_Factory_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16,  0, 16,  0, 16, 16,
      0,  5, 16,  0, 16, 16, 16,  0, 16, 16,
     16, 16, 16, 16, 16, 16,  0, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_Quoter_Stock_Factory_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 6,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 15,
      HASH_VALUE_RANGE = 11,
      DUPLICATES = 0,
      WORDLIST_SIZE = 11
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", &TAO_ServantBase::_is_a_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},
      {"get_stock", &POA_Quoter::Stock_Factory::get_stock_skel, 0},
      {"_component", &TAO_ServantBase::_component_skel, 0},
      {"",0,0},{"",0,0},
      {"_non_existent", &TAO_ServantBase::_non_existent_skel, 0},
      {"_repository_id", &TAO_ServantBase::_repository_id_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname;

          if (*str == *s && !ACE_OS::strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}

static TAO_Quoter_Stock_Factory_Perfect_Hash_OpTable tao_Quoter_Stock_Factory_optable;

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:93

POA_Quoter::Stock_Factory::Stock_Factory (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_Quoter_Stock_Factory_optable;
}

POA_Quoter::Stock_Factory::Stock_Factory (const Stock_Factory& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_Quoter::Stock_Factory::~Stock_Factory (void)
{
}

namespace POA_Quoter
{
  

  // TAO_IDL - Generated from
  // d:\ace_wrappers\tao\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:83

  class get_stock_Stock_Factory
    : public TAO::Upcall_Command
  {
  public:
    inline get_stock_Stock_Factory (
      POA_Quoter::Stock_Factory * servant,
      TAO::Argument * const args[])
      : servant_ (servant)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Quoter::Stock>::ret_arg_type retval =
        static_cast<TAO::SArg_Traits< ::Quoter::Stock>::ret_val *> (this->args_[0])->arg ();
      
      TAO::SArg_Traits< char *>::in_arg_type arg_1 =
        static_cast<TAO::SArg_Traits< char *>::in_arg_val *> (this->args_[1])->arg ();
        
      retval =
        this->servant_->get_stock (
          arg_1);
    }
  
  private:
    POA_Quoter::Stock_Factory * const servant_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_ss.cpp:171

void POA_Quoter::Stock_Factory::get_stock_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Quoter::Stock>::ret_val retval;
  TAO::SArg_Traits< char *>::in_arg_val _tao_stock_symbol;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_stock_symbol
    };
  
  static size_t const nargs = 2;

  POA_Quoter::Stock_Factory * const impl =
    dynamic_cast<POA_Quoter::Stock_Factory *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  get_stock_Stock_Factory command (
    impl,
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}



// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:166



::CORBA::Boolean POA_Quoter::Stock_Factory::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:Quoter/Stock_Factory:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_Quoter::Stock_Factory::_interface_repository_id (void) const
{
  return "IDL:Quoter/Stock_Factory:1.0";
}

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:426

void POA_Quoter::Stock_Factory::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:373

Quoter::Stock_Factory *
POA_Quoter::Stock_Factory::_this (void)
{
  TAO_Stub *stub = this->_create_stub ();

  TAO_Stub_Auto_Ptr safe_stub (stub);
  ::CORBA::Object_ptr tmp = CORBA::Object_ptr ();

  ::CORBA::Boolean const _tao_opt_colloc =
    stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  
  ACE_NEW_RETURN (
      tmp,
      ::CORBA::Object (stub, _tao_opt_colloc, this),
      0);
  
  ::CORBA::Object_var obj = tmp;
  (void) safe_stub.release ();

  typedef ::Quoter::Stock_Factory STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_interface.cpp:1868

class TAO_Quoter_Stock_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_Quoter_Stock_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_Quoter_Stock_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20,  0, 20,  2, 20, 20,
      5,  0, 20, 20, 20, 20, 20, 20,  0, 20,
     20, 20,  0, 20, 20, 20,  5, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_Quoter_Stock_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 8,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 19,
      HASH_VALUE_RANGE = 15,
      DUPLICATES = 0,
      WORDLIST_SIZE = 13
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"price", &POA_Quoter::Stock::price_skel, 0},
      {"",0,0},
      {"_is_a", &TAO_ServantBase::_is_a_skel, 0},
      {"",0,0},{"",0,0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"_get_symbol", &POA_Quoter::Stock::_get_symbol_skel, 0},
      {"",0,0},{"",0,0},
      {"_get_full_name", &POA_Quoter::Stock::_get_full_name_skel, 0},
      {"_component", &TAO_ServantBase::_component_skel, 0},
      {"",0,0},{"",0,0},
      {"_non_existent", &TAO_ServantBase::_non_existent_skel, 0},
      {"_repository_id", &TAO_ServantBase::_repository_id_skel, 0},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname;

          if (*str == *s && !ACE_OS::strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}

static TAO_Quoter_Stock_Perfect_Hash_OpTable tao_Quoter_Stock_optable;

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:93

POA_Quoter::Stock::Stock (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_Quoter_Stock_optable;
}

POA_Quoter::Stock::Stock (const Stock& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_Quoter::Stock::~Stock (void)
{
}

namespace POA_Quoter
{
  

  // TAO_IDL - Generated from
  // d:\ace_wrappers\tao\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:83

  class _get_symbol_Stock
    : public TAO::Upcall_Command
  {
  public:
    inline _get_symbol_Stock (
      POA_Quoter::Stock * servant,
      TAO::Argument * const args[])
      : servant_ (servant)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< char *>::ret_arg_type retval =
        static_cast<TAO::SArg_Traits< char *>::ret_val *> (this->args_[0])->arg ();
      
      retval =
        this->servant_->symbol ();
    }
  
  private:
    POA_Quoter::Stock * const servant_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_ss.cpp:171

void POA_Quoter::Stock::_get_symbol_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< char *>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_Quoter::Stock * const impl =
    dynamic_cast<POA_Quoter::Stock *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  _get_symbol_Stock command (
    impl,
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_Quoter
{
  

  // TAO_IDL - Generated from
  // d:\ace_wrappers\tao\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:83

  class _get_full_name_Stock
    : public TAO::Upcall_Command
  {
  public:
    inline _get_full_name_Stock (
      POA_Quoter::Stock * servant,
      TAO::Argument * const args[])
      : servant_ (servant)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< char *>::ret_arg_type retval =
        static_cast<TAO::SArg_Traits< char *>::ret_val *> (this->args_[0])->arg ();
      
      retval =
        this->servant_->full_name ();
    }
  
  private:
    POA_Quoter::Stock * const servant_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_ss.cpp:171

void POA_Quoter::Stock::_get_full_name_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< char *>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_Quoter::Stock * const impl =
    dynamic_cast<POA_Quoter::Stock *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  _get_full_name_Stock command (
    impl,
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_Quoter
{
  

  // TAO_IDL - Generated from
  // d:\ace_wrappers\tao\tao_idl\be\be_visitor_operation\upcall_command_ss.cpp:83

  class price_Stock
    : public TAO::Upcall_Command
  {
  public:
    inline price_Stock (
      POA_Quoter::Stock * servant,
      TAO::Argument * const args[])
      : servant_ (servant)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::CORBA::Double>::ret_arg_type retval =
        static_cast<TAO::SArg_Traits< ::CORBA::Double>::ret_val *> (this->args_[0])->arg ();
      
      retval =
        this->servant_->price ();
    }
  
  private:
    POA_Quoter::Stock * const servant_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_ss.cpp:171

void POA_Quoter::Stock::price_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::CORBA::Double>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_Quoter::Stock * const impl =
    dynamic_cast<POA_Quoter::Stock *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  price_Stock command (
    impl,
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}



// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:166



::CORBA::Boolean POA_Quoter::Stock::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:Quoter/Stock:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_Quoter::Stock::_interface_repository_id (void) const
{
  return "IDL:Quoter/Stock:1.0";
}

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:426

void POA_Quoter::Stock::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ss.cpp:373

Quoter::Stock *
POA_Quoter::Stock::_this (void)
{
  TAO_Stub *stub = this->_create_stub ();

  TAO_Stub_Auto_Ptr safe_stub (stub);
  ::CORBA::Object_ptr tmp = CORBA::Object_ptr ();

  ::CORBA::Boolean const _tao_opt_colloc =
    stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  
  ACE_NEW_RETURN (
      tmp,
      ::CORBA::Object (stub, _tao_opt_colloc, this),
      0);
  
  ::CORBA::Object_var obj = tmp;
  (void) safe_stub.release ();

  typedef ::Quoter::Stock STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

#endif /* ifndef */

