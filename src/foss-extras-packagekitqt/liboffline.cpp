#include <PackageKit/Transaction>
#include <PackageKit/Offline>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <offline.h>
#include "liboffline.h"
#include "liboffline.hxx"

QMetaObject* PackageKit__Offline_MetaObject(const PackageKit__Offline* self) {
    return (QMetaObject*)self->metaObject();
}

void* PackageKit__Offline_Metacast(PackageKit__Offline* self, const char* param1) {
    return self->qt_metacast(param1);
}

int PackageKit__Offline_Metacall(PackageKit__Offline* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_map /* of libqt_string to QVariant* */ PackageKit__Offline_PreparedUpgrade(const PackageKit__Offline* self) {
    QMap<QString, QVariant> _ret = self->preparedUpgrade();
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

int PackageKit__Offline_TriggerAction(const PackageKit__Offline* self) {
    return static_cast<int>(self->triggerAction());
}

bool PackageKit__Offline_UpdatePrepared(const PackageKit__Offline* self) {
    return self->updatePrepared();
}

bool PackageKit__Offline_UpdateTriggered(const PackageKit__Offline* self) {
    return self->updateTriggered();
}

bool PackageKit__Offline_UpgradePrepared(const PackageKit__Offline* self) {
    return self->upgradePrepared();
}

bool PackageKit__Offline_UpgradeTriggered(const PackageKit__Offline* self) {
    return self->upgradeTriggered();
}

void PackageKit__Offline_GetPrepared(PackageKit__Offline* self) {
    self->getPrepared();
}

void PackageKit__Offline_PreparedUpdates(PackageKit__Offline* self, const libqt_list /* of libqt_string */ updates) {
    QList<QString> updates_QList;
    updates_QList.reserve(updates.len);
    libqt_string* updates_arr = static_cast<libqt_string*>(updates.data);
    for (size_t i = 0; i < updates.len; ++i) {
        QString updates_arr_i_QString = QString::fromUtf8(updates_arr[i].data, updates_arr[i].len);
        updates_QList.push_back(updates_arr_i_QString);
    }
    self->preparedUpdates(updates_QList);
}

void PackageKit__Offline_Connect_PreparedUpdates(PackageKit__Offline* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Offline*, const char**) = reinterpret_cast<void (*)(PackageKit__Offline*, const char**)>(slot);
    PackageKit::Offline::connect(self, &PackageKit::Offline::preparedUpdates, [self, slotFunc](const QList<QString>& updates) {
        const QList<QString>& updates_ret = updates;
        // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
        const char** updates_arr = static_cast<const char**>(malloc(sizeof(const char*) * (updates_ret.size() + 1)));
        for (qsizetype i = 0; i < updates_ret.size(); ++i) {
            QByteArray updates_b = updates_ret[i].toUtf8();
            auto updates_str_len = updates_b.length();
            char* updates_str = static_cast<char*>(malloc(updates_str_len + 1));
            memcpy(updates_str, updates_b.data(), updates_str_len);
            updates_str[updates_str_len] = '\0';
            updates_arr[i] = updates_str;
        }
        // Append sentinel null terminator to the list
        updates_arr[updates_ret.size()] = nullptr;
        const char** sigval1 = updates_arr;
        slotFunc(self, sigval1);
        libqt_free(updates_arr);
    });
}

void PackageKit__Offline_Changed(PackageKit__Offline* self) {
    self->changed();
}

void PackageKit__Offline_Connect_Changed(PackageKit__Offline* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Offline*) = reinterpret_cast<void (*)(PackageKit__Offline*)>(slot);
    PackageKit::Offline::connect(self, &PackageKit::Offline::changed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void PackageKit__Offline_Delete(PackageKit__Offline* self) {
    delete self;
}
