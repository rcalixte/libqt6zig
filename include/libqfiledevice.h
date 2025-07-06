#pragma once
#ifndef SRCC_LIBQFILEDEVICE_H
#define SRCC_LIBQFILEDEVICE_H

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
typedef struct QDateTime QDateTime;
typedef struct QFileDevice QFileDevice;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QFileDevice_MetaObject(const QFileDevice* self);
void* QFileDevice_Metacast(QFileDevice* self, const char* param1);
int QFileDevice_Metacall(QFileDevice* self, int param1, int param2, void** param3);
libqt_string QFileDevice_Tr(const char* s);
int QFileDevice_Error(const QFileDevice* self);
void QFileDevice_UnsetError(QFileDevice* self);
void QFileDevice_Close(QFileDevice* self);
bool QFileDevice_IsSequential(const QFileDevice* self);
int QFileDevice_Handle(const QFileDevice* self);
libqt_string QFileDevice_FileName(const QFileDevice* self);
long long QFileDevice_Pos(const QFileDevice* self);
bool QFileDevice_Seek(QFileDevice* self, long long offset);
bool QFileDevice_AtEnd(const QFileDevice* self);
bool QFileDevice_Flush(QFileDevice* self);
long long QFileDevice_Size(const QFileDevice* self);
bool QFileDevice_Resize(QFileDevice* self, long long sz);
int QFileDevice_Permissions(const QFileDevice* self);
bool QFileDevice_SetPermissions(QFileDevice* self, int permissionSpec);
unsigned char* QFileDevice_Map(QFileDevice* self, long long offset, long long size);
bool QFileDevice_Unmap(QFileDevice* self, unsigned char* address);
QDateTime* QFileDevice_FileTime(const QFileDevice* self, int time);
bool QFileDevice_SetFileTime(QFileDevice* self, const QDateTime* newDate, int fileTime);
libqt_string QFileDevice_Tr2(const char* s, const char* c);
libqt_string QFileDevice_Tr3(const char* s, const char* c, int n);
unsigned char* QFileDevice_Map3(QFileDevice* self, long long offset, long long size, int flags);
void QFileDevice_Delete(QFileDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
