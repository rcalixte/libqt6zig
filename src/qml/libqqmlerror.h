#pragma once
#ifndef QML_LIBQQMLERROR_H
#define QML_LIBQQMLERROR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QObject QObject;
typedef struct QQmlError QQmlError;
typedef struct QUrl QUrl;
#endif

QQmlError* QQmlError_new();
QQmlError* QQmlError_new2(const QQmlError* param1);
void QQmlError_OperatorAssign(QQmlError* self, const QQmlError* param1);
void QQmlError_Swap(QQmlError* self, QQmlError* other);
bool QQmlError_IsValid(const QQmlError* self);
QUrl* QQmlError_Url(const QQmlError* self);
void QQmlError_SetUrl(QQmlError* self, const QUrl* url);
libqt_string QQmlError_Description(const QQmlError* self);
void QQmlError_SetDescription(QQmlError* self, const libqt_string description);
int QQmlError_Line(const QQmlError* self);
void QQmlError_SetLine(QQmlError* self, int line);
int QQmlError_Column(const QQmlError* self);
void QQmlError_SetColumn(QQmlError* self, int column);
QObject* QQmlError_Object(const QQmlError* self);
void QQmlError_SetObject(QQmlError* self, QObject* object);
libqt_string QQmlError_ToString(const QQmlError* self);
void QQmlError_Delete(QQmlError* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
