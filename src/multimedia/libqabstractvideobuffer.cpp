#include <QAbstractVideoBuffer>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractVideoBuffer__MapData
#include <QVideoFrameFormat>
#include <qabstractvideobuffer.h>
#include "libqabstractvideobuffer.h"
#include "libqabstractvideobuffer.hxx"

void QAbstractVideoBuffer_Unmap(QAbstractVideoBuffer* self) {
    self->unmap();
}

QVideoFrameFormat* QAbstractVideoBuffer_Format(const QAbstractVideoBuffer* self) {
    return new QVideoFrameFormat(self->format());
}

void QAbstractVideoBuffer_Delete(QAbstractVideoBuffer* self) {
    delete self;
}

QAbstractVideoBuffer__MapData* QAbstractVideoBuffer__MapData_new(const QAbstractVideoBuffer__MapData* other) {
    return new QAbstractVideoBuffer::MapData(*other);
}

QAbstractVideoBuffer__MapData* QAbstractVideoBuffer__MapData_new2(QAbstractVideoBuffer__MapData* other) {
    return new QAbstractVideoBuffer::MapData(std::move(*other));
}

void QAbstractVideoBuffer__MapData_CopyAssign(QAbstractVideoBuffer__MapData* self, QAbstractVideoBuffer__MapData* other) {
    *self = *other;
}

void QAbstractVideoBuffer__MapData_MoveAssign(QAbstractVideoBuffer__MapData* self, QAbstractVideoBuffer__MapData* other) {
    *self = std::move(*other);
}

void QAbstractVideoBuffer__MapData_Delete(QAbstractVideoBuffer__MapData* self) {
    delete self;
}
