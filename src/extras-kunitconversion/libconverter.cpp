#define WORKAROUND_INNER_CLASS_DEFINITION_KUnitConversion__Converter
#define WORKAROUND_INNER_CLASS_DEFINITION_KUnitConversion__Unit
#include <KUnitConversion/UnitCategory>
#define WORKAROUND_INNER_CLASS_DEFINITION_KUnitConversion__Value
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <converter.h>
#include "libconverter.h"
#include "libconverter.hxx"

KUnitConversion__Converter* KUnitConversion__Converter_new() {
    return new KUnitConversion::Converter();
}

KUnitConversion__Converter* KUnitConversion__Converter_new2(const KUnitConversion__Converter* other) {
    return new KUnitConversion::Converter(*other);
}

void KUnitConversion__Converter_OperatorAssign(KUnitConversion__Converter* self, const KUnitConversion__Converter* other) {
    self->operator=(*other);
}

KUnitConversion__Value* KUnitConversion__Converter_Convert(const KUnitConversion__Converter* self, const KUnitConversion__Value* value) {
    return new KUnitConversion::Value(self->convert(*value));
}

KUnitConversion__Value* KUnitConversion__Converter_Convert2(const KUnitConversion__Converter* self, const KUnitConversion__Value* value, int toUnit) {
    return new KUnitConversion::Value(self->convert(*value, static_cast<KUnitConversion::UnitId>(toUnit)));
}

KUnitConversion__Value* KUnitConversion__Converter_Convert3(const KUnitConversion__Converter* self, const KUnitConversion__Value* value, const KUnitConversion__Unit* toUnit) {
    return new KUnitConversion::Value(self->convert(*value, *toUnit));
}

KUnitConversion__UnitCategory* KUnitConversion__Converter_CategoryForUnit(const KUnitConversion__Converter* self, const libqt_string unit) {
    QString unit_QString = QString::fromUtf8(unit.data, unit.len);
    return new KUnitConversion::UnitCategory(self->categoryForUnit(unit_QString));
}

KUnitConversion__Unit* KUnitConversion__Converter_Unit(const KUnitConversion__Converter* self, const libqt_string unitString) {
    QString unitString_QString = QString::fromUtf8(unitString.data, unitString.len);
    return new KUnitConversion::Unit(self->unit(unitString_QString));
}

KUnitConversion__Unit* KUnitConversion__Converter_Unit2(const KUnitConversion__Converter* self, int unitId) {
    return new KUnitConversion::Unit(self->unit(static_cast<KUnitConversion::UnitId>(unitId)));
}

KUnitConversion__UnitCategory* KUnitConversion__Converter_Category(const KUnitConversion__Converter* self, const libqt_string category) {
    QString category_QString = QString::fromUtf8(category.data, category.len);
    return new KUnitConversion::UnitCategory(self->category(category_QString));
}

KUnitConversion__UnitCategory* KUnitConversion__Converter_Category2(const KUnitConversion__Converter* self, int categoryId) {
    return new KUnitConversion::UnitCategory(self->category(static_cast<KUnitConversion::CategoryId>(categoryId)));
}

libqt_list /* of KUnitConversion__UnitCategory* */ KUnitConversion__Converter_Categories(const KUnitConversion__Converter* self) {
    QList<KUnitConversion::UnitCategory> _ret = self->categories();
    // Convert QList<> from C++ memory to manually-managed C memory
    KUnitConversion__UnitCategory** _arr = static_cast<KUnitConversion__UnitCategory**>(malloc(sizeof(KUnitConversion__UnitCategory*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KUnitConversion::UnitCategory(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

KUnitConversion__Value* KUnitConversion__Converter_Convert22(const KUnitConversion__Converter* self, const KUnitConversion__Value* value, const libqt_string toUnit) {
    QString toUnit_QString = QString::fromUtf8(toUnit.data, toUnit.len);
    return new KUnitConversion::Value(self->convert(*value, toUnit_QString));
}

void KUnitConversion__Converter_Delete(KUnitConversion__Converter* self) {
    delete self;
}
