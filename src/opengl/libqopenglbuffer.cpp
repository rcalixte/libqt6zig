#include <QOpenGLBuffer>
#include <qopenglbuffer.h>
#include "libqopenglbuffer.h"
#include "libqopenglbuffer.hxx"

QOpenGLBuffer* QOpenGLBuffer_new() {
    return new QOpenGLBuffer();
}

QOpenGLBuffer* QOpenGLBuffer_new2(int typeVal) {
    return new QOpenGLBuffer(static_cast<QOpenGLBuffer::Type>(typeVal));
}

QOpenGLBuffer* QOpenGLBuffer_new3(const QOpenGLBuffer* other) {
    return new QOpenGLBuffer(*other);
}

void QOpenGLBuffer_OperatorAssign(QOpenGLBuffer* self, const QOpenGLBuffer* other) {
    self->operator=(*other);
}

void QOpenGLBuffer_Swap(QOpenGLBuffer* self, QOpenGLBuffer* other) {
    self->swap(*other);
}

int QOpenGLBuffer_Type(const QOpenGLBuffer* self) {
    return static_cast<int>(self->type());
}

int QOpenGLBuffer_UsagePattern(const QOpenGLBuffer* self) {
    return static_cast<int>(self->usagePattern());
}

void QOpenGLBuffer_SetUsagePattern(QOpenGLBuffer* self, int value) {
    self->setUsagePattern(static_cast<QOpenGLBuffer::UsagePattern>(value));
}

bool QOpenGLBuffer_Create(QOpenGLBuffer* self) {
    return self->create();
}

bool QOpenGLBuffer_IsCreated(const QOpenGLBuffer* self) {
    return self->isCreated();
}

void QOpenGLBuffer_Destroy(QOpenGLBuffer* self) {
    self->destroy();
}

bool QOpenGLBuffer_Bind(QOpenGLBuffer* self) {
    return self->bind();
}

void QOpenGLBuffer_Release(QOpenGLBuffer* self) {
    self->release();
}

void QOpenGLBuffer_Release2(int typeVal) {
    QOpenGLBuffer::release(static_cast<QOpenGLBuffer::Type>(typeVal));
}

uint32_t QOpenGLBuffer_BufferId(const QOpenGLBuffer* self) {
    return self->bufferId();
}

int QOpenGLBuffer_Size(const QOpenGLBuffer* self) {
    return self->size();
}

bool QOpenGLBuffer_Read(QOpenGLBuffer* self, int offset, void* data, int count) {
    return self->read(static_cast<int>(offset), data, static_cast<int>(count));
}

void QOpenGLBuffer_Write(QOpenGLBuffer* self, int offset, const void* data, int count) {
    self->write(static_cast<int>(offset), data, static_cast<int>(count));
}

void QOpenGLBuffer_Allocate(QOpenGLBuffer* self, const void* data, int count) {
    self->allocate(data, static_cast<int>(count));
}

void QOpenGLBuffer_Allocate2(QOpenGLBuffer* self, int count) {
    self->allocate(static_cast<int>(count));
}

void* QOpenGLBuffer_Map(QOpenGLBuffer* self, int access) {
    return self->map(static_cast<QOpenGLBuffer::Access>(access));
}

void* QOpenGLBuffer_MapRange(QOpenGLBuffer* self, int offset, int count, int access) {
    return self->mapRange(static_cast<int>(offset), static_cast<int>(count), static_cast<QOpenGLBuffer::RangeAccessFlags>(access));
}

bool QOpenGLBuffer_Unmap(QOpenGLBuffer* self) {
    return self->unmap();
}

void QOpenGLBuffer_Delete(QOpenGLBuffer* self) {
    delete self;
}
