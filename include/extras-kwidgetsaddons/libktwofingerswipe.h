#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKTWOFINGERSWIPE_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKTWOFINGERSWIPE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KTwoFingerSwipe KTwoFingerSwipe;
typedef struct KTwoFingerSwipeRecognizer KTwoFingerSwipeRecognizer;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QGesture QGesture;
typedef struct QGestureRecognizer QGestureRecognizer;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPointF QPointF;
typedef struct QTimerEvent QTimerEvent;
#endif

KTwoFingerSwipe* KTwoFingerSwipe_new();
KTwoFingerSwipe* KTwoFingerSwipe_new2(QObject* parent);
QMetaObject* KTwoFingerSwipe_MetaObject(const KTwoFingerSwipe* self);
void* KTwoFingerSwipe_Metacast(KTwoFingerSwipe* self, const char* param1);
int KTwoFingerSwipe_Metacall(KTwoFingerSwipe* self, int param1, int param2, void** param3);
libqt_string KTwoFingerSwipe_Tr(const char* s);
QPointF* KTwoFingerSwipe_Pos(const KTwoFingerSwipe* self);
void KTwoFingerSwipe_SetPos(KTwoFingerSwipe* self, QPointF* pos);
QPointF* KTwoFingerSwipe_ScreenPos(const KTwoFingerSwipe* self);
void KTwoFingerSwipe_SetScreenPos(KTwoFingerSwipe* self, QPointF* screenPos);
QPointF* KTwoFingerSwipe_ScenePos(const KTwoFingerSwipe* self);
void KTwoFingerSwipe_SetScenePos(KTwoFingerSwipe* self, QPointF* scenePos);
double KTwoFingerSwipe_SwipeAngle(const KTwoFingerSwipe* self);
void KTwoFingerSwipe_SetSwipeAngle(KTwoFingerSwipe* self, double swipeAngle);
libqt_string KTwoFingerSwipe_Tr2(const char* s, const char* c);
libqt_string KTwoFingerSwipe_Tr3(const char* s, const char* c, int n);
void KTwoFingerSwipe_OnMetacall(KTwoFingerSwipe* self, intptr_t slot);
int KTwoFingerSwipe_QBaseMetacall(KTwoFingerSwipe* self, int param1, int param2, void** param3);
bool KTwoFingerSwipe_Event(KTwoFingerSwipe* self, QEvent* event);
void KTwoFingerSwipe_OnEvent(KTwoFingerSwipe* self, intptr_t slot);
bool KTwoFingerSwipe_QBaseEvent(KTwoFingerSwipe* self, QEvent* event);
bool KTwoFingerSwipe_EventFilter(KTwoFingerSwipe* self, QObject* watched, QEvent* event);
void KTwoFingerSwipe_OnEventFilter(KTwoFingerSwipe* self, intptr_t slot);
bool KTwoFingerSwipe_QBaseEventFilter(KTwoFingerSwipe* self, QObject* watched, QEvent* event);
void KTwoFingerSwipe_TimerEvent(KTwoFingerSwipe* self, QTimerEvent* event);
void KTwoFingerSwipe_OnTimerEvent(KTwoFingerSwipe* self, intptr_t slot);
void KTwoFingerSwipe_QBaseTimerEvent(KTwoFingerSwipe* self, QTimerEvent* event);
void KTwoFingerSwipe_ChildEvent(KTwoFingerSwipe* self, QChildEvent* event);
void KTwoFingerSwipe_OnChildEvent(KTwoFingerSwipe* self, intptr_t slot);
void KTwoFingerSwipe_QBaseChildEvent(KTwoFingerSwipe* self, QChildEvent* event);
void KTwoFingerSwipe_CustomEvent(KTwoFingerSwipe* self, QEvent* event);
void KTwoFingerSwipe_OnCustomEvent(KTwoFingerSwipe* self, intptr_t slot);
void KTwoFingerSwipe_QBaseCustomEvent(KTwoFingerSwipe* self, QEvent* event);
void KTwoFingerSwipe_ConnectNotify(KTwoFingerSwipe* self, const QMetaMethod* signal);
void KTwoFingerSwipe_OnConnectNotify(KTwoFingerSwipe* self, intptr_t slot);
void KTwoFingerSwipe_QBaseConnectNotify(KTwoFingerSwipe* self, const QMetaMethod* signal);
void KTwoFingerSwipe_DisconnectNotify(KTwoFingerSwipe* self, const QMetaMethod* signal);
void KTwoFingerSwipe_OnDisconnectNotify(KTwoFingerSwipe* self, intptr_t slot);
void KTwoFingerSwipe_QBaseDisconnectNotify(KTwoFingerSwipe* self, const QMetaMethod* signal);
QObject* KTwoFingerSwipe_Sender(const KTwoFingerSwipe* self);
void KTwoFingerSwipe_OnSender(const KTwoFingerSwipe* self, intptr_t slot);
QObject* KTwoFingerSwipe_QBaseSender(const KTwoFingerSwipe* self);
int KTwoFingerSwipe_SenderSignalIndex(const KTwoFingerSwipe* self);
void KTwoFingerSwipe_OnSenderSignalIndex(const KTwoFingerSwipe* self, intptr_t slot);
int KTwoFingerSwipe_QBaseSenderSignalIndex(const KTwoFingerSwipe* self);
int KTwoFingerSwipe_Receivers(const KTwoFingerSwipe* self, const char* signal);
void KTwoFingerSwipe_OnReceivers(const KTwoFingerSwipe* self, intptr_t slot);
int KTwoFingerSwipe_QBaseReceivers(const KTwoFingerSwipe* self, const char* signal);
bool KTwoFingerSwipe_IsSignalConnected(const KTwoFingerSwipe* self, const QMetaMethod* signal);
void KTwoFingerSwipe_OnIsSignalConnected(const KTwoFingerSwipe* self, intptr_t slot);
bool KTwoFingerSwipe_QBaseIsSignalConnected(const KTwoFingerSwipe* self, const QMetaMethod* signal);
void KTwoFingerSwipe_Delete(KTwoFingerSwipe* self);

