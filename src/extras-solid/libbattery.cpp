#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__Battery
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface
#include <battery.h>
#include "libbattery.h"
#include "libbattery.hxx"

QMetaObject* Solid__Battery_MetaObject(const Solid__Battery* self) {
    return (QMetaObject*)self->metaObject();
}

void* Solid__Battery_Metacast(Solid__Battery* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Solid__Battery_Metacall(Solid__Battery* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Solid__Battery_Tr(const char* s) {
    QString _ret = Solid::Battery::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Solid__Battery_DeviceInterfaceType() {
    return static_cast<int>(Solid::Battery::deviceInterfaceType());
}

bool Solid__Battery_IsPresent(const Solid__Battery* self) {
    return self->isPresent();
}

int Solid__Battery_Type(const Solid__Battery* self) {
    return static_cast<int>(self->type());
}

int Solid__Battery_ChargePercent(const Solid__Battery* self) {
    return self->chargePercent();
}

int Solid__Battery_Capacity(const Solid__Battery* self) {
    return self->capacity();
}

int Solid__Battery_CycleCount(const Solid__Battery* self) {
    return self->cycleCount();
}

bool Solid__Battery_IsRechargeable(const Solid__Battery* self) {
    return self->isRechargeable();
}

bool Solid__Battery_IsPowerSupply(const Solid__Battery* self) {
    return self->isPowerSupply();
}

int Solid__Battery_ChargeState(const Solid__Battery* self) {
    return static_cast<int>(self->chargeState());
}

long long Solid__Battery_TimeToEmpty(const Solid__Battery* self) {
    return static_cast<long long>(self->timeToEmpty());
}

long long Solid__Battery_TimeToFull(const Solid__Battery* self) {
    return static_cast<long long>(self->timeToFull());
}

int Solid__Battery_Technology(const Solid__Battery* self) {
    return static_cast<int>(self->technology());
}

double Solid__Battery_Energy(const Solid__Battery* self) {
    return self->energy();
}

double Solid__Battery_EnergyFull(const Solid__Battery* self) {
    return self->energyFull();
}

double Solid__Battery_EnergyFullDesign(const Solid__Battery* self) {
    return self->energyFullDesign();
}

double Solid__Battery_EnergyRate(const Solid__Battery* self) {
    return self->energyRate();
}

double Solid__Battery_Voltage(const Solid__Battery* self) {
    return self->voltage();
}

double Solid__Battery_Temperature(const Solid__Battery* self) {
    return self->temperature();
}

libqt_string Solid__Battery_Serial(const Solid__Battery* self) {
    QString _ret = self->serial();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

long long Solid__Battery_RemainingTime(const Solid__Battery* self) {
    return static_cast<long long>(self->remainingTime());
}

void Solid__Battery_PresentStateChanged(Solid__Battery* self, bool newState, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->presentStateChanged(newState, udi_QString);
}

void Solid__Battery_Connect_PresentStateChanged(Solid__Battery* self, intptr_t slot) {
    void (*slotFunc)(Solid__Battery*, bool, const char*) = reinterpret_cast<void (*)(Solid__Battery*, bool, const char*)>(slot);
    Solid::Battery::connect(self, &Solid::Battery::presentStateChanged, [self, slotFunc](bool newState, const QString& udi) {
        bool sigval1 = newState;
        const QString udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        const char* udi_str = static_cast<const char*>(malloc(udi_b.length() + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_b.length());
        ((char*)udi_str)[udi_b.length()] = '\0';
        const char* sigval2 = udi_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(udi_str);
    });
}

void Solid__Battery_ChargePercentChanged(Solid__Battery* self, int value, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->chargePercentChanged(static_cast<int>(value), udi_QString);
}

void Solid__Battery_Connect_ChargePercentChanged(Solid__Battery* self, intptr_t slot) {
    void (*slotFunc)(Solid__Battery*, int, const char*) = reinterpret_cast<void (*)(Solid__Battery*, int, const char*)>(slot);
    Solid::Battery::connect(self, &Solid::Battery::chargePercentChanged, [self, slotFunc](int value, const QString& udi) {
        int sigval1 = value;
        const QString udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        const char* udi_str = static_cast<const char*>(malloc(udi_b.length() + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_b.length());
        ((char*)udi_str)[udi_b.length()] = '\0';
        const char* sigval2 = udi_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(udi_str);
    });
}

void Solid__Battery_CapacityChanged(Solid__Battery* self, int value, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->capacityChanged(static_cast<int>(value), udi_QString);
}

void Solid__Battery_Connect_CapacityChanged(Solid__Battery* self, intptr_t slot) {
    void (*slotFunc)(Solid__Battery*, int, const char*) = reinterpret_cast<void (*)(Solid__Battery*, int, const char*)>(slot);
    Solid::Battery::connect(self, &Solid::Battery::capacityChanged, [self, slotFunc](int value, const QString& udi) {
        int sigval1 = value;
        const QString udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        const char* udi_str = static_cast<const char*>(malloc(udi_b.length() + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_b.length());
        ((char*)udi_str)[udi_b.length()] = '\0';
        const char* sigval2 = udi_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(udi_str);
    });
}

void Solid__Battery_CycleCountChanged(Solid__Battery* self, int value, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->cycleCountChanged(static_cast<int>(value), udi_QString);
}

void Solid__Battery_Connect_CycleCountChanged(Solid__Battery* self, intptr_t slot) {
    void (*slotFunc)(Solid__Battery*, int, const char*) = reinterpret_cast<void (*)(Solid__Battery*, int, const char*)>(slot);
    Solid::Battery::connect(self, &Solid::Battery::cycleCountChanged, [self, slotFunc](int value, const QString& udi) {
        int sigval1 = value;
        const QString udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        const char* udi_str = static_cast<const char*>(malloc(udi_b.length() + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_b.length());
        ((char*)udi_str)[udi_b.length()] = '\0';
        const char* sigval2 = udi_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(udi_str);
    });
}

void Solid__Battery_PowerSupplyStateChanged(Solid__Battery* self, bool newState, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->powerSupplyStateChanged(newState, udi_QString);
}

void Solid__Battery_Connect_PowerSupplyStateChanged(Solid__Battery* self, intptr_t slot) {
    void (*slotFunc)(Solid__Battery*, bool, const char*) = reinterpret_cast<void (*)(Solid__Battery*, bool, const char*)>(slot);
    Solid::Battery::connect(self, &Solid::Battery::powerSupplyStateChanged, [self, slotFunc](bool newState, const QString& udi) {
        bool sigval1 = newState;
        const QString udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        const char* udi_str = static_cast<const char*>(malloc(udi_b.length() + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_b.length());
        ((char*)udi_str)[udi_b.length()] = '\0';
        const char* sigval2 = udi_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(udi_str);
    });
}

void Solid__Battery_ChargeStateChanged(Solid__Battery* self, int newState) {
    self->chargeStateChanged(static_cast<int>(newState));
}

void Solid__Battery_Connect_ChargeStateChanged(Solid__Battery* self, intptr_t slot) {
    void (*slotFunc)(Solid__Battery*, int) = reinterpret_cast<void (*)(Solid__Battery*, int)>(slot);
    Solid::Battery::connect(self, &Solid::Battery::chargeStateChanged, [self, slotFunc](int newState) {
        int sigval1 = newState;
        slotFunc(self, sigval1);
    });
}

void Solid__Battery_TimeToEmptyChanged(Solid__Battery* self, long long time, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->timeToEmptyChanged(static_cast<qlonglong>(time), udi_QString);
}

void Solid__Battery_Connect_TimeToEmptyChanged(Solid__Battery* self, intptr_t slot) {
    void (*slotFunc)(Solid__Battery*, long long, const char*) = reinterpret_cast<void (*)(Solid__Battery*, long long, const char*)>(slot);
    Solid::Battery::connect(self, &Solid::Battery::timeToEmptyChanged, [self, slotFunc](qlonglong time, const QString& udi) {
        long long sigval1 = static_cast<long long>(time);
        const QString udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        const char* udi_str = static_cast<const char*>(malloc(udi_b.length() + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_b.length());
        ((char*)udi_str)[udi_b.length()] = '\0';
        const char* sigval2 = udi_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(udi_str);
    });
}

void Solid__Battery_TimeToFullChanged(Solid__Battery* self, long long time, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->timeToFullChanged(static_cast<qlonglong>(time), udi_QString);
}

void Solid__Battery_Connect_TimeToFullChanged(Solid__Battery* self, intptr_t slot) {
    void (*slotFunc)(Solid__Battery*, long long, const char*) = reinterpret_cast<void (*)(Solid__Battery*, long long, const char*)>(slot);
    Solid::Battery::connect(self, &Solid::Battery::timeToFullChanged, [self, slotFunc](qlonglong time, const QString& udi) {
        long long sigval1 = static_cast<long long>(time);
        const QString udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        const char* udi_str = static_cast<const char*>(malloc(udi_b.length() + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_b.length());
        ((char*)udi_str)[udi_b.length()] = '\0';
        const char* sigval2 = udi_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(udi_str);
    });
}

void Solid__Battery_EnergyChanged(Solid__Battery* self, double energy, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->energyChanged(static_cast<double>(energy), udi_QString);
}

void Solid__Battery_Connect_EnergyChanged(Solid__Battery* self, intptr_t slot) {
    void (*slotFunc)(Solid__Battery*, double, const char*) = reinterpret_cast<void (*)(Solid__Battery*, double, const char*)>(slot);
    Solid::Battery::connect(self, &Solid::Battery::energyChanged, [self, slotFunc](double energy, const QString& udi) {
        double sigval1 = energy;
        const QString udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        const char* udi_str = static_cast<const char*>(malloc(udi_b.length() + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_b.length());
        ((char*)udi_str)[udi_b.length()] = '\0';
        const char* sigval2 = udi_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(udi_str);
    });
}

void Solid__Battery_EnergyFullChanged(Solid__Battery* self, double energy, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->energyFullChanged(static_cast<double>(energy), udi_QString);
}

void Solid__Battery_Connect_EnergyFullChanged(Solid__Battery* self, intptr_t slot) {
    void (*slotFunc)(Solid__Battery*, double, const char*) = reinterpret_cast<void (*)(Solid__Battery*, double, const char*)>(slot);
    Solid::Battery::connect(self, &Solid::Battery::energyFullChanged, [self, slotFunc](double energy, const QString& udi) {
        double sigval1 = energy;
        const QString udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        const char* udi_str = static_cast<const char*>(malloc(udi_b.length() + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_b.length());
        ((char*)udi_str)[udi_b.length()] = '\0';
        const char* sigval2 = udi_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(udi_str);
    });
}

void Solid__Battery_EnergyFullDesignChanged(Solid__Battery* self, double energy, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->energyFullDesignChanged(static_cast<double>(energy), udi_QString);
}

void Solid__Battery_Connect_EnergyFullDesignChanged(Solid__Battery* self, intptr_t slot) {
    void (*slotFunc)(Solid__Battery*, double, const char*) = reinterpret_cast<void (*)(Solid__Battery*, double, const char*)>(slot);
    Solid::Battery::connect(self, &Solid::Battery::energyFullDesignChanged, [self, slotFunc](double energy, const QString& udi) {
        double sigval1 = energy;
        const QString udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        const char* udi_str = static_cast<const char*>(malloc(udi_b.length() + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_b.length());
        ((char*)udi_str)[udi_b.length()] = '\0';
        const char* sigval2 = udi_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(udi_str);
    });
}

void Solid__Battery_EnergyRateChanged(Solid__Battery* self, double energyRate, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->energyRateChanged(static_cast<double>(energyRate), udi_QString);
}

void Solid__Battery_Connect_EnergyRateChanged(Solid__Battery* self, intptr_t slot) {
    void (*slotFunc)(Solid__Battery*, double, const char*) = reinterpret_cast<void (*)(Solid__Battery*, double, const char*)>(slot);
    Solid::Battery::connect(self, &Solid::Battery::energyRateChanged, [self, slotFunc](double energyRate, const QString& udi) {
        double sigval1 = energyRate;
        const QString udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        const char* udi_str = static_cast<const char*>(malloc(udi_b.length() + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_b.length());
        ((char*)udi_str)[udi_b.length()] = '\0';
        const char* sigval2 = udi_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(udi_str);
    });
}

void Solid__Battery_VoltageChanged(Solid__Battery* self, double voltage, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->voltageChanged(static_cast<double>(voltage), udi_QString);
}

void Solid__Battery_Connect_VoltageChanged(Solid__Battery* self, intptr_t slot) {
    void (*slotFunc)(Solid__Battery*, double, const char*) = reinterpret_cast<void (*)(Solid__Battery*, double, const char*)>(slot);
    Solid::Battery::connect(self, &Solid::Battery::voltageChanged, [self, slotFunc](double voltage, const QString& udi) {
        double sigval1 = voltage;
        const QString udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        const char* udi_str = static_cast<const char*>(malloc(udi_b.length() + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_b.length());
        ((char*)udi_str)[udi_b.length()] = '\0';
        const char* sigval2 = udi_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(udi_str);
    });
}

void Solid__Battery_TemperatureChanged(Solid__Battery* self, double temperature, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->temperatureChanged(static_cast<double>(temperature), udi_QString);
}

void Solid__Battery_Connect_TemperatureChanged(Solid__Battery* self, intptr_t slot) {
    void (*slotFunc)(Solid__Battery*, double, const char*) = reinterpret_cast<void (*)(Solid__Battery*, double, const char*)>(slot);
    Solid::Battery::connect(self, &Solid::Battery::temperatureChanged, [self, slotFunc](double temperature, const QString& udi) {
        double sigval1 = temperature;
        const QString udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        const char* udi_str = static_cast<const char*>(malloc(udi_b.length() + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_b.length());
        ((char*)udi_str)[udi_b.length()] = '\0';
        const char* sigval2 = udi_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(udi_str);
    });
}

void Solid__Battery_RemainingTimeChanged(Solid__Battery* self, long long time, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->remainingTimeChanged(static_cast<qlonglong>(time), udi_QString);
}

void Solid__Battery_Connect_RemainingTimeChanged(Solid__Battery* self, intptr_t slot) {
    void (*slotFunc)(Solid__Battery*, long long, const char*) = reinterpret_cast<void (*)(Solid__Battery*, long long, const char*)>(slot);
    Solid::Battery::connect(self, &Solid::Battery::remainingTimeChanged, [self, slotFunc](qlonglong time, const QString& udi) {
        long long sigval1 = static_cast<long long>(time);
        const QString udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        const char* udi_str = static_cast<const char*>(malloc(udi_b.length() + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_b.length());
        ((char*)udi_str)[udi_b.length()] = '\0';
        const char* sigval2 = udi_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(udi_str);
    });
}

libqt_string Solid__Battery_Tr2(const char* s, const char* c) {
    QString _ret = Solid::Battery::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__Battery_Tr3(const char* s, const char* c, int n) {
    QString _ret = Solid::Battery::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Solid__Battery_ChargeStateChanged2(Solid__Battery* self, int newState, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->chargeStateChanged(static_cast<int>(newState), udi_QString);
}

void Solid__Battery_Connect_ChargeStateChanged2(Solid__Battery* self, intptr_t slot) {
    void (*slotFunc)(Solid__Battery*, int, const char*) = reinterpret_cast<void (*)(Solid__Battery*, int, const char*)>(slot);
    Solid::Battery::connect(self, &Solid::Battery::chargeStateChanged, [self, slotFunc](int newState, const QString& udi) {
        int sigval1 = newState;
        const QString udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        const char* udi_str = static_cast<const char*>(malloc(udi_b.length() + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_b.length());
        ((char*)udi_str)[udi_b.length()] = '\0';
        const char* sigval2 = udi_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(udi_str);
    });
}

void Solid__Battery_Delete(Solid__Battery* self) {
    delete self;
}
