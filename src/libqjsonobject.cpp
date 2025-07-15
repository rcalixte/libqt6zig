#include <QHash>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonValueRef>
#include <QList>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qjsonobject.h>
#include "libqjsonobject.h"
#include "libqjsonobject.hxx"

QJsonObject* QJsonObject_new() {
    return new QJsonObject();
}

QJsonObject* QJsonObject_new2(const QJsonObject* other) {
    return new QJsonObject(*other);
}

void QJsonObject_OperatorAssign(QJsonObject* self, const QJsonObject* other) {
    self->operator=(*other);
}

void QJsonObject_Swap(QJsonObject* self, QJsonObject* other) {
    self->swap(*other);
}

QJsonObject* QJsonObject_FromVariantMap(const libqt_map /* of libqt_string to QVariant* */ mapVal) {
    QMap<QString, QVariant> mapVal_QMap;
    libqt_string* mapVal_karr = static_cast<libqt_string*>(mapVal.keys);
    QVariant** mapVal_varr = static_cast<QVariant**>(mapVal.values);
    for (size_t i = 0; i < mapVal.len; ++i) {
        QString mapVal_karr_i_QString = QString::fromUtf8(mapVal_karr[i].data, mapVal_karr[i].len);
        mapVal_QMap[mapVal_karr_i_QString] = *(mapVal_varr[i]);
    }
    return new QJsonObject(QJsonObject::fromVariantMap(mapVal_QMap));
}

libqt_map /* of libqt_string to QVariant* */ QJsonObject_ToVariantMap(const QJsonObject* self) {
    QMap<QString, QVariant> _ret = self->toVariantMap();
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
        _mapkey_str.data = static_cast<const char*>(malloc((_mapkey_str.len + 1) * sizeof(char)));
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

QJsonObject* QJsonObject_FromVariantHash(const libqt_map /* of libqt_string to QVariant* */ mapVal) {
    QHash<QString, QVariant> mapVal_QMap;
    mapVal_QMap.reserve(mapVal.len);
    libqt_string* mapVal_karr = static_cast<libqt_string*>(mapVal.keys);
    QVariant** mapVal_varr = static_cast<QVariant**>(mapVal.values);
    for (size_t i = 0; i < mapVal.len; ++i) {
        QString mapVal_karr_i_QString = QString::fromUtf8(mapVal_karr[i].data, mapVal_karr[i].len);
        mapVal_QMap[mapVal_karr_i_QString] = *(mapVal_varr[i]);
    }
    return new QJsonObject(QJsonObject::fromVariantHash(mapVal_QMap));
}

libqt_map /* of libqt_string to QVariant* */ QJsonObject_ToVariantHash(const QJsonObject* self) {
    QHash<QString, QVariant> _ret = self->toVariantHash();
    // Convert QHash<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        QString _hashkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _hashkey_b = _hashkey_ret.toUtf8();
        libqt_string _hashkey_str;
        _hashkey_str.len = _hashkey_b.length();
        _hashkey_str.data = static_cast<const char*>(malloc((_hashkey_str.len + 1) * sizeof(char)));
        memcpy((void*)_hashkey_str.data, _hashkey_b.data(), _hashkey_str.len);
        ((char*)_hashkey_str.data)[_hashkey_str.len] = '\0';
        _karr[_ctr] = _hashkey_str;
        _varr[_ctr] = new QVariant(_itr->second);
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

libqt_list /* of libqt_string */ QJsonObject_Keys(const QJsonObject* self) {
    QList<QString> _ret = self->keys();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

ptrdiff_t QJsonObject_Size(const QJsonObject* self) {
    return static_cast<ptrdiff_t>(self->size());
}

ptrdiff_t QJsonObject_Count(const QJsonObject* self) {
    return static_cast<ptrdiff_t>(self->count());
}

ptrdiff_t QJsonObject_Length(const QJsonObject* self) {
    return static_cast<ptrdiff_t>(self->length());
}

bool QJsonObject_IsEmpty(const QJsonObject* self) {
    return self->isEmpty();
}

QJsonValue* QJsonObject_Value(const QJsonObject* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QJsonValue(self->value(key_QString));
}

QJsonValue* QJsonObject_OperatorSubscript(const QJsonObject* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QJsonValue(self->operator[](key_QString));
}

QJsonValueRef* QJsonObject_OperatorSubscript2(QJsonObject* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QJsonValueRef(self->operator[](key_QString));
}

void QJsonObject_Remove(QJsonObject* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->remove(key_QString);
}

QJsonValue* QJsonObject_Take(QJsonObject* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QJsonValue(self->take(key_QString));
}

bool QJsonObject_Contains(const QJsonObject* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->contains(key_QString);
}

bool QJsonObject_Empty(const QJsonObject* self) {
    return self->empty();
}

void QJsonObject_Delete(QJsonObject* self) {
    delete self;
}
