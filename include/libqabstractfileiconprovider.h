#pragma once
#ifndef SRCC_LIBQABSTRACTFILEICONPROVIDER_H
#define SRCC_LIBQABSTRACTFILEICONPROVIDER_H

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
typedef struct QAbstractFileIconProvider QAbstractFileIconProvider;
typedef struct QFileInfo QFileInfo;
typedef struct QIcon QIcon;
#endif

#ifdef __cplusplus
typedef QAbstractFileIconProvider::IconType IconType; // C++ enum
typedef QAbstractFileIconProvider::Option Option;     // C++ enum
typedef QAbstractFileIconProvider::Options Options;   // C++ QFlags
#else
typedef int IconType; // C ABI enum
typedef int Option;   // C ABI enum
typedef int Options;  // C ABI QFlags
#endif

QAbstractFileIconProvider* QAbstractFileIconProvider_new();
QIcon* QAbstractFileIconProvider_Icon(const QAbstractFileIconProvider* self, int param1);
void QAbstractFileIconProvider_OnIcon(const QAbstractFileIconProvider* self, intptr_t slot);
QIcon* QAbstractFileIconProvider_QBaseIcon(const QAbstractFileIconProvider* self, int param1);
QIcon* QAbstractFileIconProvider_IconWithQFileInfo(const QAbstractFileIconProvider* self, const QFileInfo* param1);
void QAbstractFileIconProvider_OnIconWithQFileInfo(const QAbstractFileIconProvider* self, intptr_t slot);
QIcon* QAbstractFileIconProvider_QBaseIconWithQFileInfo(const QAbstractFileIconProvider* self, const QFileInfo* param1);
libqt_string QAbstractFileIconProvider_Type(const QAbstractFileIconProvider* self, const QFileInfo* param1);
void QAbstractFileIconProvider_OnType(const QAbstractFileIconProvider* self, intptr_t slot);
libqt_string QAbstractFileIconProvider_QBaseType(const QAbstractFileIconProvider* self, const QFileInfo* param1);
void QAbstractFileIconProvider_SetOptions(QAbstractFileIconProvider* self, int options);
void QAbstractFileIconProvider_OnSetOptions(QAbstractFileIconProvider* self, intptr_t slot);
void QAbstractFileIconProvider_QBaseSetOptions(QAbstractFileIconProvider* self, int options);
int QAbstractFileIconProvider_Options(const QAbstractFileIconProvider* self);
void QAbstractFileIconProvider_OnOptions(const QAbstractFileIconProvider* self, intptr_t slot);
int QAbstractFileIconProvider_QBaseOptions(const QAbstractFileIconProvider* self);
void QAbstractFileIconProvider_Delete(QAbstractFileIconProvider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
