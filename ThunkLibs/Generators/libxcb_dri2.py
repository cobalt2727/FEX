#!/usr/bin/python3
from ThunkHelpers import *

lib_with_filename("libxcb_dri2", "0", "libxcb-dri2")

# FEX
fn("void FEX_xcb_dri2_init_extension(xcb_connection_t *, xcb_extension_t *)"); no_unpack()
fn("size_t FEX_usable_size(void*)"); no_unpack()
fn("void FEX_free_on_host(void*)"); no_unpack()

fn("void xcb_dri2_dri2_buffer_next(xcb_dri2_dri2_buffer_iterator_t *)")
fn("xcb_generic_iterator_t xcb_dri2_dri2_buffer_end(xcb_dri2_dri2_buffer_iterator_t)")
fn("void xcb_dri2_attach_format_next(xcb_dri2_attach_format_iterator_t *)")
fn("xcb_generic_iterator_t xcb_dri2_attach_format_end(xcb_dri2_attach_format_iterator_t)")
fn("xcb_dri2_query_version_cookie_t xcb_dri2_query_version(xcb_connection_t *, uint32_t, uint32_t)")
fn("xcb_dri2_query_version_cookie_t xcb_dri2_query_version_unchecked(xcb_connection_t *, uint32_t, uint32_t)")
fn("xcb_dri2_query_version_reply_t * xcb_dri2_query_version_reply(xcb_connection_t *, xcb_dri2_query_version_cookie_t, xcb_generic_error_t **)"); no_pack()
fn("int xcb_dri2_connect_sizeof(const void *)")
fn("xcb_dri2_connect_cookie_t xcb_dri2_connect(xcb_connection_t *, xcb_window_t, uint32_t)"); no_pack()
fn("xcb_dri2_connect_cookie_t xcb_dri2_connect_unchecked(xcb_connection_t *, xcb_window_t, uint32_t)"); no_pack()
# ::Iterator::
fn("char * xcb_dri2_connect_driver_name(const xcb_dri2_connect_reply_t *)")
fn("int xcb_dri2_connect_driver_name_length(const xcb_dri2_connect_reply_t *)")
fn("xcb_generic_iterator_t xcb_dri2_connect_driver_name_end(const xcb_dri2_connect_reply_t *)")
# ::Iterator::
fn("void * xcb_dri2_connect_alignment_pad(const xcb_dri2_connect_reply_t *)")
fn("int xcb_dri2_connect_alignment_pad_length(const xcb_dri2_connect_reply_t *)")
fn("xcb_generic_iterator_t xcb_dri2_connect_alignment_pad_end(const xcb_dri2_connect_reply_t *)")
# ::Iterator::
fn("char * xcb_dri2_connect_device_name(const xcb_dri2_connect_reply_t *)")
fn("int xcb_dri2_connect_device_name_length(const xcb_dri2_connect_reply_t *)")
fn("xcb_generic_iterator_t xcb_dri2_connect_device_name_end(const xcb_dri2_connect_reply_t *)")
fn("xcb_dri2_connect_reply_t * xcb_dri2_connect_reply(xcb_connection_t *, xcb_dri2_connect_cookie_t, xcb_generic_error_t **)"); no_pack()
fn("xcb_dri2_authenticate_cookie_t xcb_dri2_authenticate(xcb_connection_t *, xcb_window_t, uint32_t)")
fn("xcb_dri2_authenticate_cookie_t xcb_dri2_authenticate_unchecked(xcb_connection_t *, xcb_window_t, uint32_t)")
fn("xcb_dri2_authenticate_reply_t * xcb_dri2_authenticate_reply(xcb_connection_t *, xcb_dri2_authenticate_cookie_t, xcb_generic_error_t **)"); no_pack()
fn("xcb_void_cookie_t xcb_dri2_create_drawable_checked(xcb_connection_t *, xcb_drawable_t)")
fn("xcb_void_cookie_t xcb_dri2_create_drawable(xcb_connection_t *, xcb_drawable_t)")
fn("xcb_void_cookie_t xcb_dri2_destroy_drawable_checked(xcb_connection_t *, xcb_drawable_t)")
fn("xcb_void_cookie_t xcb_dri2_destroy_drawable(xcb_connection_t *, xcb_drawable_t)")
fn("int xcb_dri2_get_buffers_sizeof(const void *, uint32_t)")
fn("xcb_dri2_get_buffers_cookie_t xcb_dri2_get_buffers(xcb_connection_t *, xcb_drawable_t, uint32_t, uint32_t, const uint32_t *)")
fn("xcb_dri2_get_buffers_cookie_t xcb_dri2_get_buffers_unchecked(xcb_connection_t *, xcb_drawable_t, uint32_t, uint32_t, const uint32_t *)")
# ::Iterator::
fn("xcb_dri2_dri2_buffer_t * xcb_dri2_get_buffers_buffers(const xcb_dri2_get_buffers_reply_t *)")
fn("int xcb_dri2_get_buffers_buffers_length(const xcb_dri2_get_buffers_reply_t *)")
fn("xcb_dri2_dri2_buffer_iterator_t xcb_dri2_get_buffers_buffers_iterator(const xcb_dri2_get_buffers_reply_t *)")

