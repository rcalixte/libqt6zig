#pragma once
#ifndef SRCC_LIBQSYSTEMSEMAPHORE_H
#define SRCC_LIBQSYSTEMSEMAPHORE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QNativeIpcKey QNativeIpcKey;
typedef struct QSystemSemaphore QSystemSemaphore;
#endif

QSystemSemaphore* QSystemSemaphore_new(const QNativeIpcKey* key);
QSystemSemaphore* QSystemSemaphore_new2(const libqt_string key);
QSystemSemaphore* QSystemSemaphore_new3(const QNativeIpcKey* key, int initialValue);
QSystemSemaphore* QSystemSemaphore_new4(const QNativeIpcKey* key, int initialValue, int param3);
QSystemSemaphore* QSystemSemaphore_new5(const libqt_string key, int initialValue);
QSystemSemaphore* QSystemSemaphore_new6(const libqt_string key, int initialValue, int mode);
libqt_string QSystemSemaphore_Tr(const char* sourceText);
void QSystemSemaphore_SetNativeKey(QSystemSemaphore* self, const QNativeIpcKey* key);
void QSystemSemaphore_SetNativeKey2(QSystemSemaphore* self, const libqt_string key);
QNativeIpcKey* QSystemSemaphore_NativeIpcKey(const QSystemSemaphore* self);
void QSystemSemaphore_SetKey(QSystemSemaphore* self, const libqt_string key);
libqt_string QSystemSemaphore_Key(const QSystemSemaphore* self);
bool QSystemSemaphore_Acquire(QSystemSemaphore* self);
bool QSystemSemaphore_Release(QSystemSemaphore* self);
int QSystemSemaphore_Error(const QSystemSemaphore* self);
libqt_string QSystemSemaphore_ErrorString(const QSystemSemaphore* self);
bool QSystemSemaphore_IsKeyTypeSupported(uint16_t typeVal);
QNativeIpcKey* QSystemSemaphore_PlatformSafeKey(const libqt_string key);
QNativeIpcKey* QSystemSemaphore_LegacyNativeKey(const libqt_string key);
libqt_string QSystemSemaphore_Tr2(const char* sourceText, const char* disambiguation);
libqt_string QSystemSemaphore_Tr3(const char* sourceText, const char* disambiguation, int n);
void QSystemSemaphore_SetNativeKey22(QSystemSemaphore* self, const QNativeIpcKey* key, int initialValue);
void QSystemSemaphore_SetNativeKey3(QSystemSemaphore* self, const QNativeIpcKey* key, int initialValue, int param3);
void QSystemSemaphore_SetNativeKey23(QSystemSemaphore* self, const libqt_string key, int initialValue);
void QSystemSemaphore_SetNativeKey32(QSystemSemaphore* self, const libqt_string key, int initialValue, int mode);
void QSystemSemaphore_SetNativeKey4(QSystemSemaphore* self, const libqt_string key, int initialValue, int mode, uint16_t typeVal);
void QSystemSemaphore_SetKey2(QSystemSemaphore* self, const libqt_string key, int initialValue);
void QSystemSemaphore_SetKey3(QSystemSemaphore* self, const libqt_string key, int initialValue, int mode);
bool QSystemSemaphore_Release1(QSystemSemaphore* self, int n);
QNativeIpcKey* QSystemSemaphore_PlatformSafeKey2(const libqt_string key, uint16_t typeVal);
QNativeIpcKey* QSystemSemaphore_LegacyNativeKey2(const libqt_string key, uint16_t typeVal);
void QSystemSemaphore_Delete(QSystemSemaphore* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
