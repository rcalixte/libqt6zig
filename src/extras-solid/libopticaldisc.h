#pragma once
#ifndef SRC_EXTRAS_SOLIDC_LIBOPTICALDISC_H
#define SRC_EXTRAS_SOLIDC_LIBOPTICALDISC_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__OpticalDisc)
typedef Solid::OpticalDisc Solid__OpticalDisc;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__StorageVolume)
typedef Solid::StorageVolume Solid__StorageVolume;
#endif
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct Solid__DeviceInterface Solid__DeviceInterface;
typedef struct Solid__OpticalDisc Solid__OpticalDisc;
typedef struct Solid__StorageVolume Solid__StorageVolume;
#endif

QMetaObject* Solid__OpticalDisc_MetaObject(const Solid__OpticalDisc* self);
void* Solid__OpticalDisc_Metacast(Solid__OpticalDisc* self, const char* param1);
int Solid__OpticalDisc_Metacall(Solid__OpticalDisc* self, int param1, int param2, void** param3);
libqt_string Solid__OpticalDisc_Tr(const char* s);
int Solid__OpticalDisc_DeviceInterfaceType();
int Solid__OpticalDisc_AvailableContent(const Solid__OpticalDisc* self);
int Solid__OpticalDisc_DiscType(const Solid__OpticalDisc* self);
bool Solid__OpticalDisc_IsAppendable(const Solid__OpticalDisc* self);
bool Solid__OpticalDisc_IsBlank(const Solid__OpticalDisc* self);
bool Solid__OpticalDisc_IsRewritable(const Solid__OpticalDisc* self);
unsigned long long Solid__OpticalDisc_Capacity(const Solid__OpticalDisc* self);
libqt_string Solid__OpticalDisc_Tr2(const char* s, const char* c);
libqt_string Solid__OpticalDisc_Tr3(const char* s, const char* c, int n);
void Solid__OpticalDisc_Delete(Solid__OpticalDisc* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
