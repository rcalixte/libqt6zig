#pragma once
#ifndef SRC_EXTRAS_SOLIDC_LIBPORTABLEMEDIAPLAYER_H
#define SRC_EXTRAS_SOLIDC_LIBPORTABLEMEDIAPLAYER_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__PortableMediaPlayer)
typedef Solid::PortableMediaPlayer Solid__PortableMediaPlayer;
#endif
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct Solid__DeviceInterface Solid__DeviceInterface;
typedef struct Solid__PortableMediaPlayer Solid__PortableMediaPlayer;
#endif

QMetaObject* Solid__PortableMediaPlayer_MetaObject(const Solid__PortableMediaPlayer* self);
void* Solid__PortableMediaPlayer_Metacast(Solid__PortableMediaPlayer* self, const char* param1);
int Solid__PortableMediaPlayer_Metacall(Solid__PortableMediaPlayer* self, int param1, int param2, void** param3);
libqt_string Solid__PortableMediaPlayer_Tr(const char* s);
int Solid__PortableMediaPlayer_DeviceInterfaceType();
libqt_list /* of libqt_string */ Solid__PortableMediaPlayer_SupportedProtocols(const Solid__PortableMediaPlayer* self);
libqt_list /* of libqt_string */ Solid__PortableMediaPlayer_SupportedDrivers(const Solid__PortableMediaPlayer* self);
QVariant* Solid__PortableMediaPlayer_DriverHandle(const Solid__PortableMediaPlayer* self, const libqt_string driver);
libqt_string Solid__PortableMediaPlayer_Tr2(const char* s, const char* c);
libqt_string Solid__PortableMediaPlayer_Tr3(const char* s, const char* c, int n);
libqt_list /* of libqt_string */ Solid__PortableMediaPlayer_SupportedDrivers1(const Solid__PortableMediaPlayer* self, libqt_string protocol);
void Solid__PortableMediaPlayer_Delete(Solid__PortableMediaPlayer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
