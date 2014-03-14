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
// d:\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:461

#ifndef _TAO_IDL_QUOTERS_GQSBSJ_H_
#define _TAO_IDL_QUOTERS_GQSBSJ_H_

#include /**/ "ace/pre.h"

#include "QuoterC.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Object_SArg_Traits.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/PortableServer/PortableServer.h"
#include "tao/PortableServer/Servant_Base.h"

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // d:\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:147

#if !defined (_QUOTER_STOCK__SARG_TRAITS_)
#define _QUOTER_STOCK__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Quoter::Stock>
    : public
        Object_SArg_Traits_T<
            ::Quoter::Stock_ptr,
            ::Quoter::Stock_var,
            ::Quoter::Stock_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // d:\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:147

#if !defined (_QUOTER_STOCK_FACTORY__SARG_TRAITS_)
#define _QUOTER_STOCK_FACTORY__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Quoter::Stock_Factory>
    : public
        Object_SArg_Traits_T<
            ::Quoter::Stock_Factory_ptr,
            ::Quoter::Stock_Factory_var,
            ::Quoter::Stock_Factory_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_sh.cpp:38

namespace POA_Quoter
{
  

  // TAO_IDL - Generated from
  // d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_sh.cpp:76

  class Stock_Factory;
  typedef Stock_Factory *Stock_Factory_ptr;

  class  Stock_Factory
    : public virtual PortableServer::ServantBase
  {
  protected:
    Stock_Factory (void);
  
  public:
    /// Useful for template programming.
    typedef ::Quoter::Stock_Factory _stub_type;
    typedef ::Quoter::Stock_Factory_ptr _stub_ptr_type;
    typedef ::Quoter::Stock_Factory_var _stub_var_type;

    Stock_Factory (const Stock_Factory& rhs);
    virtual ~Stock_Factory (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::Quoter::Stock_Factory *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // d:\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:39

    virtual ::Quoter::Stock_ptr get_stock (
      const char * stock_symbol) = 0;

    static void get_stock_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

  // TAO_IDL - Generated from
  // d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_sh.cpp:76

  class Stock;
  typedef Stock *Stock_ptr;

  class  Stock
    : public virtual PortableServer::ServantBase
  {
  protected:
    Stock (void);
  
  public:
    /// Useful for template programming.
    typedef ::Quoter::Stock _stub_type;
    typedef ::Quoter::Stock_ptr _stub_ptr_type;
    typedef ::Quoter::Stock_var _stub_var_type;

    Stock (const Stock& rhs);
    virtual ~Stock (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::Quoter::Stock *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // d:\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:39

    virtual char * symbol (
      void) = 0;

    static void _get_symbol_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // d:\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:39

    virtual char * full_name (
      void) = 0;

    static void _get_full_name_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // d:\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_sh.cpp:39

    virtual ::CORBA::Double price (
      void) = 0;

    static void price_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_sh.cpp:69

} // module Quoter

#include /**/ "ace/post.h"

#endif /* ifndef */

