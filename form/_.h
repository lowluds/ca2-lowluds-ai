#pragma once


#include "base/_.h"


#if defined(_app_simple_form_project)
#define CLASS_DECL_APP_SIMPLE_FORM  CLASS_DECL_EXPORT
#else
#define CLASS_DECL_APP_SIMPLE_FORM  CLASS_DECL_IMPORT
#endif


namespace user
{

   typedef ::user::show < ::user::button > button_impact;

} // namespace user


namespace app_simple_form
{

   class application;
   class main_impact;
   class document;
   class impact;
   class tab_impact;

} // namespace flag



