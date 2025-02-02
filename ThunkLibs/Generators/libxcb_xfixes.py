#!/usr/bin/python3
from ThunkHelpers import *

lib_with_filename("libxcb_xfixes", "0", "libxcb-xfixes")

# FEX
fn("void FEX_xcb_xfixes_init_extension(xcb_connection_t *, xcb_extension_t *)"); no_unpack()
fn("size_t FEX_usable_size(void*)"); no_unpack()
fn("void FEX_free_on_host(void*)"); no_unpack()

fn("xcb_xfixes_query_version_cookie_t xcb_xfixes_query_version(xcb_connection_t *, uint32_t, uint32_t)"); no_pack()
fn("xcb_xfixes_query_version_cookie_t xcb_xfixes_query_version_unchecked(xcb_connection_t *, uint32_t, uint32_t)"); no_pack()
fn("xcb_xfixes_query_version_reply_t * xcb_xfixes_query_version_reply(xcb_connection_t *, xcb_xfixes_query_version_cookie_t, xcb_generic_error_t **)"); no_pack()
fn("xcb_void_cookie_t xcb_xfixes_change_save_set_checked(xcb_connection_t *, uint8_t, uint8_t, uint8_t, xcb_window_t)")
fn("xcb_void_cookie_t xcb_xfixes_change_save_set(xcb_connection_t *, uint8_t, uint8_t, uint8_t, xcb_window_t)")
fn("xcb_void_cookie_t xcb_xfixes_select_selection_input_checked(xcb_connection_t *, xcb_window_t, xcb_atom_t, uint32_t)")
fn("xcb_void_cookie_t xcb_xfixes_select_selection_input(xcb_connection_t *, xcb_window_t, xcb_atom_t, uint32_t)")
fn("xcb_void_cookie_t xcb_xfixes_select_cursor_input_checked(xcb_connection_t *, xcb_window_t, uint32_t)")
fn("xcb_void_cookie_t xcb_xfixes_select_cursor_input(xcb_connection_t *, xcb_window_t, uint32_t)")
fn("int xcb_xfixes_get_cursor_image_sizeof(const void *)")
fn("xcb_xfixes_get_cursor_image_cookie_t xcb_xfixes_get_cursor_image(xcb_connection_t *)")
fn("xcb_xfixes_get_cursor_image_cookie_t xcb_xfixes_get_cursor_image_unchecked(xcb_connection_t *)")
# ::Iterator::
fn("uint32_t * xcb_xfixes_get_cursor_image_cursor_image(const xcb_xfixes_get_cursor_image_reply_t *)")
fn("int xcb_xfixes_get_cursor_image_cursor_image_length(const xcb_xfixes_get_cursor_image_reply_t *)")
fn("xcb_generic_iterator_t xcb_xfixes_get_cursor_image_cursor_image_end(const xcb_xfixes_get_cursor_image_reply_t *)")

fn("xcb_xfixes_get_cursor_image_reply_t * xcb_xfixes_get_cursor_image_reply(xcb_connection_t *, xcb_xfixes_get_cursor_image_cookie_t, xcb_generic_error_t **)"); no_pack()
fn("void xcb_xfixes_region_next(xcb_xfixes_region_iterator_t *)")
fn("xcb_generic_iterator_t xcb_xfixes_region_end(xcb_xfixes_region_iterator_t)")
fn("int xcb_xfixes_create_region_sizeof(const void *, uint32_t)")
fn("xcb_void_cookie_t xcb_xfixes_create_region_checked(xcb_connection_t *, xcb_xfixes_region_t, uint32_t, const xcb_rectangle_t *)")
fn("xcb_void_cookie_t xcb_xfixes_create_region(xcb_connection_t *, xcb_xfixes_region_t, uint32_t, const xcb_rectangle_t *)")
# ::Iterator::
fn("xcb_rectangle_t * xcb_xfixes_create_region_rectangles(const xcb_xfixes_create_region_request_t *)")
fn("int xcb_xfixes_create_region_rectangles_length(const xcb_xfixes_create_region_request_t *)")
fn("xcb_rectangle_iterator_t xcb_xfixes_create_region_rectangles_iterator(const xcb_xfixes_create_region_request_t *)")

