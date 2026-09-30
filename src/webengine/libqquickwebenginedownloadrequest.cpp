#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQuickWebEngineDownloadRequest>
#include <QString>
#include <QWebEngineDownloadRequest>
#include <qquickwebenginedownloadrequest.h>
#include "libqquickwebenginedownloadrequest.h"
#include "libqquickwebenginedownloadrequest.hxx"

QMetaObject* QQuickWebEngineDownloadRequest_MetaObject(const QQuickWebEngineDownloadRequest* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuickWebEngineDownloadRequest_Metacast(QQuickWebEngineDownloadRequest* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuickWebEngineDownloadRequest_Metacall(QQuickWebEngineDownloadRequest* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuickWebEngineDownloadRequest_Tr(const char* s) {
    auto _ret = QQuickWebEngineDownloadRequest::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickWebEngineDownloadRequest_QmlMarkerUncreatable(QQuickWebEngineDownloadRequest* self) {
    self->qt_qmlMarker_uncreatable();
}

libqt_string QQuickWebEngineDownloadRequest_Tr2(const char* s, const char* c) {
    auto _ret = QQuickWebEngineDownloadRequest::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuickWebEngineDownloadRequest_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuickWebEngineDownloadRequest::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickWebEngineDownloadRequest_Delete(QQuickWebEngineDownloadRequest* self) {
    delete self;
}
