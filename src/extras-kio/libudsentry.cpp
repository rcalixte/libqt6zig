#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__UDSEntry
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <udsentry.h>
#include "libudsentry.h"
#include "libudsentry.hxx"

KIO__UDSEntry* KIO__UDSEntry_new() {
    return new KIO::UDSEntry();
}

KIO__UDSEntry* KIO__UDSEntry_new2(const KIO__UDSEntry* param1) {
    return new KIO::UDSEntry(*param1);
}

void KIO__UDSEntry_OperatorAssign(KIO__UDSEntry* self, const KIO__UDSEntry* param1) {
    self->operator=(*param1);
}

libqt_string KIO__UDSEntry_StringValue(const KIO__UDSEntry* self, unsigned int field) {
    QString _ret = self->stringValue(static_cast<uint>(field));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

long long KIO__UDSEntry_NumberValue(const KIO__UDSEntry* self, unsigned int field) {
    return self->numberValue(static_cast<uint>(field));
}

bool KIO__UDSEntry_IsDir(const KIO__UDSEntry* self) {
    return self->isDir();
}

bool KIO__UDSEntry_IsLink(const KIO__UDSEntry* self) {
    return self->isLink();
}

void KIO__UDSEntry_Reserve(KIO__UDSEntry* self, int size) {
    self->reserve(static_cast<int>(size));
}

void KIO__UDSEntry_FastInsert(KIO__UDSEntry* self, unsigned int field, const libqt_string value) {
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->fastInsert(static_cast<uint>(field), value_QString);
}

void KIO__UDSEntry_FastInsert2(KIO__UDSEntry* self, unsigned int field, long long l) {
    self->fastInsert(static_cast<uint>(field), static_cast<long long>(l));
}

int KIO__UDSEntry_Count(const KIO__UDSEntry* self) {
    return self->count();
}

bool KIO__UDSEntry_Contains(const KIO__UDSEntry* self, unsigned int field) {
    return self->contains(static_cast<uint>(field));
}

libqt_list /* of unsigned int */ KIO__UDSEntry_Fields(const KIO__UDSEntry* self) {
    QList<unsigned int> _ret = self->fields();
    // Convert QList<> from C++ memory to manually-managed C memory
    unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KIO__UDSEntry_Clear(KIO__UDSEntry* self) {
    self->clear();
}

void KIO__UDSEntry_Replace(KIO__UDSEntry* self, unsigned int field, const libqt_string value) {
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->replace(static_cast<uint>(field), value_QString);
}

void KIO__UDSEntry_Replace2(KIO__UDSEntry* self, unsigned int field, long long l) {
    self->replace(static_cast<uint>(field), static_cast<long long>(l));
}

long long KIO__UDSEntry_NumberValue2(const KIO__UDSEntry* self, unsigned int field, long long defaultValue) {
    return self->numberValue(static_cast<uint>(field), static_cast<long long>(defaultValue));
}

void KIO__UDSEntry_Delete(KIO__UDSEntry* self) {
    delete self;
}
