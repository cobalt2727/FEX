#!/usr/bin/python3
from ThunkHelpers import *

lib_with_filename("libxcb_sync", "1", "libxcb-sync")

# FEX
fn("void FEX_xcb_sync_init_extension(xcb_connection_t *, xcb_extension_t *)"); no_unpack()
fn("size_t FEX_usable_size(void*)"); no_unpack()
fn("void FEX_free_on_host(void*)"); no_unpack()

fn("void xcb_sync_alarm_next(xcb_sync_alarm_iterator_t *)")
fn("xcb_generic_iterator_t xcb_sync_alarm_end(xcb_sync_alarm_iterator_t)")
fn("void xcb_sync_counter_next(xcb_sync_counter_iterator_t *)")
fn("xcb_generic_iterator_t xcb_sync_counter_end(xcb_sync_counter_iterator_t)")
fn("void xcb_sync_fence_next(xcb_sync_fence_iterator_t *)")
fn("xcb_generic_iterator_t xcb_sync_fence_end(xcb_sync_fence_iterator_t)")
fn("void xcb_sync_int64_next(xcb_sync_int64_iterator_t *)")
fn("xcb_generic_iterator_t xcb_sync_int64_end(xcb_sync_int64_iterator_t)")
fn("int xcb_sync_systemcounter_sizeof(const void *)")
fn("char * xcb_sync_systemcounter_name(const xcb_sync_systemcounter_t *)")
fn("int xcb_sync_systemcounter_name_length(const xcb_sync_systemcounter_t *)")
fn("xcb_generic_iterator_t xcb_sync_systemcounter_name_end(const xcb_sync_systemcounter_t *)")
fn("void xcb_sync_systemcounter_next(xcb_sync_systemcounter_iterator_t *)")
fn("xcb_generic_iterator_t xcb_sync_systemcounter_end(xcb_sync_systemcounter_iterator_t)")
fn("void xcb_sync_trigger_next(xcb_sync_trigger_iterator_t *)")
fn("xcb_generic_iterator_t xcb_sync_trigger_end(xcb_sync_trigger_iterator_t)")
fn("void xcb_sync_waitcondition_next(xcb_sync_waitcondition_iterator_t *)")
fn("xcb_generic_iterator_t xcb_sync_waitcondition_end(xcb_sync_waitcondition_iterator_t)")
fn("xcb_sync_initialize_cookie_t xcb_sync_initialize(xcb_connection_t *, uint8_t, uint8_t)"); no_pack()
fn("xcb_sync_initialize_cookie_t xcb_sync_initialize_unchecked(xcb_connection_t *, uint8_t, uint8_t)"); no_pack()
fn("xcb_sync_initialize_reply_t * xcb_sync_initialize_reply(xcb_connection_t *, xcb_sync_initialize_cookie_t, xcb_generic_error_t **)"); no_pack()
fn("int xcb_sync_list_system_counters_sizeof(const void *)")
fn("xcb_sync_list_system_counters_cookie_t xcb_sync_list_system_counters(xcb_connection_t *)")
fn("xcb_sync_list_system_counters_cookie_t xcb_sync_list_system_counters_unchecked(xcb_connection_t *)")
fn("int xcb_sync_list_system_counters_counters_length(const xcb_sync_list_system_counters_reply_t *)")
fn("xcb_sync_systemcounter_iterator_t xcb_sync_list_system_counters_counters_iterator(const xcb_sync_list_system_counters_reply_t *)")
fn("xcb_sync_list_system_counters_reply_t * xcb_sync_list_system_counters_reply(xcb_connection_t *, xcb_sync_list_system_counters_cookie_t, xcb_generic_error_t **)"); no_pack()
fn("xcb_void_cookie_t xcb_sync_create_counter_checked(xcb_connection_t *, xcb_sync_counter_t, xcb_sync_int64_t)")
fn("xcb_void_cookie_t xcb_sync_create_counter(xcb_connection_t *, xcb_sync_counter_t, xcb_sync_int64_t)")
fn("xcb_void_cookie_t xcb_sync_destroy_counter_checked(xcb_connection_t *, xcb_sync_counter_t)")
fn("xcb_void_cookie_t xcb_sync_destroy_counter(xcb_connection_t *, xcb_sync_counter_t)")
fn("xcb_sync_query_counter_cookie_t xcb_sync_query_counter(xcb_connection_t *, xcb_sync_counter_t)")
fn("xcb_sync_query_counter_cookie_t xcb_sync_query_counter_unchecked(xcb_connection_t *, xcb_sync_counter_t)")
fn("xcb_sync_query_counter_reply_t * xcb_sync_query_counter_reply(xcb_connection_t *, xcb_sync_query_counter_cookie_t, xcb_generic_error_t **)"); no_pack()
fn("int xcb_sync_await_sizeof(const void *, uint32_t)")
fn("xcb_void_cookie_t xcb_sync_await_checked(xcb_connection_t *, uint32_t, const xcb_sync_waitcondition_t *)")
fn("xcb_void_cookie_t xcb_sync_await(xcb_connection_t *, uint32_t, const xcb_sync_waitcondition_t *)")
# ::Iterator::
fn("xcb_sync_waitcondition_t * xcb_sync_await_wait_list(const xcb_sync_await_request_t *)")
fn("int xcb_sync_await_wait_list_length(const xcb_sync_await_request_t *)")
fn("xcb_sync_waitcondition_iterator_t xcb_sync_await_wait_list_iterator(const xcb_sync_await_request_t *)")

