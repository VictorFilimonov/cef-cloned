// Copyright (c) 2021 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=5d94f8128092dfa61a980dbb77c254c40abde8a5$
//

#include "libcef_dll/cpptoc/request_context_handler_cpptoc.h"
#include "libcef_dll/cpptoc/resource_request_handler_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/frame_ctocpp.h"
#include "libcef_dll/ctocpp/request_context_ctocpp.h"
#include "libcef_dll/ctocpp/request_ctocpp.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK request_context_handler_on_request_context_initialized(
    struct _cef_request_context_handler_t* self,
    cef_request_context_t* request_context) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: request_context; type: refptr_diff
  DCHECK(request_context);
  if (!request_context)
    return;

  // Execute
  CefRequestContextHandlerCppToC::Get(self)->OnRequestContextInitialized(
      CefRequestContextCToCpp::Wrap(request_context));
}

struct _cef_resource_request_handler_t* CEF_CALLBACK
request_context_handler_get_resource_request_handler(
    struct _cef_request_context_handler_t* self,
    cef_browser_t* browser,
    cef_frame_t* frame,
    cef_request_t* request,
    int is_navigation,
    int is_download,
    const cef_string_t* request_initiator,
    int* disable_default_handling) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;
  // Verify param: request; type: refptr_diff
  DCHECK(request);
  if (!request)
    return NULL;
  // Verify param: disable_default_handling; type: bool_byref
  DCHECK(disable_default_handling);
  if (!disable_default_handling)
    return NULL;
  // Unverified params: browser, frame, request_initiator

  // Translate param: disable_default_handling; type: bool_byref
  bool disable_default_handlingBool =
      (disable_default_handling && *disable_default_handling) ? true : false;

  // Execute
  CefRefPtr<CefResourceRequestHandler> _retval =
      CefRequestContextHandlerCppToC::Get(self)->GetResourceRequestHandler(
          CefBrowserCToCpp::Wrap(browser), CefFrameCToCpp::Wrap(frame),
          CefRequestCToCpp::Wrap(request), is_navigation ? true : false,
          is_download ? true : false, CefString(request_initiator),
          disable_default_handlingBool);

  // Restore param: disable_default_handling; type: bool_byref
  if (disable_default_handling)
    *disable_default_handling = disable_default_handlingBool ? true : false;

  // Return type: refptr_same
  return CefResourceRequestHandlerCppToC::Wrap(_retval);
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefRequestContextHandlerCppToC::CefRequestContextHandlerCppToC() {
  GetStruct()->on_request_context_initialized =
      request_context_handler_on_request_context_initialized;
  GetStruct()->get_resource_request_handler =
      request_context_handler_get_resource_request_handler;
}

// DESTRUCTOR - Do not edit by hand.

CefRequestContextHandlerCppToC::~CefRequestContextHandlerCppToC() {}

template <>
CefRefPtr<CefRequestContextHandler> CefCppToCRefCounted<
    CefRequestContextHandlerCppToC,
    CefRequestContextHandler,
    cef_request_context_handler_t>::UnwrapDerived(CefWrapperType type,
                                                  cef_request_context_handler_t*
                                                      s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCppToCRefCounted<CefRequestContextHandlerCppToC,
                        CefRequestContextHandler,
                        cef_request_context_handler_t>::kWrapperType =
        WT_REQUEST_CONTEXT_HANDLER;
