#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEPERMISSION_H
#define SRC_WEBENGINEC_LIBQWEBENGINEPERMISSION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QUrl QUrl;
typedef struct QWebEnginePermission QWebEnginePermission;
#endif

QWebEnginePermission* QWebEnginePermission_new();
QWebEnginePermission* QWebEnginePermission_new2(const QWebEnginePermission* other);
void QWebEnginePermission_OperatorAssign(QWebEnginePermission* self, const QWebEnginePermission* other);
void QWebEnginePermission_Swap(QWebEnginePermission* self, QWebEnginePermission* other);
QUrl* QWebEnginePermission_Origin(const QWebEnginePermission* self);
uint8_t QWebEnginePermission_PermissionType(const QWebEnginePermission* self);
uint8_t QWebEnginePermission_State(const QWebEnginePermission* self);
bool QWebEnginePermission_IsValid(const QWebEnginePermission* self);
void QWebEnginePermission_Grant(const QWebEnginePermission* self);
void QWebEnginePermission_Deny(const QWebEnginePermission* self);
void QWebEnginePermission_Reset(const QWebEnginePermission* self);
bool QWebEnginePermission_IsPersistent(uint8_t permissionType);
void QWebEnginePermission_Delete(QWebEnginePermission* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
