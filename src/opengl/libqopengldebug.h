#pragma once
#ifndef SRC_OPENGLC_LIBQOPENGLDEBUG_H
#define SRC_OPENGLC_LIBQOPENGLDEBUG_H

#include <stdbool.h>
#include <stddef.h>

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
typedef struct QOpenGLDebugLogger QOpenGLDebugLogger;
typedef struct QOpenGLDebugMessage QOpenGLDebugMessage;
typedef struct QTimerEvent QTimerEvent;
#endif

QOpenGLDebugMessage* QOpenGLDebugMessage_new();
QOpenGLDebugMessage* QOpenGLDebugMessage_new2(const QOpenGLDebugMessage* debugMessage);
void QOpenGLDebugMessage_OperatorAssign(QOpenGLDebugMessage* self, const QOpenGLDebugMessage* debugMessage);
void QOpenGLDebugMessage_Swap(QOpenGLDebugMessage* self, QOpenGLDebugMessage* other);
int QOpenGLDebugMessage_Source(const QOpenGLDebugMessage* self);
int QOpenGLDebugMessage_Type(const QOpenGLDebugMessage* self);
int QOpenGLDebugMessage_Severity(const QOpenGLDebugMessage* self);
uint32_t QOpenGLDebugMessage_Id(const QOpenGLDebugMessage* self);
libqt_string QOpenGLDebugMessage_Message(const QOpenGLDebugMessage* self);
QOpenGLDebugMessage* QOpenGLDebugMessage_CreateApplicationMessage(const libqt_string text);
QOpenGLDebugMessage* QOpenGLDebugMessage_CreateThirdPartyMessage(const libqt_string text);
bool QOpenGLDebugMessage_OperatorEqual(const QOpenGLDebugMessage* self, const QOpenGLDebugMessage* debugMessage);
bool QOpenGLDebugMessage_OperatorNotEqual(const QOpenGLDebugMessage* self, const QOpenGLDebugMessage* debugMessage);
QOpenGLDebugMessage* QOpenGLDebugMessage_CreateApplicationMessage2(const libqt_string text, uint32_t id);
QOpenGLDebugMessage* QOpenGLDebugMessage_CreateApplicationMessage3(const libqt_string text, uint32_t id, int severity);
QOpenGLDebugMessage* QOpenGLDebugMessage_CreateApplicationMessage4(const libqt_string text, uint32_t id, int severity, int typeVal);
QOpenGLDebugMessage* QOpenGLDebugMessage_CreateThirdPartyMessage2(const libqt_string text, uint32_t id);
QOpenGLDebugMessage* QOpenGLDebugMessage_CreateThirdPartyMessage3(const libqt_string text, uint32_t id, int severity);
QOpenGLDebugMessage* QOpenGLDebugMessage_CreateThirdPartyMessage4(const libqt_string text, uint32_t id, int severity, int typeVal);
void QOpenGLDebugMessage_Delete(QOpenGLDebugMessage* self);

