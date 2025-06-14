#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineNavigationRequest>
#include <qwebenginenavigationrequest.h>
#include "libqwebenginenavigationrequest.h"
#include "libqwebenginenavigationrequest.hxx"

QMetaObject* QWebEngineNavigationRequest_MetaObject(const QWebEngineNavigationRequest* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebEngineNavigationRequest_Metacast(QWebEngineNavigationRequest* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebEngineNavigationRequest_Metacall(QWebEngineNavigationRequest* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QWebEngineNavigationRequest_Tr(const char* s) {
    QString _ret = QWebEngineNavigationRequest::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* QWebEngineNavigationRequest_Url(const QWebEngineNavigationRequest* self) {
    return new QUrl(self->url());
}

bool QWebEngineNavigationRequest_IsMainFrame(const QWebEngineNavigationRequest* self) {
    return self->isMainFrame();
}

int QWebEngineNavigationRequest_NavigationType(const QWebEngineNavigationRequest* self) {
    return static_cast<int>(self->navigationType());
}

void QWebEngineNavigationRequest_Accept(QWebEngineNavigationRequest* self) {
    self->accept();
}

void QWebEngineNavigationRequest_Reject(QWebEngineNavigationRequest* self) {
    self->reject();
}

void QWebEngineNavigationRequest_ActionChanged(QWebEngineNavigationRequest* self) {
    self->actionChanged();
}

void QWebEngineNavigationRequest_Connect_ActionChanged(QWebEngineNavigationRequest* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineNavigationRequest*) = reinterpret_cast<void (*)(QWebEngineNavigationRequest*)>(slot);
    QWebEngineNavigationRequest::connect(self, &QWebEngineNavigationRequest::actionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QWebEngineNavigationRequest_Tr2(const char* s, const char* c) {
    QString _ret = QWebEngineNavigationRequest::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineNavigationRequest_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWebEngineNavigationRequest::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWebEngineNavigationRequest_Delete(QWebEngineNavigationRequest* self) {
    delete self;
}
