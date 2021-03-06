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
// d:\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:376


#include "QuoterC.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/SystemException.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "QuoterC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_exception\exception_cs.cpp:101

Quoter::Invalid_Stock_Symbol::Invalid_Stock_Symbol (void)
  : ::CORBA::UserException (
        "IDL:Quoter/Invalid_Stock_Symbol:1.0",
        "Invalid_Stock_Symbol"
      )
{
}

Quoter::Invalid_Stock_Symbol::~Invalid_Stock_Symbol (void)
{
}

Quoter::Invalid_Stock_Symbol::Invalid_Stock_Symbol (const ::Quoter::Invalid_Stock_Symbol &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

Quoter::Invalid_Stock_Symbol&
Quoter::Invalid_Stock_Symbol::operator= (const ::Quoter::Invalid_Stock_Symbol &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  return *this;
}

Quoter::Invalid_Stock_Symbol *
Quoter::Invalid_Stock_Symbol::_downcast ( ::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<Invalid_Stock_Symbol *> (_tao_excp);
}

const Quoter::Invalid_Stock_Symbol *
Quoter::Invalid_Stock_Symbol::_downcast ( ::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const Invalid_Stock_Symbol *> (_tao_excp);
}

::CORBA::Exception *Quoter::Invalid_Stock_Symbol::_alloc (void)
{
  ::CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::Quoter::Invalid_Stock_Symbol, 0);
  return retval;
}

::CORBA::Exception *
Quoter::Invalid_Stock_Symbol::_tao_duplicate (void) const
{
  ::CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::Quoter::Invalid_Stock_Symbol (*this),
      0
    );
  return result;
}

void Quoter::Invalid_Stock_Symbol::_raise (void) const
{
  throw *this;
}

void Quoter::Invalid_Stock_Symbol::_tao_encode (TAO_OutputCDR &cdr) const
{
  if (!(cdr << *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

void Quoter::Invalid_Stock_Symbol::_tao_decode (TAO_InputCDR &cdr)
{
  if (!(cdr >> *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}



// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:51

// Traits specializations for Quoter::Stock_Factory.

Quoter::Stock_Factory_ptr
TAO::Objref_Traits<Quoter::Stock_Factory>::duplicate (
    Quoter::Stock_Factory_ptr p)
{
  return Quoter::Stock_Factory::_duplicate (p);
}

void
TAO::Objref_Traits<Quoter::Stock_Factory>::release (
    Quoter::Stock_Factory_ptr p)
{
  ::CORBA::release (p);
}

Quoter::Stock_Factory_ptr
TAO::Objref_Traits<Quoter::Stock_Factory>::nil (void)
{
  return Quoter::Stock_Factory::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Quoter::Stock_Factory>::marshal (
    const Quoter::Stock_Factory_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_cs.cpp:91

::Quoter::Stock_ptr
Quoter::Stock_Factory::get_stock (
  const char * stock_symbol)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< ::Quoter::Stock>::ret_val _tao_retval;
  TAO::Arg_Traits< char *>::in_arg_val _tao_stock_symbol (stock_symbol);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_stock_symbol
    };

  static TAO::Exception_Data
  _tao_Quoter_Stock_Factory_get_stock_exceptiondata [] = 
    {
      {
        "IDL:Quoter/Invalid_Stock_Symbol:1.0",
        Quoter::Invalid_Stock_Symbol::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , 0
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "get_stock",
      9,
      TAO::TAO_CO_NONE
      
    );

  _tao_call.invoke (
      _tao_Quoter_Stock_Factory_get_stock_exceptiondata,
      1
    );

  return _tao_retval.retn ();
}

Quoter::Stock_Factory::Stock_Factory (void)
{
}

Quoter::Stock_Factory::~Stock_Factory (void)
{
}

Quoter::Stock_Factory_ptr
Quoter::Stock_Factory::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Stock_Factory>::narrow (
        _tao_objref,
        "IDL:Quoter/Stock_Factory:1.0");
}

Quoter::Stock_Factory_ptr
Quoter::Stock_Factory::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Stock_Factory>::unchecked_narrow (
        _tao_objref);
}

Quoter::Stock_Factory_ptr
Quoter::Stock_Factory::_nil (void)
{
  return 0;
}

Quoter::Stock_Factory_ptr
Quoter::Stock_Factory::_duplicate (Stock_Factory_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Quoter::Stock_Factory::_tao_release (Stock_Factory_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Quoter::Stock_Factory::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Quoter/Stock_Factory:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* Quoter::Stock_Factory::_interface_repository_id (void) const
{
  return "IDL:Quoter/Stock_Factory:1.0";
}

::CORBA::Boolean
Quoter::Stock_Factory::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:51

// Traits specializations for Quoter::Stock.

Quoter::Stock_ptr
TAO::Objref_Traits<Quoter::Stock>::duplicate (
    Quoter::Stock_ptr p)
{
  return Quoter::Stock::_duplicate (p);
}

void
TAO::Objref_Traits<Quoter::Stock>::release (
    Quoter::Stock_ptr p)
{
  ::CORBA::release (p);
}

Quoter::Stock_ptr
TAO::Objref_Traits<Quoter::Stock>::nil (void)
{
  return Quoter::Stock::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Quoter::Stock>::marshal (
    const Quoter::Stock_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_cs.cpp:91

char *
Quoter::Stock::symbol (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< char *>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "_get_symbol",
      11,
      TAO::TAO_CO_NONE,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_cs.cpp:91

char *
Quoter::Stock::full_name (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< char *>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "_get_full_name",
      14,
      TAO::TAO_CO_NONE,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_operation\operation_cs.cpp:91

::CORBA::Double
Quoter::Stock::price (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< ::CORBA::Double>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "price",
      5,
      TAO::TAO_CO_NONE,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

Quoter::Stock::Stock (void)
{
}

Quoter::Stock::~Stock (void)
{
}

Quoter::Stock_ptr
Quoter::Stock::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Stock>::narrow (
        _tao_objref,
        "IDL:Quoter/Stock:1.0");
}

Quoter::Stock_ptr
Quoter::Stock::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Stock>::unchecked_narrow (
        _tao_objref);
}

Quoter::Stock_ptr
Quoter::Stock::_nil (void)
{
  return 0;
}

Quoter::Stock_ptr
Quoter::Stock::_duplicate (Stock_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Quoter::Stock::_tao_release (Stock_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Quoter::Stock::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Quoter/Stock:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* Quoter::Stock::_interface_repository_id (void) const
{
  return "IDL:Quoter/Stock:1.0";
}

::CORBA::Boolean
Quoter::Stock::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_exception\cdr_op_cs.cpp:51
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Quoter::Invalid_Stock_Symbol &_tao_aggregate
  )
{
  // Marshal the repository ID.
  return (strm << _tao_aggregate._rep_id ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &,
    Quoter::Invalid_Stock_Symbol&
  )
{
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface\cdr_op_cs.cpp:54

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Quoter::Stock_Factory_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Quoter::Stock_Factory_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::Quoter::Stock_Factory RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface\cdr_op_cs.cpp:54

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Quoter::Stock_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Quoter::Stock_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::Quoter::Stock RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



