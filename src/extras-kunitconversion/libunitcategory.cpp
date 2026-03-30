#define WORKAROUND_INNER_CLASS_DEFINITION_KUnitConversion__Unit
#include <KUnitConversion/UnitCategory>
#define WORKAROUND_INNER_CLASS_DEFINITION_KUnitConversion__UpdateJob
#define WORKAROUND_INNER_CLASS_DEFINITION_KUnitConversion__Value
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <unitcategory.h>
#include "libunitcategory.h"
#include "libunitcategory.hxx"

KUnitConversion__UnitCategory* KUnitConversion__UnitCategory_new() {
    return new KUnitConversion::UnitCategory();
}

KUnitConversion__UnitCategory* KUnitConversion__UnitCategory_new2(const KUnitConversion__UnitCategory* other) {
    return new KUnitConversion::UnitCategory(*other);
}

void KUnitConversion__UnitCategory_OperatorAssign(KUnitConversion__UnitCategory* self, const KUnitConversion__UnitCategory* other) {
    self->operator=(*other);
}

bool KUnitConversion__UnitCategory_OperatorEqual(const KUnitConversion__UnitCategory* self, const KUnitConversion__UnitCategory* other) {
    return (*self == *other);
}

bool KUnitConversion__UnitCategory_OperatorNotEqual(const KUnitConversion__UnitCategory* self, const KUnitConversion__UnitCategory* other) {
    return (*self != *other);
}

bool KUnitConversion__UnitCategory_IsNull(const KUnitConversion__UnitCategory* self) {
    return self->isNull();
}

int KUnitConversion__UnitCategory_Id(const KUnitConversion__UnitCategory* self) {
    return static_cast<int>(self->id());
}

libqt_string KUnitConversion__UnitCategory_Name(const KUnitConversion__UnitCategory* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUnitConversion__UnitCategory_Description(const KUnitConversion__UnitCategory* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KUnitConversion__Unit* KUnitConversion__UnitCategory_DefaultUnit(const KUnitConversion__UnitCategory* self) {
    return new KUnitConversion::Unit(self->defaultUnit());
}

bool KUnitConversion__UnitCategory_HasUnit(const KUnitConversion__UnitCategory* self, const libqt_string unit) {
    QString unit_QString = QString::fromUtf8(unit.data, unit.len);
    return self->hasUnit(unit_QString);
}

KUnitConversion__Unit* KUnitConversion__UnitCategory_Unit(const KUnitConversion__UnitCategory* self, const libqt_string s) {
    QString s_QString = QString::fromUtf8(s.data, s.len);
    return new KUnitConversion::Unit(self->unit(s_QString));
}

KUnitConversion__Unit* KUnitConversion__UnitCategory_Unit2(const KUnitConversion__UnitCategory* self, int unitId) {
    return new KUnitConversion::Unit(self->unit(static_cast<KUnitConversion::UnitId>(unitId)));
}

libqt_list /* of KUnitConversion__Unit* */ KUnitConversion__UnitCategory_Units(const KUnitConversion__UnitCategory* self) {
    QList<KUnitConversion::Unit> _ret = self->units();
    // Convert QList<> from C++ memory to manually-managed C memory
    KUnitConversion__Unit** _arr = static_cast<KUnitConversion__Unit**>(malloc(sizeof(KUnitConversion__Unit*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KUnitConversion::Unit(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of KUnitConversion__Unit* */ KUnitConversion__UnitCategory_MostCommonUnits(const KUnitConversion__UnitCategory* self) {
    QList<KUnitConversion::Unit> _ret = self->mostCommonUnits();
    // Convert QList<> from C++ memory to manually-managed C memory
    KUnitConversion__Unit** _arr = static_cast<KUnitConversion__Unit**>(malloc(sizeof(KUnitConversion__Unit*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KUnitConversion::Unit(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ KUnitConversion__UnitCategory_AllUnits(const KUnitConversion__UnitCategory* self) {
    QList<QString> _ret = self->allUnits();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

KUnitConversion__Value* KUnitConversion__UnitCategory_Convert(const KUnitConversion__UnitCategory* self, const KUnitConversion__Value* value) {
    return new KUnitConversion::Value(self->convert(*value));
}

KUnitConversion__Value* KUnitConversion__UnitCategory_Convert2(const KUnitConversion__UnitCategory* self, const KUnitConversion__Value* value, int toUnit) {
    return new KUnitConversion::Value(self->convert(*value, static_cast<KUnitConversion::UnitId>(toUnit)));
}

KUnitConversion__Value* KUnitConversion__UnitCategory_Convert3(const KUnitConversion__UnitCategory* self, const KUnitConversion__Value* value, const KUnitConversion__Unit* toUnit) {
    return new KUnitConversion::Value(self->convert(*value, *toUnit));
}

bool KUnitConversion__UnitCategory_HasOnlineConversionTable(const KUnitConversion__UnitCategory* self) {
    return self->hasOnlineConversionTable();
}

KUnitConversion__UpdateJob* KUnitConversion__UnitCategory_SyncConversionTable(KUnitConversion__UnitCategory* self) {
    return self->syncConversionTable();
}

KUnitConversion__Value* KUnitConversion__UnitCategory_Convert22(const KUnitConversion__UnitCategory* self, const KUnitConversion__Value* value, const libqt_string toUnit) {
    QString toUnit_QString = QString::fromUtf8(toUnit.data, toUnit.len);
    return new KUnitConversion::Value(self->convert(*value, toUnit_QString));
}

KUnitConversion__UpdateJob* KUnitConversion__UnitCategory_SyncConversionTable1(KUnitConversion__UnitCategory* self, int64_t updateSkipPeriod) {
    return self->syncConversionTable(static_cast<std::chrono::seconds>(updateSkipPeriod));
}

void KUnitConversion__UnitCategory_Delete(KUnitConversion__UnitCategory* self) {
    delete self;
}

QMetaObject* KUnitConversion__UpdateJob_MetaObject(const KUnitConversion__UpdateJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KUnitConversion__UpdateJob_Metacast(KUnitConversion__UpdateJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KUnitConversion__UpdateJob_Metacall(KUnitConversion__UpdateJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void KUnitConversion__UpdateJob_Finished(KUnitConversion__UpdateJob* self) {
    self->finished();
}

void KUnitConversion__UpdateJob_Connect_Finished(KUnitConversion__UpdateJob* self, intptr_t slot) {
    void (*slotFunc)(KUnitConversion__UpdateJob*) = reinterpret_cast<void (*)(KUnitConversion__UpdateJob*)>(slot);
    KUnitConversion::UpdateJob::connect(self, &KUnitConversion::UpdateJob::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KUnitConversion__UpdateJob_Delete(KUnitConversion__UpdateJob* self) {
    delete self;
}
