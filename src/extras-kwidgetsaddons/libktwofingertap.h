#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKTWOFINGERTAP_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKTWOFINGERTAP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KTwoFingerTap KTwoFingerTap;
typedef struct KTwoFingerTapRecognizer KTwoFingerTapRecognizer;
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

KTwoFingerTap* KTwoFingerTap_new();
KTwoFingerTap* KTwoFingerTap_new2(QObject* parent);
QMetaObject* KTwoFingerTap_MetaObject(const KTwoFingerTap* self);
void* KTwoFingerTap_Metacast(KTwoFingerTap* self, const char* param1);
int KTwoFingerTap_Metacall(KTwoFingerTap* self, int param1, int param2, void** param3);
libqt_string KTwoFingerTap_Tr(const char* s);
QPointF* KTwoFingerTap_Pos(const KTwoFingerTap* self);
void KTwoFingerTap_SetPos(KTwoFingerTap* self, QPointF* pos);
QPointF* KTwoFingerTap_ScreenPos(const KTwoFingerTap* self);
void KTwoFingerTap_SetScreenPos(KTwoFingerTap* self, QPointF* screenPos);
QPointF* KTwoFingerTap_ScenePos(const KTwoFingerTap* self);
void KTwoFingerTap_SetScenePos(KTwoFingerTap* self, QPointF* scenePos);
libqt_string KTwoFingerTap_Tr2(const char* s, const char* c);
libqt_string KTwoFingerTap_Tr3(const char* s, const char* c, int n);
void KTwoFingerTap_OnMetacall(KTwoFingerTap* self, intptr_t slot);
int KTwoFingerTap_QBaseMetacall(KTwoFingerTap* self, int param1, int param2, void** param3);
bool KTwoFingerTap_Event(KTwoFingerTap* self, QEvent* event);
void KTwoFingerTap_OnEvent(KTwoFingerTap* self, intptr_t slot);
bool KTwoFingerTap_QBaseEvent(KTwoFingerTap* self, QEvent* event);
bool KTwoFingerTap_EventFilter(KTwoFingerTap* self, QObject* watched, QEvent* event);
void KTwoFingerTap_OnEventFilter(KTwoFingerTap* self, intptr_t slot);
bool KTwoFingerTap_QBaseEventFilter(KTwoFingerTap* self, QObject* watched, QEvent* event);
void KTwoFingerTap_TimerEvent(KTwoFingerTap* self, QTimerEvent* event);
void KTwoFingerTap_OnTimerEvent(KTwoFingerTap* self, intptr_t slot);
void KTwoFingerTap_QBaseTimerEvent(KTwoFingerTap* self, QTimerEvent* event);
void KTwoFingerTap_ChildEvent(KTwoFingerTap* self, QChildEvent* event);
void KTwoFingerTap_OnChildEvent(KTwoFingerTap* self, intptr_t slot);
void KTwoFingerTap_QBaseChildEvent(KTwoFingerTap* self, QChildEvent* event);
void KTwoFingerTap_CustomEvent(KTwoFingerTap* self, QEvent* event);
void KTwoFingerTap_OnCustomEvent(KTwoFingerTap* self, intptr_t slot);
void KTwoFingerTap_QBaseCustomEvent(KTwoFingerTap* self, QEvent* event);
void KTwoFingerTap_ConnectNotify(KTwoFingerTap* self, const QMetaMethod* signal);
void KTwoFingerTap_OnConnectNotify(KTwoFingerTap* self, intptr_t slot);
void KTwoFingerTap_QBaseConnectNotify(KTwoFingerTap* self, const QMetaMethod* signal);
void KTwoFingerTap_DisconnectNotify(KTwoFingerTap* self, const QMetaMethod* signal);
void KTwoFingerTap_OnDisconnectNotify(KTwoFingerTap* self, intptr_t slot);
void KTwoFingerTap_QBaseDisconnectNotify(KTwoFingerTap* self, const QMetaMethod* signal);
QObject* KTwoFingerTap_Sender(const KTwoFingerTap* self);
void KTwoFingerTap_OnSender(const KTwoFingerTap* self, intptr_t slot);
QObject* KTwoFingerTap_QBaseSender(const KTwoFingerTap* self);
int KTwoFingerTap_SenderSignalIndex(const KTwoFingerTap* self);
void KTwoFingerTap_OnSenderSignalIndex(const KTwoFingerTap* self, intptr_t slot);
int KTwoFingerTap_QBaseSenderSignalIndex(const KTwoFingerTap* self);
int KTwoFingerTap_Receivers(const KTwoFingerTap* self, const char* signal);
void KTwoFingerTap_OnReceivers(const KTwoFingerTap* self, intptr_t slot);
int KTwoFingerTap_QBaseReceivers(const KTwoFingerTap* self, const char* signal);
bool KTwoFingerTap_IsSignalConnected(const KTwoFingerTap* self, const QMetaMethod* signal);
void KTwoFingerTap_OnIsSignalConnected(const KTwoFingerTap* self, intptr_t slot);
bool KTwoFingerTap_QBaseIsSignalConnected(const KTwoFingerTap* self, const QMetaMethod* signal);
void KTwoFingerTap_Delete(KTwoFingerTap* self);

KTwoFingerTapRecognizer* KTwoFingerTapRecognizer_new();
QGesture* KTwoFingerTapRecognizer_Create(KTwoFingerTapRecognizer* self, QObject* target);
int KTwoFingerTapRecognizer_Recognize(KTwoFingerTapRecognizer* self, QGesture* gesture, QObject* watched, QEvent* event);
int KTwoFingerTapRecognizer_TapRadius(const KTwoFingerTapRecognizer* self);
void KTwoFingerTapRecognizer_SetTapRadius(KTwoFingerTapRecognizer* self, int i);
void KTwoFingerTapRecognizer_OnCreate(KTwoFingerTapRecognizer* self, intptr_t slot);
QGesture* KTwoFingerTapRecognizer_QBaseCreate(KTwoFingerTapRecognizer* self, QObject* target);
void KTwoFingerTapRecognizer_OnRecognize(KTwoFingerTapRecognizer* self, intptr_t slot);
int KTwoFingerTapRecognizer_QBaseRecognize(KTwoFingerTapRecognizer* self, QGesture* gesture, QObject* watched, QEvent* event);
void KTwoFingerTapRecognizer_Reset(KTwoFingerTapRecognizer* self, QGesture* state);
void KTwoFingerTapRecognizer_OnReset(KTwoFingerTapRecognizer* self, intptr_t slot);
void KTwoFingerTapRecognizer_QBaseReset(KTwoFingerTapRecognizer* self, QGesture* state);
void KTwoFingerTapRecognizer_Delete(KTwoFingerTapRecognizer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