fn("xcb_void_cookie_t xcb_sync_change_counter_checked(xcb_connection_t *, xcb_sync_counter_t, xcb_sync_int64_t)")
fn("xcb_void_cookie_t xcb_sync_change_counter(xcb_connection_t *, xcb_sync_counter_t, xcb_sync_int64_t)")
fn("xcb_void_cookie_t xcb_sync_set_counter_checked(xcb_connection_t *, xcb_sync_counter_t, xcb_sync_int64_t)")
fn("xcb_void_cookie_t xcb_sync_set_counter(xcb_connection_t *, xcb_sync_counter_t, xcb_sync_int64_t)")
# XXX: void**?
fn("int xcb_sync_create_alarm_value_list_serialize(void **, uint32_t, const xcb_sync_create_alarm_value_list_t *)")
fn("int xcb_sync_create_alarm_value_list_unpack(const void *, uint32_t, xcb_sync_create_alarm_value_list_t *)")
fn("int xcb_sync_create_alarm_value_list_sizeof(const void *, uint32_t)")
fn("int xcb_sync_create_alarm_sizeof(const void *)")
fn("xcb_void_cookie_t xcb_sync_create_alarm_checked(xcb_connection_t *, xcb_sync_alarm_t, uint32_t, const void *)")
fn("xcb_void_cookie_t xcb_sync_create_alarm(xcb_connection_t *, xcb_sync_alarm_t, uint32_t, const void *)")
fn("xcb_void_cookie_t xcb_sync_create_alarm_aux_checked(xcb_connection_t *, xcb_sync_alarm_t, uint32_t, const xcb_sync_create_alarm_value_list_t *)")
fn("xcb_void_cookie_t xcb_sync_create_alarm_aux(xcb_connection_t *, xcb_sync_alarm_t, uint32_t, const xcb_sync_create_alarm_value_list_t *)")
fn("void * xcb_sync_create_alarm_value_list(const xcb_sync_create_alarm_request_t *)")
# XXX: void**?
fn("int xcb_sync_change_alarm_value_list_serialize(void **, uint32_t, const xcb_sync_change_alarm_value_list_t *)")
fn("int xcb_sync_change_alarm_value_list_unpack(const void *, uint32_t, xcb_sync_change_alarm_value_list_t *)")
fn("int xcb_sync_change_alarm_value_list_sizeof(const void *, uint32_t)")
fn("int xcb_sync_change_alarm_sizeof(const void *)")
fn("xcb_void_cookie_t xcb_sync_change_alarm_checked(xcb_connection_t *, xcb_sync_alarm_t, uint32_t, const void *)")
fn("xcb_void_cookie_t xcb_sync_change_alarm(xcb_connection_t *, xcb_sync_alarm_t, uint32_t, const void *)")
fn("xcb_void_cookie_t xcb_sync_change_alarm_aux_checked(xcb_connection_t *, xcb_sync_alarm_t, uint32_t, const xcb_sync_change_alarm_value_list_t *)")
fn("xcb_void_cookie_t xcb_sync_change_alarm_aux(xcb_connection_t *, xcb_sync_alarm_t, uint32_t, const xcb_sync_change_alarm_value_list_t *)")
# XXX: Who owns result?
fn("void * xcb_sync_change_alarm_value_list(const xcb_sync_change_alarm_request_t *)")
fn("xcb_void_cookie_t xcb_sync_destroy_alarm_checked(xcb_connection_t *, xcb_sync_alarm_t)")
fn("xcb_void_cookie_t xcb_sync_destroy_alarm(xcb_connection_t *, xcb_sync_alarm_t)")
fn("xcb_sync_query_alarm_cookie_t xcb_sync_query_alarm(xcb_connection_t *, xcb_sync_alarm_t)")
fn("xcb_sync_query_alarm_cookie_t xcb_sync_query_alarm_unchecked(xcb_connection_t *, xcb_sync_alarm_t)")
fn("xcb_sync_query_alarm_reply_t * xcb_sync_query_alarm_reply(xcb_connection_t *, xcb_sync_query_alarm_cookie_t, xcb_generic_error_t **)"); no_pack()
fn("xcb_void_cookie_t xcb_sync_set_priority_checked(xcb_connection_t *, uint32_t, int32_t)")
fn("xcb_void_cookie_t xcb_sync_set_priority(xcb_connection_t *, uint32_t, int32_t)")
fn("xcb_sync_get_priority_cookie_t xcb_sync_get_priority(xcb_connection_t *, uint32_t)")
fn("xcb_sync_get_priority_cookie_t xcb_sync_get_priority_unchecked(xcb_connection_t *, uint32_t)")
fn("xcb_sync_get_priority_reply_t * xcb_sync_get_priority_reply(xcb_connection_t *, xcb_sync_get_priority_cookie_t, xcb_generic_error_t **)"); no_pack()
fn("xcb_void_cookie_t xcb_sync_create_fence_checked(xcb_connection_t *, xcb_drawable_t, xcb_sync_fence_t, uint8_t)")
fn("xcb_void_cookie_t xcb_sync_create_fence(xcb_connection_t *, xcb_drawable_t, xcb_sync_fence_t, uint8_t)")
fn("xcb_void_cookie_t xcb_sync_trigger_fence_checked(xcb_connection_t *, xcb_sync_fence_t)")
fn("xcb_void_cookie_t xcb_sync_trigger_fence(xcb_connection_t *, xcb_sync_fence_t)")
fn("xcb_void_cookie_t xcb_sync_reset_fence_checked(xcb_connection_t *, xcb_sync_fence_t)")
fn("xcb_void_cookie_t xcb_sync_reset_fence(xcb_connection_t *, xcb_sync_fence_t)")
fn("xcb_void_cookie_t xcb_sync_destroy_fence_checked(xcb_connection_t *, xcb_sync_fence_t)")
fn("xcb_void_cookie_t xcb_sync_destroy_fence(xcb_connection_t *, xcb_sync_fence_t)")
fn("xcb_sync_query_fence_cookie_t xcb_sync_query_fence(xcb_connection_t *, xcb_sync_fence_t)")
fn("xcb_sync_query_fence_cookie_t xcb_sync_query_fence_unchecked(xcb_connection_t *, xcb_sync_fence_t)")
fn("xcb_sync_query_fence_reply_t * xcb_sync_query_fence_reply(xcb_connection_t *, xcb_sync_query_fence_cookie_t, xcb_generic_error_t **)"); no_pack()
fn("int xcb_sync_await_fence_sizeof(const void *, uint32_t)")
fn("xcb_void_cookie_t xcb_sync_await_fence_checked(xcb_connection_t *, uint32_t, const xcb_sync_fence_t *)")
fn("xcb_void_cookie_t xcb_sync_await_fence(xcb_connection_t *, uint32_t, const xcb_sync_fence_t *)")
# ::Iterator::
fn("xcb_sync_fence_t * xcb_sync_await_fence_fence_list(const xcb_sync_await_fence_request_t *)")
fn("int xcb_sync_await_fence_fence_list_length(const xcb_sync_await_fence_request_t *)")
fn("xcb_generic_iterator_t xcb_sync_await_fence_fence_list_end(const xcb_sync_await_fence_request_t *)")
Generate()
