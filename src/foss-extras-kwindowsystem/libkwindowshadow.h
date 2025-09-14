#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKWINDOWSHADOW_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKWINDOWSHADOW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KWindowShadow KWindowShadow;
typedef struct KWindowShadowTile KWindowShadowTile;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QImage QImage;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWindow QWindow;
#endif

KWindowShadowTile* KWindowShadowTile_new();
QImage* KWindowShadowTile_Image(const KWindowShadowTile* self);
void KWindowShadowTile_SetImage(KWindowShadowTile* self, const QImage* image);
bool KWindowShadowTile_IsCreated(const KWindowShadowTile* self);
bool KWindowShadowTile_Create(KWindowShadowTile* self);
void KWindowShadowTile_Delete(KWindowShadowTile* self);

KWindowShadow* KWindowShadow_new();
KWindowShadow* KWindowShadow_new2(QObject* parent);
QMetaObject* KWindowShadow_MetaObject(const KWindowShadow* self);
void* KWindowShadow_Metacast(KWindowShadow* self, const char* param1);
int KWindowShadow_Metacall(KWindowShadow* self, int param1, int param2, void** param3);
libqt_string KWindowShadow_Tr(const char* s);
QMargins* KWindowShadow_Padding(const KWindowShadow* self);
void KWindowShadow_SetPadding(KWindowShadow* self, const QMargins* padding);
QWindow* KWindowShadow_Window(const KWindowShadow* self);
void KWindowShadow_SetWindow(KWindowShadow* self, QWindow* window);
bool KWindowShadow_IsCreated(const KWindowShadow* self);
bool KWindowShadow_Create(KWindowShadow* self);
void KWindowShadow_Destroy(KWindowShadow* self);
libqt_string KWindowShadow_Tr2(const char* s, const char* c);
libqt_string KWindowShadow_Tr3(const char* s, const char* c, int n);
void KWindowShadow_OnMetacall(KWindowShadow* self, intptr_t slot);
int KWindowShadow_QBaseMetacall(KWindowShadow* self, int param1, int param2, void** param3);
bool KWindowShadow_Event(KWindowShadow* self, QEvent* event);
void KWindowShadow_OnEvent(KWindowShadow* self, intptr_t slot);
bool KWindowShadow_QBaseEvent(KWindowShadow* self, QEvent* event);
bool KWindowShadow_EventFilter(KWindowShadow* self, QObject* watched, QEvent* event);
void KWindowShadow_OnEventFilter(KWindowShadow* self, intptr_t slot);
bool KWindowShadow_QBaseEventFilter(KWindowShadow* self, QObject* watched, QEvent* event);
void KWindowShadow_TimerEvent(KWindowShadow* self, QTimerEvent* event);
void KWindowShadow_OnTimerEvent(KWindowShadow* self, intptr_t slot);
void KWindowShadow_QBaseTimerEvent(KWindowShadow* self, QTimerEvent* event);
void KWindowShadow_ChildEvent(KWindowShadow* self, QChildEvent* event);
void KWindowShadow_OnChildEvent(KWindowShadow* self, intptr_t slot);
void KWindowShadow_QBaseChildEvent(KWindowShadow* self, QChildEvent* event);
void KWindowShadow_CustomEvent(KWindowShadow* self, QEvent* event);
void KWindowShadow_OnCustomEvent(KWindowShadow* self, intptr_t slot);
void KWindowShadow_QBaseCustomEvent(KWindowShadow* self, QEvent* event);
void KWindowShadow_ConnectNotify(KWindowShadow* self, const QMetaMethod* signal);
void KWindowShadow_OnConnectNotify(KWindowShadow* self, intptr_t slot);
void KWindowShadow_QBaseConnectNotify(KWindowShadow* self, const QMetaMethod* signal);
void KWindowShadow_DisconnectNotify(KWindowShadow* self, const QMetaMethod* signal);
void KWindowShadow_OnDisconnectNotify(KWindowShadow* self, intptr_t slot);
void KWindowShadow_QBaseDisconnectNotify(KWindowShadow* self, const QMetaMethod* signal);
QObject* KWindowShadow_Sender(const KWindowShadow* self);
void KWindowShadow_OnSender(const KWindowShadow* self, intptr_t slot);
QObject* KWindowShadow_QBaseSender(const KWindowShadow* self);
int KWindowShadow_SenderSignalIndex(const KWindowShadow* self);
void KWindowShadow_OnSenderSignalIndex(const KWindowShadow* self, intptr_t slot);
int KWindowShadow_QBaseSenderSignalIndex(const KWindowShadow* self);
int KWindowShadow_Receivers(const KWindowShadow* self, const char* signal);
void KWindowShadow_OnReceivers(const KWindowShadow* self, intptr_t slot);
int KWindowShadow_QBaseReceivers(const KWindowShadow* self, const char* signal);
bool KWindowShadow_IsSignalConnected(const KWindowShadow* self, const QMetaMethod* signal);
void KWindowShadow_OnIsSignalConnected(const KWindowShadow* self, intptr_t slot);
bool KWindowShadow_QBaseIsSignalConnected(const KWindowShadow* self, const QMetaMethod* signal);
void KWindowShadow_Delete(KWindowShadow* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
