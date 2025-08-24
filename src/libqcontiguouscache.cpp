#include <QContiguousCacheData>
#include <qcontiguouscache.h>
#include "libqcontiguouscache.h"
#include "libqcontiguouscache.hxx"

ptrdiff_t QContiguousCacheData_Alloc(const QContiguousCacheData* self) {
    return static_cast<ptrdiff_t>(self->alloc);
}

void QContiguousCacheData_SetAlloc(QContiguousCacheData* self, ptrdiff_t alloc) {
    self->alloc = (qsizetype)(alloc);
}

ptrdiff_t QContiguousCacheData_Count(const QContiguousCacheData* self) {
    return static_cast<ptrdiff_t>(self->count);
}

void QContiguousCacheData_SetCount(QContiguousCacheData* self, ptrdiff_t count) {
    self->count = (qsizetype)(count);
}

ptrdiff_t QContiguousCacheData_Start(const QContiguousCacheData* self) {
    return static_cast<ptrdiff_t>(self->start);
}

void QContiguousCacheData_SetStart(QContiguousCacheData* self, ptrdiff_t start) {
    self->start = (qsizetype)(start);
}

ptrdiff_t QContiguousCacheData_Offset(const QContiguousCacheData* self) {
    return static_cast<ptrdiff_t>(self->offset);
}

void QContiguousCacheData_SetOffset(QContiguousCacheData* self, ptrdiff_t offset) {
    self->offset = (qsizetype)(offset);
}

QContiguousCacheData* QContiguousCacheData_AllocateData(ptrdiff_t size, ptrdiff_t alignment) {
    return QContiguousCacheData::allocateData((qsizetype)(size), (qsizetype)(alignment));
}

void QContiguousCacheData_FreeData(QContiguousCacheData* data) {
    QContiguousCacheData::freeData(data);
}

void QContiguousCacheData_Delete(QContiguousCacheData* self) {
    delete self;
}
