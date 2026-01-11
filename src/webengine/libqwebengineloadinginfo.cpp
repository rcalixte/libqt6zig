#include <QByteArray>
#include <QMultiMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineLoadingInfo>
#include <qwebengineloadinginfo.h>
#include "libqwebengineloadinginfo.h"
#include "libqwebengineloadinginfo.hxx"

QWebEngineLoadingInfo* QWebEngineLoadingInfo_new(const QWebEngineLoadingInfo* other) {
    return new QWebEngineLoadingInfo(*other);
}

void QWebEngineLoadingInfo_OperatorAssign(QWebEngineLoadingInfo* self, const QWebEngineLoadingInfo* other) {
    self->operator=(*other);
}

QUrl* QWebEngineLoadingInfo_Url(const QWebEngineLoadingInfo* self) {
    return new QUrl(self->url());
}

bool QWebEngineLoadingInfo_IsErrorPage(const QWebEngineLoadingInfo* self) {
    return self->isErrorPage();
}

int QWebEngineLoadingInfo_Status(const QWebEngineLoadingInfo* self) {
    return static_cast<int>(self->status());
}

libqt_string QWebEngineLoadingInfo_ErrorString(const QWebEngineLoadingInfo* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QWebEngineLoadingInfo_ErrorDomain(const QWebEngineLoadingInfo* self) {
    return static_cast<int>(self->errorDomain());
}

int QWebEngineLoadingInfo_ErrorCode(const QWebEngineLoadingInfo* self) {
    return self->errorCode();
}

libqt_map /* of libqt_string to libqt_list of libqt_string */ QWebEngineLoadingInfo_ResponseHeaders(const QWebEngineLoadingInfo* self) {
    QMultiMap<QByteArray, QByteArray> _ret = self->responseHeaders();
    // Convert QMultiMap<> from C++ memory to manually-managed C memory
    auto _uniqueKeys = _ret.uniqueKeys();
    auto _numUniqueKeys = _uniqueKeys.size();
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _numUniqueKeys));
    libqt_list* _varr = static_cast<libqt_list*>(malloc(sizeof(libqt_list) * _numUniqueKeys));
    for (auto i = 0; i < _numUniqueKeys; ++i) {
        QByteArray key = _uniqueKeys[i];
        _karr[i].len = key.length();
        _karr[i].data = static_cast<const char*>(malloc(_karr[i].len + 1));
        memcpy((void*)_karr[i].data, key.data(), _karr[i].len);
        ((char*)_karr[i].data)[_karr[i].len] = '\0';
        QList<QByteArray> values = _ret.values(key);
        size_t numValues = values.size();
        libqt_string* _array = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * numValues));
        for (size_t j = 0; j < numValues; ++j) {
            _array[j].len = values[j].length();
            _array[j].data = static_cast<const char*>(malloc(_array[j].len + 1));
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

void QWebEngineLoadingInfo_Delete(QWebEngineLoadingInfo* self) {
    delete self;
}
