#include <QJsonObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QJsonObject__const_iterator
#define WORKAROUND_INNER_CLASS_DEFINITION_QJsonObject__iterator
#include <QJsonValue>
#include <QJsonValueConstRef>
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
    QVariantMap mapVal_QMap;
    libqt_string* mapVal_karr = static_cast<libqt_string*>(mapVal.keys);
    QVariant** mapVal_varr = static_cast<QVariant**>(mapVal.values);
    for (size_t i = 0; i < mapVal.len; ++i) {
        QString mapVal_karr_i_QString = QString::fromUtf8(mapVal_karr[i].data, mapVal_karr[i].len);
        mapVal_QMap[mapVal_karr_i_QString] = *(mapVal_varr[i]);
    }
    return new QJsonObject(QJsonObject::fromVariantMap(mapVal_QMap));
}

libqt_map /* of libqt_string to QVariant* */ QJsonObject_ToVariantMap(const QJsonObject* self) {
    QVariantMap _ret = self->toVariantMap();
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
    QVariantHash mapVal_QMap;
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
    QVariantHash _ret = self->toVariantHash();
    // Convert QMap<> from C++ memory to manually-managed C memory
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
    QStringList _ret = self->keys();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
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
    _out.len = _ret.length();
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

QJsonValueRef* QJsonObject_OperatorSubscriptWithKey(QJsonObject* self, const libqt_string key) {
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

bool QJsonObject_OperatorEqual(const QJsonObject* self, const QJsonObject* other) {
    return (*self == *other);
}

bool QJsonObject_OperatorNotEqual(const QJsonObject* self, const QJsonObject* other) {
    return (*self != *other);
}

QJsonObject__iterator* QJsonObject_Begin(QJsonObject* self) {
    return new QJsonObject::iterator(self->begin());
}

QJsonObject__const_iterator* QJsonObject_Begin2(const QJsonObject* self) {
    return new QJsonObject::const_iterator(self->begin());
}

QJsonObject__const_iterator* QJsonObject_ConstBegin(const QJsonObject* self) {
    return new QJsonObject::const_iterator(self->constBegin());
}

QJsonObject__iterator* QJsonObject_End(QJsonObject* self) {
    return new QJsonObject::iterator(self->end());
}

QJsonObject__const_iterator* QJsonObject_End2(const QJsonObject* self) {
    return new QJsonObject::const_iterator(self->end());
}

QJsonObject__const_iterator* QJsonObject_ConstEnd(const QJsonObject* self) {
    return new QJsonObject::const_iterator(self->constEnd());
}

QJsonObject__iterator* QJsonObject_Erase(QJsonObject* self, QJsonObject__iterator* it) {
    return new QJsonObject::iterator(self->erase(*it));
}

QJsonObject__iterator* QJsonObject_Find(QJsonObject* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QJsonObject::iterator(self->find(key_QString));
}

QJsonObject__const_iterator* QJsonObject_FindWithKey(const QJsonObject* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QJsonObject::const_iterator(self->find(key_QString));
}

QJsonObject__const_iterator* QJsonObject_ConstFind(const QJsonObject* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QJsonObject::const_iterator(self->constFind(key_QString));
}

QJsonObject__iterator* QJsonObject_Insert(QJsonObject* self, const libqt_string key, const QJsonValue* value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QJsonObject::iterator(self->insert(key_QString, *value));
}

bool QJsonObject_Empty(const QJsonObject* self) {
    return self->empty();
}

void QJsonObject_Delete(QJsonObject* self) {
    delete self;
}

QJsonObject__iterator* QJsonObject__iterator_new(const QJsonObject__iterator* other) {
    return new QJsonObject::iterator(*other);
}

QJsonObject__iterator* QJsonObject__iterator_new2() {
    return new QJsonObject::iterator();
}

QJsonObject__iterator* QJsonObject__iterator_new3(QJsonObject* obj, ptrdiff_t index) {
    return new QJsonObject::iterator(obj, (qsizetype)(index));
}

QJsonObject__iterator* QJsonObject__iterator_new4(const QJsonObject__iterator* other) {
    return new QJsonObject::iterator(*other);
}

void QJsonObject__iterator_OperatorAssign(QJsonObject__iterator* self, const QJsonObject__iterator* other) {
    self->operator=(*other);
}

libqt_string QJsonObject__iterator_Key(const QJsonObject__iterator* self) {
    QString _ret = self->key();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QJsonValueRef* QJsonObject__iterator_Value(const QJsonObject__iterator* self) {
    return new QJsonValueRef(self->value());
}

QJsonValueRef* QJsonObject__iterator_OperatorMultiply(const QJsonObject__iterator* self) {
    return new QJsonValueRef(self->operator*());
}

QJsonValueConstRef* QJsonObject__iterator_OperatorMinusGreater(const QJsonObject__iterator* self) {
    return (QJsonValueConstRef*)self->operator->();
}

QJsonValueRef* QJsonObject__iterator_OperatorMinusGreater2(QJsonObject__iterator* self) {
    return self->operator->();
}

QJsonValueRef* QJsonObject__iterator_OperatorSubscript(const QJsonObject__iterator* self, ptrdiff_t j) {
    return new QJsonValueRef(self->operator[]((qsizetype)(j)));
}

bool QJsonObject__iterator_OperatorEqual(const QJsonObject__iterator* self, const QJsonObject__iterator* other) {
    return (*self == *other);
}

bool QJsonObject__iterator_OperatorNotEqual(const QJsonObject__iterator* self, const QJsonObject__iterator* other) {
    return (*self != *other);
}

bool QJsonObject__iterator_OperatorLesser(const QJsonObject__iterator* self, const QJsonObject__iterator* other) {
    return (*self < *other);
}

bool QJsonObject__iterator_OperatorLesserOrEqual(const QJsonObject__iterator* self, const QJsonObject__iterator* other) {
    return (*self <= *other);
}

bool QJsonObject__iterator_OperatorGreater(const QJsonObject__iterator* self, const QJsonObject__iterator* other) {
    return (*self > *other);
}

bool QJsonObject__iterator_OperatorGreaterOrEqual(const QJsonObject__iterator* self, const QJsonObject__iterator* other) {
    return (*self >= *other);
}

QJsonObject__iterator* QJsonObject__iterator_OperatorPlusPlus(QJsonObject__iterator* self) {
    QJsonObject::iterator& _ret = self->operator++();
    // Cast returned reference into pointer
    return &_ret;
}

QJsonObject__iterator* QJsonObject__iterator_OperatorPlusPlusWithInt(QJsonObject__iterator* self, int param1) {
    return new QJsonObject::iterator(self->operator++(static_cast<int>(param1)));
}

QJsonObject__iterator* QJsonObject__iterator_OperatorMinusMinus(QJsonObject__iterator* self) {
    QJsonObject::iterator& _ret = self->operator--();
    // Cast returned reference into pointer
    return &_ret;
}

QJsonObject__iterator* QJsonObject__iterator_OperatorMinusMinusWithInt(QJsonObject__iterator* self, int param1) {
    return new QJsonObject::iterator(self->operator--(static_cast<int>(param1)));
}

QJsonObject__iterator* QJsonObject__iterator_OperatorPlus(const QJsonObject__iterator* self, ptrdiff_t j) {
    return new QJsonObject::iterator(self->operator+((qsizetype)(j)));
}

QJsonObject__iterator* QJsonObject__iterator_OperatorMinus(const QJsonObject__iterator* self, ptrdiff_t j) {
    return new QJsonObject::iterator(self->operator-((qsizetype)(j)));
}

QJsonObject__iterator* QJsonObject__iterator_OperatorPlusAssign(QJsonObject__iterator* self, ptrdiff_t j) {
    QJsonObject::iterator& _ret = self->operator+=((qsizetype)(j));
    // Cast returned reference into pointer
    return &_ret;
}

QJsonObject__iterator* QJsonObject__iterator_OperatorMinusAssign(QJsonObject__iterator* self, ptrdiff_t j) {
    QJsonObject::iterator& _ret = self->operator-=((qsizetype)(j));
    // Cast returned reference into pointer
    return &_ret;
}

ptrdiff_t QJsonObject__iterator_OperatorMinusWithQJsonObjectiterator(const QJsonObject__iterator* self, QJsonObject__iterator* j) {
    return static_cast<ptrdiff_t>(self->operator-(*j));
}

bool QJsonObject__iterator_OperatorEqualWithOther(const QJsonObject__iterator* self, const QJsonObject__const_iterator* other) {
    return (*self == *other);
}

bool QJsonObject__iterator_OperatorNotEqualWithOther(const QJsonObject__iterator* self, const QJsonObject__const_iterator* other) {
    return (*self != *other);
}

bool QJsonObject__iterator_OperatorLesserWithOther(const QJsonObject__iterator* self, const QJsonObject__const_iterator* other) {
    return (*self < *other);
}

bool QJsonObject__iterator_OperatorLesserOrEqualWithOther(const QJsonObject__iterator* self, const QJsonObject__const_iterator* other) {
    return (*self <= *other);
}

bool QJsonObject__iterator_OperatorGreaterWithOther(const QJsonObject__iterator* self, const QJsonObject__const_iterator* other) {
    return (*self > *other);
}

bool QJsonObject__iterator_OperatorGreaterOrEqualWithOther(const QJsonObject__iterator* self, const QJsonObject__const_iterator* other) {
    return (*self >= *other);
}

void QJsonObject__iterator_Delete(QJsonObject__iterator* self) {
    delete self;
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new(const QJsonObject__const_iterator* other) {
    return new QJsonObject::const_iterator(*other);
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new2() {
    return new QJsonObject::const_iterator();
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new3(const QJsonObject* obj, ptrdiff_t index) {
    return new QJsonObject::const_iterator(obj, (qsizetype)(index));
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new4(const QJsonObject__iterator* other) {
    return new QJsonObject::const_iterator(*other);
}

QJsonObject__const_iterator* QJsonObject__const_iterator_new5(const QJsonObject__const_iterator* other) {
    return new QJsonObject::const_iterator(*other);
}

void QJsonObject__const_iterator_OperatorAssign(QJsonObject__const_iterator* self, const QJsonObject__const_iterator* other) {
    self->operator=(*other);
}

libqt_string QJsonObject__const_iterator_Key(const QJsonObject__const_iterator* self) {
    QString _ret = self->key();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QJsonValueConstRef* QJsonObject__const_iterator_Value(const QJsonObject__const_iterator* self) {
    return new QJsonValueConstRef(self->value());
}

QJsonValueConstRef* QJsonObject__const_iterator_OperatorMultiply(const QJsonObject__const_iterator* self) {
    return new QJsonValueConstRef(self->operator*());
}

QJsonValueConstRef* QJsonObject__const_iterator_OperatorMinusGreater(const QJsonObject__const_iterator* self) {
    return (QJsonValueConstRef*)self->operator->();
}

QJsonValueConstRef* QJsonObject__const_iterator_OperatorSubscript(const QJsonObject__const_iterator* self, ptrdiff_t j) {
    return new QJsonValueConstRef(self->operator[]((qsizetype)(j)));
}

bool QJsonObject__const_iterator_OperatorEqual(const QJsonObject__const_iterator* self, const QJsonObject__const_iterator* other) {
    return (*self == *other);
}

bool QJsonObject__const_iterator_OperatorNotEqual(const QJsonObject__const_iterator* self, const QJsonObject__const_iterator* other) {
    return (*self != *other);
}

bool QJsonObject__const_iterator_OperatorLesser(const QJsonObject__const_iterator* self, const QJsonObject__const_iterator* other) {
    return (*self < *other);
}

bool QJsonObject__const_iterator_OperatorLesserOrEqual(const QJsonObject__const_iterator* self, const QJsonObject__const_iterator* other) {
    return (*self <= *other);
}

bool QJsonObject__const_iterator_OperatorGreater(const QJsonObject__const_iterator* self, const QJsonObject__const_iterator* other) {
    return (*self > *other);
}

bool QJsonObject__const_iterator_OperatorGreaterOrEqual(const QJsonObject__const_iterator* self, const QJsonObject__const_iterator* other) {
    return (*self >= *other);
}

QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorPlusPlus(QJsonObject__const_iterator* self) {
    QJsonObject::const_iterator& _ret = self->operator++();
    // Cast returned reference into pointer
    return &_ret;
}

QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorPlusPlusWithInt(QJsonObject__const_iterator* self, int param1) {
    return new QJsonObject::const_iterator(self->operator++(static_cast<int>(param1)));
}

QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorMinusMinus(QJsonObject__const_iterator* self) {
    QJsonObject::const_iterator& _ret = self->operator--();
    // Cast returned reference into pointer
    return &_ret;
}

QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorMinusMinusWithInt(QJsonObject__const_iterator* self, int param1) {
    return new QJsonObject::const_iterator(self->operator--(static_cast<int>(param1)));
}

QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorPlus(const QJsonObject__const_iterator* self, ptrdiff_t j) {
    return new QJsonObject::const_iterator(self->operator+((qsizetype)(j)));
}

QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorMinus(const QJsonObject__const_iterator* self, ptrdiff_t j) {
    return new QJsonObject::const_iterator(self->operator-((qsizetype)(j)));
}

QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorPlusAssign(QJsonObject__const_iterator* self, ptrdiff_t j) {
    QJsonObject::const_iterator& _ret = self->operator+=((qsizetype)(j));
    // Cast returned reference into pointer
    return &_ret;
}

QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorMinusAssign(QJsonObject__const_iterator* self, ptrdiff_t j) {
    QJsonObject::const_iterator& _ret = self->operator-=((qsizetype)(j));
    // Cast returned reference into pointer
    return &_ret;
}

ptrdiff_t QJsonObject__const_iterator_OperatorMinusWithQJsonObjectconstIterator(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* j) {
    return static_cast<ptrdiff_t>(self->operator-(*j));
}

bool QJsonObject__const_iterator_OperatorEqualWithOther(const QJsonObject__const_iterator* self, const QJsonObject__iterator* other) {
    return (*self == *other);
}

bool QJsonObject__const_iterator_OperatorNotEqualWithOther(const QJsonObject__const_iterator* self, const QJsonObject__iterator* other) {
    return (*self != *other);
}

bool QJsonObject__const_iterator_OperatorLesserWithOther(const QJsonObject__const_iterator* self, const QJsonObject__iterator* other) {
    return (*self < *other);
}

bool QJsonObject__const_iterator_OperatorLesserOrEqualWithOther(const QJsonObject__const_iterator* self, const QJsonObject__iterator* other) {
    return (*self <= *other);
}

bool QJsonObject__const_iterator_OperatorGreaterWithOther(const QJsonObject__const_iterator* self, const QJsonObject__iterator* other) {
    return (*self > *other);
}

bool QJsonObject__const_iterator_OperatorGreaterOrEqualWithOther(const QJsonObject__const_iterator* self, const QJsonObject__iterator* other) {
    return (*self >= *other);
}

void QJsonObject__const_iterator_Delete(QJsonObject__const_iterator* self) {
    delete self;
}
