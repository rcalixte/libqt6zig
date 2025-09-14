#pragma once
#ifndef SRC_EXTRAS_SOLIDC_LIBBATTERY_H
#define SRC_EXTRAS_SOLIDC_LIBBATTERY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__Battery)
typedef Solid::Battery Solid__Battery;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface)
typedef Solid::DeviceInterface Solid__DeviceInterface;
#endif
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct Solid__Battery Solid__Battery;
typedef struct Solid__DeviceInterface Solid__DeviceInterface;
#endif

QMetaObject* Solid__Battery_MetaObject(const Solid__Battery* self);
void* Solid__Battery_Metacast(Solid__Battery* self, const char* param1);
int Solid__Battery_Metacall(Solid__Battery* self, int param1, int param2, void** param3);
libqt_string Solid__Battery_Tr(const char* s);
int Solid__Battery_DeviceInterfaceType();
bool Solid__Battery_IsPresent(const Solid__Battery* self);
int Solid__Battery_Type(const Solid__Battery* self);
int Solid__Battery_ChargePercent(const Solid__Battery* self);
int Solid__Battery_Capacity(const Solid__Battery* self);
int Solid__Battery_CycleCount(const Solid__Battery* self);
bool Solid__Battery_IsRechargeable(const Solid__Battery* self);
bool Solid__Battery_IsPowerSupply(const Solid__Battery* self);
int Solid__Battery_ChargeState(const Solid__Battery* self);
long long Solid__Battery_TimeToEmpty(const Solid__Battery* self);
long long Solid__Battery_TimeToFull(const Solid__Battery* self);
int Solid__Battery_Technology(const Solid__Battery* self);
double Solid__Battery_Energy(const Solid__Battery* self);
double Solid__Battery_EnergyFull(const Solid__Battery* self);
double Solid__Battery_EnergyFullDesign(const Solid__Battery* self);
double Solid__Battery_EnergyRate(const Solid__Battery* self);
double Solid__Battery_Voltage(const Solid__Battery* self);
double Solid__Battery_Temperature(const Solid__Battery* self);
libqt_string Solid__Battery_Serial(const Solid__Battery* self);
long long Solid__Battery_RemainingTime(const Solid__Battery* self);
void Solid__Battery_PresentStateChanged(Solid__Battery* self, bool newState, const libqt_string udi);
void Solid__Battery_Connect_PresentStateChanged(Solid__Battery* self, intptr_t slot);
void Solid__Battery_ChargePercentChanged(Solid__Battery* self, int value, const libqt_string udi);
void Solid__Battery_Connect_ChargePercentChanged(Solid__Battery* self, intptr_t slot);
void Solid__Battery_CapacityChanged(Solid__Battery* self, int value, const libqt_string udi);
void Solid__Battery_Connect_CapacityChanged(Solid__Battery* self, intptr_t slot);
void Solid__Battery_CycleCountChanged(Solid__Battery* self, int value, const libqt_string udi);
void Solid__Battery_Connect_CycleCountChanged(Solid__Battery* self, intptr_t slot);
void Solid__Battery_PowerSupplyStateChanged(Solid__Battery* self, bool newState, const libqt_string udi);
void Solid__Battery_Connect_PowerSupplyStateChanged(Solid__Battery* self, intptr_t slot);
void Solid__Battery_ChargeStateChanged(Solid__Battery* self, int newState);
void Solid__Battery_Connect_ChargeStateChanged(Solid__Battery* self, intptr_t slot);
void Solid__Battery_TimeToEmptyChanged(Solid__Battery* self, long long time, const libqt_string udi);
void Solid__Battery_Connect_TimeToEmptyChanged(Solid__Battery* self, intptr_t slot);
void Solid__Battery_TimeToFullChanged(Solid__Battery* self, long long time, const libqt_string udi);
void Solid__Battery_Connect_TimeToFullChanged(Solid__Battery* self, intptr_t slot);
void Solid__Battery_EnergyChanged(Solid__Battery* self, double energy, const libqt_string udi);
void Solid__Battery_Connect_EnergyChanged(Solid__Battery* self, intptr_t slot);
void Solid__Battery_EnergyFullChanged(Solid__Battery* self, double energy, const libqt_string udi);
void Solid__Battery_Connect_EnergyFullChanged(Solid__Battery* self, intptr_t slot);
void Solid__Battery_EnergyFullDesignChanged(Solid__Battery* self, double energy, const libqt_string udi);
void Solid__Battery_Connect_EnergyFullDesignChanged(Solid__Battery* self, intptr_t slot);
void Solid__Battery_EnergyRateChanged(Solid__Battery* self, double energyRate, const libqt_string udi);
void Solid__Battery_Connect_EnergyRateChanged(Solid__Battery* self, intptr_t slot);
void Solid__Battery_VoltageChanged(Solid__Battery* self, double voltage, const libqt_string udi);
void Solid__Battery_Connect_VoltageChanged(Solid__Battery* self, intptr_t slot);
void Solid__Battery_TemperatureChanged(Solid__Battery* self, double temperature, const libqt_string udi);
void Solid__Battery_Connect_TemperatureChanged(Solid__Battery* self, intptr_t slot);
void Solid__Battery_RemainingTimeChanged(Solid__Battery* self, long long time, const libqt_string udi);
void Solid__Battery_Connect_RemainingTimeChanged(Solid__Battery* self, intptr_t slot);
libqt_string Solid__Battery_Tr2(const char* s, const char* c);
libqt_string Solid__Battery_Tr3(const char* s, const char* c, int n);
void Solid__Battery_ChargeStateChanged2(Solid__Battery* self, int newState, const libqt_string udi);
void Solid__Battery_Connect_ChargeStateChanged2(Solid__Battery* self, intptr_t slot);
void Solid__Battery_Delete(Solid__Battery* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
