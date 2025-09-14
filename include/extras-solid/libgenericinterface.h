#pragma once
#ifndef SRC_EXTRAS_SOLIDC_LIBGENERICINTERFACE_H
#define SRC_EXTRAS_SOLIDC_LIBGENERICINTERFACE_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__GenericInterface)
typedef Solid::GenericInterface Solid__GenericInterface;
#endif
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct Solid__DeviceInterface Solid__DeviceInterface;
typedef struct Solid__GenericInterface Solid__GenericInterface;
#endif

QMetaObject* Solid__GenericInterface_MetaObject(const Solid__GenericInterface* self);
void* Solid__GenericInterface_Metacast(Solid__GenericInterface* self, const char* param1);
int Solid__GenericInterface_Metacall(Solid__GenericInterface* self, int param1, int param2, void** param3);
libqt_string Solid__GenericInterface_Tr(const char* s);
int Solid__GenericInterface_DeviceInterfaceType();
QVariant* Solid__GenericInterface_Property(const Solid__GenericInterface* self, const libqt_string key);
libqt_map /* of libqt_string to QVariant* */ Solid__GenericInterface_AllProperties(const Solid__GenericInterface* self);
bool Solid__GenericInterface_PropertyExists(const Solid__GenericInterface* self, const libqt_string key);
void Solid__GenericInterface_PropertyChanged(Solid__GenericInterface* self, const libqt_map /* of libqt_string to int */ changes);
void Solid__GenericInterface_Connect_PropertyChanged(Solid__GenericInterface* self, intptr_t slot);
void Solid__GenericInterface_ConditionRaised(Solid__GenericInterface* self, const libqt_string condition, const libqt_string reason);
void Solid__GenericInterface_Connect_ConditionRaised(Solid__GenericInterface* self, intptr_t slot);
libqt_string Solid__GenericInterface_Tr2(const char* s, const char* c);
libqt_string Solid__GenericInterface_Tr3(const char* s, const char* c, int n);
void Solid__GenericInterface_Delete(Solid__GenericInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
