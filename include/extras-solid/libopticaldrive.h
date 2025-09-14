#pragma once
#ifndef SRC_EXTRAS_SOLIDC_LIBOPTICALDRIVE_H
#define SRC_EXTRAS_SOLIDC_LIBOPTICALDRIVE_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__OpticalDrive)
typedef Solid::OpticalDrive Solid__OpticalDrive;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__StorageDrive)
typedef Solid::StorageDrive Solid__StorageDrive;
#endif
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct Solid__DeviceInterface Solid__DeviceInterface;
typedef struct Solid__OpticalDrive Solid__OpticalDrive;
typedef struct Solid__StorageDrive Solid__StorageDrive;
#endif

QMetaObject* Solid__OpticalDrive_MetaObject(const Solid__OpticalDrive* self);
void* Solid__OpticalDrive_Metacast(Solid__OpticalDrive* self, const char* param1);
int Solid__OpticalDrive_Metacall(Solid__OpticalDrive* self, int param1, int param2, void** param3);
libqt_string Solid__OpticalDrive_Tr(const char* s);
int Solid__OpticalDrive_DeviceInterfaceType();
int Solid__OpticalDrive_SupportedMedia(const Solid__OpticalDrive* self);
int Solid__OpticalDrive_ReadSpeed(const Solid__OpticalDrive* self);
int Solid__OpticalDrive_WriteSpeed(const Solid__OpticalDrive* self);
libqt_list /* of int */ Solid__OpticalDrive_WriteSpeeds(const Solid__OpticalDrive* self);
bool Solid__OpticalDrive_Eject(Solid__OpticalDrive* self);
void Solid__OpticalDrive_EjectPressed(Solid__OpticalDrive* self, const libqt_string udi);
void Solid__OpticalDrive_Connect_EjectPressed(Solid__OpticalDrive* self, intptr_t slot);
void Solid__OpticalDrive_EjectDone(Solid__OpticalDrive* self, int errorVal, QVariant* errorData, const libqt_string udi);
void Solid__OpticalDrive_Connect_EjectDone(Solid__OpticalDrive* self, intptr_t slot);
void Solid__OpticalDrive_EjectRequested(Solid__OpticalDrive* self, const libqt_string udi);
void Solid__OpticalDrive_Connect_EjectRequested(Solid__OpticalDrive* self, intptr_t slot);
libqt_string Solid__OpticalDrive_Tr2(const char* s, const char* c);
libqt_string Solid__OpticalDrive_Tr3(const char* s, const char* c, int n);
void Solid__OpticalDrive_Delete(Solid__OpticalDrive* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
