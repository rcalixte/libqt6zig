#include <QAbstractItemModel>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPieModelMapper>
#include <QPieSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qpiemodelmapper.h>
#include "libqpiemodelmapper.h"
#include "libqpiemodelmapper.hxx"

QMetaObject* QPieModelMapper_MetaObject(const QPieModelMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPieModelMapper_Metacast(QPieModelMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPieModelMapper_Metacall(QPieModelMapper* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPieModelMapper_Tr(const char* s) {
    QString _ret = QPieModelMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPieModelMapper_Tr2(const char* s, const char* c) {
    QString _ret = QPieModelMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPieModelMapper_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPieModelMapper::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QPieModelMapper_Event(QPieModelMapper* self, QEvent* event) {
    return self->event(event);
}

bool QPieModelMapper_EventFilter(QPieModelMapper* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

void QPieModelMapper_Delete(QPieModelMapper* self) {
    delete self;
}
