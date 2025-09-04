#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSUNIXFILEDESCRIPTOR_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSUNIXFILEDESCRIPTOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDBusUnixFileDescriptor QDBusUnixFileDescriptor;
#endif

QDBusUnixFileDescriptor* QDBusUnixFileDescriptor_new();
QDBusUnixFileDescriptor* QDBusUnixFileDescriptor_new2(int fileDescriptor);
QDBusUnixFileDescriptor* QDBusUnixFileDescriptor_new3(const QDBusUnixFileDescriptor* other);
void QDBusUnixFileDescriptor_OperatorAssign(QDBusUnixFileDescriptor* self, const QDBusUnixFileDescriptor* other);
void QDBusUnixFileDescriptor_Swap(QDBusUnixFileDescriptor* self, QDBusUnixFileDescriptor* other);
bool QDBusUnixFileDescriptor_IsValid(const QDBusUnixFileDescriptor* self);
int QDBusUnixFileDescriptor_FileDescriptor(const QDBusUnixFileDescriptor* self);
void QDBusUnixFileDescriptor_SetFileDescriptor(QDBusUnixFileDescriptor* self, int fileDescriptor);
void QDBusUnixFileDescriptor_GiveFileDescriptor(QDBusUnixFileDescriptor* self, int fileDescriptor);
int QDBusUnixFileDescriptor_TakeFileDescriptor(QDBusUnixFileDescriptor* self);
bool QDBusUnixFileDescriptor_IsSupported();
void QDBusUnixFileDescriptor_Delete(QDBusUnixFileDescriptor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
