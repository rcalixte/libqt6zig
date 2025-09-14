#pragma once
#ifndef SRC_EXTRAS_SOLIDC_LIBBLOCK_H
#define SRC_EXTRAS_SOLIDC_LIBBLOCK_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__Block)
typedef Solid::Block Solid__Block;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface)
typedef Solid::DeviceInterface Solid__DeviceInterface;
#endif
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct Solid__Block Solid__Block;
typedef struct Solid__DeviceInterface Solid__DeviceInterface;
#endif

QMetaObject* Solid__Block_MetaObject(const Solid__Block* self);
void* Solid__Block_Metacast(Solid__Block* self, const char* param1);
int Solid__Block_Metacall(Solid__Block* self, int param1, int param2, void** param3);
libqt_string Solid__Block_Tr(const char* s);
int Solid__Block_DeviceInterfaceType();
int Solid__Block_DeviceMajor(const Solid__Block* self);
int Solid__Block_DeviceMinor(const Solid__Block* self);
libqt_string Solid__Block_Device(const Solid__Block* self);
libqt_string Solid__Block_Tr2(const char* s, const char* c);
libqt_string Solid__Block_Tr3(const char* s, const char* c, int n);
void Solid__Block_Delete(Solid__Block* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
