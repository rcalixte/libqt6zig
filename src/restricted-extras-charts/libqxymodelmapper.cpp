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

void QXYModelMapper_Delete(QXYModelMapper* self) {
    delete self;
}
