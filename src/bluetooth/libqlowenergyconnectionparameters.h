#pragma once
#ifndef SRC_BLUETOOTHC_LIBQLOWENERGYCONNECTIONPARAMETERS_H
#define SRC_BLUETOOTHC_LIBQLOWENERGYCONNECTIONPARAMETERS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QLowEnergyConnectionParameters QLowEnergyConnectionParameters;
#endif

QLowEnergyConnectionParameters* QLowEnergyConnectionParameters_new();
QLowEnergyConnectionParameters* QLowEnergyConnectionParameters_new2(const QLowEnergyConnectionParameters* other);
void QLowEnergyConnectionParameters_OperatorAssign(QLowEnergyConnectionParameters* self, const QLowEnergyConnectionParameters* other);
void QLowEnergyConnectionParameters_SetIntervalRange(QLowEnergyConnectionParameters* self, double minimum, double maximum);
double QLowEnergyConnectionParameters_MinimumInterval(const QLowEnergyConnectionParameters* self);
double QLowEnergyConnectionParameters_MaximumInterval(const QLowEnergyConnectionParameters* self);
void QLowEnergyConnectionParameters_SetLatency(QLowEnergyConnectionParameters* self, int latency);
int QLowEnergyConnectionParameters_Latency(const QLowEnergyConnectionParameters* self);
void QLowEnergyConnectionParameters_SetSupervisionTimeout(QLowEnergyConnectionParameters* self, int timeout);
int QLowEnergyConnectionParameters_SupervisionTimeout(const QLowEnergyConnectionParameters* self);
void QLowEnergyConnectionParameters_Swap(QLowEnergyConnectionParameters* self, QLowEnergyConnectionParameters* other);
void QLowEnergyConnectionParameters_Delete(QLowEnergyConnectionParameters* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
