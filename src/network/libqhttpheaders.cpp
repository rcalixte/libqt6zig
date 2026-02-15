#include <QAnyStringView>
#include <QByteArray>
#include <QByteArrayView>
#include <QHttpHeaders>
#include <QList>
#include <QMultiHash>
#include <QMultiMap>
#include <QPair>
#include <qhttpheaders.h>
#include "libqhttpheaders.h"
#include "libqhttpheaders.hxx"

QHttpHeaders* QHttpHeaders_new() {
    return new QHttpHeaders();
}

QHttpHeaders* QHttpHeaders_new2(const QHttpHeaders* other) {
    return new QHttpHeaders(*other);
}

void QHttpHeaders_OperatorAssign(QHttpHeaders* self, const QHttpHeaders* other) {
    self->operator=(*other);
}

void QHttpHeaders_Swap(QHttpHeaders* self, QHttpHeaders* other) {
    self->swap(*other);
}

bool QHttpHeaders_Append(QHttpHeaders* self, const char* name, const char* value) {
    return self->append(QAnyStringView(name), QAnyStringView(value));
}

bool QHttpHeaders_Append2(QHttpHeaders* self, int name, const char* value) {
    return self->append(static_cast<QHttpHeaders::WellKnownHeader>(name), QAnyStringView(value));
}

bool QHttpHeaders_Insert(QHttpHeaders* self, ptrdiff_t i, const char* name, const char* value) {
    return self->insert((qsizetype)(i), QAnyStringView(name), QAnyStringView(value));
}

bool QHttpHeaders_Insert2(QHttpHeaders* self, ptrdiff_t i, int name, const char* value) {
    return self->insert((qsizetype)(i), static_cast<QHttpHeaders::WellKnownHeader>(name), QAnyStringView(value));
}

bool QHttpHeaders_Replace(QHttpHeaders* self, ptrdiff_t i, const char* name, const char* newValue) {
    return self->replace((qsizetype)(i), QAnyStringView(name), QAnyStringView(newValue));
}

bool QHttpHeaders_Replace2(QHttpHeaders* self, ptrdiff_t i, int name, const char* newValue) {
    return self->replace((qsizetype)(i), static_cast<QHttpHeaders::WellKnownHeader>(name), QAnyStringView(newValue));
}

bool QHttpHeaders_ReplaceOrAppend(QHttpHeaders* self, const char* name, const char* newValue) {
    return self->replaceOrAppend(QAnyStringView(name), QAnyStringView(newValue));
}

bool QHttpHeaders_ReplaceOrAppend2(QHttpHeaders* self, int name, const char* newValue) {
    return self->replaceOrAppend(static_cast<QHttpHeaders::WellKnownHeader>(name), QAnyStringView(newValue));
}

bool QHttpHeaders_Contains(const QHttpHeaders* self, const char* name) {
    return self->contains(QAnyStringView(name));
}

bool QHttpHeaders_Contains2(const QHttpHeaders* self, int name) {
    return self->contains(static_cast<QHttpHeaders::WellKnownHeader>(name));
}

void QHttpHeaders_Clear(QHttpHeaders* self) {
    self->clear();
}

void QHttpHeaders_RemoveAll(QHttpHeaders* self, const char* name) {
    self->removeAll(QAnyStringView(name));
}

void QHttpHeaders_RemoveAll2(QHttpHeaders* self, int name) {
    self->removeAll(static_cast<QHttpHeaders::WellKnownHeader>(name));
}

void QHttpHeaders_RemoveAt(QHttpHeaders* self, ptrdiff_t i) {
    self->removeAt((qsizetype)(i));
}

