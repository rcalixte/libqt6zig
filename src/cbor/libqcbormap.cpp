#include <QCborMap>
#include <QCborValue>
#include <QCborValueRef>
#include <QHash>
#include <QJsonObject>
#include <QList>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qcbormap.h>
#include "libqcbormap.h"
#include "libqcbormap.hxx"

QCborMap* QCborMap_new() {
    return new QCborMap();
}

QCborMap* QCborMap_new2(const QCborMap* other) {
    return new QCborMap(*other);
}

void QCborMap_OperatorAssign(QCborMap* self, const QCborMap* other) {
    self->operator=(*other);
}

void QCborMap_Swap(QCborMap* self, QCborMap* other) {
    self->swap(*other);
}

QCborValue* QCborMap_ToCborValue(const QCborMap* self) {
    return new QCborValue(self->toCborValue());
}

ptrdiff_t QCborMap_Size(const QCborMap* self) {
    return static_cast<ptrdiff_t>(self->size());
}

bool QCborMap_IsEmpty(const QCborMap* self) {
    return self->isEmpty();
}

void QCborMap_Clear(QCborMap* self) {
    self->clear();
}

libqt_list /* of QCborValue* */ QCborMap_Keys(const QCborMap* self) {
    QList<QCborValue> _ret = self->keys();
    // Convert QList<> from C++ memory to manually-managed C memory
    QCborValue** _arr = static_cast<QCborValue**>(malloc(sizeof(QCborValue*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QCborValue(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QCborValue* QCborMap_Value(const QCborMap* self, long long key) {
    return new QCborValue(self->value(static_cast<qint64>(key)));
}

QCborValue* QCborMap_Value3(const QCborMap* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QCborValue(self->value(key_QString));
}

QCborValue* QCborMap_Value4(const QCborMap* self, const QCborValue* key) {
    return new QCborValue(self->value(*key));
}

QCborValue* QCborMap_OperatorSubscript(const QCborMap* self, long long key) {
    return new QCborValue(self->operator[](static_cast<qint64>(key)));
}

QCborValue* QCborMap_OperatorSubscript3(const QCborMap* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QCborValue(self->operator[](key_QString));
}

QCborValue* QCborMap_OperatorSubscript4(const QCborMap* self, const QCborValue* key) {
    return new QCborValue(self->operator[](*key));
}

QCborValueRef* QCborMap_OperatorSubscript5(QCborMap* self, long long key) {
    return new QCborValueRef(self->operator[](static_cast<qint64>(key)));
}

QCborValueRef* QCborMap_OperatorSubscript7(QCborMap* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QCborValueRef(self->operator[](key_QString));
}

QCborValueRef* QCborMap_OperatorSubscript8(QCborMap* self, const QCborValue* key) {
    return new QCborValueRef(self->operator[](*key));
}

QCborValue* QCborMap_Take(QCborMap* self, long long key) {
    return new QCborValue(self->take(static_cast<qint64>(key)));
}

QCborValue* QCborMap_Take3(QCborMap* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QCborValue(self->take(key_QString));
}

QCborValue* QCborMap_Take4(QCborMap* self, const QCborValue* key) {
    return new QCborValue(self->take(*key));
}

void QCborMap_Remove(QCborMap* self, long long key) {
    self->remove(static_cast<qint64>(key));
}

void QCborMap_Remove3(QCborMap* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->remove(key_QString);
}

void QCborMap_Remove4(QCborMap* self, const QCborValue* key) {
    self->remove(*key);
}

bool QCborMap_Contains(const QCborMap* self, long long key) {
    return self->contains(static_cast<qint64>(key));
}

bool QCborMap_Contains3(const QCborMap* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->contains(key_QString);
}

bool QCborMap_Contains4(const QCborMap* self, const QCborValue* key) {
    return self->contains(*key);
}

int QCborMap_Compare(const QCborMap* self, const QCborMap* other) {
    return self->compare(*other);
}

bool QCborMap_Empty(const QCborMap* self) {
    return self->empty();
}

QCborMap* QCborMap_FromVariantMap(const libqt_map /* of libqt_string to QVariant* */ mapVal) {
    QMap<QString, QVariant> mapVal_QMap;
    libqt_string* mapVal_karr = static_cast<libqt_string*>(mapVal.keys);
    QVariant** mapVal_varr = static_cast<QVariant**>(mapVal.values);
    for (size_t i = 0; i < mapVal.len; ++i) {
        QString mapVal_karr_i_QString = QString::fromUtf8(mapVal_karr[i].data, mapVal_karr[i].len);
        mapVal_QMap[mapVal_karr_i_QString] = *(mapVal_varr[i]);
    }
    return new QCborMap(QCborMap::fromVariantMap(mapVal_QMap));
}

QCborMap* QCborMap_FromVariantHash(const libqt_map /* of libqt_string to QVariant* */ hash) {
    QHash<QString, QVariant> hash_QMap;
    hash_QMap.reserve(hash.len);
    libqt_string* hash_karr = static_cast<libqt_string*>(hash.keys);
    QVariant** hash_varr = static_cast<QVariant**>(hash.values);
    for (size_t i = 0; i < hash.len; ++i) {
        QString hash_karr_i_QString = QString::fromUtf8(hash_karr[i].data, hash_karr[i].len);
        hash_QMap[hash_karr_i_QString] = *(hash_varr[i]);
    }
    return new QCborMap(QCborMap::fromVariantHash(hash_QMap));
}

QCborMap* QCborMap_FromJsonObject(const QJsonObject* o) {
    return new QCborMap(QCborMap::fromJsonObject(*o));
}

libqt_map /* of libqt_string to QVariant* */ QCborMap_ToVariantMap(const QCborMap* self) {
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

libqt_map /* of libqt_string to QVariant* */ QCborMap_ToVariantHash(const QCborMap* self) {
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

QJsonObject* QCborMap_ToJsonObject(const QCborMap* self) {
    return new QJsonObject(self->toJsonObject());
}

void QCborMap_Delete(QCborMap* self) {
    delete self;
}
