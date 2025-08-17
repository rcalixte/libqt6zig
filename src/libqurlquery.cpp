#include <QChar>
#include <QList>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QUrlQuery>
#include <qurlquery.h>
#include "libqurlquery.h"
#include "libqurlquery.hxx"

QUrlQuery* QUrlQuery_new() {
    return new QUrlQuery();
}

QUrlQuery* QUrlQuery_new2(const QUrl* url) {
    return new QUrlQuery(*url);
}

QUrlQuery* QUrlQuery_new3(const libqt_string queryString) {
    QString queryString_QString = QString::fromUtf8(queryString.data, queryString.len);
    return new QUrlQuery(queryString_QString);
}

QUrlQuery* QUrlQuery_new4(const QUrlQuery* other) {
    return new QUrlQuery(*other);
}

void QUrlQuery_OperatorAssign(QUrlQuery* self, const QUrlQuery* other) {
    self->operator=(*other);
}

void QUrlQuery_Swap(QUrlQuery* self, QUrlQuery* other) {
    self->swap(*other);
}

bool QUrlQuery_IsEmpty(const QUrlQuery* self) {
    return self->isEmpty();
}

bool QUrlQuery_IsDetached(const QUrlQuery* self) {
    return self->isDetached();
}

void QUrlQuery_Clear(QUrlQuery* self) {
    self->clear();
}

