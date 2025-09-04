#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSABSTRACTINTERFACE_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSABSTRACTINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDBusAbstractInterface QDBusAbstractInterface;
typedef struct QDBusAbstractInterfaceBase QDBusAbstractInterfaceBase;
typedef struct QDBusConnection QDBusConnection;
typedef struct QDBusError QDBusError;
typedef struct QDBusMessage QDBusMessage;
typedef struct QDBusPendingCall QDBusPendingCall;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

int QDBusAbstractInterfaceBase_Metacall(QDBusAbstractInterfaceBase* self, int param1, int param2, void** param3);
void QDBusAbstractInterfaceBase_Delete(QDBusAbstractInterfaceBase* self);

QMetaObject* QDBusAbstractInterface_MetaObject(const QDBusAbstractInterface* self);
void* QDBusAbstractInterface_Metacast(QDBusAbstractInterface* self, const char* param1);
int QDBusAbstractInterface_Metacall(QDBusAbstractInterface* self, int param1, int param2, void** param3);
libqt_string QDBusAbstractInterface_Tr(const char* s);
bool QDBusAbstractInterface_IsValid(const QDBusAbstractInterface* self);
QDBusConnection* QDBusAbstractInterface_Connection(const QDBusAbstractInterface* self);
libqt_string QDBusAbstractInterface_Service(const QDBusAbstractInterface* self);
libqt_string QDBusAbstractInterface_Path(const QDBusAbstractInterface* self);
libqt_string QDBusAbstractInterface_Interface(const QDBusAbstractInterface* self);
QDBusError* QDBusAbstractInterface_LastError(const QDBusAbstractInterface* self);
void QDBusAbstractInterface_SetTimeout(QDBusAbstractInterface* self, int timeout);
int QDBusAbstractInterface_Timeout(const QDBusAbstractInterface* self);
void QDBusAbstractInterface_SetInteractiveAuthorizationAllowed(QDBusAbstractInterface* self, bool enable);
bool QDBusAbstractInterface_IsInteractiveAuthorizationAllowed(const QDBusAbstractInterface* self);
QDBusMessage* QDBusAbstractInterface_Call(QDBusAbstractInterface* self, const libqt_string method);
QDBusMessage* QDBusAbstractInterface_Call2(QDBusAbstractInterface* self, int mode, const libqt_string method);
QDBusMessage* QDBusAbstractInterface_CallWithArgumentList(QDBusAbstractInterface* self, int mode, const libqt_string method, const libqt_list /* of QVariant* */ args);
QDBusPendingCall* QDBusAbstractInterface_AsyncCall(QDBusAbstractInterface* self, const libqt_string method);
QDBusPendingCall* QDBusAbstractInterface_AsyncCallWithArgumentList(QDBusAbstractInterface* self, const libqt_string method, const libqt_list /* of QVariant* */ args);
libqt_string QDBusAbstractInterface_Tr2(const char* s, const char* c);
libqt_string QDBusAbstractInterface_Tr3(const char* s, const char* c, int n);
void QDBusAbstractInterface_Delete(QDBusAbstractInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
