#include <QLowEnergyConnectionParameters>
#include <qlowenergyconnectionparameters.h>
#include "libqlowenergyconnectionparameters.h"
#include "libqlowenergyconnectionparameters.hxx"

QLowEnergyConnectionParameters* QLowEnergyConnectionParameters_new() {
    return new QLowEnergyConnectionParameters();
}

QLowEnergyConnectionParameters* QLowEnergyConnectionParameters_new2(const QLowEnergyConnectionParameters* other) {
    return new QLowEnergyConnectionParameters(*other);
}

void QLowEnergyConnectionParameters_OperatorAssign(QLowEnergyConnectionParameters* self, const QLowEnergyConnectionParameters* other) {
    self->operator=(*other);
}

void QLowEnergyConnectionParameters_SetIntervalRange(QLowEnergyConnectionParameters* self, double minimum, double maximum) {
    self->setIntervalRange(static_cast<double>(minimum), static_cast<double>(maximum));
}

double QLowEnergyConnectionParameters_MinimumInterval(const QLowEnergyConnectionParameters* self) {
    return self->minimumInterval();
}

double QLowEnergyConnectionParameters_MaximumInterval(const QLowEnergyConnectionParameters* self) {
    return self->maximumInterval();
}

void QLowEnergyConnectionParameters_SetLatency(QLowEnergyConnectionParameters* self, int latency) {
    self->setLatency(static_cast<int>(latency));
}

int QLowEnergyConnectionParameters_Latency(const QLowEnergyConnectionParameters* self) {
    return self->latency();
}

void QLowEnergyConnectionParameters_SetSupervisionTimeout(QLowEnergyConnectionParameters* self, int timeout) {
    self->setSupervisionTimeout(static_cast<int>(timeout));
}

int QLowEnergyConnectionParameters_SupervisionTimeout(const QLowEnergyConnectionParameters* self) {
    return self->supervisionTimeout();
}

void QLowEnergyConnectionParameters_Swap(QLowEnergyConnectionParameters* self, QLowEnergyConnectionParameters* other) {
    self->swap(*other);
}

void QLowEnergyConnectionParameters_Delete(QLowEnergyConnectionParameters* self) {
    delete self;
}
