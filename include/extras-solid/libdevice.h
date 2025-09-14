#pragma once
#ifndef SRC_EXTRAS_SOLIDC_LIBDEVICE_H
#define SRC_EXTRAS_SOLIDC_LIBDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__Device)
typedef Solid::Device Solid__Device;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface)
typedef Solid::DeviceInterface Solid__DeviceInterface;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__Predicate)
typedef Solid::Predicate Solid__Predicate;
#endif
#else
typedef struct Solid__Device Solid__Device;
typedef struct Solid__DeviceInterface Solid__DeviceInterface;
typedef struct Solid__Predicate Solid__Predicate;
#endif

Solid__Device* Solid__Device_new();
Solid__Device* Solid__Device_new2(const Solid__Device* device);
Solid__Device* Solid__Device_new3(const libqt_string udi);
libqt_list /* of Solid__Device* */ Solid__Device_AllDevices();
libqt_list /* of Solid__Device* */ Solid__Device_ListFromType(const int* typeVal);
libqt_list /* of Solid__Device* */ Solid__Device_ListFromQuery(const Solid__Predicate* predicate);
libqt_list /* of Solid__Device* */ Solid__Device_ListFromQuery2(const libqt_string predicate);
Solid__Device* Solid__Device_StorageAccessFromPath(const libqt_string path);
void Solid__Device_OperatorAssign(Solid__Device* self, const Solid__Device* device);
bool Solid__Device_IsValid(const Solid__Device* self);
libqt_string Solid__Device_Udi(const Solid__Device* self);
libqt_string Solid__Device_ParentUdi(const Solid__Device* self);
Solid__Device* Solid__Device_Parent(const Solid__Device* self);
libqt_string Solid__Device_Vendor(const Solid__Device* self);
libqt_string Solid__Device_Product(const Solid__Device* self);
libqt_string Solid__Device_Icon(const Solid__Device* self);
libqt_list /* of libqt_string */ Solid__Device_Emblems(const Solid__Device* self);
libqt_string Solid__Device_DisplayName(const Solid__Device* self);
libqt_string Solid__Device_Description(const Solid__Device* self);
bool Solid__Device_IsDeviceInterface(const Solid__Device* self, const int* typeVal);
Solid__DeviceInterface* Solid__Device_AsDeviceInterface(Solid__Device* self, const int* typeVal);
Solid__DeviceInterface* Solid__Device_AsDeviceInterface2(const Solid__Device* self, const int* typeVal);
libqt_list /* of Solid__Device* */ Solid__Device_ListFromType2(const int* typeVal, const libqt_string parentUdi);
libqt_list /* of Solid__Device* */ Solid__Device_ListFromQuery22(const Solid__Predicate* predicate, const libqt_string parentUdi);
libqt_list /* of Solid__Device* */ Solid__Device_ListFromQuery23(const libqt_string predicate, const libqt_string parentUdi);
void Solid__Device_Delete(Solid__Device* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
