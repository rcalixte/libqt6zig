#pragma once
#ifndef SRCC_LIBQSETTINGS_H
#define SRCC_LIBQSETTINGS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QSettings* QSettings_new(const libqt_string organization);
QSettings* QSettings_new2(int scope, const libqt_string organization);
QSettings* QSettings_new3(int format, int scope, const libqt_string organization);
QSettings* QSettings_new4(const libqt_string fileName, int format);
QSettings* QSettings_new5();
QSettings* QSettings_new6(int scope);
QSettings* QSettings_new7(const libqt_string organization, const libqt_string application);
QSettings* QSettings_new8(const libqt_string organization, const libqt_string application, QObject* parent);
QSettings* QSettings_new9(int scope, const libqt_string organization, const libqt_string application);
QSettings* QSettings_new10(int scope, const libqt_string organization, const libqt_string application, QObject* parent);
QSettings* QSettings_new11(int format, int scope, const libqt_string organization, const libqt_string application);
QSettings* QSettings_new12(int format, int scope, const libqt_string organization, const libqt_string application, QObject* parent);
QSettings* QSettings_new13(const libqt_string fileName, int format, QObject* parent);
QSettings* QSettings_new14(QObject* parent);
QSettings* QSettings_new15(int scope, QObject* parent);
QMetaObject* QSettings_MetaObject(const QSettings* self);
void* QSettings_Metacast(QSettings* self, const char* param1);
int QSettings_Metacall(QSettings* self, int param1, int param2, void** param3);
void QSettings_OnMetacall(QSettings* self, intptr_t slot);
int QSettings_QBaseMetacall(QSettings* self, int param1, int param2, void** param3);
libqt_string QSettings_Tr(const char* s);
void QSettings_Clear(QSettings* self);
void QSettings_Sync(QSettings* self);
int QSettings_Status(const QSettings* self);
bool QSettings_IsAtomicSyncRequired(const QSettings* self);
void QSettings_SetAtomicSyncRequired(QSettings* self, bool enable);
void QSettings_BeginGroup(QSettings* self, libqt_string prefix);
void QSettings_EndGroup(QSettings* self);
libqt_string QSettings_Group(const QSettings* self);
int QSettings_BeginReadArray(QSettings* self, libqt_string prefix);
void QSettings_BeginWriteArray(QSettings* self, libqt_string prefix);
void QSettings_EndArray(QSettings* self);
void QSettings_SetArrayIndex(QSettings* self, int i);
libqt_list /* of libqt_string */ QSettings_AllKeys(const QSettings* self);
libqt_list /* of libqt_string */ QSettings_ChildKeys(const QSettings* self);
libqt_list /* of libqt_string */ QSettings_ChildGroups(const QSettings* self);
bool QSettings_IsWritable(const QSettings* self);
void QSettings_SetValue(QSettings* self, libqt_string key, const QVariant* value);
QVariant* QSettings_Value(const QSettings* self, libqt_string key, const QVariant* defaultValue);
QVariant* QSettings_Value2(const QSettings* self, libqt_string key);
void QSettings_Remove(QSettings* self, libqt_string key);
bool QSettings_Contains(const QSettings* self, libqt_string key);
void QSettings_SetFallbacksEnabled(QSettings* self, bool b);
bool QSettings_FallbacksEnabled(const QSettings* self);
libqt_string QSettings_FileName(const QSettings* self);
int QSettings_Format(const QSettings* self);
int QSettings_Scope(const QSettings* self);
libqt_string QSettings_OrganizationName(const QSettings* self);
libqt_string QSettings_ApplicationName(const QSettings* self);
void QSettings_SetDefaultFormat(int format);
int QSettings_DefaultFormat();
void QSettings_SetPath(int format, int scope, const libqt_string path);
bool QSettings_Event(QSettings* self, QEvent* event);
void QSettings_OnEvent(QSettings* self, intptr_t slot);
bool QSettings_QBaseEvent(QSettings* self, QEvent* event);
libqt_string QSettings_Tr2(const char* s, const char* c);
libqt_string QSettings_Tr3(const char* s, const char* c, int n);
void QSettings_BeginWriteArray2(QSettings* self, libqt_string prefix, int size);
bool QSettings_EventFilter(QSettings* self, QObject* watched, QEvent* event);
void QSettings_OnEventFilter(QSettings* self, intptr_t slot);
bool QSettings_QBaseEventFilter(QSettings* self, QObject* watched, QEvent* event);
void QSettings_TimerEvent(QSettings* self, QTimerEvent* event);
void QSettings_OnTimerEvent(QSettings* self, intptr_t slot);
void QSettings_QBaseTimerEvent(QSettings* self, QTimerEvent* event);
void QSettings_ChildEvent(QSettings* self, QChildEvent* event);
void QSettings_OnChildEvent(QSettings* self, intptr_t slot);
void QSettings_QBaseChildEvent(QSettings* self, QChildEvent* event);
void QSettings_CustomEvent(QSettings* self, QEvent* event);
void QSettings_OnCustomEvent(QSettings* self, intptr_t slot);
void QSettings_QBaseCustomEvent(QSettings* self, QEvent* event);
void QSettings_ConnectNotify(QSettings* self, const QMetaMethod* signal);
void QSettings_OnConnectNotify(QSettings* self, intptr_t slot);
void QSettings_QBaseConnectNotify(QSettings* self, const QMetaMethod* signal);
void QSettings_DisconnectNotify(QSettings* self, const QMetaMethod* signal);
void QSettings_OnDisconnectNotify(QSettings* self, intptr_t slot);
void QSettings_QBaseDisconnectNotify(QSettings* self, const QMetaMethod* signal);
QObject* QSettings_Sender(const QSettings* self);
void QSettings_OnSender(const QSettings* self, intptr_t slot);
QObject* QSettings_QBaseSender(const QSettings* self);
int QSettings_SenderSignalIndex(const QSettings* self);
void QSettings_OnSenderSignalIndex(const QSettings* self, intptr_t slot);
int QSettings_QBaseSenderSignalIndex(const QSettings* self);
int QSettings_Receivers(const QSettings* self, const char* signal);
void QSettings_OnReceivers(const QSettings* self, intptr_t slot);
int QSettings_QBaseReceivers(const QSettings* self, const char* signal);
bool QSettings_IsSignalConnected(const QSettings* self, const QMetaMethod* signal);
void QSettings_OnIsSignalConnected(const QSettings* self, intptr_t slot);
bool QSettings_QBaseIsSignalConnected(const QSettings* self, const QMetaMethod* signal);
void QSettings_Delete(QSettings* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
