#include <QAbstractAxis>
#include <QAbstractSeries>
#include <QChart>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qabstractseries.h>
#include "libqabstractseries.h"
#include "libqabstractseries.hxx"

QMetaObject* QAbstractSeries_MetaObject(const QAbstractSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractSeries_Metacast(QAbstractSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractSeries_Metacall(QAbstractSeries* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractSeries_Tr(const char* s) {
    QString _ret = QAbstractSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QAbstractSeries_Type(const QAbstractSeries* self) {
    return static_cast<int>(self->type());
}

void QAbstractSeries_SetName(QAbstractSeries* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string QAbstractSeries_Name(const QAbstractSeries* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAbstractSeries_SetVisible(QAbstractSeries* self) {
    self->setVisible();
}

bool QAbstractSeries_IsVisible(const QAbstractSeries* self) {
    return self->isVisible();
}

double QAbstractSeries_Opacity(const QAbstractSeries* self) {
    return static_cast<double>(self->opacity());
}

void QAbstractSeries_SetOpacity(QAbstractSeries* self, double opacity) {
    self->setOpacity(static_cast<qreal>(opacity));
}

void QAbstractSeries_SetUseOpenGL(QAbstractSeries* self) {
    self->setUseOpenGL();
}

bool QAbstractSeries_UseOpenGL(const QAbstractSeries* self) {
    return self->useOpenGL();
}

QChart* QAbstractSeries_Chart(const QAbstractSeries* self) {
    return self->chart();
}

bool QAbstractSeries_AttachAxis(QAbstractSeries* self, QAbstractAxis* axis) {
    return self->attachAxis(axis);
}

bool QAbstractSeries_DetachAxis(QAbstractSeries* self, QAbstractAxis* axis) {
    return self->detachAxis(axis);
}

libqt_list /* of QAbstractAxis* */ QAbstractSeries_AttachedAxes(QAbstractSeries* self) {
    QList<QAbstractAxis*> _ret = self->attachedAxes();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractAxis** _arr = static_cast<QAbstractAxis**>(malloc(sizeof(QAbstractAxis*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QAbstractSeries_Show(QAbstractSeries* self) {
    self->show();
}

void QAbstractSeries_Hide(QAbstractSeries* self) {
    self->hide();
}

void QAbstractSeries_NameChanged(QAbstractSeries* self) {
    self->nameChanged();
}

void QAbstractSeries_Connect_NameChanged(QAbstractSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSeries*) = reinterpret_cast<void (*)(QAbstractSeries*)>(slot);
    QAbstractSeries::connect(self, &QAbstractSeries::nameChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractSeries_VisibleChanged(QAbstractSeries* self) {
    self->visibleChanged();
}

void QAbstractSeries_Connect_VisibleChanged(QAbstractSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSeries*) = reinterpret_cast<void (*)(QAbstractSeries*)>(slot);
    QAbstractSeries::connect(self, &QAbstractSeries::visibleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractSeries_OpacityChanged(QAbstractSeries* self) {
    self->opacityChanged();
}

void QAbstractSeries_Connect_OpacityChanged(QAbstractSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSeries*) = reinterpret_cast<void (*)(QAbstractSeries*)>(slot);
    QAbstractSeries::connect(self, &QAbstractSeries::opacityChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractSeries_UseOpenGLChanged(QAbstractSeries* self) {
    self->useOpenGLChanged();
}

void QAbstractSeries_Connect_UseOpenGLChanged(QAbstractSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSeries*) = reinterpret_cast<void (*)(QAbstractSeries*)>(slot);
    QAbstractSeries::connect(self, &QAbstractSeries::useOpenGLChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QAbstractSeries_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractSeries_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractSeries::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAbstractSeries_SetVisible1(QAbstractSeries* self, bool visible) {
    self->setVisible(visible);
}

void QAbstractSeries_SetUseOpenGL1(QAbstractSeries* self, bool enable) {
    self->setUseOpenGL(enable);
}

void QAbstractSeries_Delete(QAbstractSeries* self) {
    delete self;
}
