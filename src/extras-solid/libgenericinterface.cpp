#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__GenericInterface
#include <genericinterface.h>
#include "libgenericinterface.h"
#include "libgenericinterface.hxx"

QMetaObject* Solid__GenericInterface_MetaObject(const Solid__GenericInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* Solid__GenericInterface_Metacast(Solid__GenericInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Solid__GenericInterface_Metacall(Solid__GenericInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Solid__GenericInterface_Tr(const char* s) {
    QString _ret = Solid::GenericInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Solid__GenericInterface_DeviceInterfaceType() {
    return static_cast<int>(Solid::GenericInterface::deviceInterfaceType());
}

QVariant* Solid__GenericInterface_Property(const Solid__GenericInterface* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QVariant(self->property(key_QString));
}

libqt_map /* of libqt_string to QVariant* */ Solid__GenericInterface_AllProperties(const Solid__GenericInterface* self) {
    QMap<QString, QVariant> _ret = self->allProperties();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        QString _mapkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapkey_b = _mapkey_ret.toUtf8();
        libqt_string _mapkey_str;
        _mapkey_str.len = _mapkey_b.length();
        _mapkey_str.data = static_cast<const char*>(malloc(_mapkey_str.len + 1));
        memcpy((void*)_mapkey_str.data, _mapkey_b.data(), _mapkey_str.len);
        ((char*)_mapkey_str.data)[_mapkey_str.len] = '\0';
        _karr[_ctr] = _mapkey_str;
        _varr[_ctr] = new QVariant(_itr->second);
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

bool Solid__GenericInterface_PropertyExists(const Solid__GenericInterface* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->propertyExists(key_QString);
}

void Solid__GenericInterface_PropertyChanged(Solid__GenericInterface* self, const libqt_map /* of libqt_string to int */ changes) {
    QMap<QString, int> changes_QMap;
    libqt_string* changes_karr = static_cast<libqt_string*>(changes.keys);
    int* changes_varr = static_cast<int*>(changes.values);
    for (size_t i = 0; i < changes.len; ++i) {
        QString changes_karr_i_QString = QString::fromUtf8(changes_karr[i].data, changes_karr[i].len);
        changes_QMap[changes_karr_i_QString] = static_cast<int>(changes_varr[i]);
    }
    self->propertyChanged(changes_QMap);
}

void Solid__GenericInterface_Connect_PropertyChanged(Solid__GenericInterface* self, intptr_t slot) {
    void (*slotFunc)(Solid__GenericInterface*, libqt_map /* of libqt_string to int */) = reinterpret_cast<void (*)(Solid__GenericInterface*, libqt_map /* of libqt_string to int */)>(slot);
    Solid::GenericInterface::connect(self, &Solid::GenericInterface::propertyChanged, [self, slotFunc](const QMap<QString, int>& changes) {
        const QMap<QString, int>& changes_ret = changes;
        // Convert QMap<> from C++ memory to manually-managed C memory
        libqt_string* changes_karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * changes_ret.size()));
        int* changes_varr = static_cast<int*>(malloc(sizeof(int) * changes_ret.size()));
        int changes_ctr = 0;
        for (auto changes_itr = changes_ret.keyValueBegin(); changes_itr != changes_ret.keyValueEnd(); ++changes_itr) {
            QString changes_mapkey_ret = changes_itr->first;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray changes_mapkey_b = changes_mapkey_ret.toUtf8();
            libqt_string changes_mapkey_str;
            changes_mapkey_str.len = changes_mapkey_b.length();
            changes_mapkey_str.data = static_cast<const char*>(malloc(changes_mapkey_str.len + 1));
            memcpy((void*)changes_mapkey_str.data, changes_mapkey_b.data(), changes_mapkey_str.len);
            ((char*)changes_mapkey_str.data)[changes_mapkey_str.len] = '\0';
            changes_karr[changes_ctr] = changes_mapkey_str;
            changes_varr[changes_ctr] = changes_itr->second;
            changes_ctr++;
        }
        libqt_map changes_out;
        changes_out.len = changes_ret.size();
        changes_out.keys = static_cast<void*>(changes_karr);
        changes_out.values = static_cast<void*>(changes_varr);
        libqt_map /* of libqt_string to int */ sigval1 = changes_out;
        slotFunc(self, sigval1);
    });
}

void Solid__GenericInterface_ConditionRaised(Solid__GenericInterface* self, const libqt_string condition, const libqt_string reason) {
    QString condition_QString = QString::fromUtf8(condition.data, condition.len);
    QString reason_QString = QString::fromUtf8(reason.data, reason.len);
    self->conditionRaised(condition_QString, reason_QString);
}

void Solid__GenericInterface_Connect_ConditionRaised(Solid__GenericInterface* self, intptr_t slot) {
    void (*slotFunc)(Solid__GenericInterface*, const char*, const char*) = reinterpret_cast<void (*)(Solid__GenericInterface*, const char*, const char*)>(slot);
    Solid::GenericInterface::connect(self, &Solid::GenericInterface::conditionRaised, [self, slotFunc](const QString& condition, const QString& reason) {
        const QString condition_ret = condition;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray condition_b = condition_ret.toUtf8();
        const char* condition_str = static_cast<const char*>(malloc(condition_b.length() + 1));
        memcpy((void*)condition_str, condition_b.data(), condition_b.length());
        ((char*)condition_str)[condition_b.length()] = '\0';
        const char* sigval1 = condition_str;
        const QString reason_ret = reason;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray reason_b = reason_ret.toUtf8();
        const char* reason_str = static_cast<const char*>(malloc(reason_b.length() + 1));
        memcpy((void*)reason_str, reason_b.data(), reason_b.length());
        ((char*)reason_str)[reason_b.length()] = '\0';
        const char* sigval2 = reason_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(condition_str);
        libqt_free(reason_str);
    });
}

libqt_string Solid__GenericInterface_Tr2(const char* s, const char* c) {
    QString _ret = Solid::GenericInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__GenericInterface_Tr3(const char* s, const char* c, int n) {
    QString _ret = Solid::GenericInterface::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Solid__GenericInterface_Delete(Solid__GenericInterface* self) {
    delete self;
}