libqt_string QUrlQuery_Query(const QUrlQuery* self) {
    QString _ret = self->query();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QUrlQuery_SetQuery(QUrlQuery* self, const libqt_string queryString) {
    QString queryString_QString = QString::fromUtf8(queryString.data, queryString.len);
    self->setQuery(queryString_QString);
}

libqt_string QUrlQuery_ToString(const QUrlQuery* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QUrlQuery_SetQueryDelimiters(QUrlQuery* self, QChar* valueDelimiter, QChar* pairDelimiter) {
    self->setQueryDelimiters(*valueDelimiter, *pairDelimiter);
}

QChar* QUrlQuery_QueryValueDelimiter(const QUrlQuery* self) {
    return new QChar(self->queryValueDelimiter());
}

QChar* QUrlQuery_QueryPairDelimiter(const QUrlQuery* self) {
    return new QChar(self->queryPairDelimiter());
}

void QUrlQuery_SetQueryItems(QUrlQuery* self, const libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ query) {
    QList<QPair<QString, QString>> query_QList;
    query_QList.reserve(query.len);
    libqt_pair /* tuple of libqt_string and libqt_string */* query_arr = static_cast<libqt_pair /* tuple of libqt_string and libqt_string */*>(query.data);
    for (size_t i = 0; i < query.len; ++i) {
        QPair<QString, QString> query_arr_i_QPair;
        libqt_string* query_arr_i_first = static_cast<libqt_string*>(query_arr[i].first);
        libqt_string* query_arr_i_second = static_cast<libqt_string*>(query_arr[i].second);
        QString query_arr_i_first_0_QString = QString::fromUtf8(query_arr_i_first[0].data, query_arr_i_first[0].len);
        QString query_arr_i_second_0_QString = QString::fromUtf8(query_arr_i_second[0].data, query_arr_i_second[0].len);
        query_arr_i_QPair.first = query_arr_i_first_0_QString;
        query_arr_i_QPair.second = query_arr_i_second_0_QString;
        query_QList.push_back(query_arr_i_QPair);
    }
    self->setQueryItems(query_QList);
}

libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ QUrlQuery_QueryItems(const QUrlQuery* self) {
    QList<QPair<QString, QString>> _ret = self->queryItems();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of libqt_string and libqt_string */* _arr = static_cast<libqt_pair /* tuple of libqt_string and libqt_string */*>(malloc(sizeof(libqt_pair /* tuple of libqt_string and libqt_string */) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<QString, QString> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        libqt_string* _lv_first = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        libqt_string* _lv_second = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        QString _lv_first_ret = _lv_ret.first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_first_b = _lv_first_ret.toUtf8();
        libqt_string _lv_first_str;
        _lv_first_str.len = _lv_first_b.length();
        _lv_first_str.data = static_cast<const char*>(malloc(_lv_first_str.len + 1));
        memcpy((void*)_lv_first_str.data, _lv_first_b.data(), _lv_first_str.len);
        ((char*)_lv_first_str.data)[_lv_first_str.len] = '\0';
        *_lv_first = _lv_first_str;
        QString _lv_second_ret = _lv_ret.second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_second_b = _lv_second_ret.toUtf8();
        libqt_string _lv_second_str;
        _lv_second_str.len = _lv_second_b.length();
        _lv_second_str.data = static_cast<const char*>(malloc(_lv_second_str.len + 1));
        memcpy((void*)_lv_second_str.data, _lv_second_b.data(), _lv_second_str.len);
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

bool QUrlQuery_HasQueryItem(const QUrlQuery* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->hasQueryItem(key_QString);
}

void QUrlQuery_AddQueryItem(QUrlQuery* self, const libqt_string key, const libqt_string value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->addQueryItem(key_QString, value_QString);
}

void QUrlQuery_RemoveQueryItem(QUrlQuery* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->removeQueryItem(key_QString);
}

libqt_string QUrlQuery_QueryItemValue(const QUrlQuery* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString _ret = self->queryItemValue(key_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QUrlQuery_AllQueryItemValues(const QUrlQuery* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QList<QString> _ret = self->allQueryItemValues(key_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QUrlQuery_RemoveAllQueryItems(QUrlQuery* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->removeAllQueryItems(key_QString);
}

libqt_string QUrlQuery_Query1(const QUrlQuery* self, int encoding) {
    QString _ret = self->query(static_cast<QUrl::ComponentFormattingOptions>(encoding));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QUrlQuery_ToString1(const QUrlQuery* self, int encoding) {
    QString _ret = self->toString(static_cast<QUrl::ComponentFormattingOptions>(encoding));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ QUrlQuery_QueryItems1(const QUrlQuery* self, int encoding) {
    QList<QPair<QString, QString>> _ret = self->queryItems(static_cast<QUrl::ComponentFormattingOptions>(encoding));
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of libqt_string and libqt_string */* _arr = static_cast<libqt_pair /* tuple of libqt_string and libqt_string */*>(malloc(sizeof(libqt_pair /* tuple of libqt_string and libqt_string */) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<QString, QString> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        libqt_string* _lv_first = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        libqt_string* _lv_second = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        QString _lv_first_ret = _lv_ret.first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_first_b = _lv_first_ret.toUtf8();
        libqt_string _lv_first_str;
        _lv_first_str.len = _lv_first_b.length();
        _lv_first_str.data = static_cast<const char*>(malloc(_lv_first_str.len + 1));
        memcpy((void*)_lv_first_str.data, _lv_first_b.data(), _lv_first_str.len);
        ((char*)_lv_first_str.data)[_lv_first_str.len] = '\0';
        *_lv_first = _lv_first_str;
        QString _lv_second_ret = _lv_ret.second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_second_b = _lv_second_ret.toUtf8();
        libqt_string _lv_second_str;
        _lv_second_str.len = _lv_second_b.length();
        _lv_second_str.data = static_cast<const char*>(malloc(_lv_second_str.len + 1));
        memcpy((void*)_lv_second_str.data, _lv_second_b.data(), _lv_second_str.len);
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

libqt_string QUrlQuery_QueryItemValue2(const QUrlQuery* self, const libqt_string key, int encoding) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString _ret = self->queryItemValue(key_QString, static_cast<QUrl::ComponentFormattingOptions>(encoding));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QUrlQuery_AllQueryItemValues2(const QUrlQuery* self, const libqt_string key, int encoding) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QList<QString> _ret = self->allQueryItemValues(key_QString, static_cast<QUrl::ComponentFormattingOptions>(encoding));
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QUrlQuery_Delete(QUrlQuery* self) {
    delete self;
}
