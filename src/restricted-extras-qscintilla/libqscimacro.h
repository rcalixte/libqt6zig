#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCIMACRO_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCIMACRO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QsciMacro QsciMacro;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciMacro* QsciMacro_new(QsciScintilla* parent);
QsciMacro* QsciMacro_new2(const libqt_string asc, QsciScintilla* parent);
QMetaObject* QsciMacro_MetaObject(const QsciMacro* self);
void* QsciMacro_Metacast(QsciMacro* self, const char* param1);
int QsciMacro_Metacall(QsciMacro* self, int param1, int param2, void** param3);
void QsciMacro_OnMetacall(QsciMacro* self, intptr_t slot);
int QsciMacro_QBaseMetacall(QsciMacro* self, int param1, int param2, void** param3);
libqt_string QsciMacro_Tr(const char* s);
void QsciMacro_Clear(QsciMacro* self);
bool QsciMacro_Load(QsciMacro* self, const libqt_string asc);
libqt_string QsciMacro_Save(const QsciMacro* self);
void QsciMacro_Play(QsciMacro* self);
void QsciMacro_OnPlay(QsciMacro* self, intptr_t slot);
void QsciMacro_QBasePlay(QsciMacro* self);
void QsciMacro_StartRecording(QsciMacro* self);
void QsciMacro_OnStartRecording(QsciMacro* self, intptr_t slot);
void QsciMacro_QBaseStartRecording(QsciMacro* self);
void QsciMacro_EndRecording(QsciMacro* self);
void QsciMacro_OnEndRecording(QsciMacro* self, intptr_t slot);
void QsciMacro_QBaseEndRecording(QsciMacro* self);
libqt_string QsciMacro_Tr2(const char* s, const char* c);
libqt_string QsciMacro_Tr3(const char* s, const char* c, int n);
bool QsciMacro_Event(QsciMacro* self, QEvent* event);
void QsciMacro_OnEvent(QsciMacro* self, intptr_t slot);
bool QsciMacro_QBaseEvent(QsciMacro* self, QEvent* event);
bool QsciMacro_EventFilter(QsciMacro* self, QObject* watched, QEvent* event);
void QsciMacro_OnEventFilter(QsciMacro* self, intptr_t slot);
bool QsciMacro_QBaseEventFilter(QsciMacro* self, QObject* watched, QEvent* event);
void QsciMacro_TimerEvent(QsciMacro* self, QTimerEvent* event);
void QsciMacro_OnTimerEvent(QsciMacro* self, intptr_t slot);
void QsciMacro_QBaseTimerEvent(QsciMacro* self, QTimerEvent* event);
void QsciMacro_ChildEvent(QsciMacro* self, QChildEvent* event);
void QsciMacro_OnChildEvent(QsciMacro* self, intptr_t slot);
void QsciMacro_QBaseChildEvent(QsciMacro* self, QChildEvent* event);
void QsciMacro_CustomEvent(QsciMacro* self, QEvent* event);
void QsciMacro_OnCustomEvent(QsciMacro* self, intptr_t slot);
void QsciMacro_QBaseCustomEvent(QsciMacro* self, QEvent* event);
void QsciMacro_ConnectNotify(QsciMacro* self, const QMetaMethod* signal);
void QsciMacro_OnConnectNotify(QsciMacro* self, intptr_t slot);
void QsciMacro_QBaseConnectNotify(QsciMacro* self, const QMetaMethod* signal);
void QsciMacro_DisconnectNotify(QsciMacro* self, const QMetaMethod* signal);
void QsciMacro_OnDisconnectNotify(QsciMacro* self, intptr_t slot);
void QsciMacro_QBaseDisconnectNotify(QsciMacro* self, const QMetaMethod* signal);
QObject* QsciMacro_Sender(const QsciMacro* self);
void QsciMacro_OnSender(const QsciMacro* self, intptr_t slot);
QObject* QsciMacro_QBaseSender(const QsciMacro* self);
int QsciMacro_SenderSignalIndex(const QsciMacro* self);
void QsciMacro_OnSenderSignalIndex(const QsciMacro* self, intptr_t slot);
int QsciMacro_QBaseSenderSignalIndex(const QsciMacro* self);
int QsciMacro_Receivers(const QsciMacro* self, const char* signal);
void QsciMacro_OnReceivers(const QsciMacro* self, intptr_t slot);
int QsciMacro_QBaseReceivers(const QsciMacro* self, const char* signal);
bool QsciMacro_IsSignalConnected(const QsciMacro* self, const QMetaMethod* signal);
void QsciMacro_OnIsSignalConnected(const QsciMacro* self, intptr_t slot);
bool QsciMacro_QBaseIsSignalConnected(const QsciMacro* self, const QMetaMethod* signal);
void QsciMacro_Delete(QsciMacro* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
