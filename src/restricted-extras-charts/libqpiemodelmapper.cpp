#include <QAbstractItemModel>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPieModelMapper>
#include <QPieSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
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

void QPieModelMapper_Delete(QPieModelMapper* self) {
    delete self;
}
