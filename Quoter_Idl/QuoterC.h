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
// d:\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:152

#ifndef _TAO_IDL_QUOTERC_JVDZEK_H_
#define _TAO_IDL_QUOTERC_JVDZEK_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/UserException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 5
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO 

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_root\root_ch.cpp:160
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:38

namespace Quoter
{

  // TAO_IDL - Generated from
  // d:\ace_wrappers\tao\tao_idl\be\be_visitor_exception\exception_ch.cpp:44

  class  Invalid_Stock_Symbol : public ::CORBA::UserException
  {
  public:

    Invalid_Stock_Symbol (void);
    Invalid_Stock_Symbol (const Invalid_Stock_Symbol &);
    ~Invalid_Stock_Symbol (void);

    Invalid_Stock_Symbol &operator= (const Invalid_Stock_Symbol &);

    static Invalid_Stock_Symbol *_downcast ( ::CORBA::Exception *);
    static const Invalid_Stock_Symbol *_downcast ( ::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc (void);

    virtual ::CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);
  };

  // TAO_IDL - Generated from
  // d:\ace_wrappers\tao\tao_idl\be\be_interface.cpp:751

#if !defined (_QUOTER_STOCK__VAR_OUT_CH_)
#define _QUOTER_STOCK__VAR_OUT_CH_

  class Stock;
  typedef Stock *Stock_ptr;

  typedef
    TAO_Objref_Var_T<
        Stock
      >
    Stock_var;
  
  typedef
    TAO_Objref_Out_T<
        Stock
      >
    Stock_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // d:\ace_wrappers\tao\tao_idl\be\be_interface.cpp:751

#if !defined (_QUOTER_STOCK_FACTORY__VAR_OUT_CH_)
#define _QUOTER_STOCK_FACTORY__VAR_OUT_CH_

  class Stock_Factory;
  typedef Stock_Factory *Stock_Factory_ptr;

  typedef
    TAO_Objref_Var_T<
        Stock_Factory
      >
    Stock_Factory_var;
  
  typedef
    TAO_Objref_Out_T<
        Stock_Factory
      >
    Stock_Factory_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:43

  class  Stock_Factory
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Stock_Factory>;

    // TAO_IDL - Generated from
    // d:\ace_wrappers\tao\tao_idl\be\be_type.cpp:307

    typedef Stock_Factory_ptr _ptr_type;
    typedef Stock_Factory_var _var_type;
    typedef Stock_Factory_out _out_type;

    // The static operations.
    static Stock_Factory_ptr _duplicate (Stock_Factory_ptr obj);

    static void _tao_release (Stock_Factory_ptr obj);

    static Stock_Factory_ptr _narrow (::CORBA::Object_ptr obj);
    static Stock_Factory_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Stock_Factory_ptr _nil (void);

    virtual ::Quoter::Stock_ptr get_stock (
      const char * stock_symbol);

    // TAO_IDL - Generated from
    // d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    Stock_Factory (void);

    // Concrete non-local interface only.
    Stock_Factory (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    Stock_Factory (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Stock_Factory (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Stock_Factory (const Stock_Factory &);

    void operator= (const Stock_Factory &);
  };

  // TAO_IDL - Generated from
  // d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:43

  class  Stock
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Stock>;

    // TAO_IDL - Generated from
    // d:\ace_wrappers\tao\tao_idl\be\be_type.cpp:307

    typedef Stock_ptr _ptr_type;
    typedef Stock_var _var_type;
    typedef Stock_out _out_type;

    // The static operations.
    static Stock_ptr _duplicate (Stock_ptr obj);

    static void _tao_release (Stock_ptr obj);

    static Stock_ptr _narrow (::CORBA::Object_ptr obj);
    static Stock_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Stock_ptr _nil (void);

    virtual char * symbol (
      void);

    virtual char * full_name (
      void);

    virtual ::CORBA::Double price (
      void);

    // TAO_IDL - Generated from
    // d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    Stock (void);

    // Concrete non-local interface only.
    Stock (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    Stock (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Stock (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Stock (const Stock &);

    void operator= (const Stock &);
  };

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:67

} // module Quoter

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // d:\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:147

#if !defined (_QUOTER_STOCK__ARG_TRAITS_)
#define _QUOTER_STOCK__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Quoter::Stock>
    : public
        Object_Arg_Traits_T<
            ::Quoter::Stock_ptr,
            ::Quoter::Stock_var,
            ::Quoter::Stock_out,
            TAO::Objref_Traits<Quoter::Stock>,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // d:\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:147

#if !defined (_QUOTER_STOCK_FACTORY__ARG_TRAITS_)
#define _QUOTER_STOCK_FACTORY__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Quoter::Stock_Factory>
    : public
        Object_Arg_Traits_T<
            ::Quoter::Stock_Factory_ptr,
            ::Quoter::Stock_Factory_var,
            ::Quoter::Stock_Factory_out,
            TAO::Objref_Traits<Quoter::Stock_Factory>,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_traits.cpp:62

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_QUOTER_STOCK_FACTORY__TRAITS_)
#define _QUOTER_STOCK_FACTORY__TRAITS_

  template<>
  struct  Objref_Traits< ::Quoter::Stock_Factory>
  {
    static ::Quoter::Stock_Factory_ptr duplicate (
        ::Quoter::Stock_Factory_ptr p);
    static void release (
        ::Quoter::Stock_Factory_ptr p);
    static ::Quoter::Stock_Factory_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Quoter::Stock_Factory_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_QUOTER_STOCK__TRAITS_)
#define _QUOTER_STOCK__TRAITS_

  template<>
  struct  Objref_Traits< ::Quoter::Stock>
  {
    static ::Quoter::Stock_ptr duplicate (
        ::Quoter::Stock_ptr p);
    static void release (
        ::Quoter::Stock_ptr p);
    static ::Quoter::Stock_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Quoter::Stock_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_exception\cdr_op_ch.cpp:40
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Quoter::Invalid_Stock_Symbol &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Quoter::Invalid_Stock_Symbol &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface\cdr_op_ch.cpp:44

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Quoter::Stock_Factory_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Quoter::Stock_Factory_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface\cdr_op_ch.cpp:44

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Quoter::Stock_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Quoter::Stock_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "QuoterC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

