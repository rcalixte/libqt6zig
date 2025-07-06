#include <QAbstractNetworkCache>
#include <QByteArray>
#include <QDateTime>
#include <QHash>
#include <QHttpHeaders>
#include <QIODevice>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkCacheMetaData>
#include <QObject>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <qabstractnetworkcache.h>
#include "libqabstractnetworkcache.h"
#include "libqabstractnetworkcache.hxx"

QNetworkCacheMetaData* QNetworkCacheMetaData_new() {
    return new QNetworkCacheMetaData();
}

QNetworkCacheMetaData* QNetworkCacheMetaData_new2(const QNetworkCacheMetaData* other) {
    return new QNetworkCacheMetaData(*other);
}

void QNetworkCacheMetaData_OperatorAssign(QNetworkCacheMetaData* self, const QNetworkCacheMetaData* other) {
    self->operator=(*other);
}

void QNetworkCacheMetaData_Swap(QNetworkCacheMetaData* self, QNetworkCacheMetaData* other) {
    self->swap(*other);
}

bool QNetworkCacheMetaData_OperatorEqual(const QNetworkCacheMetaData* self, const QNetworkCacheMetaData* other) {
    return (*self == *other);
}

bool QNetworkCacheMetaData_OperatorNotEqual(const QNetworkCacheMetaData* self, const QNetworkCacheMetaData* other) {
    return (*self != *other);
}

bool QNetworkCacheMetaData_IsValid(const QNetworkCacheMetaData* self) {
    return self->isValid();
}

QUrl* QNetworkCacheMetaData_Url(const QNetworkCacheMetaData* self) {
    return new QUrl(self->url());
}

void QNetworkCacheMetaData_SetUrl(QNetworkCacheMetaData* self, const QUrl* url) {
    self->setUrl(*url);
}

libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ QNetworkCacheMetaData_RawHeaders(const QNetworkCacheMetaData* self) {
    QList<QPair<QByteArray, QByteArray>> _ret = self->rawHeaders();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of libqt_string and libqt_string */* _arr = static_cast<libqt_pair /* tuple of libqt_string and libqt_string */*>(malloc(sizeof(libqt_pair /* tuple of libqt_string and libqt_string */) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        QPair<QByteArray, QByteArray> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        libqt_string* _lv_first = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        libqt_string* _lv_second = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        QByteArray _lv_first_qb = _lv_ret.first;
        libqt_string _lv_first_str;
        _lv_first_str.len = _lv_first_qb.length();
        _lv_first_str.data = static_cast<const char*>(malloc((_lv_first_str.len + 1) * sizeof(char)));
        memcpy((void*)_lv_first_str.data, _lv_first_qb.data(), _lv_first_str.len);
        ((char*)_lv_first_str.data)[_lv_first_str.len] = '\0';
        *_lv_first = _lv_first_str;
        QByteArray _lv_second_qb = _lv_ret.second;
        libqt_string _lv_second_str;
        _lv_second_str.len = _lv_second_qb.length();
        _lv_second_str.data = static_cast<const char*>(malloc((_lv_second_str.len + 1) * sizeof(char)));
        memcpy((void*)_lv_second_str.data, _lv_second_qb.data(), _lv_second_str.len);
        ((char*)_lv_second_str.data)[_lv_second_str.len] = '\0';
        *_lv_second = _lv_second_str;
        libqt_pair _lv_out;
        _lv_out.first = static_cast<void*>(_lv_first);
        _lv_out.second = static_cast<void*>(_lv_second);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QNetworkCacheMetaData_SetRawHeaders(QNetworkCacheMetaData* self, const libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ headers) {
    QList<QPair<QByteArray, QByteArray>> headers_QList;
    headers_QList.reserve(headers.len);
    libqt_pair /* tuple of libqt_string and libqt_string */* headers_arr = static_cast<libqt_pair /* tuple of libqt_string and libqt_string */*>(headers.data);
    for (size_t i = 0; i < headers.len; ++i) {
        QPair<QByteArray, QByteArray> headers_arr_i_QPair;
        libqt_string* headers_arr_i_first = static_cast<libqt_string*>(headers_arr[i].first);
        libqt_string* headers_arr_i_second = static_cast<libqt_string*>(headers_arr[i].second);
        QByteArray headers_arr_i_first_0_QByteArray(headers_arr_i_first[0].data, headers_arr_i_first[0].len);
        QByteArray headers_arr_i_second_0_QByteArray(headers_arr_i_second[0].data, headers_arr_i_second[0].len);
        headers_arr_i_QPair.first = headers_arr_i_first_0_QByteArray;
        headers_arr_i_QPair.second = headers_arr_i_second_0_QByteArray;
        headers_QList.push_back(headers_arr_i_QPair);
    }
    self->setRawHeaders(headers_QList);
}

QHttpHeaders* QNetworkCacheMetaData_Headers(const QNetworkCacheMetaData* self) {
    return new QHttpHeaders(self->headers());
}

void QNetworkCacheMetaData_SetHeaders(QNetworkCacheMetaData* self, const QHttpHeaders* headers) {
    self->setHeaders(*headers);
}

QDateTime* QNetworkCacheMetaData_LastModified(const QNetworkCacheMetaData* self) {
    return new QDateTime(self->lastModified());
}

void QNetworkCacheMetaData_SetLastModified(QNetworkCacheMetaData* self, const QDateTime* dateTime) {
    self->setLastModified(*dateTime);
}

QDateTime* QNetworkCacheMetaData_ExpirationDate(const QNetworkCacheMetaData* self) {
    return new QDateTime(self->expirationDate());
}

void QNetworkCacheMetaData_SetExpirationDate(QNetworkCacheMetaData* self, const QDateTime* dateTime) {
    self->setExpirationDate(*dateTime);
}

bool QNetworkCacheMetaData_SaveToDisk(const QNetworkCacheMetaData* self) {
    return self->saveToDisk();
}

void QNetworkCacheMetaData_SetSaveToDisk(QNetworkCacheMetaData* self, bool allow) {
    self->setSaveToDisk(allow);
}

libqt_map /* of int to QVariant* */ QNetworkCacheMetaData_Attributes(const QNetworkCacheMetaData* self) {
    QHash<QNetworkRequest::Attribute, QVariant> _ret = self->attributes();
    // Convert QHash<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = static_cast<int>(_itr->first);
        _varr[_ctr] = new QVariant(_itr->second);
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

void QNetworkCacheMetaData_SetAttributes(QNetworkCacheMetaData* self, const libqt_map /* of int to QVariant* */ attributes) {
    QHash<QNetworkRequest::Attribute, QVariant> attributes_QMap;
    attributes_QMap.reserve(attributes.len);
    int* attributes_karr = static_cast<int*>(attributes.keys);
    QVariant** attributes_varr = static_cast<QVariant**>(attributes.values);
    for (size_t i = 0; i < attributes.len; ++i) {
        attributes_QMap[static_cast<QNetworkRequest::Attribute>(attributes_karr[i])] = *(attributes_varr[i]);
    }
    self->setAttributes(attributes_QMap);
}

void QNetworkCacheMetaData_Delete(QNetworkCacheMetaData* self) {
    delete self;
}

QMetaObject* QAbstractNetworkCache_MetaObject(const QAbstractNetworkCache* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractNetworkCache_Metacast(QAbstractNetworkCache* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractNetworkCache_Metacall(QAbstractNetworkCache* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractNetworkCache_Tr(const char* s) {
    QString _ret = QAbstractNetworkCache::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QNetworkCacheMetaData* QAbstractNetworkCache_MetaData(QAbstractNetworkCache* self, const QUrl* url) {
    return new QNetworkCacheMetaData(self->metaData(*url));
}

void QAbstractNetworkCache_UpdateMetaData(QAbstractNetworkCache* self, const QNetworkCacheMetaData* metaData) {
    self->updateMetaData(*metaData);
}

QIODevice* QAbstractNetworkCache_Data(QAbstractNetworkCache* self, const QUrl* url) {
    return self->data(*url);
}

bool QAbstractNetworkCache_Remove(QAbstractNetworkCache* self, const QUrl* url) {
    return self->remove(*url);
}

long long QAbstractNetworkCache_CacheSize(const QAbstractNetworkCache* self) {
    return static_cast<long long>(self->cacheSize());
}

QIODevice* QAbstractNetworkCache_Prepare(QAbstractNetworkCache* self, const QNetworkCacheMetaData* metaData) {
    return self->prepare(*metaData);
}

void QAbstractNetworkCache_Insert(QAbstractNetworkCache* self, QIODevice* device) {
    self->insert(device);
}

void QAbstractNetworkCache_Clear(QAbstractNetworkCache* self) {
    self->clear();
}

libqt_string QAbstractNetworkCache_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractNetworkCache::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractNetworkCache_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractNetworkCache::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractNetworkCache_Delete(QAbstractNetworkCache* self) {
    delete self;
}
