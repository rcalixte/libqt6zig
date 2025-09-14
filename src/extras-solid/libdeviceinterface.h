#pragma once
#ifndef SRC_EXTRAS_SOLIDC_LIBDEVICEINTERFACE_H
#define SRC_EXTRAS_SOLIDC_LIBDEVICEINTERFACE_H

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
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct Solid__DeviceInterface Solid__DeviceInterface;
#endif

QMetaObject* Solid__DeviceInterface_MetaObject(const Solid__DeviceInterface* self);
void* Solid__DeviceInterface_Metacast(Solid__DeviceInterface* self, const char* param1);
int Solid__DeviceInterface_Metacall(Solid__DeviceInterface* self, int param1, int param2, void** param3);
libqt_string Solid__DeviceInterface_Tr(const char* s);
bool Solid__DeviceInterface_IsValid(const Solid__DeviceInterface* self);
libqt_string Solid__DeviceInterface_TypeToString(int typeVal);
int Solid__DeviceInterface_StringToType(const libqt_string typeVal);
libqt_string Solid__DeviceInterface_TypeDescription(int typeVal);
libqt_string Solid__DeviceInterface_Tr2(const char* s, const char* c);
libqt_string Solid__DeviceInterface_Tr3(const char* s, const char* c, int n);
void Solid__DeviceInterface_Delete(Solid__DeviceInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
