#pragma once
#ifndef SRC_EXTRAS_SOLIDC_LIBCAMERA_H
#define SRC_EXTRAS_SOLIDC_LIBCAMERA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__Camera)
typedef Solid::Camera Solid__Camera;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface)
typedef Solid::DeviceInterface Solid__DeviceInterface;
#endif
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct Solid__Camera Solid__Camera;
typedef struct Solid__DeviceInterface Solid__DeviceInterface;
#endif

QMetaObject* Solid__Camera_MetaObject(const Solid__Camera* self);
void* Solid__Camera_Metacast(Solid__Camera* self, const char* param1);
int Solid__Camera_Metacall(Solid__Camera* self, int param1, int param2, void** param3);
libqt_string Solid__Camera_Tr(const char* s);
int Solid__Camera_DeviceInterfaceType();
libqt_list /* of libqt_string */ Solid__Camera_SupportedProtocols(const Solid__Camera* self);
libqt_list /* of libqt_string */ Solid__Camera_SupportedDrivers(const Solid__Camera* self);
QVariant* Solid__Camera_DriverHandle(const Solid__Camera* self, const libqt_string driver);
libqt_string Solid__Camera_Tr2(const char* s, const char* c);
libqt_string Solid__Camera_Tr3(const char* s, const char* c, int n);
libqt_list /* of libqt_string */ Solid__Camera_SupportedDrivers1(const Solid__Camera* self, libqt_string protocol);
void Solid__Camera_Delete(Solid__Camera* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
