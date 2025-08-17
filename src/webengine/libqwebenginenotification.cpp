#include <QImage>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineNotification>
#include <qwebenginenotification.h>
#include "libqwebenginenotification.h"
#include "libqwebenginenotification.hxx"

QMetaObject* QWebEngineNotification_MetaObject(const QWebEngineNotification* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebEngineNotification_Metacast(QWebEngineNotification* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebEngineNotification_Metacall(QWebEngineNotification* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QWebEngineNotification_Tr(const char* s) {
    QString _ret = QWebEngineNotification::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QWebEngineNotification_Matches(const QWebEngineNotification* self, const QWebEngineNotification* other) {
    return self->matches(other);
}

QUrl* QWebEngineNotification_Origin(const QWebEngineNotification* self) {
    return new QUrl(self->origin());
}

QImage* QWebEngineNotification_Icon(const QWebEngineNotification* self) {
    return new QImage(self->icon());
}

libqt_string QWebEngineNotification_Title(const QWebEngineNotification* self) {
    QString _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineNotification_Message(const QWebEngineNotification* self) {
    QString _ret = self->message();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineNotification_Tag(const QWebEngineNotification* self) {
    QString _ret = self->tag();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineNotification_Language(const QWebEngineNotification* self) {
    QString _ret = self->language();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QWebEngineNotification_Direction(const QWebEngineNotification* self) {
    return static_cast<int>(self->direction());
}

void QWebEngineNotification_Show(const QWebEngineNotification* self) {
    self->show();
}

void QWebEngineNotification_Click(const QWebEngineNotification* self) {
    self->click();
}

void QWebEngineNotification_Close(const QWebEngineNotification* self) {
    self->close();
}

void QWebEngineNotification_Closed(QWebEngineNotification* self) {
    self->closed();
}

void QWebEngineNotification_Connect_Closed(QWebEngineNotification* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineNotification*) = reinterpret_cast<void (*)(QWebEngineNotification*)>(slot);
    QWebEngineNotification::connect(self, &QWebEngineNotification::closed, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QWebEngineNotification_Tr2(const char* s, const char* c) {
    QString _ret = QWebEngineNotification::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineNotification_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWebEngineNotification::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWebEngineNotification_Delete(QWebEngineNotification* self) {
    delete self;
}
