#pragma once
#ifndef SRC_EXTRAS_SOLIDC_LIBSTORAGEACCESS_H
#define SRC_EXTRAS_SOLIDC_LIBSTORAGEACCESS_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__StorageAccess)
typedef Solid::StorageAccess Solid__StorageAccess;
#endif
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct Solid__DeviceInterface Solid__DeviceInterface;
typedef struct Solid__StorageAccess Solid__StorageAccess;
#endif

QMetaObject* Solid__StorageAccess_MetaObject(const Solid__StorageAccess* self);
void* Solid__StorageAccess_Metacast(Solid__StorageAccess* self, const char* param1);
int Solid__StorageAccess_Metacall(Solid__StorageAccess* self, int param1, int param2, void** param3);
libqt_string Solid__StorageAccess_Tr(const char* s);
int Solid__StorageAccess_DeviceInterfaceType();
bool Solid__StorageAccess_IsAccessible(const Solid__StorageAccess* self);
libqt_string Solid__StorageAccess_FilePath(const Solid__StorageAccess* self);
bool Solid__StorageAccess_IsIgnored(const Solid__StorageAccess* self);
bool Solid__StorageAccess_IsEncrypted(const Solid__StorageAccess* self);
bool Solid__StorageAccess_Setup(Solid__StorageAccess* self);
bool Solid__StorageAccess_Teardown(Solid__StorageAccess* self);
bool Solid__StorageAccess_CanCheck(const Solid__StorageAccess* self);
bool Solid__StorageAccess_Check(Solid__StorageAccess* self);
bool Solid__StorageAccess_CanRepair(const Solid__StorageAccess* self);
bool Solid__StorageAccess_Repair(Solid__StorageAccess* self);
void Solid__StorageAccess_AccessibilityChanged(Solid__StorageAccess* self, bool accessible, const libqt_string udi);
void Solid__StorageAccess_Connect_AccessibilityChanged(Solid__StorageAccess* self, intptr_t slot);
void Solid__StorageAccess_SetupDone(Solid__StorageAccess* self, int errorVal, QVariant* errorData, const libqt_string udi);
void Solid__StorageAccess_Connect_SetupDone(Solid__StorageAccess* self, intptr_t slot);
void Solid__StorageAccess_TeardownDone(Solid__StorageAccess* self, int errorVal, QVariant* errorData, const libqt_string udi);
void Solid__StorageAccess_Connect_TeardownDone(Solid__StorageAccess* self, intptr_t slot);
void Solid__StorageAccess_SetupRequested(Solid__StorageAccess* self, const libqt_string udi);
void Solid__StorageAccess_Connect_SetupRequested(Solid__StorageAccess* self, intptr_t slot);
void Solid__StorageAccess_TeardownRequested(Solid__StorageAccess* self, const libqt_string udi);
void Solid__StorageAccess_Connect_TeardownRequested(Solid__StorageAccess* self, intptr_t slot);
void Solid__StorageAccess_CheckRequested(Solid__StorageAccess* self, const libqt_string udi);
void Solid__StorageAccess_Connect_CheckRequested(Solid__StorageAccess* self, intptr_t slot);
void Solid__StorageAccess_CheckDone(Solid__StorageAccess* self, int errorVal, QVariant* errorData, const libqt_string udi);
void Solid__StorageAccess_Connect_CheckDone(Solid__StorageAccess* self, intptr_t slot);
void Solid__StorageAccess_RepairRequested(Solid__StorageAccess* self, const libqt_string udi);
void Solid__StorageAccess_Connect_RepairRequested(Solid__StorageAccess* self, intptr_t slot);
void Solid__StorageAccess_RepairDone(Solid__StorageAccess* self, int errorVal, QVariant* errorData, const libqt_string udi);
void Solid__StorageAccess_Connect_RepairDone(Solid__StorageAccess* self, intptr_t slot);
libqt_string Solid__StorageAccess_Tr2(const char* s, const char* c);
libqt_string Solid__StorageAccess_Tr3(const char* s, const char* c, int n);
void Solid__StorageAccess_Delete(Solid__StorageAccess* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
