#pragma once
#ifndef SRC_EXTRAS_KSVGC_LIBFRAMESVG_H
#define SRC_EXTRAS_KSVGC_LIBFRAMESVG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KSvg__FrameSvg)
typedef KSvg::FrameSvg KSvg__FrameSvg;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KSvg__Svg)
typedef KSvg::Svg KSvg__Svg;
#endif
#else
typedef struct KSvg__FrameSvg KSvg__FrameSvg;
typedef struct KSvg__Svg KSvg__Svg;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
typedef struct QSizeF QSizeF;
typedef struct QTimerEvent QTimerEvent;
#endif

KSvg__FrameSvg* KSvg__FrameSvg_new();
KSvg__FrameSvg* KSvg__FrameSvg_new2(QObject* parent);
QMetaObject* KSvg__FrameSvg_MetaObject(const KSvg__FrameSvg* self);
void* KSvg__FrameSvg_Metacast(KSvg__FrameSvg* self, const char* param1);
int KSvg__FrameSvg_Metacall(KSvg__FrameSvg* self, int param1, int param2, void** param3);
libqt_string KSvg__FrameSvg_Tr(const char* s);
void KSvg__FrameSvg_SetImagePath(KSvg__FrameSvg* self, const libqt_string path);
void KSvg__FrameSvg_SetEnabledBorders(KSvg__FrameSvg* self, const int borders);
int KSvg__FrameSvg_EnabledBorders(const KSvg__FrameSvg* self);
void KSvg__FrameSvg_ResizeFrame(KSvg__FrameSvg* self, const QSizeF* size);
QSizeF* KSvg__FrameSvg_FrameSize(const KSvg__FrameSvg* self);
double KSvg__FrameSvg_MarginSize(const KSvg__FrameSvg* self, const int edge);
void KSvg__FrameSvg_GetMargins(const KSvg__FrameSvg* self, double* left, double* top, double* right, double* bottom);
double KSvg__FrameSvg_FixedMarginSize(const KSvg__FrameSvg* self, const int edge);
void KSvg__FrameSvg_GetFixedMargins(const KSvg__FrameSvg* self, double* left, double* top, double* right, double* bottom);
double KSvg__FrameSvg_InsetSize(const KSvg__FrameSvg* self, const int edge);
void KSvg__FrameSvg_GetInset(const KSvg__FrameSvg* self, double* left, double* top, double* right, double* bottom);
QRectF* KSvg__FrameSvg_ContentsRect(const KSvg__FrameSvg* self);
void KSvg__FrameSvg_SetElementPrefix(KSvg__FrameSvg* self, int location);
void KSvg__FrameSvg_SetElementPrefix2(KSvg__FrameSvg* self, const libqt_string prefix);
bool KSvg__FrameSvg_HasElementPrefix(const KSvg__FrameSvg* self, const libqt_string prefix);
bool KSvg__FrameSvg_HasElementPrefix2(const KSvg__FrameSvg* self, int location);
libqt_string KSvg__FrameSvg_Prefix(KSvg__FrameSvg* self);
QRegion* KSvg__FrameSvg_Mask(const KSvg__FrameSvg* self);
QPixmap* KSvg__FrameSvg_AlphaMask(const KSvg__FrameSvg* self);
void KSvg__FrameSvg_SetCacheAllRenderedFrames(KSvg__FrameSvg* self, bool cache);
bool KSvg__FrameSvg_CacheAllRenderedFrames(const KSvg__FrameSvg* self);
void KSvg__FrameSvg_ClearCache(KSvg__FrameSvg* self);
QPixmap* KSvg__FrameSvg_FramePixmap(KSvg__FrameSvg* self);
void KSvg__FrameSvg_PaintFrame(KSvg__FrameSvg* self, QPainter* painter, const QRectF* target);
void KSvg__FrameSvg_PaintFrame2(KSvg__FrameSvg* self, QPainter* painter);
libqt_string KSvg__FrameSvg_ActualPrefix(const KSvg__FrameSvg* self);
bool KSvg__FrameSvg_IsRepaintBlocked(const KSvg__FrameSvg* self);
void KSvg__FrameSvg_SetRepaintBlocked(KSvg__FrameSvg* self, bool blocked);
int KSvg__FrameSvg_MinimumDrawingHeight(KSvg__FrameSvg* self);
int KSvg__FrameSvg_MinimumDrawingWidth(KSvg__FrameSvg* self);
libqt_string KSvg__FrameSvg_Tr2(const char* s, const char* c);
libqt_string KSvg__FrameSvg_Tr3(const char* s, const char* c, int n);
void KSvg__FrameSvg_PaintFrame3(KSvg__FrameSvg* self, QPainter* painter, const QRectF* target, const QRectF* source);
void KSvg__FrameSvg_PaintFrame22(KSvg__FrameSvg* self, QPainter* painter, const QPointF* pos);
void KSvg__FrameSvg_OnMetacall(KSvg__FrameSvg* self, intptr_t slot);
int KSvg__FrameSvg_QBaseMetacall(KSvg__FrameSvg* self, int param1, int param2, void** param3);
void KSvg__FrameSvg_OnSetImagePath(KSvg__FrameSvg* self, intptr_t slot);
void KSvg__FrameSvg_QBaseSetImagePath(KSvg__FrameSvg* self, const libqt_string path);
bool KSvg__FrameSvg_Event(KSvg__FrameSvg* self, QEvent* event);
void KSvg__FrameSvg_OnEvent(KSvg__FrameSvg* self, intptr_t slot);
bool KSvg__FrameSvg_QBaseEvent(KSvg__FrameSvg* self, QEvent* event);
void KSvg__FrameSvg_TimerEvent(KSvg__FrameSvg* self, QTimerEvent* event);
void KSvg__FrameSvg_OnTimerEvent(KSvg__FrameSvg* self, intptr_t slot);
void KSvg__FrameSvg_QBaseTimerEvent(KSvg__FrameSvg* self, QTimerEvent* event);
void KSvg__FrameSvg_ChildEvent(KSvg__FrameSvg* self, QChildEvent* event);
void KSvg__FrameSvg_OnChildEvent(KSvg__FrameSvg* self, intptr_t slot);
void KSvg__FrameSvg_QBaseChildEvent(KSvg__FrameSvg* self, QChildEvent* event);
void KSvg__FrameSvg_CustomEvent(KSvg__FrameSvg* self, QEvent* event);
void KSvg__FrameSvg_OnCustomEvent(KSvg__FrameSvg* self, intptr_t slot);
void KSvg__FrameSvg_QBaseCustomEvent(KSvg__FrameSvg* self, QEvent* event);
void KSvg__FrameSvg_ConnectNotify(KSvg__FrameSvg* self, const QMetaMethod* signal);
void KSvg__FrameSvg_OnConnectNotify(KSvg__FrameSvg* self, intptr_t slot);
void KSvg__FrameSvg_QBaseConnectNotify(KSvg__FrameSvg* self, const QMetaMethod* signal);
void KSvg__FrameSvg_DisconnectNotify(KSvg__FrameSvg* self, const QMetaMethod* signal);
void KSvg__FrameSvg_OnDisconnectNotify(KSvg__FrameSvg* self, intptr_t slot);
void KSvg__FrameSvg_QBaseDisconnectNotify(KSvg__FrameSvg* self, const QMetaMethod* signal);
QObject* KSvg__FrameSvg_Sender(const KSvg__FrameSvg* self);
void KSvg__FrameSvg_OnSender(const KSvg__FrameSvg* self, intptr_t slot);
QObject* KSvg__FrameSvg_QBaseSender(const KSvg__FrameSvg* self);
int KSvg__FrameSvg_SenderSignalIndex(const KSvg__FrameSvg* self);
void KSvg__FrameSvg_OnSenderSignalIndex(const KSvg__FrameSvg* self, intptr_t slot);
int KSvg__FrameSvg_QBaseSenderSignalIndex(const KSvg__FrameSvg* self);
int KSvg__FrameSvg_Receivers(const KSvg__FrameSvg* self, const char* signal);
void KSvg__FrameSvg_OnReceivers(const KSvg__FrameSvg* self, intptr_t slot);
int KSvg__FrameSvg_QBaseReceivers(const KSvg__FrameSvg* self, const char* signal);
bool KSvg__FrameSvg_IsSignalConnected(const KSvg__FrameSvg* self, const QMetaMethod* signal);
void KSvg__FrameSvg_OnIsSignalConnected(const KSvg__FrameSvg* self, intptr_t slot);
bool KSvg__FrameSvg_QBaseIsSignalConnected(const KSvg__FrameSvg* self, const QMetaMethod* signal);
void KSvg__FrameSvg_Delete(KSvg__FrameSvg* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
