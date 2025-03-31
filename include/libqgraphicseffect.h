#pragma once
#ifndef SRCC_LIBQGRAPHICSEFFECT_H
#define SRCC_LIBQGRAPHICSEFFECT_H

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
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QGraphicsBlurEffect QGraphicsBlurEffect;
typedef struct QGraphicsColorizeEffect QGraphicsColorizeEffect;
typedef struct QGraphicsDropShadowEffect QGraphicsDropShadowEffect;
typedef struct QGraphicsEffect QGraphicsEffect;
typedef struct QGraphicsOpacityEffect QGraphicsOpacityEffect;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QGraphicsBlurEffect::BlurHint BlurHint;       // C++ enum
typedef QGraphicsBlurEffect::BlurHints BlurHints;     // C++ QFlags
typedef QGraphicsEffect::ChangeFlag ChangeFlag;       // C++ enum
typedef QGraphicsEffect::ChangeFlags ChangeFlags;     // C++ QFlags
typedef QGraphicsEffect::PixmapPadMode PixmapPadMode; // C++ enum
#else
typedef int BlurHint;      // C ABI enum
typedef int BlurHints;     // C ABI QFlags
typedef int ChangeFlag;    // C ABI enum
typedef int ChangeFlags;   // C ABI QFlags
typedef int PixmapPadMode; // C ABI enum
#endif

QGraphicsEffect* QGraphicsEffect_new();
QGraphicsEffect* QGraphicsEffect_new2(QObject* parent);
QMetaObject* QGraphicsEffect_MetaObject(const QGraphicsEffect* self);
void* QGraphicsEffect_Metacast(QGraphicsEffect* self, const char* param1);
int QGraphicsEffect_Metacall(QGraphicsEffect* self, int param1, int param2, void** param3);
void QGraphicsEffect_OnMetacall(QGraphicsEffect* self, intptr_t slot);
int QGraphicsEffect_QBaseMetacall(QGraphicsEffect* self, int param1, int param2, void** param3);
libqt_string QGraphicsEffect_Tr(const char* s);
QRectF* QGraphicsEffect_BoundingRectFor(const QGraphicsEffect* self, QRectF* sourceRect);
void QGraphicsEffect_OnBoundingRectFor(const QGraphicsEffect* self, intptr_t slot);
QRectF* QGraphicsEffect_QBaseBoundingRectFor(const QGraphicsEffect* self, QRectF* sourceRect);
QRectF* QGraphicsEffect_BoundingRect(const QGraphicsEffect* self);
bool QGraphicsEffect_IsEnabled(const QGraphicsEffect* self);
void QGraphicsEffect_SetEnabled(QGraphicsEffect* self, bool enable);
void QGraphicsEffect_Update(QGraphicsEffect* self);
void QGraphicsEffect_EnabledChanged(QGraphicsEffect* self, bool enabled);
void QGraphicsEffect_Connect_EnabledChanged(QGraphicsEffect* self, intptr_t slot);
void QGraphicsEffect_Draw(QGraphicsEffect* self, QPainter* painter);
void QGraphicsEffect_OnDraw(QGraphicsEffect* self, intptr_t slot);
void QGraphicsEffect_QBaseDraw(QGraphicsEffect* self, QPainter* painter);
void QGraphicsEffect_SourceChanged(QGraphicsEffect* self, int flags);
void QGraphicsEffect_OnSourceChanged(QGraphicsEffect* self, intptr_t slot);
void QGraphicsEffect_QBaseSourceChanged(QGraphicsEffect* self, int flags);
libqt_string QGraphicsEffect_Tr2(const char* s, const char* c);
libqt_string QGraphicsEffect_Tr3(const char* s, const char* c, int n);
bool QGraphicsEffect_Event(QGraphicsEffect* self, QEvent* event);
void QGraphicsEffect_OnEvent(QGraphicsEffect* self, intptr_t slot);
bool QGraphicsEffect_QBaseEvent(QGraphicsEffect* self, QEvent* event);
bool QGraphicsEffect_EventFilter(QGraphicsEffect* self, QObject* watched, QEvent* event);
void QGraphicsEffect_OnEventFilter(QGraphicsEffect* self, intptr_t slot);
bool QGraphicsEffect_QBaseEventFilter(QGraphicsEffect* self, QObject* watched, QEvent* event);
void QGraphicsEffect_TimerEvent(QGraphicsEffect* self, QTimerEvent* event);
void QGraphicsEffect_OnTimerEvent(QGraphicsEffect* self, intptr_t slot);
void QGraphicsEffect_QBaseTimerEvent(QGraphicsEffect* self, QTimerEvent* event);
void QGraphicsEffect_ChildEvent(QGraphicsEffect* self, QChildEvent* event);
void QGraphicsEffect_OnChildEvent(QGraphicsEffect* self, intptr_t slot);
void QGraphicsEffect_QBaseChildEvent(QGraphicsEffect* self, QChildEvent* event);
void QGraphicsEffect_CustomEvent(QGraphicsEffect* self, QEvent* event);
void QGraphicsEffect_OnCustomEvent(QGraphicsEffect* self, intptr_t slot);
void QGraphicsEffect_QBaseCustomEvent(QGraphicsEffect* self, QEvent* event);
void QGraphicsEffect_ConnectNotify(QGraphicsEffect* self, QMetaMethod* signal);
void QGraphicsEffect_OnConnectNotify(QGraphicsEffect* self, intptr_t slot);
void QGraphicsEffect_QBaseConnectNotify(QGraphicsEffect* self, QMetaMethod* signal);
void QGraphicsEffect_DisconnectNotify(QGraphicsEffect* self, QMetaMethod* signal);
void QGraphicsEffect_OnDisconnectNotify(QGraphicsEffect* self, intptr_t slot);
void QGraphicsEffect_QBaseDisconnectNotify(QGraphicsEffect* self, QMetaMethod* signal);
void QGraphicsEffect_UpdateBoundingRect(QGraphicsEffect* self);
void QGraphicsEffect_OnUpdateBoundingRect(QGraphicsEffect* self, intptr_t slot);
void QGraphicsEffect_QBaseUpdateBoundingRect(QGraphicsEffect* self);
bool QGraphicsEffect_SourceIsPixmap(const QGraphicsEffect* self);
void QGraphicsEffect_OnSourceIsPixmap(const QGraphicsEffect* self, intptr_t slot);
bool QGraphicsEffect_QBaseSourceIsPixmap(const QGraphicsEffect* self);
QRectF* QGraphicsEffect_SourceBoundingRect(const QGraphicsEffect* self);
void QGraphicsEffect_OnSourceBoundingRect(const QGraphicsEffect* self, intptr_t slot);
QRectF* QGraphicsEffect_QBaseSourceBoundingRect(const QGraphicsEffect* self);
void QGraphicsEffect_DrawSource(QGraphicsEffect* self, QPainter* painter);
void QGraphicsEffect_OnDrawSource(QGraphicsEffect* self, intptr_t slot);
void QGraphicsEffect_QBaseDrawSource(QGraphicsEffect* self, QPainter* painter);
QPixmap* QGraphicsEffect_SourcePixmap(const QGraphicsEffect* self);
void QGraphicsEffect_OnSourcePixmap(const QGraphicsEffect* self, intptr_t slot);
QPixmap* QGraphicsEffect_QBaseSourcePixmap(const QGraphicsEffect* self);
QRectF* QGraphicsEffect_SourceBoundingRect1(const QGraphicsEffect* self, int system);
void QGraphicsEffect_OnSourceBoundingRect1(const QGraphicsEffect* self, intptr_t slot);
QRectF* QGraphicsEffect_QBaseSourceBoundingRect1(const QGraphicsEffect* self, int system);
QPixmap* QGraphicsEffect_SourcePixmap1(const QGraphicsEffect* self, int system);
void QGraphicsEffect_OnSourcePixmap1(const QGraphicsEffect* self, intptr_t slot);
QPixmap* QGraphicsEffect_QBaseSourcePixmap1(const QGraphicsEffect* self, int system);
QPixmap* QGraphicsEffect_SourcePixmap2(const QGraphicsEffect* self, int system, QPoint* offset);
void QGraphicsEffect_OnSourcePixmap2(const QGraphicsEffect* self, intptr_t slot);
QPixmap* QGraphicsEffect_QBaseSourcePixmap2(const QGraphicsEffect* self, int system, QPoint* offset);
QPixmap* QGraphicsEffect_SourcePixmap3(const QGraphicsEffect* self, int system, QPoint* offset, int mode);
void QGraphicsEffect_OnSourcePixmap3(const QGraphicsEffect* self, intptr_t slot);
QPixmap* QGraphicsEffect_QBaseSourcePixmap3(const QGraphicsEffect* self, int system, QPoint* offset, int mode);
QObject* QGraphicsEffect_Sender(const QGraphicsEffect* self);
void QGraphicsEffect_OnSender(const QGraphicsEffect* self, intptr_t slot);
QObject* QGraphicsEffect_QBaseSender(const QGraphicsEffect* self);
int QGraphicsEffect_SenderSignalIndex(const QGraphicsEffect* self);
void QGraphicsEffect_OnSenderSignalIndex(const QGraphicsEffect* self, intptr_t slot);
int QGraphicsEffect_QBaseSenderSignalIndex(const QGraphicsEffect* self);
int QGraphicsEffect_Receivers(const QGraphicsEffect* self, const char* signal);
void QGraphicsEffect_OnReceivers(const QGraphicsEffect* self, intptr_t slot);
int QGraphicsEffect_QBaseReceivers(const QGraphicsEffect* self, const char* signal);
bool QGraphicsEffect_IsSignalConnected(const QGraphicsEffect* self, QMetaMethod* signal);
void QGraphicsEffect_OnIsSignalConnected(const QGraphicsEffect* self, intptr_t slot);
bool QGraphicsEffect_QBaseIsSignalConnected(const QGraphicsEffect* self, QMetaMethod* signal);
void QGraphicsEffect_Delete(QGraphicsEffect* self);