libqt_string QHttpHeaders_Value(const QHttpHeaders* self, const char* name) {
    QByteArrayView _qb = self->value(QAnyStringView(name));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QHttpHeaders_Value2(const QHttpHeaders* self, int name) {
    QByteArrayView _qb = self->value(static_cast<QHttpHeaders::WellKnownHeader>(name));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_list /* of libqt_string */ QHttpHeaders_Values(const QHttpHeaders* self, const char* name) {
    QList<QByteArray> _ret = self->values(QAnyStringView(name));
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<char*>(malloc(_lv_str.len));
        memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ QHttpHeaders_Values2(const QHttpHeaders* self, int name) {
    QList<QByteArray> _ret = self->values(static_cast<QHttpHeaders::WellKnownHeader>(name));
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<char*>(malloc(_lv_str.len));
        memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QHttpHeaders_ValueAt(const QHttpHeaders* self, ptrdiff_t i) {
    QByteArrayView _qb = self->valueAt((qsizetype)(i));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QHttpHeaders_CombinedValue(const QHttpHeaders* self, const char* name) {
    QByteArray _qb = self->combinedValue(QAnyStringView(name));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QHttpHeaders_CombinedValue2(const QHttpHeaders* self, int name) {
    QByteArray _qb = self->combinedValue(static_cast<QHttpHeaders::WellKnownHeader>(name));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

ptrdiff_t QHttpHeaders_Size(const QHttpHeaders* self) {
    return static_cast<ptrdiff_t>(self->size());
}

void QHttpHeaders_Reserve(QHttpHeaders* self, ptrdiff_t size) {
    self->reserve((qsizetype)(size));
}

bool QHttpHeaders_IsEmpty(const QHttpHeaders* self) {
    return self->isEmpty();
}

libqt_string QHttpHeaders_WellKnownHeaderName(int name) {
    QByteArrayView _qb = QHttpHeaders::wellKnownHeaderName(static_cast<QHttpHeaders::WellKnownHeader>(name));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

QHttpHeaders* QHttpHeaders_FromListOfPairs(const libqt_list /* of libqt_pair tuple of libqt_string and libqt_string */ headers) {
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
    return new QHttpHeaders(QHttpHeaders::fromListOfPairs(headers_QList));
}

QHttpHeaders* QHttpHeaders_FromMultiMap(const libqt_map /* of libqt_string to libqt_list of libqt_string */ headers) {
    QMultiMap<QByteArray, QByteArray> headers_QMultiMap;
    libqt_string* headers_karr = static_cast<libqt_string*>(headers.keys);
    libqt_list* /* of libqt_string */ headers_varr = static_cast<libqt_list*>(headers.values);
    for (size_t i = 0; i < headers.len; ++i) {
        QByteArray headers_karr_i_QByteArray(headers_karr[i].data, headers_karr[i].len);
        libqt_list headers_QMultiMap_list = headers_varr[i];
        libqt_string* headers_varr_list = static_cast<libqt_string*>(headers_QMultiMap_list.data);
        for (size_t j = 0; j < headers_QMultiMap_list.len; ++j) {
            QByteArray headers_varr_i_QByteArray(headers_varr_list[j].data, headers_varr_list[j].len);
            headers_QMultiMap.insert(headers_karr_i_QByteArray, headers_varr_i_QByteArray);
        }
    }
    return new QHttpHeaders(QHttpHeaders::fromMultiMap(headers_QMultiMap));
}

QHttpHeaders* QHttpHeaders_FromMultiHash(const libqt_map /* of libqt_string to libqt_list of libqt_string */ headers) {
    QMultiHash<QByteArray, QByteArray> headers_QMultiHash;
    headers_QMultiHash.reserve(headers.len);
    libqt_string* headers_karr = static_cast<libqt_string*>(headers.keys);
    libqt_list* /* of libqt_string */ headers_varr = static_cast<libqt_list*>(headers.values);
    for (size_t i = 0; i < headers.len; ++i) {
        QByteArray headers_karr_i_QByteArray(headers_karr[i].data, headers_karr[i].len);
        libqt_list headers_QMultiHash_list = headers_varr[i];
        libqt_string* headers_varr_list = static_cast<libqt_string*>(headers_QMultiHash_list.data);
        for (size_t j = 0; j < headers_QMultiHash_list.len; ++j) {
            QByteArray headers_varr_i_QByteArray(headers_varr_list[j].data, headers_varr_list[j].len);
            headers_QMultiHash.insert(headers_karr_i_QByteArray, headers_varr_i_QByteArray);
        }
    }
    return new QHttpHeaders(QHttpHeaders::fromMultiHash(headers_QMultiHash));
}

libqt_list /* of libqt_pair tuple of libqt_string and libqt_string */ QHttpHeaders_ToListOfPairs(const QHttpHeaders* self) {
    QList<QPair<QByteArray, QByteArray>> _ret = self->toListOfPairs();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of libqt_string and libqt_string */* _arr = static_cast<libqt_pair /* tuple of libqt_string and libqt_string */*>(malloc(sizeof(libqt_pair /* tuple of libqt_string and libqt_string */) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<QByteArray, QByteArray> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        libqt_string* _lv_first = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        libqt_string* _lv_second = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        QByteArray _lv_first_qb = _lv_ret.first;
        libqt_string _lv_first_str;
        _lv_first_str.len = _lv_first_qb.length();
        _lv_first_str.data = static_cast<char*>(malloc(_lv_first_str.len));
        memcpy((void*)_lv_first_str.data, _lv_first_qb.data(), _lv_first_str.len);
        *_lv_first = _lv_first_str;
        QByteArray _lv_second_qb = _lv_ret.second;
        libqt_string _lv_second_str;
        _lv_second_str.len = _lv_second_qb.length();
        _lv_second_str.data = static_cast<char*>(malloc(_lv_second_str.len));
        memcpy((void*)_lv_second_str.data, _lv_second_qb.data(), _lv_second_str.len);
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

libqt_map /* of libqt_string to libqt_list of libqt_string */ QHttpHeaders_ToMultiMap(const QHttpHeaders* self) {
    QMultiMap<QByteArray, QByteArray> _ret = self->toMultiMap();
    // Convert QMultiMap<> from C++ memory to manually-managed C memory
    auto _uniqueKeys = _ret.uniqueKeys();
    auto _numUniqueKeys = _uniqueKeys.size();
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _numUniqueKeys));
    libqt_list* _varr = static_cast<libqt_list*>(malloc(sizeof(libqt_list) * _numUniqueKeys));
    for (auto i = 0; i < _numUniqueKeys; ++i) {
        QByteArray key = _uniqueKeys[i];
        _karr[i].len = key.length();
        _karr[i].data = static_cast<char*>(malloc(_karr[i].len + 1));
        memcpy((void*)_karr[i].data, key.data(), _karr[i].len);
        ((char*)_karr[i].data)[_karr[i].len] = '\0';
        QList<QByteArray> values = _ret.values(key);
        size_t numValues = values.size();
        libqt_string* _array = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * numValues));
        for (size_t j = 0; j < numValues; ++j) {
            _array[j].len = values[j].length();
            _array[j].data = static_cast<char*>(malloc(_array[j].len + 1));
            memcpy((void*)_array[j].data, values[j].data(), _array[j].len);
            ((char*)_array[j].data)[_array[j].len] = '\0';
        }
        _varr[i].len = numValues;
        _varr[i].data = static_cast<void*>(_array);
    }
    libqt_map _out;
    _out.len = _numUniqueKeys;
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

libqt_map /* of libqt_string to libqt_list of libqt_string */ QHttpHeaders_ToMultiHash(const QHttpHeaders* self) {
    QMultiHash<QByteArray, QByteArray> _ret = self->toMultiHash();
    // Convert QMultiHash<> from C++ memory to manually-managed C memory
    auto _uniqueKeys = _ret.uniqueKeys();
    auto _numUniqueKeys = _uniqueKeys.size();
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _numUniqueKeys));
    libqt_list* _varr = static_cast<libqt_list*>(malloc(sizeof(libqt_list) * _numUniqueKeys));
    for (auto i = 0; i < _numUniqueKeys; ++i) {
        QByteArray key = _uniqueKeys[i];
        _karr[i].len = key.length();
        _karr[i].data = static_cast<char*>(malloc(_karr[i].len + 1));
        memcpy((void*)_karr[i].data, key.data(), _karr[i].len);
        ((char*)_karr[i].data)[_karr[i].len] = '\0';
        QList<QByteArray> values = _ret.values(key);
        size_t numValues = values.size();
        libqt_string* _array = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * numValues));
        for (size_t j = 0; j < numValues; ++j) {
            _array[j].len = values[j].length();
            _array[j].data = static_cast<char*>(malloc(_array[j].len + 1));
            memcpy((void*)_array[j].data, values[j].data(), _array[j].len);
            ((char*)_array[j].data)[_array[j].len] = '\0';
        }
        _varr[i].len = numValues;
        _varr[i].data = static_cast<void*>(_array);
    }
    libqt_map _out;
    _out.len = _numUniqueKeys;
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

libqt_string QHttpHeaders_Value22(const QHttpHeaders* self, const char* name, libqt_string defaultValue) {
    QByteArrayView defaultValue_QByteArrayView(defaultValue.data, defaultValue.len);
    QByteArrayView _qb = self->value(QAnyStringView(name), defaultValue_QByteArrayView);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QHttpHeaders_Value23(const QHttpHeaders* self, int name, libqt_string defaultValue) {
    QByteArrayView defaultValue_QByteArrayView(defaultValue.data, defaultValue.len);
    QByteArrayView _qb = self->value(static_cast<QHttpHeaders::WellKnownHeader>(name), defaultValue_QByteArrayView);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QHttpHeaders_Delete(QHttpHeaders* self) {
    delete self;
}