fn("xcb_dri2_get_buffers_reply_t * xcb_dri2_get_buffers_reply(xcb_connection_t *, xcb_dri2_get_buffers_cookie_t, xcb_generic_error_t **)"); no_pack()
fn("xcb_dri2_copy_region_cookie_t xcb_dri2_copy_region(xcb_connection_t *, xcb_drawable_t, uint32_t, uint32_t, uint32_t)")
fn("xcb_dri2_copy_region_cookie_t xcb_dri2_copy_region_unchecked(xcb_connection_t *, xcb_drawable_t, uint32_t, uint32_t, uint32_t)")
fn("xcb_dri2_copy_region_reply_t * xcb_dri2_copy_region_reply(xcb_connection_t *, xcb_dri2_copy_region_cookie_t, xcb_generic_error_t **)"); no_pack()
fn("int xcb_dri2_get_buffers_with_format_sizeof(const void *, uint32_t)")
fn("xcb_dri2_get_buffers_with_format_cookie_t xcb_dri2_get_buffers_with_format(xcb_connection_t *, xcb_drawable_t, uint32_t, uint32_t, const xcb_dri2_attach_format_t *)")
fn("xcb_dri2_get_buffers_with_format_cookie_t xcb_dri2_get_buffers_with_format_unchecked(xcb_connection_t *, xcb_drawable_t, uint32_t, uint32_t, const xcb_dri2_attach_format_t *)")
# ::Iterator::
fn("xcb_dri2_dri2_buffer_t * xcb_dri2_get_buffers_with_format_buffers(const xcb_dri2_get_buffers_with_format_reply_t *)")
fn("int xcb_dri2_get_buffers_with_format_buffers_length(const xcb_dri2_get_buffers_with_format_reply_t *)")
fn("xcb_dri2_dri2_buffer_iterator_t xcb_dri2_get_buffers_with_format_buffers_iterator(const xcb_dri2_get_buffers_with_format_reply_t *)")

fn("xcb_dri2_get_buffers_with_format_reply_t * xcb_dri2_get_buffers_with_format_reply(xcb_connection_t *, xcb_dri2_get_buffers_with_format_cookie_t, xcb_generic_error_t **)"); no_pack()
fn("xcb_dri2_swap_buffers_cookie_t xcb_dri2_swap_buffers(xcb_connection_t *, xcb_drawable_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)")
fn("xcb_dri2_swap_buffers_cookie_t xcb_dri2_swap_buffers_unchecked(xcb_connection_t *, xcb_drawable_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)")
fn("xcb_dri2_swap_buffers_reply_t * xcb_dri2_swap_buffers_reply(xcb_connection_t *, xcb_dri2_swap_buffers_cookie_t, xcb_generic_error_t **)"); no_pack()
fn("xcb_dri2_get_msc_cookie_t xcb_dri2_get_msc(xcb_connection_t *, xcb_drawable_t)")
fn("xcb_dri2_get_msc_cookie_t xcb_dri2_get_msc_unchecked(xcb_connection_t *, xcb_drawable_t)")
fn("xcb_dri2_get_msc_reply_t * xcb_dri2_get_msc_reply(xcb_connection_t *, xcb_dri2_get_msc_cookie_t, xcb_generic_error_t **)"); no_pack()
fn("xcb_dri2_wait_msc_cookie_t xcb_dri2_wait_msc(xcb_connection_t *, xcb_drawable_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)")
fn("xcb_dri2_wait_msc_cookie_t xcb_dri2_wait_msc_unchecked(xcb_connection_t *, xcb_drawable_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)")
fn("xcb_dri2_wait_msc_reply_t * xcb_dri2_wait_msc_reply(xcb_connection_t *, xcb_dri2_wait_msc_cookie_t, xcb_generic_error_t **)"); no_pack()
fn("xcb_dri2_wait_sbc_cookie_t xcb_dri2_wait_sbc(xcb_connection_t *, xcb_drawable_t, uint32_t, uint32_t)")
fn("xcb_dri2_wait_sbc_cookie_t xcb_dri2_wait_sbc_unchecked(xcb_connection_t *, xcb_drawable_t, uint32_t, uint32_t)")
fn("xcb_dri2_wait_sbc_reply_t * xcb_dri2_wait_sbc_reply(xcb_connection_t *, xcb_dri2_wait_sbc_cookie_t, xcb_generic_error_t **)"); no_pack()
fn("xcb_void_cookie_t xcb_dri2_swap_interval_checked(xcb_connection_t *, xcb_drawable_t, uint32_t)")
fn("xcb_void_cookie_t xcb_dri2_swap_interval(xcb_connection_t *, xcb_drawable_t, uint32_t)")
fn("xcb_dri2_get_param_cookie_t xcb_dri2_get_param(xcb_connection_t *, xcb_drawable_t, uint32_t)")
fn("xcb_dri2_get_param_cookie_t xcb_dri2_get_param_unchecked(xcb_connection_t *, xcb_drawable_t, uint32_t)")
fn("xcb_dri2_get_param_reply_t * xcb_dri2_get_param_reply(xcb_connection_t *, xcb_dri2_get_param_cookie_t, xcb_generic_error_t **)"); no_pack()

Generate()
