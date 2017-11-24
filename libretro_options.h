#define MEDNAFEN_CORE_NAME_MODULE "psx"
#ifdef HAVE_HW
#define MEDNAFEN_CORE_NAME "Beetle PSX HW"
#else
#define MEDNAFEN_CORE_NAME "Beetle PSX"
#endif
#define MEDNAFEN_CORE_VERSION "0.9.44.1"
#define MEDNAFEN_CORE_EXTENSIONS "exe|cue|toc|ccd|m3u|pbp|chd"
#define MEDNAFEN_CORE_GEOMETRY_BASE_W 320
#define MEDNAFEN_CORE_GEOMETRY_BASE_H 240
#define MEDNAFEN_CORE_GEOMETRY_MAX_W 700
#define MEDNAFEN_CORE_GEOMETRY_MAX_H 576
#define MEDNAFEN_CORE_GEOMETRY_ASPECT_RATIO (4.0 / 3.0)

#ifdef HAVE_HW
#define option_renderer              "beetle_psx_hw_renderer"
#define option_renderer_software_fb  "beetle_psx_hw_renderer_software_fb"
#define option_adaptive_smoothing    "beetle_psx_hw_adaptive_smoothing"
#define option_widescreen_hack       "beetle_psx_hw_widescreen_hack"
#define option_internal_resolution   "beetle_psx_hw_internal_resolution"
#define option_filter                "beetle_psx_hw_filter"
#define option_depth                 "beetle_psx_hw_internal_color_depth"
#define option_dither_mode           "beetle_psx_hw_dither_mode"
#define option_scale_dither          "beetle_psx_hw_scale_dither"
#define option_wireframe             "beetle_psx_hw_wireframe"
#define option_display_vram          "beetle_psx_hw_display_vram"
#define option_pgxp_mode             "beetle_psx_hw_pgxp_mode"
#define option_pgxp_vertex           "beetle_psx_hw_pgxp_caching"
#define option_pgxp_texture          "beetle_psx_hw_pgxp_texture"
#define option_initial_scanline      "beetle_psx_hw_initial_scanline"
#define option_last_scanline         "beetle_psx_hw_last_scanline"
#define option_initial_scanline_pal  "beetle_psx_hw_initial_scanline_pal"
#define option_last_scanline_pal     "beetle_psx_hw_last_scanline_pal"
#define option_frame_duping          "beetle_psx_hw_frame_duping_enable"
#define option_crop_overscan         "beetle_psx_hw_crop_overscan"
#define option_image_crop            "beetle_psx_hw_image_crop"
#define option_image_offset          "beetle_psx_hw_image_offset"
#define option_display_internal_fps  "beetle_psx_hw_display_internal_framerate"
#define option_analog_calibration    "beetle_psx_hw_analog_calibration"
#define option_analog_toggle         "beetle_psx_hw_analog_toggle"
#define option_multitap1             "beetle_psx_hw_enable_multitap_port1"
#define option_multitap2             "beetle_psx_hw_enable_multitap_port2"
#define option_mouse_sensitivity     "beetle_psx_hw_mouse_sensitivity"
#define option_gun_cursor            "beetle_psx_hw_gun_cursor"
#define option_cpu_overclock         "beetle_psx_hw_cpu_overclock"
#define option_cd_access_method      "beetle_psx_hw_cd_access_method"
#define option_skip_bios             "beetle_psx_hw_skipbios"
#define option_memcard0_method       "beetle_psx_hw_use_mednafen_memcard0_method"
#define option_memcard1_enable       "beetle_psx_hw_enable_memcard1"
#define option_memcard_shared        "beetle_psx_hw_shared_memory_cards"
#define option_cd_fastload           "beetle_psx_hw_cd_fastload"
#else
#define option_renderer              "beetle_psx_renderer"
#define option_renderer_software_fb  "beetle_psx_renderer_software_fb"
#define option_adaptive_smoothing    "beetle_psx_adaptive_smoothing"
#define option_widescreen_hack       "beetle_psx_widescreen_hack"
#define option_internal_resolution   "beetle_psx_internal_resolution"
#define option_filter                "beetle_psx_filter"
#define option_depth                 "beetle_psx_internal_color_depth"
#define option_dither_mode           "beetle_psx_dither_mode"
#define option_scale_dither          "beetle_psx_scale_dither"
#define option_wireframe             "beetle_psx_wireframe"
#define option_display_vram          "beetle_psx_display_vram"
#define option_pgxp_mode             "beetle_psx_pgxp_mode"
#define option_pgxp_vertex           "beetle_psx_pgxp_caching"
#define option_pgxp_texture          "beetle_psx_pgxp_texture"
#define option_initial_scanline      "beetle_psx_initial_scanline"
#define option_last_scanline         "beetle_psx_last_scanline"
#define option_initial_scanline_pal  "beetle_psx_initial_scanline_pal"
#define option_last_scanline_pal     "beetle_psx_last_scanline_pal"
#define option_frame_duping          "beetle_psx_frame_duping_enable"
#define option_crop_overscan         "beetle_psx_crop_overscan"
#define option_image_crop            "beetle_psx_image_crop"
#define option_image_offset          "beetle_psx_image_offset"
#define option_display_internal_fps  "beetle_psx_display_internal_framerate"
#define option_analog_calibration    "beetle_psx_analog_calibration"
#define option_analog_toggle         "beetle_psx_analog_toggle"
#define option_multitap1             "beetle_psx_enable_multitap_port1"
#define option_multitap2             "beetle_psx_enable_multitap_port2"
#define option_mouse_sensitivity     "beetle_psx_mouse_sensitivity"
#define option_gun_cursor            "beetle_psx_gun_cursor"
#define option_cpu_overclock         "beetle_psx_cpu_overclock"
#define option_cd_access_method      "beetle_psx_cd_access_method"
#define option_skip_bios             "beetle_psx_skipbios"
#define option_memcard0_method       "beetle_psx_use_mednafen_memcard0_method"
#define option_memcard1_enable       "beetle_psx_enable_memcard1"
#define option_memcard_shared        "beetle_psx_shared_memory_cards"
#define option_cd_fastload           "beetle_psx_cd_fastload"
#endif
