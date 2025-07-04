#include "framework.h"
#include "main_impact.h"
#include "application.h"
#include "document.h"
#include "acme/constant/id.h"
#include "acme/handler/topic.h"


namespace ca2_lowluds_ai_form
{


   main_impact::main_impact()
   {

      //m_ptopimpact = NULL;
      m_pimpact    = NULL;
      m_flagNonClient.add(e_non_client_background);
      m_flagNonClient.add(e_non_client_focus_rect);


   }


   main_impact::~main_impact()
   {

   }


//   void main_impact::assert_ok() const
//   {
//
//      ::user::split_impact::assert_ok();
//
//   }
//
//
//   void main_impact::dump(dump_context & dumpcontext) const
//   {
//
//      ::user::split_impact::dump(dumpcontext);
//
//   }


   void main_impact::handle(::topic * ptopic, ::handler_context * phandlercontext)
   {

      if (ptopic->id() == ::id_click)
      {

         if (ptopic->user_interaction()->id() == "simple_form_toggle")
         {

            m_pimpact->set_need_layout();

            return;

         }

      }

      ::user::split_impact::handle(ptopic, phandlercontext);



   }


   void main_impact::on_create_split_impact()
   {

      if(get_pane_count() > 0)
      {

         return;

      }


      int iPane;

      //if (papp->m_bMultiverseChat)
      //{

      //   SetPaneCount(2);

      //   SetSplitOrientation(e_orientation_horizontal);

      //   set_position(0, 31);

      //   initialize_split_layout();

      //   m_ptopimpact = host_impact < ::userex::top_impact >(0, "top_impact");

      //   if (m_ptopimpact == NULL)
      //   {

      //      output_error_message("Could not create folder edit impact");

      //   }

      //   iPane = 1;

      //}
      //else
      {

         SetPaneCount(1);

         initialize_split_layout();

         iPane = 0;

      }

      //m_pimpact = create_impact < lite_impact >();

      m_pimpact = host_impact < impact >(iPane);

      if(m_pimpact == NULL)
      {

         output_error_message("Could not create file list ::user::impact");

      }

//      ::pointer<::userex::top_edit_impact> peditview = get_child_by_id("top_edit_impact");
//
//      if(peditview.is_set())
//      {
//
//         string strText;
//
//         papp->datastream()->get("cur_text",strText);
//
//         peditview->set_text(strText, ::e_source_initialize);
//
//      }
//
////      SetPane(iPane,m_pimpact,false);

   }


   void main_impact::_001OnNcDraw(::draw2d::graphics_pointer & pgraphics)
   {

      ::user::split_impact::_001OnNcDraw(pgraphics);

   }


   void main_impact::_001OnDraw(::draw2d::graphics_pointer & pgraphics)
   {

      ::user::split_impact::_001OnDraw(pgraphics);

   }


   //bool main_impact::handle(::topic * ptopic, ::handler_context * phandlercontext)
   //{

   //   if(ptopic->id() == ::id_click)
   //   {

   //      if(ptopic->user_interaction_id() == "simple_form_toggle")
   //      {

   //         m_pimpact->set_need_layout();

   //         return true;

   //      }

   //   }

   //   return false;

   //}


} // namespace simple_form



