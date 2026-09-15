#pragma once
#ifndef QML_LIBQQMLSCRIPTSTRING_H
#define QML_LIBQQMLSCRIPTSTRING_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QQmlScriptString QQmlScriptString;
#endif

QQmlScriptString* QQmlScriptString_new();
QQmlScriptString* QQmlScriptString_new2(const QQmlScriptString* param1);
void QQmlScriptString_OperatorAssign(QQmlScriptString* self, const QQmlScriptString* param1);
bool QQmlScriptString_OperatorEqual(const QQmlScriptString* self, const QQmlScriptString* param1);
bool QQmlScriptString_OperatorNotEqual(const QQmlScriptString* self, const QQmlScriptString* param1);
bool QQmlScriptString_IsEmpty(const QQmlScriptString* self);
bool QQmlScriptString_IsUndefinedLiteral(const QQmlScriptString* self);
bool QQmlScriptString_IsNullLiteral(const QQmlScriptString* self);
libqt_string QQmlScriptString_StringLiteral(const QQmlScriptString* self);
double QQmlScriptString_NumberLiteral(const QQmlScriptString* self, bool* ok);
bool QQmlScriptString_BooleanLiteral(const QQmlScriptString* self, bool* ok);
void QQmlScriptString_Delete(QQmlScriptString* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