fn("xcb_void_cookie_t xcb_xfixes_create_region_from_bitmap_checked(xcb_connection_t *, xcb_xfixes_region_t, xcb_pixmap_t)")
fn("xcb_void_cookie_t xcb_xfixes_create_region_from_bitmap(xcb_connection_t *, xcb_xfixes_region_t, xcb_pixmap_t)")
fn("xcb_void_cookie_t xcb_xfixes_create_region_from_window_checked(xcb_connection_t *, xcb_xfixes_region_t, xcb_window_t, xcb_shape_kind_t)")
fn("xcb_void_cookie_t xcb_xfixes_create_region_from_window(xcb_connection_t *, xcb_xfixes_region_t, xcb_window_t, xcb_shape_kind_t)")
fn("xcb_void_cookie_t xcb_xfixes_create_region_from_gc_checked(xcb_connection_t *, xcb_xfixes_region_t, xcb_gcontext_t)")
fn("xcb_void_cookie_t xcb_xfixes_create_region_from_gc(xcb_connection_t *, xcb_xfixes_region_t, xcb_gcontext_t)")
fn("xcb_void_cookie_t xcb_xfixes_create_region_from_picture_checked(xcb_connection_t *, xcb_xfixes_region_t, xcb_render_picture_t)")
fn("xcb_void_cookie_t xcb_xfixes_create_region_from_picture(xcb_connection_t *, xcb_xfixes_region_t, xcb_render_picture_t)")
fn("xcb_void_cookie_t xcb_xfixes_destroy_region_checked(xcb_connection_t *, xcb_xfixes_region_t)")
fn("xcb_void_cookie_t xcb_xfixes_destroy_region(xcb_connection_t *, xcb_xfixes_region_t)")
fn("int xcb_xfixes_set_region_sizeof(const void *, uint32_t)")
fn("xcb_void_cookie_t xcb_xfixes_set_region_checked(xcb_connection_t *, xcb_xfixes_region_t, uint32_t, const xcb_rectangle_t *)")
fn("xcb_void_cookie_t xcb_xfixes_set_region(xcb_connection_t *, xcb_xfixes_region_t, uint32_t, const xcb_rectangle_t *)")
# ::Iterator::
fn("xcb_rectangle_t * xcb_xfixes_set_region_rectangles(const xcb_xfixes_set_region_request_t *)")
fn("int xcb_xfixes_set_region_rectangles_length(const xcb_xfixes_set_region_request_t *)")
fn("xcb_rectangle_iterator_t xcb_xfixes_set_region_rectangles_iterator(const xcb_xfixes_set_region_request_t *)")

fn("xcb_void_cookie_t xcb_xfixes_copy_region_checked(xcb_connection_t *, xcb_xfixes_region_t, xcb_xfixes_region_t)")
fn("xcb_void_cookie_t xcb_xfixes_copy_region(xcb_connection_t *, xcb_xfixes_region_t, xcb_xfixes_region_t)")
fn("xcb_void_cookie_t xcb_xfixes_union_region_checked(xcb_connection_t *, xcb_xfixes_region_t, xcb_xfixes_region_t, xcb_xfixes_region_t)")
fn("xcb_void_cookie_t xcb_xfixes_union_region(xcb_connection_t *, xcb_xfixes_region_t, xcb_xfixes_region_t, xcb_xfixes_region_t)")
fn("xcb_void_cookie_t xcb_xfixes_intersect_region_checked(xcb_connection_t *, xcb_xfixes_region_t, xcb_xfixes_region_t, xcb_xfixes_region_t)")
fn("xcb_void_cookie_t xcb_xfixes_intersect_region(xcb_connection_t *, xcb_xfixes_region_t, xcb_xfixes_region_t, xcb_xfixes_region_t)")
fn("xcb_void_cookie_t xcb_xfixes_subtract_region_checked(xcb_connection_t *, xcb_xfixes_region_t, xcb_xfixes_region_t, xcb_xfixes_region_t)")
fn("xcb_void_cookie_t xcb_xfixes_subtract_region(xcb_connection_t *, xcb_xfixes_region_t, xcb_xfixes_region_t, xcb_xfixes_region_t)")
fn("xcb_void_cookie_t xcb_xfixes_invert_region_checked(xcb_connection_t *, xcb_xfixes_region_t, xcb_rectangle_t, xcb_xfixes_region_t)")
fn("xcb_void_cookie_t xcb_xfixes_invert_region(xcb_connection_t *, xcb_xfixes_region_t, xcb_rectangle_t, xcb_xfixes_region_t)")
fn("xcb_void_cookie_t xcb_xfixes_translate_region_checked(xcb_connection_t *, xcb_xfixes_region_t, int16_t, int16_t)")
fn("xcb_void_cookie_t xcb_xfixes_translate_region(xcb_connection_t *, xcb_xfixes_region_t, int16_t, int16_t)")
fn("xcb_void_cookie_t xcb_xfixes_region_extents_checked(xcb_connection_t *, xcb_xfixes_region_t, xcb_xfixes_region_t)")
fn("xcb_void_cookie_t xcb_xfixes_region_extents(xcb_connection_t *, xcb_xfixes_region_t, xcb_xfixes_region_t)")
fn("int xcb_xfixes_fetch_region_sizeof(const void *)")
fn("xcb_xfixes_fetch_region_cookie_t xcb_xfixes_fetch_region(xcb_connection_t *, xcb_xfixes_region_t)")
fn("xcb_xfixes_fetch_region_cookie_t xcb_xfixes_fetch_region_unchecked(xcb_connection_t *, xcb_xfixes_region_t)")
# ::Iterator::
fn("xcb_rectangle_t * xcb_xfixes_fetch_region_rectangles(const xcb_xfixes_fetch_region_reply_t *)")
fn("int xcb_xfixes_fetch_region_rectangles_length(const xcb_xfixes_fetch_region_reply_t *)")
fn("xcb_rectangle_iterator_t xcb_xfixes_fetch_region_rectangles_iterator(const xcb_xfixes_fetch_region_reply_t *)")

