#pragma once
#ifndef SRC_NETWORKC_LIBQAUTHENTICATOR_H
#define SRC_NETWORKC_LIBQAUTHENTICATOR_H

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
typedef struct QAuthenticator QAuthenticator;
typedef struct QVariant QVariant;
#endif

QAuthenticator* QAuthenticator_new();
QAuthenticator* QAuthenticator_new2(QAuthenticator* other);
void QAuthenticator_OperatorAssign(QAuthenticator* self, QAuthenticator* other);
bool QAuthenticator_OperatorEqual(const QAuthenticator* self, QAuthenticator* other);
bool QAuthenticator_OperatorNotEqual(const QAuthenticator* self, QAuthenticator* other);
libqt_string QAuthenticator_User(const QAuthenticator* self);
void QAuthenticator_SetUser(QAuthenticator* self, libqt_string user);
libqt_string QAuthenticator_Password(const QAuthenticator* self);
void QAuthenticator_SetPassword(QAuthenticator* self, libqt_string password);
libqt_string QAuthenticator_Realm(const QAuthenticator* self);
void QAuthenticator_SetRealm(QAuthenticator* self, libqt_string realm);
QVariant* QAuthenticator_Option(const QAuthenticator* self, libqt_string opt);
libqt_map /* of libqt_string to QVariant* */ QAuthenticator_Options(const QAuthenticator* self);
void QAuthenticator_SetOption(QAuthenticator* self, libqt_string opt, QVariant* value);
bool QAuthenticator_IsNull(const QAuthenticator* self);
void QAuthenticator_Detach(QAuthenticator* self);
void QAuthenticator_Delete(QAuthenticator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
