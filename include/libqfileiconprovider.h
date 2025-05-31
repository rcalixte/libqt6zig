#pragma once
#ifndef SRCC_LIBQFILEICONPROVIDER_H
#define SRCC_LIBQFILEICONPROVIDER_H

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
typedef struct QFileIconProvider QFileIconProvider;
typedef struct QFileInfo QFileInfo;
typedef struct QIcon QIcon;
#endif

QFileIconProvider* QFileIconProvider_new();
QIcon* QFileIconProvider_Icon(const QFileIconProvider* self, int typeVal);
void QFileIconProvider_OnIcon(const QFileIconProvider* self, intptr_t slot);
QIcon* QFileIconProvider_QBaseIcon(const QFileIconProvider* self, int typeVal);
QIcon* QFileIconProvider_IconWithInfo(const QFileIconProvider* self, const QFileInfo* info);
void QFileIconProvider_OnIconWithInfo(const QFileIconProvider* self, intptr_t slot);
QIcon* QFileIconProvider_QBaseIconWithInfo(const QFileIconProvider* self, const QFileInfo* info);
libqt_string QFileIconProvider_Type(const QFileIconProvider* self, const QFileInfo* param1);
void QFileIconProvider_OnType(const QFileIconProvider* self, intptr_t slot);
libqt_string QFileIconProvider_QBaseType(const QFileIconProvider* self, const QFileInfo* param1);
void QFileIconProvider_SetOptions(QFileIconProvider* self, int options);
void QFileIconProvider_OnSetOptions(QFileIconProvider* self, intptr_t slot);
void QFileIconProvider_QBaseSetOptions(QFileIconProvider* self, int options);
int QFileIconProvider_Options(const QFileIconProvider* self);
void QFileIconProvider_OnOptions(const QFileIconProvider* self, intptr_t slot);
int QFileIconProvider_QBaseOptions(const QFileIconProvider* self);
void QFileIconProvider_Delete(QFileIconProvider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