fn("xcb_xfixes_fetch_region_reply_t * xcb_xfixes_fetch_region_reply(xcb_connection_t *, xcb_xfixes_fetch_region_cookie_t, xcb_generic_error_t **)"); no_pack()
fn("xcb_void_cookie_t xcb_xfixes_set_gc_clip_region_checked(xcb_connection_t *, xcb_gcontext_t, xcb_xfixes_region_t, int16_t, int16_t)")
fn("xcb_void_cookie_t xcb_xfixes_set_gc_clip_region(xcb_connection_t *, xcb_gcontext_t, xcb_xfixes_region_t, int16_t, int16_t)")
fn("xcb_void_cookie_t xcb_xfixes_set_window_shape_region_checked(xcb_connection_t *, xcb_window_t, xcb_shape_kind_t, int16_t, int16_t, xcb_xfixes_region_t)")
fn("xcb_void_cookie_t xcb_xfixes_set_window_shape_region(xcb_connection_t *, xcb_window_t, xcb_shape_kind_t, int16_t, int16_t, xcb_xfixes_region_t)")
fn("xcb_void_cookie_t xcb_xfixes_set_picture_clip_region_checked(xcb_connection_t *, xcb_render_picture_t, xcb_xfixes_region_t, int16_t, int16_t)")
fn("xcb_void_cookie_t xcb_xfixes_set_picture_clip_region(xcb_connection_t *, xcb_render_picture_t, xcb_xfixes_region_t, int16_t, int16_t)")
fn("int xcb_xfixes_set_cursor_name_sizeof(const void *)")
fn("xcb_void_cookie_t xcb_xfixes_set_cursor_name_checked(xcb_connection_t *, xcb_cursor_t, uint16_t, const char *)")
fn("xcb_void_cookie_t xcb_xfixes_set_cursor_name(xcb_connection_t *, xcb_cursor_t, uint16_t, const char *)")
# ::Iterator::
fn("char * xcb_xfixes_set_cursor_name_name(const xcb_xfixes_set_cursor_name_request_t *)")
fn("int xcb_xfixes_set_cursor_name_name_length(const xcb_xfixes_set_cursor_name_request_t *)")
fn("xcb_generic_iterator_t xcb_xfixes_set_cursor_name_name_end(const xcb_xfixes_set_cursor_name_request_t *)")

fn("int xcb_xfixes_get_cursor_name_sizeof(const void *)")
fn("xcb_xfixes_get_cursor_name_cookie_t xcb_xfixes_get_cursor_name(xcb_connection_t *, xcb_cursor_t)")
fn("xcb_xfixes_get_cursor_name_cookie_t xcb_xfixes_get_cursor_name_unchecked(xcb_connection_t *, xcb_cursor_t)")
# ::Iterator::
fn("char * xcb_xfixes_get_cursor_name_name(const xcb_xfixes_get_cursor_name_reply_t *)")
fn("int xcb_xfixes_get_cursor_name_name_length(const xcb_xfixes_get_cursor_name_reply_t *)")
fn("xcb_generic_iterator_t xcb_xfixes_get_cursor_name_name_end(const xcb_xfixes_get_cursor_name_reply_t *)")

fn("xcb_xfixes_get_cursor_name_reply_t * xcb_xfixes_get_cursor_name_reply(xcb_connection_t *, xcb_xfixes_get_cursor_name_cookie_t, xcb_generic_error_t **)"); no_pack()
fn("int xcb_xfixes_get_cursor_image_and_name_sizeof(const void *)")
fn("xcb_xfixes_get_cursor_image_and_name_cookie_t xcb_xfixes_get_cursor_image_and_name(xcb_connection_t *)")
fn("xcb_xfixes_get_cursor_image_and_name_cookie_t xcb_xfixes_get_cursor_image_and_name_unchecked(xcb_connection_t *)")
# ::Iterator::
fn("uint32_t * xcb_xfixes_get_cursor_image_and_name_cursor_image(const xcb_xfixes_get_cursor_image_and_name_reply_t *)")
fn("int xcb_xfixes_get_cursor_image_and_name_cursor_image_length(const xcb_xfixes_get_cursor_image_and_name_reply_t *)")
fn("xcb_generic_iterator_t xcb_xfixes_get_cursor_image_and_name_cursor_image_end(const xcb_xfixes_get_cursor_image_and_name_reply_t *)")

