#pragma once
#ifndef SRC_EXTRAS_SOLIDC_LIBDEVICENOTIFIER_H
#define SRC_EXTRAS_SOLIDC_LIBDEVICENOTIFIER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceNotifier)
typedef Solid::DeviceNotifier Solid__DeviceNotifier;
#endif
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct Solid__DeviceNotifier Solid__DeviceNotifier;
#endif

QMetaObject* Solid__DeviceNotifier_MetaObject(const Solid__DeviceNotifier* self);
void* Solid__DeviceNotifier_Metacast(Solid__DeviceNotifier* self, const char* param1);
int Solid__DeviceNotifier_Metacall(Solid__DeviceNotifier* self, int param1, int param2, void** param3);
libqt_string Solid__DeviceNotifier_Tr(const char* s);
Solid__DeviceNotifier* Solid__DeviceNotifier_Instance();
void Solid__DeviceNotifier_DeviceAdded(Solid__DeviceNotifier* self, const libqt_string udi);
void Solid__DeviceNotifier_Connect_DeviceAdded(Solid__DeviceNotifier* self, intptr_t slot);
void Solid__DeviceNotifier_DeviceRemoved(Solid__DeviceNotifier* self, const libqt_string udi);
void Solid__DeviceNotifier_Connect_DeviceRemoved(Solid__DeviceNotifier* self, intptr_t slot);
libqt_string Solid__DeviceNotifier_Tr2(const char* s, const char* c);
libqt_string Solid__DeviceNotifier_Tr3(const char* s, const char* c, int n);
void Solid__DeviceNotifier_Delete(Solid__DeviceNotifier* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
