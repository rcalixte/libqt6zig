#include <QAnyStringView>
#include <QByteArray>
#include <QByteArrayView>
#include <QHttpHeaders>
#include <QList>
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

bool QHttpHeaders_Append(QHttpHeaders* self, libqt_string name, libqt_string value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return self->append(QAnyStringView(name_QString), QAnyStringView(value_QString));
}

bool QHttpHeaders_Append2(QHttpHeaders* self, int name, libqt_string value) {
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return self->append(static_cast<QHttpHeaders::WellKnownHeader>(name), QAnyStringView(value_QString));
}

bool QHttpHeaders_Insert(QHttpHeaders* self, ptrdiff_t i, libqt_string name, libqt_string value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return self->insert((qsizetype)(i), QAnyStringView(name_QString), QAnyStringView(value_QString));
}

bool QHttpHeaders_Insert2(QHttpHeaders* self, ptrdiff_t i, int name, libqt_string value) {
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return self->insert((qsizetype)(i), static_cast<QHttpHeaders::WellKnownHeader>(name), QAnyStringView(value_QString));
}

bool QHttpHeaders_Replace(QHttpHeaders* self, ptrdiff_t i, libqt_string name, libqt_string newValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString newValue_QString = QString::fromUtf8(newValue.data, newValue.len);
    return self->replace((qsizetype)(i), QAnyStringView(name_QString), QAnyStringView(newValue_QString));
}

bool QHttpHeaders_Replace2(QHttpHeaders* self, ptrdiff_t i, int name, libqt_string newValue) {
    QString newValue_QString = QString::fromUtf8(newValue.data, newValue.len);
    return self->replace((qsizetype)(i), static_cast<QHttpHeaders::WellKnownHeader>(name), QAnyStringView(newValue_QString));
}

bool QHttpHeaders_ReplaceOrAppend(QHttpHeaders* self, libqt_string name, libqt_string newValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString newValue_QString = QString::fromUtf8(newValue.data, newValue.len);
    return self->replaceOrAppend(QAnyStringView(name_QString), QAnyStringView(newValue_QString));
}

bool QHttpHeaders_ReplaceOrAppend2(QHttpHeaders* self, int name, libqt_string newValue) {
    QString newValue_QString = QString::fromUtf8(newValue.data, newValue.len);
    return self->replaceOrAppend(static_cast<QHttpHeaders::WellKnownHeader>(name), QAnyStringView(newValue_QString));
}

bool QHttpHeaders_Contains(const QHttpHeaders* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->contains(QAnyStringView(name_QString));
}

bool QHttpHeaders_Contains2(const QHttpHeaders* self, int name) {
    return self->contains(static_cast<QHttpHeaders::WellKnownHeader>(name));
}

void QHttpHeaders_Clear(QHttpHeaders* self) {
    self->clear();
}

void QHttpHeaders_RemoveAll(QHttpHeaders* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->removeAll(QAnyStringView(name_QString));
}

void QHttpHeaders_RemoveAll2(QHttpHeaders* self, int name) {
    self->removeAll(static_cast<QHttpHeaders::WellKnownHeader>(name));
}

void QHttpHeaders_RemoveAt(QHttpHeaders* self, ptrdiff_t i) {
    self->removeAt((qsizetype)(i));
}

QByteArrayView* QHttpHeaders_Value(const QHttpHeaders* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QByteArrayView(self->value(QAnyStringView(name_QString)));
}

QByteArrayView* QHttpHeaders_Value2(const QHttpHeaders* self, int name) {
    return new QByteArrayView(self->value(static_cast<QHttpHeaders::WellKnownHeader>(name)));
}

libqt_list /* of libqt_string */ QHttpHeaders_Values(const QHttpHeaders* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QList<QByteArray> _ret = self->values(QAnyStringView(name_QString));
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QByteArrayView* QHttpHeaders_ValueAt(const QHttpHeaders* self, ptrdiff_t i) {
    return new QByteArrayView(self->valueAt((qsizetype)(i)));
}

libqt_string QHttpHeaders_CombinedValue(const QHttpHeaders* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QByteArray _qb = self->combinedValue(QAnyStringView(name_QString));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHttpHeaders_CombinedValue2(const QHttpHeaders* self, int name) {
    QByteArray _qb = self->combinedValue(static_cast<QHttpHeaders::WellKnownHeader>(name));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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

QByteArrayView* QHttpHeaders_WellKnownHeaderName(int name) {
    return new QByteArrayView(QHttpHeaders::wellKnownHeaderName(static_cast<QHttpHeaders::WellKnownHeader>(name)));
}

QHttpHeaders* QHttpHeaders_FromListOfPairs(const libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ headers) {
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

libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ QHttpHeaders_ToListOfPairs(const QHttpHeaders* self) {
    QList<QPair<QByteArray, QByteArray>> _ret = self->toListOfPairs();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of libqt_string and libqt_string */* _arr = static_cast<libqt_pair /* tuple of libqt_string and libqt_string */*>(malloc(sizeof(libqt_pair /* tuple of libqt_string and libqt_string */) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<QByteArray, QByteArray> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        libqt_string* _lv_first = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        libqt_string* _lv_second = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        QByteArray _lv_first_qb = _lv_ret.first;
        libqt_string _lv_first_str;
        _lv_first_str.len = _lv_first_qb.length();
        _lv_first_str.data = static_cast<const char*>(malloc(_lv_first_str.len + 1));
        memcpy((void*)_lv_first_str.data, _lv_first_qb.data(), _lv_first_str.len);
        ((char*)_lv_first_str.data)[_lv_first_str.len] = '\0';
        *_lv_first = _lv_first_str;
        QByteArray _lv_second_qb = _lv_ret.second;
        libqt_string _lv_second_str;
        _lv_second_str.len = _lv_second_qb.length();
        _lv_second_str.data = static_cast<const char*>(malloc(_lv_second_str.len + 1));
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

QByteArrayView* QHttpHeaders_Value22(const QHttpHeaders* self, libqt_string name, QByteArrayView* defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QByteArrayView(self->value(QAnyStringView(name_QString), *defaultValue));
}

QByteArrayView* QHttpHeaders_Value23(const QHttpHeaders* self, int name, QByteArrayView* defaultValue) {
    return new QByteArrayView(self->value(static_cast<QHttpHeaders::WellKnownHeader>(name), *defaultValue));
}

void QHttpHeaders_Delete(QHttpHeaders* self) {
    delete self;
}
