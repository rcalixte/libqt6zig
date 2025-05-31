#pragma once
#ifndef SRC_NETWORKC_LIBQSSLPRESHAREDKEYAUTHENTICATOR_H
#define SRC_NETWORKC_LIBQSSLPRESHAREDKEYAUTHENTICATOR_H

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
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
#endif

QSslPreSharedKeyAuthenticator* QSslPreSharedKeyAuthenticator_new();
QSslPreSharedKeyAuthenticator* QSslPreSharedKeyAuthenticator_new2(const QSslPreSharedKeyAuthenticator* authenticator);
void QSslPreSharedKeyAuthenticator_OperatorAssign(QSslPreSharedKeyAuthenticator* self, const QSslPreSharedKeyAuthenticator* authenticator);
void QSslPreSharedKeyAuthenticator_Swap(QSslPreSharedKeyAuthenticator* self, QSslPreSharedKeyAuthenticator* other);
libqt_string QSslPreSharedKeyAuthenticator_IdentityHint(const QSslPreSharedKeyAuthenticator* self);
void QSslPreSharedKeyAuthenticator_SetIdentity(QSslPreSharedKeyAuthenticator* self, const libqt_string identity);
libqt_string QSslPreSharedKeyAuthenticator_Identity(const QSslPreSharedKeyAuthenticator* self);
int QSslPreSharedKeyAuthenticator_MaximumIdentityLength(const QSslPreSharedKeyAuthenticator* self);
void QSslPreSharedKeyAuthenticator_SetPreSharedKey(QSslPreSharedKeyAuthenticator* self, const libqt_string preSharedKey);
libqt_string QSslPreSharedKeyAuthenticator_PreSharedKey(const QSslPreSharedKeyAuthenticator* self);
int QSslPreSharedKeyAuthenticator_MaximumPreSharedKeyLength(const QSslPreSharedKeyAuthenticator* self);
void QSslPreSharedKeyAuthenticator_Delete(QSslPreSharedKeyAuthenticator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
