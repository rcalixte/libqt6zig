#pragma once
#ifndef SRC_EXTRAS_SOLIDC_LIBSTORAGEVOLUME_H
#define SRC_EXTRAS_SOLIDC_LIBSTORAGEVOLUME_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__StorageVolume)
typedef Solid::StorageVolume Solid__StorageVolume;
#endif
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct Solid__DeviceInterface Solid__DeviceInterface;
typedef struct Solid__StorageVolume Solid__StorageVolume;
#endif

QMetaObject* Solid__StorageVolume_MetaObject(const Solid__StorageVolume* self);
void* Solid__StorageVolume_Metacast(Solid__StorageVolume* self, const char* param1);
int Solid__StorageVolume_Metacall(Solid__StorageVolume* self, int param1, int param2, void** param3);
libqt_string Solid__StorageVolume_Tr(const char* s);
int Solid__StorageVolume_DeviceInterfaceType();
bool Solid__StorageVolume_IsIgnored(const Solid__StorageVolume* self);
int Solid__StorageVolume_Usage(const Solid__StorageVolume* self);
libqt_string Solid__StorageVolume_FsType(const Solid__StorageVolume* self);
libqt_string Solid__StorageVolume_Label(const Solid__StorageVolume* self);
libqt_string Solid__StorageVolume_Uuid(const Solid__StorageVolume* self);
unsigned long long Solid__StorageVolume_Size(const Solid__StorageVolume* self);
libqt_string Solid__StorageVolume_Tr2(const char* s, const char* c);
libqt_string Solid__StorageVolume_Tr3(const char* s, const char* c, int n);
void Solid__StorageVolume_Delete(Solid__StorageVolume* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
