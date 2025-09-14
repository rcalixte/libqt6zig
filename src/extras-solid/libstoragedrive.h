#pragma once
#ifndef SRC_EXTRAS_SOLIDC_LIBSTORAGEDRIVE_H
#define SRC_EXTRAS_SOLIDC_LIBSTORAGEDRIVE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface)
typedef Solid::DeviceInterface Solid__DeviceInterface;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__StorageDrive)
typedef Solid::StorageDrive Solid__StorageDrive;
#endif
#else
typedef struct QDateTime QDateTime;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct Solid__DeviceInterface Solid__DeviceInterface;
typedef struct Solid__StorageDrive Solid__StorageDrive;
#endif

QMetaObject* Solid__StorageDrive_MetaObject(const Solid__StorageDrive* self);
void* Solid__StorageDrive_Metacast(Solid__StorageDrive* self, const char* param1);
int Solid__StorageDrive_Metacall(Solid__StorageDrive* self, int param1, int param2, void** param3);
libqt_string Solid__StorageDrive_Tr(const char* s);
int Solid__StorageDrive_DeviceInterfaceType();
int Solid__StorageDrive_Bus(const Solid__StorageDrive* self);
int Solid__StorageDrive_DriveType(const Solid__StorageDrive* self);
bool Solid__StorageDrive_IsRemovable(const Solid__StorageDrive* self);
bool Solid__StorageDrive_IsHotpluggable(const Solid__StorageDrive* self);
unsigned long long Solid__StorageDrive_Size(const Solid__StorageDrive* self);
bool Solid__StorageDrive_IsInUse(const Solid__StorageDrive* self);
QDateTime* Solid__StorageDrive_TimeDetected(const Solid__StorageDrive* self);
QDateTime* Solid__StorageDrive_TimeMediaDetected(const Solid__StorageDrive* self);
libqt_string Solid__StorageDrive_Tr2(const char* s, const char* c);
libqt_string Solid__StorageDrive_Tr3(const char* s, const char* c, int n);
void Solid__StorageDrive_Delete(Solid__StorageDrive* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
