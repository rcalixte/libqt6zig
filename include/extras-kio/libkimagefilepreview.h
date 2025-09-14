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
libqt_string KImageFilePreview_Tr(const char* s);
QSize* KImageFilePreview_SizeHint(const KImageFilePreview* self);
void KImageFilePreview_ShowPreview(KImageFilePreview* self, const QUrl* url);
void KImageFilePreview_ClearPreview(KImageFilePreview* self);
void KImageFilePreview_GotPreview(KImageFilePreview* self, const KFileItem* param1, const QPixmap* param2);
void KImageFilePreview_ResizeEvent(KImageFilePreview* self, QResizeEvent* event);
KIO__PreviewJob* KImageFilePreview_CreateJob(KImageFilePreview* self, const QUrl* url, int width, int height);
libqt_string KImageFilePreview_Tr2(const char* s, const char* c);
libqt_string KImageFilePreview_Tr3(const char* s, const char* c, int n);
void KImageFilePreview_OnMetacall(KImageFilePreview* self, intptr_t slot);
int KImageFilePreview_QBaseMetacall(KImageFilePreview* self, int param1, int param2, void** param3);
void KImageFilePreview_OnSizeHint(const KImageFilePreview* self, intptr_t slot);
QSize* KImageFilePreview_QBaseSizeHint(const KImageFilePreview* self);
void KImageFilePreview_OnShowPreview(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseShowPreview(KImageFilePreview* self, const QUrl* url);
void KImageFilePreview_OnClearPreview(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseClearPreview(KImageFilePreview* self);
void KImageFilePreview_OnGotPreview(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseGotPreview(KImageFilePreview* self, const KFileItem* param1, const QPixmap* param2);
void KImageFilePreview_OnResizeEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseResizeEvent(KImageFilePreview* self, QResizeEvent* event);
void KImageFilePreview_OnCreateJob(KImageFilePreview* self, intptr_t slot);
KIO__PreviewJob* KImageFilePreview_QBaseCreateJob(KImageFilePreview* self, const QUrl* url, int width, int height);
int KImageFilePreview_DevType(const KImageFilePreview* self);
void KImageFilePreview_OnDevType(const KImageFilePreview* self, intptr_t slot);
int KImageFilePreview_QBaseDevType(const KImageFilePreview* self);
void KImageFilePreview_SetVisible(KImageFilePreview* self, bool visible);
void KImageFilePreview_OnSetVisible(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseSetVisible(KImageFilePreview* self, bool visible);
QSize* KImageFilePreview_MinimumSizeHint(const KImageFilePreview* self);
void KImageFilePreview_OnMinimumSizeHint(const KImageFilePreview* self, intptr_t slot);
QSize* KImageFilePreview_QBaseMinimumSizeHint(const KImageFilePreview* self);
int KImageFilePreview_HeightForWidth(const KImageFilePreview* self, int param1);
void KImageFilePreview_OnHeightForWidth(const KImageFilePreview* self, intptr_t slot);
int KImageFilePreview_QBaseHeightForWidth(const KImageFilePreview* self, int param1);
bool KImageFilePreview_HasHeightForWidth(const KImageFilePreview* self);
void KImageFilePreview_OnHasHeightForWidth(const KImageFilePreview* self, intptr_t slot);
bool KImageFilePreview_QBaseHasHeightForWidth(const KImageFilePreview* self);
QPaintEngine* KImageFilePreview_PaintEngine(const KImageFilePreview* self);
void KImageFilePreview_OnPaintEngine(const KImageFilePreview* self, intptr_t slot);
QPaintEngine* KImageFilePreview_QBasePaintEngine(const KImageFilePreview* self);
bool KImageFilePreview_Event(KImageFilePreview* self, QEvent* event);
void KImageFilePreview_OnEvent(KImageFilePreview* self, intptr_t slot);
bool KImageFilePreview_QBaseEvent(KImageFilePreview* self, QEvent* event);
void KImageFilePreview_MousePressEvent(KImageFilePreview* self, QMouseEvent* event);
void KImageFilePreview_OnMousePressEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseMousePressEvent(KImageFilePreview* self, QMouseEvent* event);
void KImageFilePreview_MouseReleaseEvent(KImageFilePreview* self, QMouseEvent* event);
void KImageFilePreview_OnMouseReleaseEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseMouseReleaseEvent(KImageFilePreview* self, QMouseEvent* event);
void KImageFilePreview_MouseDoubleClickEvent(KImageFilePreview* self, QMouseEvent* event);
void KImageFilePreview_OnMouseDoubleClickEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseMouseDoubleClickEvent(KImageFilePreview* self, QMouseEvent* event);
void KImageFilePreview_MouseMoveEvent(KImageFilePreview* self, QMouseEvent* event);
void KImageFilePreview_OnMouseMoveEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseMouseMoveEvent(KImageFilePreview* self, QMouseEvent* event);
void KImageFilePreview_WheelEvent(KImageFilePreview* self, QWheelEvent* event);
void KImageFilePreview_OnWheelEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseWheelEvent(KImageFilePreview* self, QWheelEvent* event);
void KImageFilePreview_KeyPressEvent(KImageFilePreview* self, QKeyEvent* event);
void KImageFilePreview_OnKeyPressEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseKeyPressEvent(KImageFilePreview* self, QKeyEvent* event);
void KImageFilePreview_KeyReleaseEvent(KImageFilePreview* self, QKeyEvent* event);
void KImageFilePreview_OnKeyReleaseEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseKeyReleaseEvent(KImageFilePreview* self, QKeyEvent* event);
void KImageFilePreview_FocusInEvent(KImageFilePreview* self, QFocusEvent* event);
void KImageFilePreview_OnFocusInEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseFocusInEvent(KImageFilePreview* self, QFocusEvent* event);
void KImageFilePreview_FocusOutEvent(KImageFilePreview* self, QFocusEvent* event);
void KImageFilePreview_OnFocusOutEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseFocusOutEvent(KImageFilePreview* self, QFocusEvent* event);
void KImageFilePreview_EnterEvent(KImageFilePreview* self, QEnterEvent* event);
void KImageFilePreview_OnEnterEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseEnterEvent(KImageFilePreview* self, QEnterEvent* event);
void KImageFilePreview_LeaveEvent(KImageFilePreview* self, QEvent* event);
void KImageFilePreview_OnLeaveEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseLeaveEvent(KImageFilePreview* self, QEvent* event);
void KImageFilePreview_PaintEvent(KImageFilePreview* self, QPaintEvent* event);
void KImageFilePreview_OnPaintEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBasePaintEvent(KImageFilePreview* self, QPaintEvent* event);
void KImageFilePreview_MoveEvent(KImageFilePreview* self, QMoveEvent* event);
void KImageFilePreview_OnMoveEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseMoveEvent(KImageFilePreview* self, QMoveEvent* event);
void KImageFilePreview_CloseEvent(KImageFilePreview* self, QCloseEvent* event);
void KImageFilePreview_OnCloseEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseCloseEvent(KImageFilePreview* self, QCloseEvent* event);
void KImageFilePreview_ContextMenuEvent(KImageFilePreview* self, QContextMenuEvent* event);
void KImageFilePreview_OnContextMenuEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseContextMenuEvent(KImageFilePreview* self, QContextMenuEvent* event);
void KImageFilePreview_TabletEvent(KImageFilePreview* self, QTabletEvent* event);
void KImageFilePreview_OnTabletEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseTabletEvent(KImageFilePreview* self, QTabletEvent* event);
void KImageFilePreview_ActionEvent(KImageFilePreview* self, QActionEvent* event);
void KImageFilePreview_OnActionEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseActionEvent(KImageFilePreview* self, QActionEvent* event);
void KImageFilePreview_DragEnterEvent(KImageFilePreview* self, QDragEnterEvent* event);
void KImageFilePreview_OnDragEnterEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseDragEnterEvent(KImageFilePreview* self, QDragEnterEvent* event);
void KImageFilePreview_DragMoveEvent(KImageFilePreview* self, QDragMoveEvent* event);
void KImageFilePreview_OnDragMoveEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseDragMoveEvent(KImageFilePreview* self, QDragMoveEvent* event);
void KImageFilePreview_DragLeaveEvent(KImageFilePreview* self, QDragLeaveEvent* event);
void KImageFilePreview_OnDragLeaveEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseDragLeaveEvent(KImageFilePreview* self, QDragLeaveEvent* event);
void KImageFilePreview_DropEvent(KImageFilePreview* self, QDropEvent* event);
void KImageFilePreview_OnDropEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseDropEvent(KImageFilePreview* self, QDropEvent* event);
void KImageFilePreview_ShowEvent(KImageFilePreview* self, QShowEvent* event);
void KImageFilePreview_OnShowEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseShowEvent(KImageFilePreview* self, QShowEvent* event);
void KImageFilePreview_HideEvent(KImageFilePreview* self, QHideEvent* event);
void KImageFilePreview_OnHideEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseHideEvent(KImageFilePreview* self, QHideEvent* event);
bool KImageFilePreview_NativeEvent(KImageFilePreview* self, const libqt_string eventType, void* message, intptr_t* result);
void KImageFilePreview_OnNativeEvent(KImageFilePreview* self, intptr_t slot);
bool KImageFilePreview_QBaseNativeEvent(KImageFilePreview* self, const libqt_string eventType, void* message, intptr_t* result);
void KImageFilePreview_ChangeEvent(KImageFilePreview* self, QEvent* param1);
void KImageFilePreview_OnChangeEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseChangeEvent(KImageFilePreview* self, QEvent* param1);
int KImageFilePreview_Metric(const KImageFilePreview* self, int param1);
void KImageFilePreview_OnMetric(const KImageFilePreview* self, intptr_t slot);
int KImageFilePreview_QBaseMetric(const KImageFilePreview* self, int param1);
void KImageFilePreview_InitPainter(const KImageFilePreview* self, QPainter* painter);
void KImageFilePreview_OnInitPainter(const KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseInitPainter(const KImageFilePreview* self, QPainter* painter);
QPaintDevice* KImageFilePreview_Redirected(const KImageFilePreview* self, QPoint* offset);
void KImageFilePreview_OnRedirected(const KImageFilePreview* self, intptr_t slot);
QPaintDevice* KImageFilePreview_QBaseRedirected(const KImageFilePreview* self, QPoint* offset);
QPainter* KImageFilePreview_SharedPainter(const KImageFilePreview* self);
void KImageFilePreview_OnSharedPainter(const KImageFilePreview* self, intptr_t slot);
QPainter* KImageFilePreview_QBaseSharedPainter(const KImageFilePreview* self);
void KImageFilePreview_InputMethodEvent(KImageFilePreview* self, QInputMethodEvent* param1);
void KImageFilePreview_OnInputMethodEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseInputMethodEvent(KImageFilePreview* self, QInputMethodEvent* param1);
QVariant* KImageFilePreview_InputMethodQuery(const KImageFilePreview* self, int param1);
void KImageFilePreview_OnInputMethodQuery(const KImageFilePreview* self, intptr_t slot);
QVariant* KImageFilePreview_QBaseInputMethodQuery(const KImageFilePreview* self, int param1);
bool KImageFilePreview_FocusNextPrevChild(KImageFilePreview* self, bool next);
void KImageFilePreview_OnFocusNextPrevChild(KImageFilePreview* self, intptr_t slot);
bool KImageFilePreview_QBaseFocusNextPrevChild(KImageFilePreview* self, bool next);
bool KImageFilePreview_EventFilter(KImageFilePreview* self, QObject* watched, QEvent* event);
void KImageFilePreview_OnEventFilter(KImageFilePreview* self, intptr_t slot);
bool KImageFilePreview_QBaseEventFilter(KImageFilePreview* self, QObject* watched, QEvent* event);
void KImageFilePreview_TimerEvent(KImageFilePreview* self, QTimerEvent* event);
void KImageFilePreview_OnTimerEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseTimerEvent(KImageFilePreview* self, QTimerEvent* event);
void KImageFilePreview_ChildEvent(KImageFilePreview* self, QChildEvent* event);
void KImageFilePreview_OnChildEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseChildEvent(KImageFilePreview* self, QChildEvent* event);
void KImageFilePreview_CustomEvent(KImageFilePreview* self, QEvent* event);
void KImageFilePreview_OnCustomEvent(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseCustomEvent(KImageFilePreview* self, QEvent* event);
void KImageFilePreview_ConnectNotify(KImageFilePreview* self, const QMetaMethod* signal);
void KImageFilePreview_OnConnectNotify(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseConnectNotify(KImageFilePreview* self, const QMetaMethod* signal);
void KImageFilePreview_DisconnectNotify(KImageFilePreview* self, const QMetaMethod* signal);
void KImageFilePreview_OnDisconnectNotify(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseDisconnectNotify(KImageFilePreview* self, const QMetaMethod* signal);
void KImageFilePreview_ShowPreview2(KImageFilePreview* self);
void KImageFilePreview_OnShowPreview2(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseShowPreview2(KImageFilePreview* self);
void KImageFilePreview_ShowPreview3(KImageFilePreview* self, const QUrl* url, bool force);
void KImageFilePreview_OnShowPreview3(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseShowPreview3(KImageFilePreview* self, const QUrl* url, bool force);
void KImageFilePreview_SetSupportedMimeTypes(KImageFilePreview* self, const libqt_list /* of libqt_string */ mimeTypes);
void KImageFilePreview_OnSetSupportedMimeTypes(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseSetSupportedMimeTypes(KImageFilePreview* self, const libqt_list /* of libqt_string */ mimeTypes);
void KImageFilePreview_UpdateMicroFocus(KImageFilePreview* self);
void KImageFilePreview_OnUpdateMicroFocus(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseUpdateMicroFocus(KImageFilePreview* self);
void KImageFilePreview_Create(KImageFilePreview* self);
void KImageFilePreview_OnCreate(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseCreate(KImageFilePreview* self);
void KImageFilePreview_Destroy(KImageFilePreview* self);
void KImageFilePreview_OnDestroy(KImageFilePreview* self, intptr_t slot);
void KImageFilePreview_QBaseDestroy(KImageFilePreview* self);
bool KImageFilePreview_FocusNextChild(KImageFilePreview* self);
void KImageFilePreview_OnFocusNextChild(KImageFilePreview* self, intptr_t slot);
bool KImageFilePreview_QBaseFocusNextChild(KImageFilePreview* self);
bool KImageFilePreview_FocusPreviousChild(KImageFilePreview* self);
void KImageFilePreview_OnFocusPreviousChild(KImageFilePreview* self, intptr_t slot);
bool KImageFilePreview_QBaseFocusPreviousChild(KImageFilePreview* self);
QObject* KImageFilePreview_Sender(const KImageFilePreview* self);
void KImageFilePreview_OnSender(const KImageFilePreview* self, intptr_t slot);
QObject* KImageFilePreview_QBaseSender(const KImageFilePreview* self);
int KImageFilePreview_SenderSignalIndex(const KImageFilePreview* self);
void KImageFilePreview_OnSenderSignalIndex(const KImageFilePreview* self, intptr_t slot);
int KImageFilePreview_QBaseSenderSignalIndex(const KImageFilePreview* self);
int KImageFilePreview_Receivers(const KImageFilePreview* self, const char* signal);
void KImageFilePreview_OnReceivers(const KImageFilePreview* self, intptr_t slot);
int KImageFilePreview_QBaseReceivers(const KImageFilePreview* self, const char* signal);
bool KImageFilePreview_IsSignalConnected(const KImageFilePreview* self, const QMetaMethod* signal);
void KImageFilePreview_OnIsSignalConnected(const KImageFilePreview* self, intptr_t slot);
bool KImageFilePreview_QBaseIsSignalConnected(const KImageFilePreview* self, const QMetaMethod* signal);
double KImageFilePreview_GetDecodedMetricF(const KImageFilePreview* self, int metricA, int metricB);
void KImageFilePreview_OnGetDecodedMetricF(const KImageFilePreview* self, intptr_t slot);
double KImageFilePreview_QBaseGetDecodedMetricF(const KImageFilePreview* self, int metricA, int metricB);
void KImageFilePreview_Delete(KImageFilePreview* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
