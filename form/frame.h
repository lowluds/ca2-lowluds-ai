#pragma once


#include "base/user/simple/frame_window.h"


namespace ca2_lowluds_ai_form
{


   class CLASS_DECL_CA2_LOWLUDS_AI_FORM frame :
      virtual public simple_frame_window
   {
   public:


      frame();
      ~frame() override;


	   // void assert_ok() const override;
	   // void dump(dump_context & dumpcontext) const override;


      //::user::enum_translucency get_translucency(::user::style * pstyle) override;


   };


} // namespace simple_form