QOpenGLDebugLogger* QOpenGLDebugLogger_new();
QOpenGLDebugLogger* QOpenGLDebugLogger_new2(QObject* parent);
QMetaObject* QOpenGLDebugLogger_MetaObject(const QOpenGLDebugLogger* self);
void* QOpenGLDebugLogger_Metacast(QOpenGLDebugLogger* self, const char* param1);
int QOpenGLDebugLogger_Metacall(QOpenGLDebugLogger* self, int param1, int param2, void** param3);
libqt_string QOpenGLDebugLogger_Tr(const char* s);
bool QOpenGLDebugLogger_Initialize(QOpenGLDebugLogger* self);
bool QOpenGLDebugLogger_IsLogging(const QOpenGLDebugLogger* self);
int QOpenGLDebugLogger_LoggingMode(const QOpenGLDebugLogger* self);
long long QOpenGLDebugLogger_MaximumMessageLength(const QOpenGLDebugLogger* self);
void QOpenGLDebugLogger_PushGroup(QOpenGLDebugLogger* self, const libqt_string name);
void QOpenGLDebugLogger_PopGroup(QOpenGLDebugLogger* self);
void QOpenGLDebugLogger_EnableMessages(QOpenGLDebugLogger* self);
void QOpenGLDebugLogger_EnableMessages2(QOpenGLDebugLogger* self, const libqt_list /* of uint32_t */ ids);
void QOpenGLDebugLogger_DisableMessages(QOpenGLDebugLogger* self);
void QOpenGLDebugLogger_DisableMessages2(QOpenGLDebugLogger* self, const libqt_list /* of uint32_t */ ids);
libqt_list /* of QOpenGLDebugMessage* */ QOpenGLDebugLogger_LoggedMessages(const QOpenGLDebugLogger* self);
void QOpenGLDebugLogger_LogMessage(QOpenGLDebugLogger* self, const QOpenGLDebugMessage* debugMessage);
void QOpenGLDebugLogger_StartLogging(QOpenGLDebugLogger* self);
void QOpenGLDebugLogger_StopLogging(QOpenGLDebugLogger* self);
void QOpenGLDebugLogger_MessageLogged(QOpenGLDebugLogger* self, const QOpenGLDebugMessage* debugMessage);
void QOpenGLDebugLogger_Connect_MessageLogged(QOpenGLDebugLogger* self, intptr_t slot);
libqt_string QOpenGLDebugLogger_Tr2(const char* s, const char* c);
libqt_string QOpenGLDebugLogger_Tr3(const char* s, const char* c, int n);
void QOpenGLDebugLogger_PushGroup2(QOpenGLDebugLogger* self, const libqt_string name, uint32_t id);
void QOpenGLDebugLogger_PushGroup3(QOpenGLDebugLogger* self, const libqt_string name, uint32_t id, int source);
void QOpenGLDebugLogger_EnableMessages1(QOpenGLDebugLogger* self, int sources);
void QOpenGLDebugLogger_EnableMessages22(QOpenGLDebugLogger* self, int sources, int types);
void QOpenGLDebugLogger_EnableMessages3(QOpenGLDebugLogger* self, int sources, int types, int severities);
void QOpenGLDebugLogger_EnableMessages23(QOpenGLDebugLogger* self, const libqt_list /* of uint32_t */ ids, int sources);
void QOpenGLDebugLogger_EnableMessages32(QOpenGLDebugLogger* self, const libqt_list /* of uint32_t */ ids, int sources, int types);
void QOpenGLDebugLogger_DisableMessages1(QOpenGLDebugLogger* self, int sources);
void QOpenGLDebugLogger_DisableMessages22(QOpenGLDebugLogger* self, int sources, int types);
void QOpenGLDebugLogger_DisableMessages3(QOpenGLDebugLogger* self, int sources, int types, int severities);
void QOpenGLDebugLogger_DisableMessages23(QOpenGLDebugLogger* self, const libqt_list /* of uint32_t */ ids, int sources);
void QOpenGLDebugLogger_DisableMessages32(QOpenGLDebugLogger* self, const libqt_list /* of uint32_t */ ids, int sources, int types);
void QOpenGLDebugLogger_StartLogging1(QOpenGLDebugLogger* self, int loggingMode);
void QOpenGLDebugLogger_OnMetacall(QOpenGLDebugLogger* self, intptr_t slot);
int QOpenGLDebugLogger_QBaseMetacall(QOpenGLDebugLogger* self, int param1, int param2, void** param3);
bool QOpenGLDebugLogger_Event(QOpenGLDebugLogger* self, QEvent* event);
void QOpenGLDebugLogger_OnEvent(QOpenGLDebugLogger* self, intptr_t slot);
bool QOpenGLDebugLogger_QBaseEvent(QOpenGLDebugLogger* self, QEvent* event);
bool QOpenGLDebugLogger_EventFilter(QOpenGLDebugLogger* self, QObject* watched, QEvent* event);
void QOpenGLDebugLogger_OnEventFilter(QOpenGLDebugLogger* self, intptr_t slot);
bool QOpenGLDebugLogger_QBaseEventFilter(QOpenGLDebugLogger* self, QObject* watched, QEvent* event);
void QOpenGLDebugLogger_TimerEvent(QOpenGLDebugLogger* self, QTimerEvent* event);
void QOpenGLDebugLogger_OnTimerEvent(QOpenGLDebugLogger* self, intptr_t slot);
void QOpenGLDebugLogger_QBaseTimerEvent(QOpenGLDebugLogger* self, QTimerEvent* event);
void QOpenGLDebugLogger_ChildEvent(QOpenGLDebugLogger* self, QChildEvent* event);
void QOpenGLDebugLogger_OnChildEvent(QOpenGLDebugLogger* self, intptr_t slot);
void QOpenGLDebugLogger_QBaseChildEvent(QOpenGLDebugLogger* self, QChildEvent* event);
void QOpenGLDebugLogger_CustomEvent(QOpenGLDebugLogger* self, QEvent* event);
void QOpenGLDebugLogger_OnCustomEvent(QOpenGLDebugLogger* self, intptr_t slot);
void QOpenGLDebugLogger_QBaseCustomEvent(QOpenGLDebugLogger* self, QEvent* event);
void QOpenGLDebugLogger_ConnectNotify(QOpenGLDebugLogger* self, const QMetaMethod* signal);
void QOpenGLDebugLogger_OnConnectNotify(QOpenGLDebugLogger* self, intptr_t slot);
void QOpenGLDebugLogger_QBaseConnectNotify(QOpenGLDebugLogger* self, const QMetaMethod* signal);
void QOpenGLDebugLogger_DisconnectNotify(QOpenGLDebugLogger* self, const QMetaMethod* signal);
void QOpenGLDebugLogger_OnDisconnectNotify(QOpenGLDebugLogger* self, intptr_t slot);
void QOpenGLDebugLogger_QBaseDisconnectNotify(QOpenGLDebugLogger* self, const QMetaMethod* signal);
QObject* QOpenGLDebugLogger_Sender(const QOpenGLDebugLogger* self);
void QOpenGLDebugLogger_OnSender(const QOpenGLDebugLogger* self, intptr_t slot);
QObject* QOpenGLDebugLogger_QBaseSender(const QOpenGLDebugLogger* self);
int QOpenGLDebugLogger_SenderSignalIndex(const QOpenGLDebugLogger* self);
void QOpenGLDebugLogger_OnSenderSignalIndex(const QOpenGLDebugLogger* self, intptr_t slot);
int QOpenGLDebugLogger_QBaseSenderSignalIndex(const QOpenGLDebugLogger* self);
int QOpenGLDebugLogger_Receivers(const QOpenGLDebugLogger* self, const char* signal);
void QOpenGLDebugLogger_OnReceivers(const QOpenGLDebugLogger* self, intptr_t slot);
int QOpenGLDebugLogger_QBaseReceivers(const QOpenGLDebugLogger* self, const char* signal);
bool QOpenGLDebugLogger_IsSignalConnected(const QOpenGLDebugLogger* self, const QMetaMethod* signal);
void QOpenGLDebugLogger_OnIsSignalConnected(const QOpenGLDebugLogger* self, intptr_t slot);
bool QOpenGLDebugLogger_QBaseIsSignalConnected(const QOpenGLDebugLogger* self, const QMetaMethod* signal);
void QOpenGLDebugLogger_Delete(QOpenGLDebugLogger* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