QGraphicsColorizeEffect* QGraphicsColorizeEffect_new();
QGraphicsColorizeEffect* QGraphicsColorizeEffect_new2(QObject* parent);
QMetaObject* QGraphicsColorizeEffect_MetaObject(const QGraphicsColorizeEffect* self);
void* QGraphicsColorizeEffect_Metacast(QGraphicsColorizeEffect* self, const char* param1);
int QGraphicsColorizeEffect_Metacall(QGraphicsColorizeEffect* self, int param1, int param2, void** param3);
void QGraphicsColorizeEffect_OnMetacall(QGraphicsColorizeEffect* self, intptr_t slot);
int QGraphicsColorizeEffect_QBaseMetacall(QGraphicsColorizeEffect* self, int param1, int param2, void** param3);
libqt_string QGraphicsColorizeEffect_Tr(const char* s);
QColor* QGraphicsColorizeEffect_Color(const QGraphicsColorizeEffect* self);
double QGraphicsColorizeEffect_Strength(const QGraphicsColorizeEffect* self);
void QGraphicsColorizeEffect_SetColor(QGraphicsColorizeEffect* self, QColor* c);
void QGraphicsColorizeEffect_SetStrength(QGraphicsColorizeEffect* self, double strength);
void QGraphicsColorizeEffect_ColorChanged(QGraphicsColorizeEffect* self, QColor* color);
void QGraphicsColorizeEffect_Connect_ColorChanged(QGraphicsColorizeEffect* self, intptr_t slot);
void QGraphicsColorizeEffect_StrengthChanged(QGraphicsColorizeEffect* self, double strength);
void QGraphicsColorizeEffect_Connect_StrengthChanged(QGraphicsColorizeEffect* self, intptr_t slot);
void QGraphicsColorizeEffect_Draw(QGraphicsColorizeEffect* self, QPainter* painter);
void QGraphicsColorizeEffect_OnDraw(QGraphicsColorizeEffect* self, intptr_t slot);
void QGraphicsColorizeEffect_QBaseDraw(QGraphicsColorizeEffect* self, QPainter* painter);
libqt_string QGraphicsColorizeEffect_Tr2(const char* s, const char* c);
libqt_string QGraphicsColorizeEffect_Tr3(const char* s, const char* c, int n);
QRectF* QGraphicsColorizeEffect_BoundingRectFor(const QGraphicsColorizeEffect* self, QRectF* sourceRect);
void QGraphicsColorizeEffect_OnBoundingRectFor(const QGraphicsColorizeEffect* self, intptr_t slot);
QRectF* QGraphicsColorizeEffect_QBaseBoundingRectFor(const QGraphicsColorizeEffect* self, QRectF* sourceRect);
void QGraphicsColorizeEffect_SourceChanged(QGraphicsColorizeEffect* self, int flags);
void QGraphicsColorizeEffect_OnSourceChanged(QGraphicsColorizeEffect* self, intptr_t slot);
void QGraphicsColorizeEffect_QBaseSourceChanged(QGraphicsColorizeEffect* self, int flags);
bool QGraphicsColorizeEffect_Event(QGraphicsColorizeEffect* self, QEvent* event);
void QGraphicsColorizeEffect_OnEvent(QGraphicsColorizeEffect* self, intptr_t slot);
bool QGraphicsColorizeEffect_QBaseEvent(QGraphicsColorizeEffect* self, QEvent* event);
bool QGraphicsColorizeEffect_EventFilter(QGraphicsColorizeEffect* self, QObject* watched, QEvent* event);
void QGraphicsColorizeEffect_OnEventFilter(QGraphicsColorizeEffect* self, intptr_t slot);
bool QGraphicsColorizeEffect_QBaseEventFilter(QGraphicsColorizeEffect* self, QObject* watched, QEvent* event);
void QGraphicsColorizeEffect_TimerEvent(QGraphicsColorizeEffect* self, QTimerEvent* event);
void QGraphicsColorizeEffect_OnTimerEvent(QGraphicsColorizeEffect* self, intptr_t slot);
void QGraphicsColorizeEffect_QBaseTimerEvent(QGraphicsColorizeEffect* self, QTimerEvent* event);
void QGraphicsColorizeEffect_ChildEvent(QGraphicsColorizeEffect* self, QChildEvent* event);
void QGraphicsColorizeEffect_OnChildEvent(QGraphicsColorizeEffect* self, intptr_t slot);
void QGraphicsColorizeEffect_QBaseChildEvent(QGraphicsColorizeEffect* self, QChildEvent* event);
void QGraphicsColorizeEffect_CustomEvent(QGraphicsColorizeEffect* self, QEvent* event);
void QGraphicsColorizeEffect_OnCustomEvent(QGraphicsColorizeEffect* self, intptr_t slot);
void QGraphicsColorizeEffect_QBaseCustomEvent(QGraphicsColorizeEffect* self, QEvent* event);
void QGraphicsColorizeEffect_ConnectNotify(QGraphicsColorizeEffect* self, QMetaMethod* signal);
void QGraphicsColorizeEffect_OnConnectNotify(QGraphicsColorizeEffect* self, intptr_t slot);
void QGraphicsColorizeEffect_QBaseConnectNotify(QGraphicsColorizeEffect* self, QMetaMethod* signal);
void QGraphicsColorizeEffect_DisconnectNotify(QGraphicsColorizeEffect* self, QMetaMethod* signal);
void QGraphicsColorizeEffect_OnDisconnectNotify(QGraphicsColorizeEffect* self, intptr_t slot);
void QGraphicsColorizeEffect_QBaseDisconnectNotify(QGraphicsColorizeEffect* self, QMetaMethod* signal);
void QGraphicsColorizeEffect_UpdateBoundingRect(QGraphicsColorizeEffect* self);
void QGraphicsColorizeEffect_OnUpdateBoundingRect(QGraphicsColorizeEffect* self, intptr_t slot);
void QGraphicsColorizeEffect_QBaseUpdateBoundingRect(QGraphicsColorizeEffect* self);
bool QGraphicsColorizeEffect_SourceIsPixmap(const QGraphicsColorizeEffect* self);
void QGraphicsColorizeEffect_OnSourceIsPixmap(const QGraphicsColorizeEffect* self, intptr_t slot);
bool QGraphicsColorizeEffect_QBaseSourceIsPixmap(const QGraphicsColorizeEffect* self);
QRectF* QGraphicsColorizeEffect_SourceBoundingRect(const QGraphicsColorizeEffect* self);
void QGraphicsColorizeEffect_OnSourceBoundingRect(const QGraphicsColorizeEffect* self, intptr_t slot);
QRectF* QGraphicsColorizeEffect_QBaseSourceBoundingRect(const QGraphicsColorizeEffect* self);
void QGraphicsColorizeEffect_DrawSource(QGraphicsColorizeEffect* self, QPainter* painter);
void QGraphicsColorizeEffect_OnDrawSource(QGraphicsColorizeEffect* self, intptr_t slot);
void QGraphicsColorizeEffect_QBaseDrawSource(QGraphicsColorizeEffect* self, QPainter* painter);
QPixmap* QGraphicsColorizeEffect_SourcePixmap(const QGraphicsColorizeEffect* self);
void QGraphicsColorizeEffect_OnSourcePixmap(const QGraphicsColorizeEffect* self, intptr_t slot);
QPixmap* QGraphicsColorizeEffect_QBaseSourcePixmap(const QGraphicsColorizeEffect* self);
QObject* QGraphicsColorizeEffect_Sender(const QGraphicsColorizeEffect* self);
void QGraphicsColorizeEffect_OnSender(const QGraphicsColorizeEffect* self, intptr_t slot);
QObject* QGraphicsColorizeEffect_QBaseSender(const QGraphicsColorizeEffect* self);
int QGraphicsColorizeEffect_SenderSignalIndex(const QGraphicsColorizeEffect* self);
void QGraphicsColorizeEffect_OnSenderSignalIndex(const QGraphicsColorizeEffect* self, intptr_t slot);
int QGraphicsColorizeEffect_QBaseSenderSignalIndex(const QGraphicsColorizeEffect* self);
int QGraphicsColorizeEffect_Receivers(const QGraphicsColorizeEffect* self, const char* signal);
void QGraphicsColorizeEffect_OnReceivers(const QGraphicsColorizeEffect* self, intptr_t slot);
int QGraphicsColorizeEffect_QBaseReceivers(const QGraphicsColorizeEffect* self, const char* signal);
bool QGraphicsColorizeEffect_IsSignalConnected(const QGraphicsColorizeEffect* self, QMetaMethod* signal);
void QGraphicsColorizeEffect_OnIsSignalConnected(const QGraphicsColorizeEffect* self, intptr_t slot);
bool QGraphicsColorizeEffect_QBaseIsSignalConnected(const QGraphicsColorizeEffect* self, QMetaMethod* signal);
void QGraphicsColorizeEffect_Delete(QGraphicsColorizeEffect* self);

