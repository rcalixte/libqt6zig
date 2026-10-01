#pragma once
#ifndef LIBQGUIAPPLICATION_PLATFORM_H
#define LIBQGUIAPPLICATION_PLATFORM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QNativeInterface__QWaylandApplication)
typedef QNativeInterface::QWaylandApplication QNativeInterface__QWaylandApplication;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QNativeInterface__QX11Application)
typedef QNativeInterface::QX11Application QNativeInterface__QX11Application;
#endif
#else
typedef struct QNativeInterface__QWaylandApplication QNativeInterface__QWaylandApplication;
typedef struct QNativeInterface__QX11Application QNativeInterface__QX11Application;
typedef struct _XDisplay Display;
typedef struct xcb_connection_t xcb_connection_t;
typedef struct wl_compositor wl_compositor;
typedef struct wl_display wl_display;
typedef struct wl_keyboard wl_keyboard;
typedef struct wl_pointer wl_pointer;
typedef struct wl_seat wl_seat;
typedef struct wl_touch wl_touch;
#endif

QNativeInterface__QX11Application* QNativeInterface__QX11Application_new();
Display* QNativeInterface__QX11Application_Display(const QNativeInterface__QX11Application* self);
#ifdef __linux__
xcb_connection_t* QNativeInterface__QX11Application_Connection(const QNativeInterface__QX11Application* self);
#endif
void QNativeInterface__QX11Application_OnDisplay(QNativeInterface__QX11Application* self, intptr_t slot);
#ifdef __linux__
void QNativeInterface__QX11Application_OnConnection(QNativeInterface__QX11Application* self, intptr_t slot);
#endif

QNativeInterface__QWaylandApplication* QNativeInterface__QWaylandApplication_new();
wl_display* QNativeInterface__QWaylandApplication_Display(const QNativeInterface__QWaylandApplication* self);
wl_compositor* QNativeInterface__QWaylandApplication_Compositor(const QNativeInterface__QWaylandApplication* self);
wl_seat* QNativeInterface__QWaylandApplication_Seat(const QNativeInterface__QWaylandApplication* self);
wl_keyboard* QNativeInterface__QWaylandApplication_Keyboard(const QNativeInterface__QWaylandApplication* self);
wl_pointer* QNativeInterface__QWaylandApplication_Pointer(const QNativeInterface__QWaylandApplication* self);
wl_touch* QNativeInterface__QWaylandApplication_Touch(const QNativeInterface__QWaylandApplication* self);
unsigned int QNativeInterface__QWaylandApplication_LastInputSerial(const QNativeInterface__QWaylandApplication* self);
wl_seat* QNativeInterface__QWaylandApplication_LastInputSeat(const QNativeInterface__QWaylandApplication* self);
void QNativeInterface__QWaylandApplication_OnDisplay(QNativeInterface__QWaylandApplication* self, intptr_t slot);
void QNativeInterface__QWaylandApplication_OnCompositor(QNativeInterface__QWaylandApplication* self, intptr_t slot);
void QNativeInterface__QWaylandApplication_OnSeat(QNativeInterface__QWaylandApplication* self, intptr_t slot);
void QNativeInterface__QWaylandApplication_OnKeyboard(QNativeInterface__QWaylandApplication* self, intptr_t slot);
void QNativeInterface__QWaylandApplication_OnPointer(QNativeInterface__QWaylandApplication* self, intptr_t slot);
void QNativeInterface__QWaylandApplication_OnTouch(QNativeInterface__QWaylandApplication* self, intptr_t slot);
void QNativeInterface__QWaylandApplication_OnLastInputSerial(QNativeInterface__QWaylandApplication* self, intptr_t slot);
void QNativeInterface__QWaylandApplication_OnLastInputSeat(QNativeInterface__QWaylandApplication* self, intptr_t slot);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
