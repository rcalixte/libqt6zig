#pragma once
#ifndef SRCC_LIBQDESKTOPSERVICES_H
#define SRCC_LIBQDESKTOPSERVICES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDesktopServices QDesktopServices;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QDesktopServices* QDesktopServices_new(const QDesktopServices* other);
QDesktopServices* QDesktopServices_new2(QDesktopServices* other);
void QDesktopServices_CopyAssign(QDesktopServices* self, QDesktopServices* other);
void QDesktopServices_MoveAssign(QDesktopServices* self, QDesktopServices* other);
bool QDesktopServices_OpenUrl(const QUrl* url);
void QDesktopServices_SetUrlHandler(const libqt_string scheme, QObject* receiver, const char* method);
void QDesktopServices_UnsetUrlHandler(const libqt_string scheme);
void QDesktopServices_Delete(QDesktopServices* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