KTwoFingerSwipeRecognizer* KTwoFingerSwipeRecognizer_new();
QGesture* KTwoFingerSwipeRecognizer_Create(KTwoFingerSwipeRecognizer* self, QObject* target);
int KTwoFingerSwipeRecognizer_Recognize(KTwoFingerSwipeRecognizer* self, QGesture* gesture, QObject* watched, QEvent* event);
int KTwoFingerSwipeRecognizer_MaxSwipeTime(const KTwoFingerSwipeRecognizer* self);
void KTwoFingerSwipeRecognizer_SetMaxSwipeTime(KTwoFingerSwipeRecognizer* self, int i);
int KTwoFingerSwipeRecognizer_MinSswipeDistance(const KTwoFingerSwipeRecognizer* self);
void KTwoFingerSwipeRecognizer_SetSwipeDistance(KTwoFingerSwipeRecognizer* self, int i);
void KTwoFingerSwipeRecognizer_OnCreate(KTwoFingerSwipeRecognizer* self, intptr_t slot);
QGesture* KTwoFingerSwipeRecognizer_QBaseCreate(KTwoFingerSwipeRecognizer* self, QObject* target);
void KTwoFingerSwipeRecognizer_OnRecognize(KTwoFingerSwipeRecognizer* self, intptr_t slot);
int KTwoFingerSwipeRecognizer_QBaseRecognize(KTwoFingerSwipeRecognizer* self, QGesture* gesture, QObject* watched, QEvent* event);
void KTwoFingerSwipeRecognizer_Reset(KTwoFingerSwipeRecognizer* self, QGesture* state);
void KTwoFingerSwipeRecognizer_OnReset(KTwoFingerSwipeRecognizer* self, intptr_t slot);
void KTwoFingerSwipeRecognizer_QBaseReset(KTwoFingerSwipeRecognizer* self, QGesture* state);
void KTwoFingerSwipeRecognizer_Delete(KTwoFingerSwipeRecognizer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
