#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKIMAGEFILEPREVIEW_H
#define SRC_EXTRAS_KIOC_LIBKIMAGEFILEPREVIEW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__PreviewJob)
typedef KIO::PreviewJob KIO__PreviewJob;
#endif
#else
typedef struct KFileItem KFileItem;
typedef struct KIO__PreviewJob KIO__PreviewJob;
typedef struct KImageFilePreview KImageFilePreview;
typedef struct KPreviewWidgetBase KPreviewWidgetBase;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

KImageFilePreview* KImageFilePreview_new(QWidget* parent);
KImageFilePreview* KImageFilePreview_new2();
QMetaObject* KImageFilePreview_MetaObject(const KImageFilePreview* self);
void* KImageFilePreview_Metacast(KImageFilePreview* self, const char* param1);
int KImageFilePreview_Metacall(KImageFilePreview* self, int param1, int param2, void** param3);
QSize* KImageFilePreview_SizeHint(const KImageFilePreview* self);
void KImageFilePreview_ShowPreview(KImageFilePreview* self, const QUrl* url);
void KImageFilePreview_ClearPreview(KImageFilePreview* self);
void KImageFilePreview_GotPreview(KImageFilePreview* self, const KFileItem* param1, const QPixmap* param2);
void KImageFilePreview_ResizeEvent(KImageFilePreview* self, QResizeEvent* event);
KIO__PreviewJob* KImageFilePreview_CreateJob(KImageFilePreview* self, const QUrl* url, int width, int height);
void KImageFilePreview_OnMetaObject(const KImageFilePreview* self, intptr_t slot);
QMetaObject* KImageFilePreview_SuperMetaObject(const KImageFilePreview* self);
void KImageFilePreview_OnMetacast(KImageFilePreview* self, intptr_t slot);
void* KImageFilePreview_SuperMetacast(KImageFilePreview* self, const char* param1);
void KImageFilePreview_OnMetacall(KImageFilePreview* self, intptr_t slot);
int KImageFilePreview_SuperMetacall(KImageFilePreview* self, int param1, int param2, void** param3);
void KImageFilePreview_OnSizeHint(const KImageFilePreview* self, intptr_t slot);
QSize* KImageFilePreview_SuperSizeHint(const KImageFilePreview* self);
void KImageFilePreview_OnShowPreview(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperShowPreview(KImageFilePreview* self, const QUrl* url);
void KImageFilePreview_OnClearPreview(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperClearPreview(KImageFilePreview* self);
void KImageFilePreview_OnGotPreview(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperGotPreview(KImageFilePreview* self, const KFileItem* param1, const QPixmap* param2);
void KImageFilePreview_OnResizeEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperResizeEvent(KImageFilePreview* self, QResizeEvent* event);
void KImageFilePreview_OnCreateJob(KImageFilePreview* self, intptr_t slot);
KIO__PreviewJob* KImageFilePreview_SuperCreateJob(KImageFilePreview* self, const QUrl* url, int width, int height);
int KImageFilePreview_DevType(const KImageFilePreview* self);
void KImageFilePreview_OnDevType(const KImageFilePreview* self, intptr_t slot);
int KImageFilePreview_SuperDevType(const KImageFilePreview* self);
void KImageFilePreview_SetVisible(KImageFilePreview* self, bool visible);
void KImageFilePreview_OnSetVisible(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperSetVisible(KImageFilePreview* self, bool visible);
QSize* KImageFilePreview_MinimumSizeHint(const KImageFilePreview* self);
void KImageFilePreview_OnMinimumSizeHint(const KImageFilePreview* self, intptr_t slot);
QSize* KImageFilePreview_SuperMinimumSizeHint(const KImageFilePreview* self);
int KImageFilePreview_HeightForWidth(const KImageFilePreview* self, int param1);
void KImageFilePreview_OnHeightForWidth(const KImageFilePreview* self, intptr_t slot);
int KImageFilePreview_SuperHeightForWidth(const KImageFilePreview* self, int param1);
bool KImageFilePreview_HasHeightForWidth(const KImageFilePreview* self);
void KImageFilePreview_OnHasHeightForWidth(const KImageFilePreview* self, intptr_t slot);
bool KImageFilePreview_SuperHasHeightForWidth(const KImageFilePreview* self);
QPaintEngine* KImageFilePreview_PaintEngine(const KImageFilePreview* self);
void KImageFilePreview_OnPaintEngine(const KImageFilePreview* self, intptr_t slot);
QPaintEngine* KImageFilePreview_SuperPaintEngine(const KImageFilePreview* self);
bool KImageFilePreview_Event(KImageFilePreview* self, QEvent* event);
void KImageFilePreview_OnEvent(KImageFilePreview* self, intptr_t slot);
bool KImageFilePreview_SuperEvent(KImageFilePreview* self, QEvent* event);
void KImageFilePreview_MousePressEvent(KImageFilePreview* self, QMouseEvent* event);
void KImageFilePreview_OnMousePressEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperMousePressEvent(KImageFilePreview* self, QMouseEvent* event);
void KImageFilePreview_MouseReleaseEvent(KImageFilePreview* self, QMouseEvent* event);
void KImageFilePreview_OnMouseReleaseEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperMouseReleaseEvent(KImageFilePreview* self, QMouseEvent* event);
void KImageFilePreview_MouseDoubleClickEvent(KImageFilePreview* self, QMouseEvent* event);
void KImageFilePreview_OnMouseDoubleClickEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperMouseDoubleClickEvent(KImageFilePreview* self, QMouseEvent* event);
void KImageFilePreview_MouseMoveEvent(KImageFilePreview* self, QMouseEvent* event);
void KImageFilePreview_OnMouseMoveEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperMouseMoveEvent(KImageFilePreview* self, QMouseEvent* event);
void KImageFilePreview_WheelEvent(KImageFilePreview* self, QWheelEvent* event);
void KImageFilePreview_OnWheelEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperWheelEvent(KImageFilePreview* self, QWheelEvent* event);
void KImageFilePreview_KeyPressEvent(KImageFilePreview* self, QKeyEvent* event);
void KImageFilePreview_OnKeyPressEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperKeyPressEvent(KImageFilePreview* self, QKeyEvent* event);
void KImageFilePreview_KeyReleaseEvent(KImageFilePreview* self, QKeyEvent* event);
void KImageFilePreview_OnKeyReleaseEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperKeyReleaseEvent(KImageFilePreview* self, QKeyEvent* event);
void KImageFilePreview_FocusInEvent(KImageFilePreview* self, QFocusEvent* event);
void KImageFilePreview_OnFocusInEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperFocusInEvent(KImageFilePreview* self, QFocusEvent* event);
void KImageFilePreview_FocusOutEvent(KImageFilePreview* self, QFocusEvent* event);
void KImageFilePreview_OnFocusOutEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperFocusOutEvent(KImageFilePreview* self, QFocusEvent* event);
void KImageFilePreview_EnterEvent(KImageFilePreview* self, QEnterEvent* event);
void KImageFilePreview_OnEnterEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperEnterEvent(KImageFilePreview* self, QEnterEvent* event);
void KImageFilePreview_LeaveEvent(KImageFilePreview* self, QEvent* event);
void KImageFilePreview_OnLeaveEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperLeaveEvent(KImageFilePreview* self, QEvent* event);
void KImageFilePreview_PaintEvent(KImageFilePreview* self, QPaintEvent* event);
void KImageFilePreview_OnPaintEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperPaintEvent(KImageFilePreview* self, QPaintEvent* event);
void KImageFilePreview_MoveEvent(KImageFilePreview* self, QMoveEvent* event);
void KImageFilePreview_OnMoveEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperMoveEvent(KImageFilePreview* self, QMoveEvent* event);
void KImageFilePreview_CloseEvent(KImageFilePreview* self, QCloseEvent* event);
void KImageFilePreview_OnCloseEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperCloseEvent(KImageFilePreview* self, QCloseEvent* event);
void KImageFilePreview_ContextMenuEvent(KImageFilePreview* self, QContextMenuEvent* event);
void KImageFilePreview_OnContextMenuEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperContextMenuEvent(KImageFilePreview* self, QContextMenuEvent* event);
void KImageFilePreview_TabletEvent(KImageFilePreview* self, QTabletEvent* event);
void KImageFilePreview_OnTabletEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperTabletEvent(KImageFilePreview* self, QTabletEvent* event);
void KImageFilePreview_ActionEvent(KImageFilePreview* self, QActionEvent* event);
void KImageFilePreview_OnActionEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperActionEvent(KImageFilePreview* self, QActionEvent* event);
void KImageFilePreview_DragEnterEvent(KImageFilePreview* self, QDragEnterEvent* event);
void KImageFilePreview_OnDragEnterEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperDragEnterEvent(KImageFilePreview* self, QDragEnterEvent* event);
void KImageFilePreview_DragMoveEvent(KImageFilePreview* self, QDragMoveEvent* event);
void KImageFilePreview_OnDragMoveEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperDragMoveEvent(KImageFilePreview* self, QDragMoveEvent* event);
void KImageFilePreview_DragLeaveEvent(KImageFilePreview* self, QDragLeaveEvent* event);
void KImageFilePreview_OnDragLeaveEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperDragLeaveEvent(KImageFilePreview* self, QDragLeaveEvent* event);
void KImageFilePreview_DropEvent(KImageFilePreview* self, QDropEvent* event);
void KImageFilePreview_OnDropEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperDropEvent(KImageFilePreview* self, QDropEvent* event);
void KImageFilePreview_ShowEvent(KImageFilePreview* self, QShowEvent* event);
void KImageFilePreview_OnShowEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperShowEvent(KImageFilePreview* self, QShowEvent* event);
void KImageFilePreview_HideEvent(KImageFilePreview* self, QHideEvent* event);
void KImageFilePreview_OnHideEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperHideEvent(KImageFilePreview* self, QHideEvent* event);
bool KImageFilePreview_NativeEvent(KImageFilePreview* self, const libqt_string eventType, void* message, intptr_t* result);
void KImageFilePreview_OnNativeEvent(KImageFilePreview* self, intptr_t slot);
bool KImageFilePreview_SuperNativeEvent(KImageFilePreview* self, const libqt_string eventType, void* message, intptr_t* result);
void KImageFilePreview_ChangeEvent(KImageFilePreview* self, QEvent* param1);
void KImageFilePreview_OnChangeEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperChangeEvent(KImageFilePreview* self, QEvent* param1);
int KImageFilePreview_Metric(const KImageFilePreview* self, int param1);
void KImageFilePreview_OnMetric(const KImageFilePreview* self, intptr_t slot);
int KImageFilePreview_SuperMetric(const KImageFilePreview* self, int param1);
void KImageFilePreview_InitPainter(const KImageFilePreview* self, QPainter* painter);
void KImageFilePreview_OnInitPainter(const KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperInitPainter(const KImageFilePreview* self, QPainter* painter);
QPaintDevice* KImageFilePreview_Redirected(const KImageFilePreview* self, QPoint* offset);
void KImageFilePreview_OnRedirected(const KImageFilePreview* self, intptr_t slot);
QPaintDevice* KImageFilePreview_SuperRedirected(const KImageFilePreview* self, QPoint* offset);
QPainter* KImageFilePreview_SharedPainter(const KImageFilePreview* self);
void KImageFilePreview_OnSharedPainter(const KImageFilePreview* self, intptr_t slot);
QPainter* KImageFilePreview_SuperSharedPainter(const KImageFilePreview* self);
void KImageFilePreview_InputMethodEvent(KImageFilePreview* self, QInputMethodEvent* param1);
void KImageFilePreview_OnInputMethodEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperInputMethodEvent(KImageFilePreview* self, QInputMethodEvent* param1);
QVariant* KImageFilePreview_InputMethodQuery(const KImageFilePreview* self, int param1);
void KImageFilePreview_OnInputMethodQuery(const KImageFilePreview* self, intptr_t slot);
QVariant* KImageFilePreview_SuperInputMethodQuery(const KImageFilePreview* self, int param1);
bool KImageFilePreview_FocusNextPrevChild(KImageFilePreview* self, bool next);
void KImageFilePreview_OnFocusNextPrevChild(KImageFilePreview* self, intptr_t slot);
bool KImageFilePreview_SuperFocusNextPrevChild(KImageFilePreview* self, bool next);
bool KImageFilePreview_EventFilter(KImageFilePreview* self, QObject* watched, QEvent* event);
void KImageFilePreview_OnEventFilter(KImageFilePreview* self, intptr_t slot);
bool KImageFilePreview_SuperEventFilter(KImageFilePreview* self, QObject* watched, QEvent* event);
void KImageFilePreview_TimerEvent(KImageFilePreview* self, QTimerEvent* event);
void KImageFilePreview_OnTimerEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperTimerEvent(KImageFilePreview* self, QTimerEvent* event);
void KImageFilePreview_ChildEvent(KImageFilePreview* self, QChildEvent* event);
void KImageFilePreview_OnChildEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperChildEvent(KImageFilePreview* self, QChildEvent* event);
void KImageFilePreview_CustomEvent(KImageFilePreview* self, QEvent* event);
void KImageFilePreview_OnCustomEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperCustomEvent(KImageFilePreview* self, QEvent* event);
void KImageFilePreview_ConnectNotify(KImageFilePreview* self, const QMetaMethod* signal);
void KImageFilePreview_OnConnectNotify(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperConnectNotify(KImageFilePreview* self, const QMetaMethod* signal);
void KImageFilePreview_DisconnectNotify(KImageFilePreview* self, const QMetaMethod* signal);
void KImageFilePreview_OnDisconnectNotify(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperDisconnectNotify(KImageFilePreview* self, const QMetaMethod* signal);
void KImageFilePreview_ShowPreview2(KImageFilePreview* self);
void KImageFilePreview_OnShowPreview2(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperShowPreview2(KImageFilePreview* self);
void KImageFilePreview_ShowPreview3(KImageFilePreview* self, const QUrl* url, bool force);
void KImageFilePreview_OnShowPreview3(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperShowPreview3(KImageFilePreview* self, const QUrl* url, bool force);
void KImageFilePreview_SetSupportedMimeTypes(KImageFilePreview* self, const libqt_list /* of libqt_string */ mimeTypes);
void KImageFilePreview_OnSetSupportedMimeTypes(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperSetSupportedMimeTypes(KImageFilePreview* self, const libqt_list /* of libqt_string */ mimeTypes);
void KImageFilePreview_UpdateMicroFocus(KImageFilePreview* self);
void KImageFilePreview_OnUpdateMicroFocus(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperUpdateMicroFocus(KImageFilePreview* self);
void KImageFilePreview_Create(KImageFilePreview* self);
void KImageFilePreview_OnCreate(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperCreate(KImageFilePreview* self);
void KImageFilePreview_Destroy(KImageFilePreview* self);
void KImageFilePreview_OnDestroy(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_SuperDestroy(KImageFilePreview* self);
bool KImageFilePreview_FocusNextChild(KImageFilePreview* self);
void KImageFilePreview_OnFocusNextChild(KImageFilePreview* self, intptr_t slot);
bool KImageFilePreview_SuperFocusNextChild(KImageFilePreview* self);
bool KImageFilePreview_FocusPreviousChild(KImageFilePreview* self);
void KImageFilePreview_OnFocusPreviousChild(KImageFilePreview* self, intptr_t slot);
bool KImageFilePreview_SuperFocusPreviousChild(KImageFilePreview* self);
QObject* KImageFilePreview_Sender(const KImageFilePreview* self);
void KImageFilePreview_OnSender(const KImageFilePreview* self, intptr_t slot);
QObject* KImageFilePreview_SuperSender(const KImageFilePreview* self);
int KImageFilePreview_SenderSignalIndex(const KImageFilePreview* self);
void KImageFilePreview_OnSenderSignalIndex(const KImageFilePreview* self, intptr_t slot);
int KImageFilePreview_SuperSenderSignalIndex(const KImageFilePreview* self);
int KImageFilePreview_Receivers(const KImageFilePreview* self, const char* signal);
void KImageFilePreview_OnReceivers(const KImageFilePreview* self, intptr_t slot);
int KImageFilePreview_SuperReceivers(const KImageFilePreview* self, const char* signal);
bool KImageFilePreview_IsSignalConnected(const KImageFilePreview* self, const QMetaMethod* signal);
void KImageFilePreview_OnIsSignalConnected(const KImageFilePreview* self, intptr_t slot);
bool KImageFilePreview_SuperIsSignalConnected(const KImageFilePreview* self, const QMetaMethod* signal);
double KImageFilePreview_GetDecodedMetricF(const KImageFilePreview* self, int metricA, int metricB);
void KImageFilePreview_OnGetDecodedMetricF(const KImageFilePreview* self, intptr_t slot);
double KImageFilePreview_SuperGetDecodedMetricF(const KImageFilePreview* self, int metricA, int metricB);
void KImageFilePreview_Delete(KImageFilePreview* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
