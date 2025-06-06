#include "framework.h"
#include "impact.h"
#include "document.h"
#include "main_impact.h"
#include "application.h"
#include "acme/constant/message.h"
#include "aura/message/user.h"
#include "aura/graphics/draw2d/graphics.h"
#include "base/user/user/impact_system.h"


namespace ca2_lowluds_ai_form
{


   impact::impact()
   {

      payload(FONTSEL_IMPACT) = true;

      m_flagNonClient.erase(e_non_client_background);
      m_flagNonClient.erase(e_non_client_focus_rect);

   }


   impact::~impact()
   {

   }


//   void impact::assert_ok() const
//   {
//
//      user::box::assert_ok();
//
//   }
//
//
//   void impact::dump(dump_context & dumpcontext) const
//   {
//
//      user::box::dump(dumpcontext);
//
//   }


#ifdef _DEBUG


   long long impact::increment_reference_count()
   {

      return ::object::increment_reference_count();

   }


   long long impact::decrement_reference_count()
   {

      return ::object::decrement_reference_count();

   }
   

#endif

   
   void impact::install_message_routing(::channel * psender)
   {

      ::user::impact::install_message_routing(psender);

      MESSAGE_LINK(e_message_create,psender,this,&impact::on_message_create);

   }


   void impact::on_message_create(::message::message * pmessage)
   {

      ::pointer<::message::create> pcreate(pmessage);

      pcreate->previous();

      if (pcreate->m_bRet)
      {

         return;

      }

      __check_refdbg

      string strId = get_document()->m_pimpactsystem->id();

      string strText;

      __check_refdbg

      if(get_typed_parent<::user::split_impact>() != nullptr)
      {

         if(get_typed_parent<::user::split_impact>()->get_child_by_id("top_edit_impact") != nullptr)
         {

            auto pinteraction = get_typed_parent<::user::split_impact>()->get_child_by_id("top_edit_impact");

            pinteraction->set_text(strText,::e_source_initialize);

         }

      }

      __check_refdbg

   }


   void impact::handle(::topic * ptopic, ::handler_context * phandlercontext)
   {

      ::user::impact::handle(ptopic, phandlercontext);
   }


   ::user::document * impact::get_document()
   {

      return ::user::impact::get_document();

   }


   void impact::_001OnDraw(::draw2d::graphics_pointer & pgraphics)
   {

      auto rectangleX = this->rectangle();

      pgraphics->fill_rectangle(rectangleX, argb(127, 255, 255, 255));

   }


   void impact::on_layout(::draw2d::graphics_pointer & pgraphics)
   {

      auto rectangleX = this->rectangle();

      if (rectangleX.area() <= 0)
      {

         return;

      }

   }


} // namespace simple_form



