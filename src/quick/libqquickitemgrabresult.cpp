#include <QEvent>
#include <QImage>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQuickItemGrabResult>
#include <QString>
#include <QUrl>
#include <qquickitemgrabresult.h>
#include "libqquickitemgrabresult.h"
#include "libqquickitemgrabresult.hxx"

QMetaObject* QQuickItemGrabResult_MetaObject(const QQuickItemGrabResult* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuickItemGrabResult_Metacast(QQuickItemGrabResult* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuickItemGrabResult_Metacall(QQuickItemGrabResult* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuickItemGrabResult_Tr(const char* s) {
    auto _ret = QQuickItemGrabResult::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QImage* QQuickItemGrabResult_Image(const QQuickItemGrabResult* self) {
    return new QImage(self->image());
}

QUrl* QQuickItemGrabResult_Url(const QQuickItemGrabResult* self) {
    return new QUrl(self->url());
}

bool QQuickItemGrabResult_SaveToFile(const QQuickItemGrabResult* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->saveToFile(fileName_QString);
}

bool QQuickItemGrabResult_SaveToFile2(const QQuickItemGrabResult* self, const QUrl* fileName) {
    return self->saveToFile(*fileName);
}

void QQuickItemGrabResult_Ready(QQuickItemGrabResult* self) {
    self->ready();
}

void QQuickItemGrabResult_Connect_Ready(QQuickItemGrabResult* self, intptr_t slot) {
    void (*slotFunc)(QQuickItemGrabResult*) = reinterpret_cast<void (*)(QQuickItemGrabResult*)>(slot);
    QQuickItemGrabResult::connect(self, &QQuickItemGrabResult::ready, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QQuickItemGrabResult_Tr2(const char* s, const char* c) {
    auto _ret = QQuickItemGrabResult::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuickItemGrabResult_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuickItemGrabResult::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickItemGrabResult_Delete(QQuickItemGrabResult* self) {
    delete self;
}
