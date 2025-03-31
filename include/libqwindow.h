#pragma once
#ifndef SRCC_LIBQWINDOW_H
#define SRCC_LIBQWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QCursor QCursor;
typedef struct QEvent QEvent;
typedef struct QExposeEvent QExposeEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScreen QScreen;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSurface QSurface;
typedef struct QSurfaceFormat QSurfaceFormat;
typedef struct QTabletEvent QTabletEvent;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTouchEvent QTouchEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWindow QWindow;
#endif

#ifdef __cplusplus
typedef QWindow::AncestorMode AncestorMode; // C++ enum
typedef QWindow::Visibility Visibility;     // C++ enum
#else
typedef int AncestorMode; // C ABI enum
typedef int Visibility;   // C ABI enum
#endif

QWindow* QWindow_new();
QWindow* QWindow_new2(QWindow* parent);
QWindow* QWindow_new3(QScreen* screen);
QMetaObject* QWindow_MetaObject(const QWindow* self);
void* QWindow_Metacast(QWindow* self, const char* param1);
int QWindow_Metacall(QWindow* self, int param1, int param2, void** param3);
void QWindow_OnMetacall(QWindow* self, intptr_t slot);
int QWindow_QBaseMetacall(QWindow* self, int param1, int param2, void** param3);
libqt_string QWindow_Tr(const char* s);
void QWindow_SetSurfaceType(QWindow* self, int surfaceType);
int QWindow_SurfaceType(const QWindow* self);
void QWindow_OnSurfaceType(const QWindow* self, intptr_t slot);
int QWindow_QBaseSurfaceType(const QWindow* self);
bool QWindow_IsVisible(const QWindow* self);
int QWindow_Visibility(const QWindow* self);
void QWindow_SetVisibility(QWindow* self, int v);
void QWindow_Create(QWindow* self);
uintptr_t QWindow_WinId(const QWindow* self);
QWindow* QWindow_Parent(const QWindow* self);
void QWindow_SetParent(QWindow* self, QWindow* parent);
bool QWindow_IsTopLevel(const QWindow* self);
bool QWindow_IsModal(const QWindow* self);
int QWindow_Modality(const QWindow* self);
void QWindow_SetModality(QWindow* self, int modality);
void QWindow_SetFormat(QWindow* self, QSurfaceFormat* format);
QSurfaceFormat* QWindow_Format(const QWindow* self);
void QWindow_OnFormat(const QWindow* self, intptr_t slot);
QSurfaceFormat* QWindow_QBaseFormat(const QWindow* self);
QSurfaceFormat* QWindow_RequestedFormat(const QWindow* self);
void QWindow_SetFlags(QWindow* self, int flags);
int QWindow_Flags(const QWindow* self);
void QWindow_SetFlag(QWindow* self, int param1);
int QWindow_Type(const QWindow* self);
libqt_string QWindow_Title(const QWindow* self);
void QWindow_SetOpacity(QWindow* self, double level);
double QWindow_Opacity(const QWindow* self);
void QWindow_SetMask(QWindow* self, QRegion* region);
QRegion* QWindow_Mask(const QWindow* self);
bool QWindow_IsActive(const QWindow* self);
void QWindow_ReportContentOrientationChange(QWindow* self, int orientation);
int QWindow_ContentOrientation(const QWindow* self);
double QWindow_DevicePixelRatio(const QWindow* self);
int QWindow_WindowState(const QWindow* self);
int QWindow_WindowStates(const QWindow* self);
void QWindow_SetWindowState(QWindow* self, int state);
void QWindow_SetWindowStates(QWindow* self, int states);
void QWindow_SetTransientParent(QWindow* self, QWindow* parent);
QWindow* QWindow_TransientParent(const QWindow* self);
bool QWindow_IsAncestorOf(const QWindow* self, QWindow* child);
bool QWindow_IsExposed(const QWindow* self);
int QWindow_MinimumWidth(const QWindow* self);
int QWindow_MinimumHeight(const QWindow* self);
int QWindow_MaximumWidth(const QWindow* self);
int QWindow_MaximumHeight(const QWindow* self);
QSize* QWindow_MinimumSize(const QWindow* self);
QSize* QWindow_MaximumSize(const QWindow* self);
QSize* QWindow_BaseSize(const QWindow* self);
QSize* QWindow_SizeIncrement(const QWindow* self);
void QWindow_SetMinimumSize(QWindow* self, QSize* size);
void QWindow_SetMaximumSize(QWindow* self, QSize* size);
void QWindow_SetBaseSize(QWindow* self, QSize* size);
void QWindow_SetSizeIncrement(QWindow* self, QSize* size);
QRect* QWindow_Geometry(const QWindow* self);
QMargins* QWindow_FrameMargins(const QWindow* self);
QRect* QWindow_FrameGeometry(const QWindow* self);
QPoint* QWindow_FramePosition(const QWindow* self);
void QWindow_SetFramePosition(QWindow* self, QPoint* point);
int QWindow_Width(const QWindow* self);
int QWindow_Height(const QWindow* self);
int QWindow_X(const QWindow* self);
int QWindow_Y(const QWindow* self);
QSize* QWindow_Size(const QWindow* self);
void QWindow_OnSize(const QWindow* self, intptr_t slot);
QSize* QWindow_QBaseSize(const QWindow* self);
QPoint* QWindow_Position(const QWindow* self);
void QWindow_SetPosition(QWindow* self, QPoint* pt);
void QWindow_SetPosition2(QWindow* self, int posx, int posy);
void QWindow_Resize(QWindow* self, QSize* newSize);
void QWindow_Resize2(QWindow* self, int w, int h);
void QWindow_SetFilePath(QWindow* self, libqt_string filePath);
libqt_string QWindow_FilePath(const QWindow* self);
void QWindow_SetIcon(QWindow* self, QIcon* icon);
QIcon* QWindow_Icon(const QWindow* self);
void QWindow_Destroy(QWindow* self);
bool QWindow_SetKeyboardGrabEnabled(QWindow* self, bool grab);
bool QWindow_SetMouseGrabEnabled(QWindow* self, bool grab);
QScreen* QWindow_Screen(const QWindow* self);
void QWindow_SetScreen(QWindow* self, QScreen* screen);
QAccessibleInterface* QWindow_AccessibleRoot(const QWindow* self);
void QWindow_OnAccessibleRoot(const QWindow* self, intptr_t slot);
QAccessibleInterface* QWindow_QBaseAccessibleRoot(const QWindow* self);
QObject* QWindow_FocusObject(const QWindow* self);
void QWindow_OnFocusObject(const QWindow* self, intptr_t slot);
QObject* QWindow_QBaseFocusObject(const QWindow* self);
QPointF* QWindow_MapToGlobal(const QWindow* self, QPointF* pos);
QPointF* QWindow_MapFromGlobal(const QWindow* self, QPointF* pos);
QPoint* QWindow_MapToGlobalWithPos(const QWindow* self, QPoint* pos);
QPoint* QWindow_MapFromGlobalWithPos(const QWindow* self, QPoint* pos);
QCursor* QWindow_Cursor(const QWindow* self);
void QWindow_SetCursor(QWindow* self, QCursor* cursor);
void QWindow_UnsetCursor(QWindow* self);
QWindow* QWindow_FromWinId(uintptr_t id);
void QWindow_RequestActivate(QWindow* self);
void QWindow_SetVisible(QWindow* self, bool visible);
void QWindow_Show(QWindow* self);
void QWindow_Hide(QWindow* self);
void QWindow_ShowMinimized(QWindow* self);
void QWindow_ShowMaximized(QWindow* self);
void QWindow_ShowFullScreen(QWindow* self);
void QWindow_ShowNormal(QWindow* self);
bool QWindow_Close(QWindow* self);
void QWindow_Raise(QWindow* self);
void QWindow_Lower(QWindow* self);
bool QWindow_StartSystemResize(QWindow* self, int edges);
bool QWindow_StartSystemMove(QWindow* self);
void QWindow_SetTitle(QWindow* self, libqt_string title);
void QWindow_SetX(QWindow* self, int arg);
void QWindow_SetY(QWindow* self, int arg);
void QWindow_SetWidth(QWindow* self, int arg);
void QWindow_SetHeight(QWindow* self, int arg);
void QWindow_SetGeometry(QWindow* self, int posx, int posy, int w, int h);
void QWindow_SetGeometryWithRect(QWindow* self, QRect* rect);
void QWindow_SetMinimumWidth(QWindow* self, int w);
void QWindow_SetMinimumHeight(QWindow* self, int h);
void QWindow_SetMaximumWidth(QWindow* self, int w);
void QWindow_SetMaximumHeight(QWindow* self, int h);
void QWindow_Alert(QWindow* self, int msec);
void QWindow_RequestUpdate(QWindow* self);
void QWindow_ScreenChanged(QWindow* self, QScreen* screen);
void QWindow_Connect_ScreenChanged(QWindow* self, intptr_t slot);
void QWindow_ModalityChanged(QWindow* self, int modality);
void QWindow_Connect_ModalityChanged(QWindow* self, intptr_t slot);
void QWindow_WindowStateChanged(QWindow* self, int windowState);
void QWindow_Connect_WindowStateChanged(QWindow* self, intptr_t slot);
void QWindow_WindowTitleChanged(QWindow* self, libqt_string title);
void QWindow_Connect_WindowTitleChanged(QWindow* self, intptr_t slot);
void QWindow_XChanged(QWindow* self, int arg);
void QWindow_Connect_XChanged(QWindow* self, intptr_t slot);
void QWindow_YChanged(QWindow* self, int arg);
void QWindow_Connect_YChanged(QWindow* self, intptr_t slot);
void QWindow_WidthChanged(QWindow* self, int arg);
void QWindow_Connect_WidthChanged(QWindow* self, intptr_t slot);
void QWindow_HeightChanged(QWindow* self, int arg);
void QWindow_Connect_HeightChanged(QWindow* self, intptr_t slot);
void QWindow_MinimumWidthChanged(QWindow* self, int arg);
void QWindow_Connect_MinimumWidthChanged(QWindow* self, intptr_t slot);
void QWindow_MinimumHeightChanged(QWindow* self, int arg);
void QWindow_Connect_MinimumHeightChanged(QWindow* self, intptr_t slot);
void QWindow_MaximumWidthChanged(QWindow* self, int arg);
void QWindow_Connect_MaximumWidthChanged(QWindow* self, intptr_t slot);
void QWindow_MaximumHeightChanged(QWindow* self, int arg);
void QWindow_Connect_MaximumHeightChanged(QWindow* self, intptr_t slot);
void QWindow_VisibleChanged(QWindow* self, bool arg);
void QWindow_Connect_VisibleChanged(QWindow* self, intptr_t slot);
void QWindow_VisibilityChanged(QWindow* self, int visibility);
void QWindow_Connect_VisibilityChanged(QWindow* self, intptr_t slot);
void QWindow_ActiveChanged(QWindow* self);
void QWindow_Connect_ActiveChanged(QWindow* self, intptr_t slot);
void QWindow_ContentOrientationChanged(QWindow* self, int orientation);
void QWindow_Connect_ContentOrientationChanged(QWindow* self, intptr_t slot);
void QWindow_FocusObjectChanged(QWindow* self, QObject* object);
void QWindow_Connect_FocusObjectChanged(QWindow* self, intptr_t slot);
void QWindow_OpacityChanged(QWindow* self, double opacity);
void QWindow_Connect_OpacityChanged(QWindow* self, intptr_t slot);
void QWindow_TransientParentChanged(QWindow* self, QWindow* transientParent);
void QWindow_Connect_TransientParentChanged(QWindow* self, intptr_t slot);
void QWindow_ExposeEvent(QWindow* self, QExposeEvent* param1);
void QWindow_OnExposeEvent(QWindow* self, intptr_t slot);
void QWindow_QBaseExposeEvent(QWindow* self, QExposeEvent* param1);
void QWindow_ResizeEvent(QWindow* self, QResizeEvent* param1);
void QWindow_OnResizeEvent(QWindow* self, intptr_t slot);
void QWindow_QBaseResizeEvent(QWindow* self, QResizeEvent* param1);
void QWindow_PaintEvent(QWindow* self, QPaintEvent* param1);
void QWindow_OnPaintEvent(QWindow* self, intptr_t slot);
void QWindow_QBasePaintEvent(QWindow* self, QPaintEvent* param1);
void QWindow_MoveEvent(QWindow* self, QMoveEvent* param1);
void QWindow_OnMoveEvent(QWindow* self, intptr_t slot);
void QWindow_QBaseMoveEvent(QWindow* self, QMoveEvent* param1);
void QWindow_FocusInEvent(QWindow* self, QFocusEvent* param1);
void QWindow_OnFocusInEvent(QWindow* self, intptr_t slot);
void QWindow_QBaseFocusInEvent(QWindow* self, QFocusEvent* param1);
void QWindow_FocusOutEvent(QWindow* self, QFocusEvent* param1);
void QWindow_OnFocusOutEvent(QWindow* self, intptr_t slot);
void QWindow_QBaseFocusOutEvent(QWindow* self, QFocusEvent* param1);
void QWindow_ShowEvent(QWindow* self, QShowEvent* param1);
void QWindow_OnShowEvent(QWindow* self, intptr_t slot);
void QWindow_QBaseShowEvent(QWindow* self, QShowEvent* param1);
void QWindow_HideEvent(QWindow* self, QHideEvent* param1);
void QWindow_OnHideEvent(QWindow* self, intptr_t slot);
void QWindow_QBaseHideEvent(QWindow* self, QHideEvent* param1);
void QWindow_CloseEvent(QWindow* self, QCloseEvent* param1);
void QWindow_OnCloseEvent(QWindow* self, intptr_t slot);
void QWindow_QBaseCloseEvent(QWindow* self, QCloseEvent* param1);
bool QWindow_Event(QWindow* self, QEvent* param1);
void QWindow_OnEvent(QWindow* self, intptr_t slot);
bool QWindow_QBaseEvent(QWindow* self, QEvent* param1);
void QWindow_KeyPressEvent(QWindow* self, QKeyEvent* param1);
void QWindow_OnKeyPressEvent(QWindow* self, intptr_t slot);
void QWindow_QBaseKeyPressEvent(QWindow* self, QKeyEvent* param1);
void QWindow_KeyReleaseEvent(QWindow* self, QKeyEvent* param1);
void QWindow_OnKeyReleaseEvent(QWindow* self, intptr_t slot);
void QWindow_QBaseKeyReleaseEvent(QWindow* self, QKeyEvent* param1);
void QWindow_MousePressEvent(QWindow* self, QMouseEvent* param1);
void QWindow_OnMousePressEvent(QWindow* self, intptr_t slot);
void QWindow_QBaseMousePressEvent(QWindow* self, QMouseEvent* param1);
void QWindow_MouseReleaseEvent(QWindow* self, QMouseEvent* param1);
void QWindow_OnMouseReleaseEvent(QWindow* self, intptr_t slot);
void QWindow_QBaseMouseReleaseEvent(QWindow* self, QMouseEvent* param1);
void QWindow_MouseDoubleClickEvent(QWindow* self, QMouseEvent* param1);
void QWindow_OnMouseDoubleClickEvent(QWindow* self, intptr_t slot);
void QWindow_QBaseMouseDoubleClickEvent(QWindow* self, QMouseEvent* param1);
void QWindow_MouseMoveEvent(QWindow* self, QMouseEvent* param1);
void QWindow_OnMouseMoveEvent(QWindow* self, intptr_t slot);
void QWindow_QBaseMouseMoveEvent(QWindow* self, QMouseEvent* param1);
void QWindow_WheelEvent(QWindow* self, QWheelEvent* param1);
void QWindow_OnWheelEvent(QWindow* self, intptr_t slot);
void QWindow_QBaseWheelEvent(QWindow* self, QWheelEvent* param1);
void QWindow_TouchEvent(QWindow* self, QTouchEvent* param1);
void QWindow_OnTouchEvent(QWindow* self, intptr_t slot);
void QWindow_QBaseTouchEvent(QWindow* self, QTouchEvent* param1);
void QWindow_TabletEvent(QWindow* self, QTabletEvent* param1);
void QWindow_OnTabletEvent(QWindow* self, intptr_t slot);
void QWindow_QBaseTabletEvent(QWindow* self, QTabletEvent* param1);
bool QWindow_NativeEvent(QWindow* self, libqt_string eventType, void* message, intptr_t* result);
void QWindow_OnNativeEvent(QWindow* self, intptr_t slot);
bool QWindow_QBaseNativeEvent(QWindow* self, libqt_string eventType, void* message, intptr_t* result);
libqt_string QWindow_Tr2(const char* s, const char* c);
libqt_string QWindow_Tr3(const char* s, const char* c, int n);
QWindow* QWindow_Parent1(const QWindow* self, int mode);
void QWindow_SetFlag2(QWindow* self, int param1, bool on);
bool QWindow_IsAncestorOf2(const QWindow* self, QWindow* child, int mode);
bool QWindow_EventFilter(QWindow* self, QObject* watched, QEvent* event);
void QWindow_OnEventFilter(QWindow* self, intptr_t slot);
bool QWindow_QBaseEventFilter(QWindow* self, QObject* watched, QEvent* event);
void QWindow_TimerEvent(QWindow* self, QTimerEvent* event);
void QWindow_OnTimerEvent(QWindow* self, intptr_t slot);
void QWindow_QBaseTimerEvent(QWindow* self, QTimerEvent* event);
void QWindow_ChildEvent(QWindow* self, QChildEvent* event);
void QWindow_OnChildEvent(QWindow* self, intptr_t slot);
void QWindow_QBaseChildEvent(QWindow* self, QChildEvent* event);
void QWindow_CustomEvent(QWindow* self, QEvent* event);
void QWindow_OnCustomEvent(QWindow* self, intptr_t slot);
void QWindow_QBaseCustomEvent(QWindow* self, QEvent* event);
void QWindow_ConnectNotify(QWindow* self, QMetaMethod* signal);
void QWindow_OnConnectNotify(QWindow* self, intptr_t slot);
void QWindow_QBaseConnectNotify(QWindow* self, QMetaMethod* signal);
void QWindow_DisconnectNotify(QWindow* self, QMetaMethod* signal);
void QWindow_OnDisconnectNotify(QWindow* self, intptr_t slot);
void QWindow_QBaseDisconnectNotify(QWindow* self, QMetaMethod* signal);
void* QWindow_ResolveInterface(const QWindow* self, const char* name, int revision);
void QWindow_OnResolveInterface(const QWindow* self, intptr_t slot);
void* QWindow_QBaseResolveInterface(const QWindow* self, const char* name, int revision);
QObject* QWindow_Sender(const QWindow* self);
void QWindow_OnSender(const QWindow* self, intptr_t slot);
QObject* QWindow_QBaseSender(const QWindow* self);
int QWindow_SenderSignalIndex(const QWindow* self);
void QWindow_OnSenderSignalIndex(const QWindow* self, intptr_t slot);
int QWindow_QBaseSenderSignalIndex(const QWindow* self);
int QWindow_Receivers(const QWindow* self, const char* signal);
void QWindow_OnReceivers(const QWindow* self, intptr_t slot);
int QWindow_QBaseReceivers(const QWindow* self, const char* signal);
bool QWindow_IsSignalConnected(const QWindow* self, QMetaMethod* signal);
void QWindow_OnIsSignalConnected(const QWindow* self, intptr_t slot);
bool QWindow_QBaseIsSignalConnected(const QWindow* self, QMetaMethod* signal);
void QWindow_Delete(QWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
