/*
$info$
tags: thunklibs|xcb-randr
$end_info$
*/

#include <xcb/randr.h>
#include <xcb/xcbext.h>

#include <stdio.h>
#include <cstring>
#include <map>
#include <string>

#include "common/Guest.h"
#include <stdarg.h>

#include "thunks.inl"
#include "function_packs.inl"
#include "function_packs_public.inl"

extern "C" {
  xcb_extension_t xcb_randr_id = {
    .name = "RANDR",
    .global_id = 0,
  };

  static void InitializeExtensions(xcb_connection_t *c) {
    FEX_xcb_randr_init_extension(c, &xcb_randr_id);
  }

  void FEX_malloc_free_on_host(void *Ptr) {
    struct {void *p;} args;
    args.p = Ptr;
    fexthunks_libxcb_randr_FEX_free_on_host(&args);
  }

  size_t FEX_malloc_usable_size(void *Ptr) {
    struct {void *p; size_t rv;} args;
    args.p = Ptr;
    fexthunks_libxcb_randr_FEX_usable_size(&args);
    return args.rv;
  }

  static xcb_randr_query_version_cookie_t fexfn_pack_xcb_randr_query_version(xcb_connection_t * a_0,uint32_t a_1,uint32_t a_2){
    struct {xcb_connection_t * a_0;uint32_t a_1;uint32_t a_2;xcb_randr_query_version_cookie_t rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_query_version(&args);
    InitializeExtensions(a_0);
    return args.rv;
  }

  static xcb_randr_query_version_cookie_t fexfn_pack_xcb_randr_query_version_unchecked(xcb_connection_t * a_0,uint32_t a_1,uint32_t a_2){
    struct {xcb_connection_t * a_0;uint32_t a_1;uint32_t a_2;xcb_randr_query_version_cookie_t rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_query_version_unchecked(&args);
    InitializeExtensions(a_0);
    return args.rv;
  }

  static xcb_randr_query_version_reply_t * fexfn_pack_xcb_randr_query_version_reply(xcb_connection_t * a_0,xcb_randr_query_version_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_query_version_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_query_version_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_query_version_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_set_screen_config_reply_t * fexfn_pack_xcb_randr_set_screen_config_reply(xcb_connection_t * a_0,xcb_randr_set_screen_config_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_set_screen_config_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_set_screen_config_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_set_screen_config_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_get_screen_size_range_reply_t * fexfn_pack_xcb_randr_get_screen_size_range_reply(xcb_connection_t * a_0,xcb_randr_get_screen_size_range_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_get_screen_size_range_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_get_screen_size_range_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_get_screen_size_range_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_get_screen_resources_reply_t * fexfn_pack_xcb_randr_get_screen_resources_reply(xcb_connection_t * a_0,xcb_randr_get_screen_resources_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_get_screen_resources_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_get_screen_resources_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_get_screen_resources_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_get_output_info_reply_t * fexfn_pack_xcb_randr_get_output_info_reply(xcb_connection_t * a_0,xcb_randr_get_output_info_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_get_output_info_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_get_output_info_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_get_output_info_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_list_output_properties_reply_t * fexfn_pack_xcb_randr_list_output_properties_reply(xcb_connection_t * a_0,xcb_randr_list_output_properties_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_list_output_properties_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_list_output_properties_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_list_output_properties_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_query_output_property_reply_t * fexfn_pack_xcb_randr_query_output_property_reply(xcb_connection_t * a_0,xcb_randr_query_output_property_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_query_output_property_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_query_output_property_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_query_output_property_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_get_output_property_reply_t * fexfn_pack_xcb_randr_get_output_property_reply(xcb_connection_t * a_0,xcb_randr_get_output_property_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_get_output_property_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_get_output_property_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_get_output_property_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_create_mode_reply_t * fexfn_pack_xcb_randr_create_mode_reply(xcb_connection_t * a_0,xcb_randr_create_mode_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_create_mode_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_create_mode_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_create_mode_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_get_crtc_info_reply_t * fexfn_pack_xcb_randr_get_crtc_info_reply(xcb_connection_t * a_0,xcb_randr_get_crtc_info_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_get_crtc_info_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_get_crtc_info_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_get_crtc_info_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_set_crtc_config_reply_t * fexfn_pack_xcb_randr_set_crtc_config_reply(xcb_connection_t * a_0,xcb_randr_set_crtc_config_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_set_crtc_config_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_set_crtc_config_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_set_crtc_config_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_get_crtc_gamma_size_reply_t * fexfn_pack_xcb_randr_get_crtc_gamma_size_reply(xcb_connection_t * a_0,xcb_randr_get_crtc_gamma_size_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_get_crtc_gamma_size_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_get_crtc_gamma_size_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_get_crtc_gamma_size_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_get_crtc_gamma_reply_t * fexfn_pack_xcb_randr_get_crtc_gamma_reply(xcb_connection_t * a_0,xcb_randr_get_crtc_gamma_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_get_crtc_gamma_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_get_crtc_gamma_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_get_crtc_gamma_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_get_screen_resources_current_reply_t * fexfn_pack_xcb_randr_get_screen_resources_current_reply(xcb_connection_t * a_0,xcb_randr_get_screen_resources_current_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_get_screen_resources_current_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_get_screen_resources_current_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_get_screen_resources_current_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_get_crtc_transform_reply_t * fexfn_pack_xcb_randr_get_crtc_transform_reply(xcb_connection_t * a_0,xcb_randr_get_crtc_transform_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_get_crtc_transform_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_get_crtc_transform_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_get_crtc_transform_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_get_panning_reply_t * fexfn_pack_xcb_randr_get_panning_reply(xcb_connection_t * a_0,xcb_randr_get_panning_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_get_panning_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_get_panning_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_get_panning_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_set_panning_reply_t * fexfn_pack_xcb_randr_set_panning_reply(xcb_connection_t * a_0,xcb_randr_set_panning_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_set_panning_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_set_panning_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_set_panning_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_get_output_primary_reply_t * fexfn_pack_xcb_randr_get_output_primary_reply(xcb_connection_t * a_0,xcb_randr_get_output_primary_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_get_output_primary_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_get_output_primary_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_get_output_primary_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_get_providers_reply_t * fexfn_pack_xcb_randr_get_providers_reply(xcb_connection_t * a_0,xcb_randr_get_providers_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_get_providers_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_get_providers_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_get_providers_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_get_provider_info_reply_t * fexfn_pack_xcb_randr_get_provider_info_reply(xcb_connection_t * a_0,xcb_randr_get_provider_info_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_get_provider_info_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_get_provider_info_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_get_provider_info_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_list_provider_properties_reply_t * fexfn_pack_xcb_randr_list_provider_properties_reply(xcb_connection_t * a_0,xcb_randr_list_provider_properties_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_list_provider_properties_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_list_provider_properties_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_list_provider_properties_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_query_provider_property_reply_t * fexfn_pack_xcb_randr_query_provider_property_reply(xcb_connection_t * a_0,xcb_randr_query_provider_property_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_query_provider_property_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_query_provider_property_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_query_provider_property_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_get_provider_property_reply_t * fexfn_pack_xcb_randr_get_provider_property_reply(xcb_connection_t * a_0,xcb_randr_get_provider_property_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_get_provider_property_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_get_provider_property_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_get_provider_property_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_get_monitors_reply_t * fexfn_pack_xcb_randr_get_monitors_reply(xcb_connection_t * a_0,xcb_randr_get_monitors_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_get_monitors_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_get_monitors_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_get_monitors_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  static xcb_randr_create_lease_reply_t * fexfn_pack_xcb_randr_create_lease_reply(xcb_connection_t * a_0,xcb_randr_create_lease_cookie_t a_1,xcb_generic_error_t ** a_2){
    struct {xcb_connection_t * a_0;xcb_randr_create_lease_cookie_t a_1;xcb_generic_error_t ** a_2;xcb_randr_create_lease_reply_t * rv;} args;
    args.a_0 = a_0;args.a_1 = a_1;args.a_2 = a_2;
    fexthunks_libxcb_randr_xcb_randr_create_lease_reply(&args);

    // We now need to do some fixups here
    if (a_2 && *a_2) {
      // If the error code pointer exists then we need to copy the contents and free the host facing pointer
      xcb_generic_error_t *NewError = (xcb_generic_error_t *)malloc(sizeof(xcb_generic_error_t));
      memcpy(NewError, *a_2, sizeof(xcb_generic_error_t));
      FEX_malloc_free_on_host(*a_2);

      // User is expected to free this
      *a_2 = NewError;
    }

    if (args.rv) {
      // Usable size
      size_t Usable = FEX_malloc_usable_size(args.rv);

      // This will be a bit wasteful but this is an unsized pointer
      void *NewPtr = malloc(Usable);
      memcpy(NewPtr, args.rv, Usable);

      FEX_malloc_free_on_host(args.rv);
      args.rv = (decltype(args.rv))NewPtr;
    }

    return args.rv;
  }

  xcb_randr_query_version_cookie_t xcb_randr_query_version(xcb_connection_t * a_0,uint32_t a_1,uint32_t a_2) __attribute__((alias("fexfn_pack_xcb_randr_query_version")));
  xcb_randr_query_version_cookie_t xcb_randr_query_version_unchecked(xcb_connection_t * a_0,uint32_t a_1,uint32_t a_2) __attribute__((alias("fexfn_pack_xcb_randr_query_version_unchecked")));
  xcb_randr_query_version_reply_t * xcb_randr_query_version_reply(xcb_connection_t * a_0,xcb_randr_query_version_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_query_version_reply")));

  xcb_randr_set_screen_config_reply_t * xcb_randr_set_screen_config_reply(xcb_connection_t * a_0,xcb_randr_set_screen_config_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_set_screen_config_reply")));
  xcb_randr_get_screen_size_range_reply_t * xcb_randr_get_screen_size_range_reply(xcb_connection_t * a_0,xcb_randr_get_screen_size_range_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_get_screen_size_range_reply")));
  xcb_randr_get_screen_resources_reply_t * xcb_randr_get_screen_resources_reply(xcb_connection_t * a_0,xcb_randr_get_screen_resources_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_get_screen_resources_reply")));
  xcb_randr_get_output_info_reply_t * xcb_randr_get_output_info_reply(xcb_connection_t * a_0,xcb_randr_get_output_info_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_get_output_info_reply")));
  xcb_randr_list_output_properties_reply_t * xcb_randr_list_output_properties_reply(xcb_connection_t * a_0,xcb_randr_list_output_properties_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_list_output_properties_reply")));
  xcb_randr_query_output_property_reply_t * xcb_randr_query_output_property_reply(xcb_connection_t * a_0,xcb_randr_query_output_property_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_query_output_property_reply")));
  xcb_randr_get_output_property_reply_t * xcb_randr_get_output_property_reply(xcb_connection_t * a_0,xcb_randr_get_output_property_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_get_output_property_reply")));
  xcb_randr_create_mode_reply_t * xcb_randr_create_mode_reply(xcb_connection_t * a_0,xcb_randr_create_mode_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_create_mode_reply")));
  xcb_randr_get_crtc_info_reply_t * xcb_randr_get_crtc_info_reply(xcb_connection_t * a_0,xcb_randr_get_crtc_info_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_get_crtc_info_reply")));
  xcb_randr_set_crtc_config_reply_t * xcb_randr_set_crtc_config_reply(xcb_connection_t * a_0,xcb_randr_set_crtc_config_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_set_crtc_config_reply")));
  xcb_randr_get_crtc_gamma_size_reply_t * xcb_randr_get_crtc_gamma_size_reply(xcb_connection_t * a_0,xcb_randr_get_crtc_gamma_size_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_get_crtc_gamma_size_reply")));
  xcb_randr_get_crtc_gamma_reply_t * xcb_randr_get_crtc_gamma_reply(xcb_connection_t * a_0,xcb_randr_get_crtc_gamma_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_get_crtc_gamma_reply")));
  xcb_randr_get_screen_resources_current_reply_t * xcb_randr_get_screen_resources_current_reply(xcb_connection_t * a_0,xcb_randr_get_screen_resources_current_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_get_screen_resources_current_reply")));
  xcb_randr_get_crtc_transform_reply_t * xcb_randr_get_crtc_transform_reply(xcb_connection_t * a_0,xcb_randr_get_crtc_transform_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_get_crtc_transform_reply")));
  xcb_randr_get_panning_reply_t * xcb_randr_get_panning_reply(xcb_connection_t * a_0,xcb_randr_get_panning_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_get_panning_reply")));
  xcb_randr_set_panning_reply_t * xcb_randr_set_panning_reply(xcb_connection_t * a_0,xcb_randr_set_panning_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_set_panning_reply")));
  xcb_randr_get_output_primary_reply_t * xcb_randr_get_output_primary_reply(xcb_connection_t * a_0,xcb_randr_get_output_primary_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_get_output_primary_reply")));
  xcb_randr_get_providers_reply_t * xcb_randr_get_providers_reply(xcb_connection_t * a_0,xcb_randr_get_providers_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_get_providers_reply")));
  xcb_randr_get_provider_info_reply_t * xcb_randr_get_provider_info_reply(xcb_connection_t * a_0,xcb_randr_get_provider_info_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_get_provider_info_reply")));
  xcb_randr_list_provider_properties_reply_t * xcb_randr_list_provider_properties_reply(xcb_connection_t * a_0,xcb_randr_list_provider_properties_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_list_provider_properties_reply")));
  xcb_randr_query_provider_property_reply_t * xcb_randr_query_provider_property_reply(xcb_connection_t * a_0,xcb_randr_query_provider_property_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_query_provider_property_reply")));
  xcb_randr_get_provider_property_reply_t * xcb_randr_get_provider_property_reply(xcb_connection_t * a_0,xcb_randr_get_provider_property_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_get_provider_property_reply")));
  xcb_randr_get_monitors_reply_t * xcb_randr_get_monitors_reply(xcb_connection_t * a_0,xcb_randr_get_monitors_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_get_monitors_reply")));
  xcb_randr_create_lease_reply_t * xcb_randr_create_lease_reply(xcb_connection_t * a_0,xcb_randr_create_lease_cookie_t a_1,xcb_generic_error_t ** a_2) __attribute__((alias("fexfn_pack_xcb_randr_create_lease_reply")));
}

LOAD_LIB(libxcb_randr)
