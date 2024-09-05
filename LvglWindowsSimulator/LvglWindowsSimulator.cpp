#include <Windows.h>

#include <LvglWindowsIconResource.h>

#include "lvgl/lvgl.h"
#include "lvgl/examples/lv_examples.h"
#include "lvgl/demos/lv_demos.h"

int main()
{
    lv_init();

    /*
     * Optional workaround for users who wants UTF-8 console output.
     * If you don't want that behavior can comment them out.
     *
     * Suggested by jinsc123654.
     */
#if LV_TXT_ENC == LV_TXT_ENC_UTF8
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
#endif

    int32_t zoom_level = 100;
    bool allow_dpi_override = false;
    bool simulator_mode = true;
    lv_display_t* display = lv_windows_create_display(
        L"LVGL Windows Simulator Display 1",
        800,
        480,
        zoom_level,
        allow_dpi_override,
        simulator_mode);
    if (!display)
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

   // ----------------------------------
   // LVGL anim examples
   // ----------------------------------

   // lv_example_anim_1();
   // lv_example_anim_2();
   // lv_example_anim_3();

   // lv_example_anim_timeline_1();

   // ----------------------------------
   // LVGL event examples
   // ----------------------------------

   // lv_example_event_1();
   // lv_example_event_2();
   // lv_example_event_3();
   // lv_example_event_4();

   // ----------------------------------
   // LVGL get_started examples
   // ----------------------------------

   // lv_example_get_started_1();    // ok
   // lv_example_get_started_2();    // ok
   // lv_example_get_started_3();    // ok
   // lv_example_get_started_4();

   // ----------------------------------
   // LVGL flex examples
   // ----------------------------------

   // lv_example_flex_1();
   // lv_example_flex_2();
   // lv_example_flex_3();
   // lv_example_flex_4();
   // lv_example_flex_5();        // ok
   // lv_example_flex_6();        // ok

   // ----------------------------------
   // LVGL grid examples
   // ----------------------------------

   // lv_example_grid_1();        // ok
   // lv_example_grid_2();
   // lv_example_grid_3();
   // lv_example_grid_4();
   // lv_example_grid_5();
   // lv_example_grid_6();        // ok

   // ----------------------------------
   // LVGL libs examples
   // ----------------------------------

   // lv_example_barcode_1();

   // lv_example_bmp_1();

   // lv_example_ffmpeg_1();
   // lv_example_ffmpeg_2();

   // lv_example_freetype_1();
   // lv_example_freetype_2();

   // lv_example_gif_1();

   // lv_example_libjpeg_turbo_1();

   // lv_example_libpng_1();

   // lv_example_lodepng_1();

   // lv_example_qrcode_1();

   // lv_example_rlottie_1();
   // lv_example_rlottie_2();

   // lv_example_tiny_ttf_1();
   // lv_example_tiny_ttf_2();
   // lv_example_tiny_ttf_3();

   // lv_example_tjpgd_1();

   // ----------------------------------
   // LVGL others examples
   // ----------------------------------

   // lv_example_file_explorer_1();
   // lv_example_file_explorer_2();
   // lv_example_file_explorer_3();

   // lv_example_fragment_1();
   // lv_example_fragment_2();

   // lv_example_gridnav_1();
   // lv_example_gridnav_2();
   // lv_example_gridnav_3();
   // lv_example_gridnav_4();
   // lv_example_gridnav_5();

   // lv_example_ime_pinyin_1();
   // lv_example_ime_pinyin_2();

   // lv_example_imgfont_1();

   // lv_example_monkey_1();
   // lv_example_monkey_2();
   // lv_example_monkey_3();

   // lv_example_observer_1();
   // lv_example_observer_2();
   // lv_example_observer_3();
   // lv_example_observer_4();
   // lv_example_observer_5();
   // lv_example_observer_6();
   // lv_example_snapshot_1();

   // lv_example_osal();

   // ----------------------------------
   // LVGL scroll examples
   // ----------------------------------

   // lv_example_scroll_1();      // ok
   // lv_example_scroll_2();
   // lv_example_scroll_3();
   // lv_example_scroll_4();
   // lv_example_scroll_5();
   // lv_example_scroll_6();

   // ----------------------------------
   // LVGL styles examples
   // ----------------------------------

   // lv_example_style_1();
   // lv_example_style_2();
   // lv_example_style_3();
   // lv_example_style_4();        // ok
   // lv_example_style_5();
   // lv_example_style_6();        // file has no source code
   // lv_example_style_7();
   // lv_example_style_8();
   // lv_example_style_9();
   // lv_example_style_10();
   // lv_example_style_11();       // ok
   // lv_example_style_12();
   // lv_example_style_13();
   // lv_example_style_14();
   // lv_example_style_15();
   // lv_example_style_16();
   // lv_example_style_17();
   // lv_example_style_18();

   // ----------------------------------
   // LVGL widgets examples
   // ----------------------------------

   // lv_example_animimg_1();     // ok

   // lv_example_arc_1();
   // lv_example_arc_2();

   // lv_example_bar_1();          // ok
   // lv_example_bar_2();
   // lv_example_bar_3();
   // lv_example_bar_4();
   // lv_example_bar_5();
   // lv_example_bar_6();          // issues
   // lv_example_bar_7();

   // lv_example_button_1();          // ok
   // lv_example_button_2();          // ok
   // lv_example_button_3();          // ok

   // lv_example_buttonmatrix_1();
   // lv_example_buttonmatrix_2();    // ok
   // lv_example_buttonmatrix_3();    // ok

   // lv_example_calendar_1();
   // lv_example_calendar_2();

   // lv_example_canvas_1();
   // lv_example_canvas_2();
   // lv_example_canvas_3();
   // lv_example_canvas_4();
   // lv_example_canvas_5();
   // lv_example_canvas_6();
   // lv_example_canvas_7();
   // lv_example_canvas_8();

   // lv_example_chart_1();        // ok
   // lv_example_chart_2();        // ok
   // lv_example_chart_3();        // ok
   // lv_example_chart_4();        // ok
   // lv_example_chart_5();        // ok
   // lv_example_chart_6();        // ok
   // lv_example_chart_7();
   // lv_example_chart_8();        // ok, but crash on exit

   // lv_example_checkbox_1();
   // lv_example_checkbox_2();

   // lv_example_dropdown_1();     // ok
   // lv_example_dropdown_2();     // ok
   // lv_example_dropdown_3();     // ok

   // lv_example_image_1();
   // lv_example_image_2();
   // lv_example_image_3();
   // lv_example_image_4();      // ok

   // lv_example_imagebutton_1();

   // lv_example_keyboard_1();    // ok
   // lv_example_keyboard_2();    // ok
      lv_example_keyboard_3();    // ok

   // lv_example_label_1();
   // lv_example_label_2();       // ok
   // lv_example_label_3();
   // lv_example_label_4();
   // lv_example_label_5();

   // lv_example_led_1();

   // lv_example_line_1();

   // lv_example_list_1();
   // lv_example_list_2();

   // lv_example_lottie_1();
   // lv_example_lottie_2();

   // lv_example_menu_1();
   // lv_example_menu_2();
   // lv_example_menu_3();
   // lv_example_menu_4();
   // lv_example_menu_5();

   // lv_example_msgbox_1();
   // lv_example_msgbox_2();

   // lv_example_obj_1();         // ok
   // lv_example_obj_2();         // ok

   // lv_example_roller_1();
   // lv_example_roller_2();      // ok
   // lv_example_roller_3();

   // lv_example_scale_1();     // new, ok
   // lv_example_scale_2();     // new, ok
   // lv_example_scale_3();     // new, ok
   // lv_example_scale_4();     // new, ok
   // lv_example_scale_5();     // new, ok
   // lv_example_scale_6();
   // lv_example_scale_7();

   // lv_example_slider_1();      // issues, slider not shown
   // lv_example_slider_2();      // ok
   // lv_example_slider_3();      // issues, slider not shown
   // lv_example_slider_4();

   // lv_example_span_1();        // ok

   // lv_example_spinbox_1();

   // lv_example_spinner_1();     // ok

   // lv_example_switch_1();      // ok

   // lv_example_table_1();
   // lv_example_table_2();       // ok

   // lv_example_tabview_1();
   // lv_example_tabview_2();

   // lv_example_textarea_1();    // ok
   // lv_example_textarea_2();
   // lv_example_textarea_3();    // ok, but not all button have functions

   // lv_example_tileview_1();    // ok

   // lv_example_win_1();         // ok

   // ----------------------------------
   // Task handler loop
   // ----------------------------------

    HWND window_handle = lv_windows_get_display_window_handle(display);
    if (!window_handle)
    {
        return -1;
    }

    HICON icon_handle = LoadIconW(
        GetModuleHandleW(NULL),
        MAKEINTRESOURCE(IDI_LVGL_WINDOWS));
    if (icon_handle)
    {
        SendMessageW(
            window_handle,
            WM_SETICON,
            TRUE,
            (LPARAM)icon_handle);
        SendMessageW(
            window_handle,
            WM_SETICON,
            FALSE,
            (LPARAM)icon_handle);
    }

    lv_indev_t* pointer_indev = lv_windows_acquire_pointer_indev(display);
    if (!pointer_indev)
    {
        return -1;
    }

    lv_indev_t* keypad_indev = lv_windows_acquire_keypad_indev(display);
    if (!keypad_indev)
    {
        return -1;
    }

    lv_indev_t* encoder_indev = lv_windows_acquire_encoder_indev(display);
    if (!encoder_indev)
    {
        return -1;
    }

    // lv_demo_widgets();
    //lv_demo_benchmark();

    while (1)
    {
        uint32_t time_till_next = lv_timer_handler();
        Sleep(time_till_next);
    }

    return 0;
}