# ::Iterator::
fn("char * xcb_xfixes_get_cursor_image_and_name_name(const xcb_xfixes_get_cursor_image_and_name_reply_t *)")
fn("int xcb_xfixes_get_cursor_image_and_name_name_length(const xcb_xfixes_get_cursor_image_and_name_reply_t *)")
fn("xcb_generic_iterator_t xcb_xfixes_get_cursor_image_and_name_name_end(const xcb_xfixes_get_cursor_image_and_name_reply_t *)")

fn("xcb_xfixes_get_cursor_image_and_name_reply_t * xcb_xfixes_get_cursor_image_and_name_reply(xcb_connection_t *, xcb_xfixes_get_cursor_image_and_name_cookie_t, xcb_generic_error_t **)") ; no_pack()
fn("xcb_void_cookie_t xcb_xfixes_change_cursor_checked(xcb_connection_t *, xcb_cursor_t, xcb_cursor_t)")
fn("xcb_void_cookie_t xcb_xfixes_change_cursor(xcb_connection_t *, xcb_cursor_t, xcb_cursor_t)")
fn("int xcb_xfixes_change_cursor_by_name_sizeof(const void *)")
fn("xcb_void_cookie_t xcb_xfixes_change_cursor_by_name_checked(xcb_connection_t *, xcb_cursor_t, uint16_t, const char *)")
fn("xcb_void_cookie_t xcb_xfixes_change_cursor_by_name(xcb_connection_t *, xcb_cursor_t, uint16_t, const char *)")
# ::Iterator::
fn("char * xcb_xfixes_change_cursor_by_name_name(const xcb_xfixes_change_cursor_by_name_request_t *)")
fn("int xcb_xfixes_change_cursor_by_name_name_length(const xcb_xfixes_change_cursor_by_name_request_t *)")
fn("xcb_generic_iterator_t xcb_xfixes_change_cursor_by_name_name_end(const xcb_xfixes_change_cursor_by_name_request_t *)")

fn("xcb_void_cookie_t xcb_xfixes_expand_region_checked(xcb_connection_t *, xcb_xfixes_region_t, xcb_xfixes_region_t, uint16_t, uint16_t, uint16_t, uint16_t)")
fn("xcb_void_cookie_t xcb_xfixes_expand_region(xcb_connection_t *, xcb_xfixes_region_t, xcb_xfixes_region_t, uint16_t, uint16_t, uint16_t, uint16_t)")
fn("xcb_void_cookie_t xcb_xfixes_hide_cursor_checked(xcb_connection_t *, xcb_window_t)")
fn("xcb_void_cookie_t xcb_xfixes_hide_cursor(xcb_connection_t *, xcb_window_t)")
fn("xcb_void_cookie_t xcb_xfixes_show_cursor_checked(xcb_connection_t *, xcb_window_t)")
fn("xcb_void_cookie_t xcb_xfixes_show_cursor(xcb_connection_t *, xcb_window_t)")
fn("void xcb_xfixes_barrier_next(xcb_xfixes_barrier_iterator_t *)")
fn("xcb_generic_iterator_t xcb_xfixes_barrier_end(xcb_xfixes_barrier_iterator_t)")
fn("int xcb_xfixes_create_pointer_barrier_sizeof(const void *)")
fn("xcb_void_cookie_t xcb_xfixes_create_pointer_barrier_checked(xcb_connection_t *, xcb_xfixes_barrier_t, xcb_window_t, uint16_t, uint16_t, uint16_t, uint16_t, uint32_t, uint16_t, const uint16_t *)")
fn("xcb_void_cookie_t xcb_xfixes_create_pointer_barrier(xcb_connection_t *, xcb_xfixes_barrier_t, xcb_window_t, uint16_t, uint16_t, uint16_t, uint16_t, uint32_t, uint16_t, const uint16_t *)")
# ::Iterator::
fn("uint16_t * xcb_xfixes_create_pointer_barrier_devices(const xcb_xfixes_create_pointer_barrier_request_t *)")
fn("int xcb_xfixes_create_pointer_barrier_devices_length(const xcb_xfixes_create_pointer_barrier_request_t *)")
fn("xcb_generic_iterator_t xcb_xfixes_create_pointer_barrier_devices_end(const xcb_xfixes_create_pointer_barrier_request_t *)")

fn("xcb_void_cookie_t xcb_xfixes_delete_pointer_barrier_checked(xcb_connection_t *, xcb_xfixes_barrier_t)")
fn("xcb_void_cookie_t xcb_xfixes_delete_pointer_barrier(xcb_connection_t *, xcb_xfixes_barrier_t)")

Generate()
