#include <QAbstractBarSeries>
#include <QAbstractItemModel>
#include <QBarModelMapper>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qbarmodelmapper.h>
#include "libqbarmodelmapper.h"
#include "libqbarmodelmapper.hxx"

QMetaObject* QBarModelMapper_MetaObject(const QBarModelMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QBarModelMapper_Metacast(QBarModelMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBarModelMapper_Metacall(QBarModelMapper* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void QBarModelMapper_Delete(QBarModelMapper* self) {
    delete self;
}
