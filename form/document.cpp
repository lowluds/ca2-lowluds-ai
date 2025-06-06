#include "framework.h"
#include "document.h"
#include "impact.h"


namespace ca2_lowluds_ai_form
{


   document::document()
   {

   }


   document::~document()
   {

   }


//   void document::assert_ok() const
//   {
//
//      ::user::document::assert_ok();
//
//   }
//
//
//   void document::dump(dump_context & dumpcontext) const
//   {
//
//      ::user::document::dump(dumpcontext);
//
//   }


#ifdef _DEBUG


   long long document::increment_reference_count()
   {

      return ::object::increment_reference_count();

   }


   long long document::decrement_reference_count()
   {

      return ::object::decrement_reference_count();

   }


#endif


   bool document::on_new_document()
   {

      return ::user::document::on_new_document();

   }


   bool document::on_open_document(const ::payload & payloadFile)
   {

      impact * pimpact = get_typed_impact < impact >();

      if(pimpact == NULL)
      {

         return true;

      }

      //string strPath = payloadFile.file_path();

      return true;

   }




} // namespace simple_form

















