#pragma once


#include "base/user/simple/frame_window.h"


namespace app_simple_form
{


   class CLASS_DECL_APP_SIMPLE_FORM frame :
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












