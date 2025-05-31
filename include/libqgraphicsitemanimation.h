#pragma once
#ifndef SRCC_LIBQGRAPHICSITEMANIMATION_H
#define SRCC_LIBQGRAPHICSITEMANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsItemAnimation QGraphicsItemAnimation;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPointF QPointF;
typedef struct QTimeLine QTimeLine;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTransform QTransform;
#endif

QGraphicsItemAnimation* QGraphicsItemAnimation_new();
QGraphicsItemAnimation* QGraphicsItemAnimation_new2(QObject* parent);
QMetaObject* QGraphicsItemAnimation_MetaObject(const QGraphicsItemAnimation* self);
void* QGraphicsItemAnimation_Metacast(QGraphicsItemAnimation* self, const char* param1);
int QGraphicsItemAnimation_Metacall(QGraphicsItemAnimation* self, int param1, int param2, void** param3);
void QGraphicsItemAnimation_OnMetacall(QGraphicsItemAnimation* self, intptr_t slot);
int QGraphicsItemAnimation_QBaseMetacall(QGraphicsItemAnimation* self, int param1, int param2, void** param3);
libqt_string QGraphicsItemAnimation_Tr(const char* s);
QGraphicsItem* QGraphicsItemAnimation_Item(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetItem(QGraphicsItemAnimation* self, QGraphicsItem* item);
QTimeLine* QGraphicsItemAnimation_TimeLine(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetTimeLine(QGraphicsItemAnimation* self, QTimeLine* timeLine);
QPointF* QGraphicsItemAnimation_PosAt(const QGraphicsItemAnimation* self, double step);
libqt_list /* of libqt_pair  tuple of double and QPointF*  */ QGraphicsItemAnimation_PosList(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetPosAt(QGraphicsItemAnimation* self, double step, const QPointF* pos);
QTransform* QGraphicsItemAnimation_TransformAt(const QGraphicsItemAnimation* self, double step);
double QGraphicsItemAnimation_RotationAt(const QGraphicsItemAnimation* self, double step);
libqt_list /* of libqt_pair  tuple of double and double  */ QGraphicsItemAnimation_RotationList(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetRotationAt(QGraphicsItemAnimation* self, double step, double angle);
double QGraphicsItemAnimation_XTranslationAt(const QGraphicsItemAnimation* self, double step);
double QGraphicsItemAnimation_YTranslationAt(const QGraphicsItemAnimation* self, double step);
libqt_list /* of libqt_pair  tuple of double and QPointF*  */ QGraphicsItemAnimation_TranslationList(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetTranslationAt(QGraphicsItemAnimation* self, double step, double dx, double dy);
double QGraphicsItemAnimation_VerticalScaleAt(const QGraphicsItemAnimation* self, double step);
double QGraphicsItemAnimation_HorizontalScaleAt(const QGraphicsItemAnimation* self, double step);
libqt_list /* of libqt_pair  tuple of double and QPointF*  */ QGraphicsItemAnimation_ScaleList(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetScaleAt(QGraphicsItemAnimation* self, double step, double sx, double sy);
double QGraphicsItemAnimation_VerticalShearAt(const QGraphicsItemAnimation* self, double step);
double QGraphicsItemAnimation_HorizontalShearAt(const QGraphicsItemAnimation* self, double step);
libqt_list /* of libqt_pair  tuple of double and QPointF*  */ QGraphicsItemAnimation_ShearList(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetShearAt(QGraphicsItemAnimation* self, double step, double sh, double sv);
void QGraphicsItemAnimation_Clear(QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetStep(QGraphicsItemAnimation* self, double x);
void QGraphicsItemAnimation_BeforeAnimationStep(QGraphicsItemAnimation* self, double step);
void QGraphicsItemAnimation_OnBeforeAnimationStep(QGraphicsItemAnimation* self, intptr_t slot);
void QGraphicsItemAnimation_QBaseBeforeAnimationStep(QGraphicsItemAnimation* self, double step);
void QGraphicsItemAnimation_AfterAnimationStep(QGraphicsItemAnimation* self, double step);
void QGraphicsItemAnimation_OnAfterAnimationStep(QGraphicsItemAnimation* self, intptr_t slot);
void QGraphicsItemAnimation_QBaseAfterAnimationStep(QGraphicsItemAnimation* self, double step);
libqt_string QGraphicsItemAnimation_Tr2(const char* s, const char* c);
libqt_string QGraphicsItemAnimation_Tr3(const char* s, const char* c, int n);
bool QGraphicsItemAnimation_Event(QGraphicsItemAnimation* self, QEvent* event);
void QGraphicsItemAnimation_OnEvent(QGraphicsItemAnimation* self, intptr_t slot);
bool QGraphicsItemAnimation_QBaseEvent(QGraphicsItemAnimation* self, QEvent* event);
bool QGraphicsItemAnimation_EventFilter(QGraphicsItemAnimation* self, QObject* watched, QEvent* event);
void QGraphicsItemAnimation_OnEventFilter(QGraphicsItemAnimation* self, intptr_t slot);
bool QGraphicsItemAnimation_QBaseEventFilter(QGraphicsItemAnimation* self, QObject* watched, QEvent* event);
void QGraphicsItemAnimation_TimerEvent(QGraphicsItemAnimation* self, QTimerEvent* event);
void QGraphicsItemAnimation_OnTimerEvent(QGraphicsItemAnimation* self, intptr_t slot);
void QGraphicsItemAnimation_QBaseTimerEvent(QGraphicsItemAnimation* self, QTimerEvent* event);
void QGraphicsItemAnimation_ChildEvent(QGraphicsItemAnimation* self, QChildEvent* event);
void QGraphicsItemAnimation_OnChildEvent(QGraphicsItemAnimation* self, intptr_t slot);
void QGraphicsItemAnimation_QBaseChildEvent(QGraphicsItemAnimation* self, QChildEvent* event);
void QGraphicsItemAnimation_CustomEvent(QGraphicsItemAnimation* self, QEvent* event);
void QGraphicsItemAnimation_OnCustomEvent(QGraphicsItemAnimation* self, intptr_t slot);
void QGraphicsItemAnimation_QBaseCustomEvent(QGraphicsItemAnimation* self, QEvent* event);
void QGraphicsItemAnimation_ConnectNotify(QGraphicsItemAnimation* self, const QMetaMethod* signal);
void QGraphicsItemAnimation_OnConnectNotify(QGraphicsItemAnimation* self, intptr_t slot);
void QGraphicsItemAnimation_QBaseConnectNotify(QGraphicsItemAnimation* self, const QMetaMethod* signal);
void QGraphicsItemAnimation_DisconnectNotify(QGraphicsItemAnimation* self, const QMetaMethod* signal);
void QGraphicsItemAnimation_OnDisconnectNotify(QGraphicsItemAnimation* self, intptr_t slot);
void QGraphicsItemAnimation_QBaseDisconnectNotify(QGraphicsItemAnimation* self, const QMetaMethod* signal);
QObject* QGraphicsItemAnimation_Sender(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_OnSender(const QGraphicsItemAnimation* self, intptr_t slot);
QObject* QGraphicsItemAnimation_QBaseSender(const QGraphicsItemAnimation* self);
int QGraphicsItemAnimation_SenderSignalIndex(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_OnSenderSignalIndex(const QGraphicsItemAnimation* self, intptr_t slot);
int QGraphicsItemAnimation_QBaseSenderSignalIndex(const QGraphicsItemAnimation* self);
int QGraphicsItemAnimation_Receivers(const QGraphicsItemAnimation* self, const char* signal);
void QGraphicsItemAnimation_OnReceivers(const QGraphicsItemAnimation* self, intptr_t slot);
int QGraphicsItemAnimation_QBaseReceivers(const QGraphicsItemAnimation* self, const char* signal);
bool QGraphicsItemAnimation_IsSignalConnected(const QGraphicsItemAnimation* self, const QMetaMethod* signal);
void QGraphicsItemAnimation_OnIsSignalConnected(const QGraphicsItemAnimation* self, intptr_t slot);
bool QGraphicsItemAnimation_QBaseIsSignalConnected(const QGraphicsItemAnimation* self, const QMetaMethod* signal);
void QGraphicsItemAnimation_Delete(QGraphicsItemAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
