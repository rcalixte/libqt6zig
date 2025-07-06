#include <QArrayData>
#include <QPair>
#include <qarraydata.h>
#include "libqarraydata.h"
#include "libqarraydata.hxx"

ptrdiff_t QArrayData_AllocatedCapacity(QArrayData* self) {
    return static_cast<ptrdiff_t>(self->allocatedCapacity());
}

ptrdiff_t QArrayData_ConstAllocatedCapacity(const QArrayData* self) {
    return static_cast<ptrdiff_t>(self->constAllocatedCapacity());
}

bool QArrayData_Ref(QArrayData* self) {
    return self->ref();
}

bool QArrayData_Deref(QArrayData* self) {
    return self->deref();
}

bool QArrayData_IsShared(const QArrayData* self) {
    return self->isShared();
}

bool QArrayData_NeedsDetach(QArrayData* self) {
    return self->needsDetach();
}

ptrdiff_t QArrayData_DetachCapacity(const QArrayData* self, ptrdiff_t newSize) {
    return static_cast<ptrdiff_t>(self->detachCapacity((qsizetype)(newSize)));
}

libqt_pair /* tuple of QArrayData* and void* */ QArrayData_ReallocateUnaligned(QArrayData* data, void* dataPointer, ptrdiff_t objectSize, ptrdiff_t newCapacity, int option) {
    QPair<QArrayData*, void*> _ret = QArrayData::reallocateUnaligned(data, dataPointer, (qsizetype)(objectSize), (qsizetype)(newCapacity), static_cast<QArrayData::AllocationOption>(option));
    // Convert QPair<> from C++ memory to manually-managed C memory
    QArrayData** _first = static_cast<QArrayData**>(malloc(sizeof(QArrayData*)));
    void** _second = static_cast<void**>(malloc(sizeof(void*)));
    *_first = _ret.first;
    *_second = _ret.second;
    libqt_pair _out;
    _out.first = static_cast<void*>(_first);
    _out.second = static_cast<void*>(_second);
    return _out;
}

void QArrayData_Deallocate(QArrayData* data, ptrdiff_t objectSize, ptrdiff_t alignment) {
    QArrayData::deallocate(data, (qsizetype)(objectSize), (qsizetype)(alignment));
}

void QArrayData_Delete(QArrayData* self) {
    delete self;
}
