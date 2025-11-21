#include <QAbstractItemModel>
#include <QBoxPlotModelMapper>
#include <QBoxPlotSeries>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qboxplotmodelmapper.h>
#include "libqboxplotmodelmapper.h"
#include "libqboxplotmodelmapper.hxx"

QMetaObject* QBoxPlotModelMapper_MetaObject(const QBoxPlotModelMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QBoxPlotModelMapper_Metacast(QBoxPlotModelMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBoxPlotModelMapper_Metacall(QBoxPlotModelMapper* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void QBoxPlotModelMapper_Delete(QBoxPlotModelMapper* self) {
    delete self;
}