QGraphicsBlurEffect* QGraphicsBlurEffect_new();
QGraphicsBlurEffect* QGraphicsBlurEffect_new2(QObject* parent);
QMetaObject* QGraphicsBlurEffect_MetaObject(const QGraphicsBlurEffect* self);
void* QGraphicsBlurEffect_Metacast(QGraphicsBlurEffect* self, const char* param1);
int QGraphicsBlurEffect_Metacall(QGraphicsBlurEffect* self, int param1, int param2, void** param3);
void QGraphicsBlurEffect_OnMetacall(QGraphicsBlurEffect* self, intptr_t slot);
int QGraphicsBlurEffect_QBaseMetacall(QGraphicsBlurEffect* self, int param1, int param2, void** param3);
libqt_string QGraphicsBlurEffect_Tr(const char* s);
QRectF* QGraphicsBlurEffect_BoundingRectFor(const QGraphicsBlurEffect* self, QRectF* rect);
void QGraphicsBlurEffect_OnBoundingRectFor(const QGraphicsBlurEffect* self, intptr_t slot);
QRectF* QGraphicsBlurEffect_QBaseBoundingRectFor(const QGraphicsBlurEffect* self, QRectF* rect);
double QGraphicsBlurEffect_BlurRadius(const QGraphicsBlurEffect* self);
int QGraphicsBlurEffect_BlurHints(const QGraphicsBlurEffect* self);
void QGraphicsBlurEffect_SetBlurRadius(QGraphicsBlurEffect* self, double blurRadius);
void QGraphicsBlurEffect_SetBlurHints(QGraphicsBlurEffect* self, int hints);
void QGraphicsBlurEffect_BlurRadiusChanged(QGraphicsBlurEffect* self, double blurRadius);
void QGraphicsBlurEffect_Connect_BlurRadiusChanged(QGraphicsBlurEffect* self, intptr_t slot);
void QGraphicsBlurEffect_BlurHintsChanged(QGraphicsBlurEffect* self, int hints);
void QGraphicsBlurEffect_Connect_BlurHintsChanged(QGraphicsBlurEffect* self, intptr_t slot);
void QGraphicsBlurEffect_Draw(QGraphicsBlurEffect* self, QPainter* painter);
void QGraphicsBlurEffect_OnDraw(QGraphicsBlurEffect* self, intptr_t slot);
void QGraphicsBlurEffect_QBaseDraw(QGraphicsBlurEffect* self, QPainter* painter);
libqt_string QGraphicsBlurEffect_Tr2(const char* s, const char* c);
libqt_string QGraphicsBlurEffect_Tr3(const char* s, const char* c, int n);
void QGraphicsBlurEffect_SourceChanged(QGraphicsBlurEffect* self, int flags);
void QGraphicsBlurEffect_OnSourceChanged(QGraphicsBlurEffect* self, intptr_t slot);
void QGraphicsBlurEffect_QBaseSourceChanged(QGraphicsBlurEffect* self, int flags);
bool QGraphicsBlurEffect_Event(QGraphicsBlurEffect* self, QEvent* event);
void QGraphicsBlurEffect_OnEvent(QGraphicsBlurEffect* self, intptr_t slot);
bool QGraphicsBlurEffect_QBaseEvent(QGraphicsBlurEffect* self, QEvent* event);
bool QGraphicsBlurEffect_EventFilter(QGraphicsBlurEffect* self, QObject* watched, QEvent* event);
void QGraphicsBlurEffect_OnEventFilter(QGraphicsBlurEffect* self, intptr_t slot);
bool QGraphicsBlurEffect_QBaseEventFilter(QGraphicsBlurEffect* self, QObject* watched, QEvent* event);
void QGraphicsBlurEffect_TimerEvent(QGraphicsBlurEffect* self, QTimerEvent* event);
void QGraphicsBlurEffect_OnTimerEvent(QGraphicsBlurEffect* self, intptr_t slot);
void QGraphicsBlurEffect_QBaseTimerEvent(QGraphicsBlurEffect* self, QTimerEvent* event);
void QGraphicsBlurEffect_ChildEvent(QGraphicsBlurEffect* self, QChildEvent* event);
void QGraphicsBlurEffect_OnChildEvent(QGraphicsBlurEffect* self, intptr_t slot);
void QGraphicsBlurEffect_QBaseChildEvent(QGraphicsBlurEffect* self, QChildEvent* event);
void QGraphicsBlurEffect_CustomEvent(QGraphicsBlurEffect* self, QEvent* event);
void QGraphicsBlurEffect_OnCustomEvent(QGraphicsBlurEffect* self, intptr_t slot);
void QGraphicsBlurEffect_QBaseCustomEvent(QGraphicsBlurEffect* self, QEvent* event);
void QGraphicsBlurEffect_ConnectNotify(QGraphicsBlurEffect* self, QMetaMethod* signal);
void QGraphicsBlurEffect_OnConnectNotify(QGraphicsBlurEffect* self, intptr_t slot);
void QGraphicsBlurEffect_QBaseConnectNotify(QGraphicsBlurEffect* self, QMetaMethod* signal);
void QGraphicsBlurEffect_DisconnectNotify(QGraphicsBlurEffect* self, QMetaMethod* signal);
void QGraphicsBlurEffect_OnDisconnectNotify(QGraphicsBlurEffect* self, intptr_t slot);
void QGraphicsBlurEffect_QBaseDisconnectNotify(QGraphicsBlurEffect* self, QMetaMethod* signal);
void QGraphicsBlurEffect_UpdateBoundingRect(QGraphicsBlurEffect* self);
void QGraphicsBlurEffect_OnUpdateBoundingRect(QGraphicsBlurEffect* self, intptr_t slot);
void QGraphicsBlurEffect_QBaseUpdateBoundingRect(QGraphicsBlurEffect* self);
bool QGraphicsBlurEffect_SourceIsPixmap(const QGraphicsBlurEffect* self);
void QGraphicsBlurEffect_OnSourceIsPixmap(const QGraphicsBlurEffect* self, intptr_t slot);
bool QGraphicsBlurEffect_QBaseSourceIsPixmap(const QGraphicsBlurEffect* self);
QRectF* QGraphicsBlurEffect_SourceBoundingRect(const QGraphicsBlurEffect* self);
void QGraphicsBlurEffect_OnSourceBoundingRect(const QGraphicsBlurEffect* self, intptr_t slot);
QRectF* QGraphicsBlurEffect_QBaseSourceBoundingRect(const QGraphicsBlurEffect* self);
void QGraphicsBlurEffect_DrawSource(QGraphicsBlurEffect* self, QPainter* painter);
void QGraphicsBlurEffect_OnDrawSource(QGraphicsBlurEffect* self, intptr_t slot);
void QGraphicsBlurEffect_QBaseDrawSource(QGraphicsBlurEffect* self, QPainter* painter);
QPixmap* QGraphicsBlurEffect_SourcePixmap(const QGraphicsBlurEffect* self);
void QGraphicsBlurEffect_OnSourcePixmap(const QGraphicsBlurEffect* self, intptr_t slot);
QPixmap* QGraphicsBlurEffect_QBaseSourcePixmap(const QGraphicsBlurEffect* self);
QObject* QGraphicsBlurEffect_Sender(const QGraphicsBlurEffect* self);
void QGraphicsBlurEffect_OnSender(const QGraphicsBlurEffect* self, intptr_t slot);
QObject* QGraphicsBlurEffect_QBaseSender(const QGraphicsBlurEffect* self);
int QGraphicsBlurEffect_SenderSignalIndex(const QGraphicsBlurEffect* self);
void QGraphicsBlurEffect_OnSenderSignalIndex(const QGraphicsBlurEffect* self, intptr_t slot);
int QGraphicsBlurEffect_QBaseSenderSignalIndex(const QGraphicsBlurEffect* self);
int QGraphicsBlurEffect_Receivers(const QGraphicsBlurEffect* self, const char* signal);
void QGraphicsBlurEffect_OnReceivers(const QGraphicsBlurEffect* self, intptr_t slot);
int QGraphicsBlurEffect_QBaseReceivers(const QGraphicsBlurEffect* self, const char* signal);
bool QGraphicsBlurEffect_IsSignalConnected(const QGraphicsBlurEffect* self, QMetaMethod* signal);
void QGraphicsBlurEffect_OnIsSignalConnected(const QGraphicsBlurEffect* self, intptr_t slot);
bool QGraphicsBlurEffect_QBaseIsSignalConnected(const QGraphicsBlurEffect* self, QMetaMethod* signal);
void QGraphicsBlurEffect_Delete(QGraphicsBlurEffect* self);

QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new();
QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new2(QObject* parent);
QMetaObject* QGraphicsDropShadowEffect_MetaObject(const QGraphicsDropShadowEffect* self);
void* QGraphicsDropShadowEffect_Metacast(QGraphicsDropShadowEffect* self, const char* param1);
int QGraphicsDropShadowEffect_Metacall(QGraphicsDropShadowEffect* self, int param1, int param2, void** param3);
void QGraphicsDropShadowEffect_OnMetacall(QGraphicsDropShadowEffect* self, intptr_t slot);
int QGraphicsDropShadowEffect_QBaseMetacall(QGraphicsDropShadowEffect* self, int param1, int param2, void** param3);
libqt_string QGraphicsDropShadowEffect_Tr(const char* s);
QRectF* QGraphicsDropShadowEffect_BoundingRectFor(const QGraphicsDropShadowEffect* self, QRectF* rect);
void QGraphicsDropShadowEffect_OnBoundingRectFor(const QGraphicsDropShadowEffect* self, intptr_t slot);
QRectF* QGraphicsDropShadowEffect_QBaseBoundingRectFor(const QGraphicsDropShadowEffect* self, QRectF* rect);
QPointF* QGraphicsDropShadowEffect_Offset(const QGraphicsDropShadowEffect* self);
double QGraphicsDropShadowEffect_XOffset(const QGraphicsDropShadowEffect* self);
double QGraphicsDropShadowEffect_YOffset(const QGraphicsDropShadowEffect* self);
double QGraphicsDropShadowEffect_BlurRadius(const QGraphicsDropShadowEffect* self);
QColor* QGraphicsDropShadowEffect_Color(const QGraphicsDropShadowEffect* self);
void QGraphicsDropShadowEffect_SetOffset(QGraphicsDropShadowEffect* self, QPointF* ofs);
void QGraphicsDropShadowEffect_SetOffset2(QGraphicsDropShadowEffect* self, double dx, double dy);
void QGraphicsDropShadowEffect_SetOffsetWithQreal(QGraphicsDropShadowEffect* self, double d);
void QGraphicsDropShadowEffect_SetXOffset(QGraphicsDropShadowEffect* self, double dx);
void QGraphicsDropShadowEffect_SetYOffset(QGraphicsDropShadowEffect* self, double dy);
void QGraphicsDropShadowEffect_SetBlurRadius(QGraphicsDropShadowEffect* self, double blurRadius);
void QGraphicsDropShadowEffect_SetColor(QGraphicsDropShadowEffect* self, QColor* color);
void QGraphicsDropShadowEffect_OffsetChanged(QGraphicsDropShadowEffect* self, QPointF* offset);
void QGraphicsDropShadowEffect_Connect_OffsetChanged(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_BlurRadiusChanged(QGraphicsDropShadowEffect* self, double blurRadius);
void QGraphicsDropShadowEffect_Connect_BlurRadiusChanged(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_ColorChanged(QGraphicsDropShadowEffect* self, QColor* color);
void QGraphicsDropShadowEffect_Connect_ColorChanged(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_Draw(QGraphicsDropShadowEffect* self, QPainter* painter);
void QGraphicsDropShadowEffect_OnDraw(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_QBaseDraw(QGraphicsDropShadowEffect* self, QPainter* painter);
libqt_string QGraphicsDropShadowEffect_Tr2(const char* s, const char* c);
libqt_string QGraphicsDropShadowEffect_Tr3(const char* s, const char* c, int n);
void QGraphicsDropShadowEffect_SourceChanged(QGraphicsDropShadowEffect* self, int flags);
void QGraphicsDropShadowEffect_OnSourceChanged(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_QBaseSourceChanged(QGraphicsDropShadowEffect* self, int flags);
bool QGraphicsDropShadowEffect_Event(QGraphicsDropShadowEffect* self, QEvent* event);
void QGraphicsDropShadowEffect_OnEvent(QGraphicsDropShadowEffect* self, intptr_t slot);
bool QGraphicsDropShadowEffect_QBaseEvent(QGraphicsDropShadowEffect* self, QEvent* event);
bool QGraphicsDropShadowEffect_EventFilter(QGraphicsDropShadowEffect* self, QObject* watched, QEvent* event);
void QGraphicsDropShadowEffect_OnEventFilter(QGraphicsDropShadowEffect* self, intptr_t slot);
bool QGraphicsDropShadowEffect_QBaseEventFilter(QGraphicsDropShadowEffect* self, QObject* watched, QEvent* event);
void QGraphicsDropShadowEffect_TimerEvent(QGraphicsDropShadowEffect* self, QTimerEvent* event);
void QGraphicsDropShadowEffect_OnTimerEvent(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_QBaseTimerEvent(QGraphicsDropShadowEffect* self, QTimerEvent* event);
void QGraphicsDropShadowEffect_ChildEvent(QGraphicsDropShadowEffect* self, QChildEvent* event);
void QGraphicsDropShadowEffect_OnChildEvent(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_QBaseChildEvent(QGraphicsDropShadowEffect* self, QChildEvent* event);
void QGraphicsDropShadowEffect_CustomEvent(QGraphicsDropShadowEffect* self, QEvent* event);
void QGraphicsDropShadowEffect_OnCustomEvent(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_QBaseCustomEvent(QGraphicsDropShadowEffect* self, QEvent* event);
void QGraphicsDropShadowEffect_ConnectNotify(QGraphicsDropShadowEffect* self, QMetaMethod* signal);
void QGraphicsDropShadowEffect_OnConnectNotify(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_QBaseConnectNotify(QGraphicsDropShadowEffect* self, QMetaMethod* signal);
void QGraphicsDropShadowEffect_DisconnectNotify(QGraphicsDropShadowEffect* self, QMetaMethod* signal);
void QGraphicsDropShadowEffect_OnDisconnectNotify(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_QBaseDisconnectNotify(QGraphicsDropShadowEffect* self, QMetaMethod* signal);
void QGraphicsDropShadowEffect_UpdateBoundingRect(QGraphicsDropShadowEffect* self);
void QGraphicsDropShadowEffect_OnUpdateBoundingRect(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_QBaseUpdateBoundingRect(QGraphicsDropShadowEffect* self);
bool QGraphicsDropShadowEffect_SourceIsPixmap(const QGraphicsDropShadowEffect* self);
void QGraphicsDropShadowEffect_OnSourceIsPixmap(const QGraphicsDropShadowEffect* self, intptr_t slot);
bool QGraphicsDropShadowEffect_QBaseSourceIsPixmap(const QGraphicsDropShadowEffect* self);
QRectF* QGraphicsDropShadowEffect_SourceBoundingRect(const QGraphicsDropShadowEffect* self);
void QGraphicsDropShadowEffect_OnSourceBoundingRect(const QGraphicsDropShadowEffect* self, intptr_t slot);
QRectF* QGraphicsDropShadowEffect_QBaseSourceBoundingRect(const QGraphicsDropShadowEffect* self);
void QGraphicsDropShadowEffect_DrawSource(QGraphicsDropShadowEffect* self, QPainter* painter);
void QGraphicsDropShadowEffect_OnDrawSource(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_QBaseDrawSource(QGraphicsDropShadowEffect* self, QPainter* painter);
QPixmap* QGraphicsDropShadowEffect_SourcePixmap(const QGraphicsDropShadowEffect* self);
void QGraphicsDropShadowEffect_OnSourcePixmap(const QGraphicsDropShadowEffect* self, intptr_t slot);
QPixmap* QGraphicsDropShadowEffect_QBaseSourcePixmap(const QGraphicsDropShadowEffect* self);
QObject* QGraphicsDropShadowEffect_Sender(const QGraphicsDropShadowEffect* self);
void QGraphicsDropShadowEffect_OnSender(const QGraphicsDropShadowEffect* self, intptr_t slot);
QObject* QGraphicsDropShadowEffect_QBaseSender(const QGraphicsDropShadowEffect* self);
int QGraphicsDropShadowEffect_SenderSignalIndex(const QGraphicsDropShadowEffect* self);
void QGraphicsDropShadowEffect_OnSenderSignalIndex(const QGraphicsDropShadowEffect* self, intptr_t slot);
int QGraphicsDropShadowEffect_QBaseSenderSignalIndex(const QGraphicsDropShadowEffect* self);
int QGraphicsDropShadowEffect_Receivers(const QGraphicsDropShadowEffect* self, const char* signal);
void QGraphicsDropShadowEffect_OnReceivers(const QGraphicsDropShadowEffect* self, intptr_t slot);
int QGraphicsDropShadowEffect_QBaseReceivers(const QGraphicsDropShadowEffect* self, const char* signal);
bool QGraphicsDropShadowEffect_IsSignalConnected(const QGraphicsDropShadowEffect* self, QMetaMethod* signal);
void QGraphicsDropShadowEffect_OnIsSignalConnected(const QGraphicsDropShadowEffect* self, intptr_t slot);
bool QGraphicsDropShadowEffect_QBaseIsSignalConnected(const QGraphicsDropShadowEffect* self, QMetaMethod* signal);
void QGraphicsDropShadowEffect_Delete(QGraphicsDropShadowEffect* self);

QGraphicsOpacityEffect* QGraphicsOpacityEffect_new();
QGraphicsOpacityEffect* QGraphicsOpacityEffect_new2(QObject* parent);
QMetaObject* QGraphicsOpacityEffect_MetaObject(const QGraphicsOpacityEffect* self);
void* QGraphicsOpacityEffect_Metacast(QGraphicsOpacityEffect* self, const char* param1);
int QGraphicsOpacityEffect_Metacall(QGraphicsOpacityEffect* self, int param1, int param2, void** param3);
void QGraphicsOpacityEffect_OnMetacall(QGraphicsOpacityEffect* self, intptr_t slot);
int QGraphicsOpacityEffect_QBaseMetacall(QGraphicsOpacityEffect* self, int param1, int param2, void** param3);
libqt_string QGraphicsOpacityEffect_Tr(const char* s);
double QGraphicsOpacityEffect_Opacity(const QGraphicsOpacityEffect* self);
QBrush* QGraphicsOpacityEffect_OpacityMask(const QGraphicsOpacityEffect* self);
void QGraphicsOpacityEffect_SetOpacity(QGraphicsOpacityEffect* self, double opacity);
void QGraphicsOpacityEffect_SetOpacityMask(QGraphicsOpacityEffect* self, QBrush* mask);
void QGraphicsOpacityEffect_OpacityChanged(QGraphicsOpacityEffect* self, double opacity);
void QGraphicsOpacityEffect_Connect_OpacityChanged(QGraphicsOpacityEffect* self, intptr_t slot);
void QGraphicsOpacityEffect_OpacityMaskChanged(QGraphicsOpacityEffect* self, QBrush* mask);
void QGraphicsOpacityEffect_Connect_OpacityMaskChanged(QGraphicsOpacityEffect* self, intptr_t slot);
void QGraphicsOpacityEffect_Draw(QGraphicsOpacityEffect* self, QPainter* painter);
void QGraphicsOpacityEffect_OnDraw(QGraphicsOpacityEffect* self, intptr_t slot);
void QGraphicsOpacityEffect_QBaseDraw(QGraphicsOpacityEffect* self, QPainter* painter);
libqt_string QGraphicsOpacityEffect_Tr2(const char* s, const char* c);
libqt_string QGraphicsOpacityEffect_Tr3(const char* s, const char* c, int n);
QRectF* QGraphicsOpacityEffect_BoundingRectFor(const QGraphicsOpacityEffect* self, QRectF* sourceRect);
void QGraphicsOpacityEffect_OnBoundingRectFor(const QGraphicsOpacityEffect* self, intptr_t slot);
QRectF* QGraphicsOpacityEffect_QBaseBoundingRectFor(const QGraphicsOpacityEffect* self, QRectF* sourceRect);
void QGraphicsOpacityEffect_SourceChanged(QGraphicsOpacityEffect* self, int flags);
void QGraphicsOpacityEffect_OnSourceChanged(QGraphicsOpacityEffect* self, intptr_t slot);
void QGraphicsOpacityEffect_QBaseSourceChanged(QGraphicsOpacityEffect* self, int flags);
bool QGraphicsOpacityEffect_Event(QGraphicsOpacityEffect* self, QEvent* event);
void QGraphicsOpacityEffect_OnEvent(QGraphicsOpacityEffect* self, intptr_t slot);
bool QGraphicsOpacityEffect_QBaseEvent(QGraphicsOpacityEffect* self, QEvent* event);
bool QGraphicsOpacityEffect_EventFilter(QGraphicsOpacityEffect* self, QObject* watched, QEvent* event);
void QGraphicsOpacityEffect_OnEventFilter(QGraphicsOpacityEffect* self, intptr_t slot);
bool QGraphicsOpacityEffect_QBaseEventFilter(QGraphicsOpacityEffect* self, QObject* watched, QEvent* event);
void QGraphicsOpacityEffect_TimerEvent(QGraphicsOpacityEffect* self, QTimerEvent* event);
void QGraphicsOpacityEffect_OnTimerEvent(QGraphicsOpacityEffect* self, intptr_t slot);
void QGraphicsOpacityEffect_QBaseTimerEvent(QGraphicsOpacityEffect* self, QTimerEvent* event);
void QGraphicsOpacityEffect_ChildEvent(QGraphicsOpacityEffect* self, QChildEvent* event);
void QGraphicsOpacityEffect_OnChildEvent(QGraphicsOpacityEffect* self, intptr_t slot);
void QGraphicsOpacityEffect_QBaseChildEvent(QGraphicsOpacityEffect* self, QChildEvent* event);
void QGraphicsOpacityEffect_CustomEvent(QGraphicsOpacityEffect* self, QEvent* event);
void QGraphicsOpacityEffect_OnCustomEvent(QGraphicsOpacityEffect* self, intptr_t slot);
void QGraphicsOpacityEffect_QBaseCustomEvent(QGraphicsOpacityEffect* self, QEvent* event);
void QGraphicsOpacityEffect_ConnectNotify(QGraphicsOpacityEffect* self, QMetaMethod* signal);
void QGraphicsOpacityEffect_OnConnectNotify(QGraphicsOpacityEffect* self, intptr_t slot);
void QGraphicsOpacityEffect_QBaseConnectNotify(QGraphicsOpacityEffect* self, QMetaMethod* signal);
void QGraphicsOpacityEffect_DisconnectNotify(QGraphicsOpacityEffect* self, QMetaMethod* signal);
void QGraphicsOpacityEffect_OnDisconnectNotify(QGraphicsOpacityEffect* self, intptr_t slot);
void QGraphicsOpacityEffect_QBaseDisconnectNotify(QGraphicsOpacityEffect* self, QMetaMethod* signal);
void QGraphicsOpacityEffect_UpdateBoundingRect(QGraphicsOpacityEffect* self);
void QGraphicsOpacityEffect_OnUpdateBoundingRect(QGraphicsOpacityEffect* self, intptr_t slot);
void QGraphicsOpacityEffect_QBaseUpdateBoundingRect(QGraphicsOpacityEffect* self);
bool QGraphicsOpacityEffect_SourceIsPixmap(const QGraphicsOpacityEffect* self);
void QGraphicsOpacityEffect_OnSourceIsPixmap(const QGraphicsOpacityEffect* self, intptr_t slot);
bool QGraphicsOpacityEffect_QBaseSourceIsPixmap(const QGraphicsOpacityEffect* self);
QRectF* QGraphicsOpacityEffect_SourceBoundingRect(const QGraphicsOpacityEffect* self);
void QGraphicsOpacityEffect_OnSourceBoundingRect(const QGraphicsOpacityEffect* self, intptr_t slot);
QRectF* QGraphicsOpacityEffect_QBaseSourceBoundingRect(const QGraphicsOpacityEffect* self);
void QGraphicsOpacityEffect_DrawSource(QGraphicsOpacityEffect* self, QPainter* painter);
void QGraphicsOpacityEffect_OnDrawSource(QGraphicsOpacityEffect* self, intptr_t slot);
void QGraphicsOpacityEffect_QBaseDrawSource(QGraphicsOpacityEffect* self, QPainter* painter);
QPixmap* QGraphicsOpacityEffect_SourcePixmap(const QGraphicsOpacityEffect* self);
void QGraphicsOpacityEffect_OnSourcePixmap(const QGraphicsOpacityEffect* self, intptr_t slot);
QPixmap* QGraphicsOpacityEffect_QBaseSourcePixmap(const QGraphicsOpacityEffect* self);
QObject* QGraphicsOpacityEffect_Sender(const QGraphicsOpacityEffect* self);
void QGraphicsOpacityEffect_OnSender(const QGraphicsOpacityEffect* self, intptr_t slot);
QObject* QGraphicsOpacityEffect_QBaseSender(const QGraphicsOpacityEffect* self);
int QGraphicsOpacityEffect_SenderSignalIndex(const QGraphicsOpacityEffect* self);
void QGraphicsOpacityEffect_OnSenderSignalIndex(const QGraphicsOpacityEffect* self, intptr_t slot);
int QGraphicsOpacityEffect_QBaseSenderSignalIndex(const QGraphicsOpacityEffect* self);
int QGraphicsOpacityEffect_Receivers(const QGraphicsOpacityEffect* self, const char* signal);
void QGraphicsOpacityEffect_OnReceivers(const QGraphicsOpacityEffect* self, intptr_t slot);
int QGraphicsOpacityEffect_QBaseReceivers(const QGraphicsOpacityEffect* self, const char* signal);
bool QGraphicsOpacityEffect_IsSignalConnected(const QGraphicsOpacityEffect* self, QMetaMethod* signal);
void QGraphicsOpacityEffect_OnIsSignalConnected(const QGraphicsOpacityEffect* self, intptr_t slot);
bool QGraphicsOpacityEffect_QBaseIsSignalConnected(const QGraphicsOpacityEffect* self, QMetaMethod* signal);
void QGraphicsOpacityEffect_Delete(QGraphicsOpacityEffect* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
