#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSCONTEXT_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSCONTEXT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDBusConnection QDBusConnection;
typedef struct QDBusContext QDBusContext;
typedef struct QDBusMessage QDBusMessage;
#endif

QDBusContext* QDBusContext_new();
bool QDBusContext_CalledFromDBus(const QDBusContext* self);
QDBusConnection* QDBusContext_Connection(const QDBusContext* self);
QDBusMessage* QDBusContext_Message(const QDBusContext* self);
bool QDBusContext_IsDelayedReply(const QDBusContext* self);
void QDBusContext_SetDelayedReply(const QDBusContext* self, bool enable);
void QDBusContext_SendErrorReply(const QDBusContext* self, const libqt_string name);
void QDBusContext_SendErrorReply2(const QDBusContext* self, int typeVal);
void QDBusContext_SendErrorReply22(const QDBusContext* self, const libqt_string name, const libqt_string msg);
void QDBusContext_SendErrorReply23(const QDBusContext* self, int typeVal, const libqt_string msg);
void QDBusContext_Delete(QDBusContext* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
