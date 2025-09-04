#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSCONNECTIONINTERFACE_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSCONNECTIONINTERFACE_H

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
typedef struct QDBusConnectionInterface QDBusConnectionInterface;
typedef struct QDBusError QDBusError;
typedef struct QDBusMessage QDBusMessage;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

QMetaObject* QDBusConnectionInterface_MetaObject(const QDBusConnectionInterface* self);
void* QDBusConnectionInterface_Metacast(QDBusConnectionInterface* self, const char* param1);
int QDBusConnectionInterface_Metacall(QDBusConnectionInterface* self, int param1, int param2, void** param3);
libqt_string QDBusConnectionInterface_Tr(const char* s);
void QDBusConnectionInterface_ServiceRegistered(QDBusConnectionInterface* self, const libqt_string service);
void QDBusConnectionInterface_Connect_ServiceRegistered(QDBusConnectionInterface* self, intptr_t slot);
void QDBusConnectionInterface_ServiceUnregistered(QDBusConnectionInterface* self, const libqt_string service);
void QDBusConnectionInterface_Connect_ServiceUnregistered(QDBusConnectionInterface* self, intptr_t slot);
void QDBusConnectionInterface_ServiceOwnerChanged(QDBusConnectionInterface* self, const libqt_string name, const libqt_string oldOwner, const libqt_string newOwner);
void QDBusConnectionInterface_Connect_ServiceOwnerChanged(QDBusConnectionInterface* self, intptr_t slot);
void QDBusConnectionInterface_CallWithCallbackFailed(QDBusConnectionInterface* self, const QDBusError* errorVal, const QDBusMessage* call);
void QDBusConnectionInterface_Connect_CallWithCallbackFailed(QDBusConnectionInterface* self, intptr_t slot);
void QDBusConnectionInterface_NameAcquired(QDBusConnectionInterface* self, const libqt_string param1);
void QDBusConnectionInterface_Connect_NameAcquired(QDBusConnectionInterface* self, intptr_t slot);
void QDBusConnectionInterface_NameLost(QDBusConnectionInterface* self, const libqt_string param1);
void QDBusConnectionInterface_Connect_NameLost(QDBusConnectionInterface* self, intptr_t slot);
void QDBusConnectionInterface_NameOwnerChanged(QDBusConnectionInterface* self, const libqt_string param1, const libqt_string param2, const libqt_string param3);
void QDBusConnectionInterface_Connect_NameOwnerChanged(QDBusConnectionInterface* self, intptr_t slot);
libqt_string QDBusConnectionInterface_Tr2(const char* s, const char* c);
libqt_string QDBusConnectionInterface_Tr3(const char* s, const char* c, int n);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
