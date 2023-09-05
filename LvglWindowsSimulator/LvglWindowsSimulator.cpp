/*
 * PROJECT:   LVGL Windows Simulator
 * FILE:      LvglWindowsSimulator.cpp
 * PURPOSE:   Implementation for LVGL Windows Simulator
 *
 * LICENSE:   The MIT License
 *
 * DEVELOPER: Mouri_Naruto (Mouri_Naruto AT Outlook.com)
 */

#include <Windows.h>

#include <LvglWindowsIconResource.h>

#if _MSC_VER >= 1200
 // Disable compilation warnings.
#pragma warning(push)
// nonstandard extension used : bit field types other than int
#pragma warning(disable:4214)
// 'conversion' conversion from 'type1' to 'type2', possible loss of data
#pragma warning(disable:4244)
#endif

#include "lvgl/lvgl.h"
#include "lvgl/examples/lv_examples.h"
#include "lvgl/demos/lv_demos.h"

#include "win32drv.h"

#if _MSC_VER >= 1200
// Restore compilation warnings.
#pragma warning(pop)
#endif

bool single_display_mode_initialization()
{
    if (!lv_win32_init(
        GetModuleHandleW(NULL),
        SW_SHOW,
        480,
        320,
        LoadIconW(GetModuleHandleW(NULL), MAKEINTRESOURCE(IDI_LVGL_WINDOWS))))
    {
        return false;
    }

    lv_win32_add_all_input_devices_to_group(NULL);

    return true;
}

uint32_t tick_count_callback()
{
    return GetTickCount();
}

int main()
{
    lv_init();

    lv_tick_set_cb(tick_count_callback);

    if (!single_display_mode_initialization())
    {
        return -1;
    }

   // ----------------------------------
   // Demos from lv_examples
   // ----------------------------------

   // lv_demo_widgets();
   // lv_demo_benchmark(LV_DEMO_BENCHMARK_MODE_RENDER_AND_DRIVER);

   // lv_demo_keypad_encoder();    // ok
   // lv_demo_music();             // removed from repository
   // lv_demo_printer();           // removed from repository
   // lv_demo_stress();            // ok
   // lv_demo_widgets();           // ok
   // lv_demo_widgets_v7();

   // ----------------------------------
   // LVGL examples
   // ----------------------------------

   /*
    * There are many examples of individual widgets found under the
    * lvgl\examples directory. Here are a few sample test functions.
    * Look in that directory to find all the rest.
    */

   // lv_example_get_started_1();    // ok
   // lv_example_get_started_2();    // ok
   // lv_example_get_started_3();    // ok

   // lv_example_flex_1();
   // lv_example_flex_2();
   // lv_example_flex_3();
   // lv_example_flex_4();
   // lv_example_flex_5();        // ok
   // lv_example_flex_6();        // ok

   // lv_example_grid_1();        // ok
   // lv_example_grid_2();
   // lv_example_grid_3();
   // lv_example_grid_4();
   // lv_example_grid_5();
   // lv_example_grid_6();        // ok

   // lv_port_disp_template();
   // lv_port_fs_template();
   // lv_port_indev_template();

   // lv_example_scroll_1();      // ok
   // lv_example_scroll_2();
   // lv_example_scroll_3();

   // lv_example_style_1();
   // lv_example_style_2();
   // lv_example_style_3();
   // lv_example_style_4();        // ok
   // lv_example_style_6();        // file has no source code
   // lv_example_style_7();
   // lv_example_style_8();
   // lv_example_style_9();
   // lv_example_style_10();
   // lv_example_style_11();       // ok

   // ----------------------------------
   // LVGL widgets examples
   // ----------------------------------

   // lv_example_animimg_1();     // new, ok

   // lv_example_arc_1();
   // lv_example_arc_2();

   // lv_example_bar_1();          // ok
   // lv_example_bar_2();
   // lv_example_bar_3();
   // lv_example_bar_4();
   // lv_example_bar_5();
   // lv_example_bar_6();          // issues

   // lv_example_btn_1();          // ok
   // lv_example_btn_2();          // ok
   // lv_example_btn_3();          // ok

   // lv_example_btnmatrix_1();
   // lv_example_btnmatrix_2();    // ok
   // lv_example_btnmatrix_3();    // ok

   // lv_example_calendar_1();

   // lv_example_canvas_1();
   // lv_example_canvas_2();

   // lv_example_chart_1();        // ok
   // lv_example_chart_2();        // ok
   // lv_example_chart_3();        // ok
   // lv_example_chart_4();        // ok
   // lv_example_chart_5();        // ok
   // lv_example_chart_6();        // ok

   // lv_example_checkbox_1();

   // lv_example_colorwheel_1();   // ok

   // lv_example_dropdown_1();     // ok
   // lv_example_dropdown_2();     // ok
   // lv_example_dropdown_3();     // ok

   // lv_example_img_1();
   // lv_example_img_2();
   // lv_example_img_3();
   // lv_example_img_4();         // ok

   // lv_example_imgbtn_1();

   // lv_example_keyboard_1();    // ok
   // lv_example_keyboard_2();    // ok
   lv_example_keyboard_3();

   // lv_example_label_1();
   // lv_example_label_2();       // ok

   // lv_example_led_1();

   // lv_example_line_1();

   // lv_example_list_1();

   // lv_example_meter_1();
   // lv_example_meter_2();
   // lv_example_meter_3();
   // lv_example_meter_4();       // ok

   // lv_example_msgbox_1();

   // lv_example_obj_1();         // ok
   // lv_example_obj_2();         // new, ok

   // lv_example_roller_1();
   // lv_example_roller_2();      // ok
   // lv_example_roller_3();      // new, ok

   // lv_example_slider_1();      // issues, slider not shown
   // lv_example_slider_2();      // ok
   // lv_example_slider_3();      // issues, slider not shown

   // lv_example_span_1();        // new, ok

   // lv_example_spinbox_1();

   // lv_example_spinner_1();     // ok

   // lv_example_switch_1();      // ok

   // lv_example_table_1();
   // lv_example_table_2();       // ok

   // lv_example_tabview_1();

   // lv_example_textarea_1();    // ok
   // lv_example_textarea_2();
   // lv_example_textarea_3();    // ok, but not all button have functions

   // lv_example_tileview_1();    // ok

   // lv_example_win_1();         // ok

   // ----------------------------------
   // Task handler loop
   // ----------------------------------

    while (!lv_win32_quit_signal)
    {
      uint32_t time_till_next = lv_timer_handler();
      Sleep(time_till_next);
    }

    return 0;
}
