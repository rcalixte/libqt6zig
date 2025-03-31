#pragma once
#ifndef SRCC_LIBQSYSTEMSEMAPHORE_H
#define SRCC_LIBQSYSTEMSEMAPHORE_H

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
typedef struct QSystemSemaphore QSystemSemaphore;
#endif

#ifdef __cplusplus
typedef QSystemSemaphore::AccessMode AccessMode;                     // C++ enum
typedef QSystemSemaphore::SystemSemaphoreError SystemSemaphoreError; // C++ enum
#else
typedef int AccessMode;           // C ABI enum
typedef int SystemSemaphoreError; // C ABI enum
#endif

QSystemSemaphore* QSystemSemaphore_new(libqt_string key);
QSystemSemaphore* QSystemSemaphore_new2(libqt_string key, int initialValue);
QSystemSemaphore* QSystemSemaphore_new3(libqt_string key, int initialValue, int mode);
libqt_string QSystemSemaphore_Tr(const char* sourceText);
void QSystemSemaphore_SetKey(QSystemSemaphore* self, libqt_string key);
libqt_string QSystemSemaphore_Key(const QSystemSemaphore* self);
bool QSystemSemaphore_Acquire(QSystemSemaphore* self);
bool QSystemSemaphore_Release(QSystemSemaphore* self);
int QSystemSemaphore_Error(const QSystemSemaphore* self);
libqt_string QSystemSemaphore_ErrorString(const QSystemSemaphore* self);
libqt_string QSystemSemaphore_Tr2(const char* sourceText, const char* disambiguation);
libqt_string QSystemSemaphore_Tr3(const char* sourceText, const char* disambiguation, int n);
void QSystemSemaphore_SetKey2(QSystemSemaphore* self, libqt_string key, int initialValue);
void QSystemSemaphore_SetKey3(QSystemSemaphore* self, libqt_string key, int initialValue, int mode);
bool QSystemSemaphore_Release1(QSystemSemaphore* self, int n);
void QSystemSemaphore_Delete(QSystemSemaphore* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
