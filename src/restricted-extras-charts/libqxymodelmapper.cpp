#include <QAbstractItemModel>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QXYModelMapper>
#include <QXYSeries>
#include <qxymodelmapper.h>
#include "libqxymodelmapper.h"
#include "libqxymodelmapper.hxx"

QMetaObject* QXYModelMapper_MetaObject(const QXYModelMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QXYModelMapper_Metacast(QXYModelMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QXYModelMapper_Metacall(QXYModelMapper* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QXYModelMapper_Tr(const char* s) {
    QString _ret = QXYModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QXYModelMapper_Tr2(const char* s, const char* c) {
    QString _ret = QXYModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QXYModelMapper_Tr3(const char* s, const char* c, int n) {
    QString _ret = QXYModelMapper::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QXYModelMapper_Delete(QXYModelMapper* self) {
    delete self;
}
