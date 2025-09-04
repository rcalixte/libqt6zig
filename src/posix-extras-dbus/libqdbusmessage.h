#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSMESSAGE_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSMESSAGE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDBusError QDBusError;
typedef struct QDBusMessage QDBusMessage;
typedef struct QVariant QVariant;
#endif

QDBusMessage* QDBusMessage_new();
QDBusMessage* QDBusMessage_new2(const QDBusMessage* other);
void QDBusMessage_OperatorAssign(QDBusMessage* self, const QDBusMessage* other);
void QDBusMessage_Swap(QDBusMessage* self, QDBusMessage* other);
QDBusMessage* QDBusMessage_CreateSignal(const libqt_string path, const libqt_string interface, const libqt_string name);
QDBusMessage* QDBusMessage_CreateTargetedSignal(const libqt_string service, const libqt_string path, const libqt_string interface, const libqt_string name);
QDBusMessage* QDBusMessage_CreateMethodCall(const libqt_string destination, const libqt_string path, const libqt_string interface, const libqt_string method);
QDBusMessage* QDBusMessage_CreateError(const libqt_string name, const libqt_string msg);
QDBusMessage* QDBusMessage_CreateError2(const QDBusError* err);
QDBusMessage* QDBusMessage_CreateError3(int typeVal, const libqt_string msg);
QDBusMessage* QDBusMessage_CreateReply(const QDBusMessage* self);
QDBusMessage* QDBusMessage_CreateReply2(const QDBusMessage* self, const QVariant* argument);
QDBusMessage* QDBusMessage_CreateErrorReply(const QDBusMessage* self, const libqt_string name, const libqt_string msg);
QDBusMessage* QDBusMessage_CreateErrorReply2(const QDBusMessage* self, const QDBusError* err);
QDBusMessage* QDBusMessage_CreateErrorReply3(const QDBusMessage* self, int typeVal, const libqt_string msg);
libqt_string QDBusMessage_Service(const QDBusMessage* self);
libqt_string QDBusMessage_Path(const QDBusMessage* self);
libqt_string QDBusMessage_Interface(const QDBusMessage* self);
libqt_string QDBusMessage_Member(const QDBusMessage* self);
libqt_string QDBusMessage_ErrorName(const QDBusMessage* self);
libqt_string QDBusMessage_ErrorMessage(const QDBusMessage* self);
int QDBusMessage_Type(const QDBusMessage* self);
libqt_string QDBusMessage_Signature(const QDBusMessage* self);
bool QDBusMessage_IsReplyRequired(const QDBusMessage* self);
void QDBusMessage_SetDelayedReply(const QDBusMessage* self, bool enable);
bool QDBusMessage_IsDelayedReply(const QDBusMessage* self);
void QDBusMessage_SetAutoStartService(QDBusMessage* self, bool enable);
bool QDBusMessage_AutoStartService(const QDBusMessage* self);
void QDBusMessage_SetInteractiveAuthorizationAllowed(QDBusMessage* self, bool enable);
bool QDBusMessage_IsInteractiveAuthorizationAllowed(const QDBusMessage* self);
void QDBusMessage_SetArguments(QDBusMessage* self, const libqt_list /* of QVariant* */ arguments);
libqt_list /* of QVariant* */ QDBusMessage_Arguments(const QDBusMessage* self);
QDBusMessage* QDBusMessage_OperatorShiftLeft(QDBusMessage* self, const QVariant* arg);
QDBusMessage* QDBusMessage_CreateReply1(const QDBusMessage* self, const libqt_list /* of QVariant* */ arguments);
void QDBusMessage_Delete(QDBusMessage* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
