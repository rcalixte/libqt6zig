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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QDateTime QDateTime;
typedef struct QEvent QEvent;
typedef struct QFileDevice QFileDevice;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QFileDevice::FileError FileError;             // C++ enum
typedef QFileDevice::FileHandleFlag FileHandleFlag;   // C++ enum
typedef QFileDevice::FileHandleFlags FileHandleFlags; // C++ QFlags
typedef QFileDevice::FileTime FileTime;               // C++ enum
typedef QFileDevice::MemoryMapFlag MemoryMapFlag;     // C++ enum
typedef QFileDevice::MemoryMapFlags MemoryMapFlags;   // C++ QFlags
typedef QFileDevice::Permission Permission;           // C++ enum
typedef QFileDevice::Permissions Permissions;         // C++ QFlags
#else
typedef int FileError;       // C ABI enum
typedef int FileHandleFlag;  // C ABI enum
typedef int FileHandleFlags; // C ABI QFlags
typedef int FileTime;        // C ABI enum
typedef int MemoryMapFlag;   // C ABI enum
typedef int MemoryMapFlags;  // C ABI QFlags
typedef int Permission;      // C ABI enum
typedef int Permissions;     // C ABI QFlags
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
bool QFileDevice_SetFileTime(QFileDevice* self, QDateTime* newDate, int fileTime);
libqt_string QFileDevice_Tr2(const char* s, const char* c);
libqt_string QFileDevice_Tr3(const char* s, const char* c, int n);
unsigned char* QFileDevice_Map3(QFileDevice* self, long long offset, long long size, int flags);
bool QFileDevice_Open(QFileDevice* self, int mode);
bool QFileDevice_Reset(QFileDevice* self);
long long QFileDevice_BytesAvailable(const QFileDevice* self);
long long QFileDevice_BytesToWrite(const QFileDevice* self);
bool QFileDevice_CanReadLine(const QFileDevice* self);
bool QFileDevice_WaitForReadyRead(QFileDevice* self, int msecs);
bool QFileDevice_WaitForBytesWritten(QFileDevice* self, int msecs);
bool QFileDevice_Event(QFileDevice* self, QEvent* event);
bool QFileDevice_EventFilter(QFileDevice* self, QObject* watched, QEvent* event);
void QFileDevice_Delete(QFileDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
