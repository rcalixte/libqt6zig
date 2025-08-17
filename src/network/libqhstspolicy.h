#pragma once
#ifndef SRC_NETWORKC_LIBQHSTSPOLICY_H
#define SRC_NETWORKC_LIBQHSTSPOLICY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDateTime QDateTime;
typedef struct QHstsPolicy QHstsPolicy;
#endif

QHstsPolicy* QHstsPolicy_new();
QHstsPolicy* QHstsPolicy_new2(const QDateTime* expiry, int flags, const libqt_string host);
QHstsPolicy* QHstsPolicy_new3(const QHstsPolicy* rhs);
QHstsPolicy* QHstsPolicy_new4(const QDateTime* expiry, int flags, const libqt_string host, int mode);
void QHstsPolicy_OperatorAssign(QHstsPolicy* self, const QHstsPolicy* rhs);
void QHstsPolicy_Swap(QHstsPolicy* self, QHstsPolicy* other);
void QHstsPolicy_SetHost(QHstsPolicy* self, const libqt_string host);
libqt_string QHstsPolicy_Host(const QHstsPolicy* self);
void QHstsPolicy_SetExpiry(QHstsPolicy* self, const QDateTime* expiry);
QDateTime* QHstsPolicy_Expiry(const QHstsPolicy* self);
void QHstsPolicy_SetIncludesSubDomains(QHstsPolicy* self, bool include);
bool QHstsPolicy_IncludesSubDomains(const QHstsPolicy* self);
bool QHstsPolicy_IsExpired(const QHstsPolicy* self);
void QHstsPolicy_SetHost2(QHstsPolicy* self, const libqt_string host, int mode);
libqt_string QHstsPolicy_Host1(const QHstsPolicy* self, int options);
void QHstsPolicy_Delete(QHstsPolicy* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
