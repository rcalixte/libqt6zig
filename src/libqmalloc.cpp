#include <qmalloc.h>
#include "libqmalloc.h"
#include "libqmalloc.hxx"

void* qmalloc_QMallocAligned(size_t size, size_t alignment) {
    return qMallocAligned(static_cast<size_t>(size), static_cast<size_t>(alignment));
}

void* qmalloc_QReallocAligned(void* ptr, size_t size, size_t oldsize, size_t alignment) {
    return qReallocAligned(ptr, static_cast<size_t>(size), static_cast<size_t>(oldsize), static_cast<size_t>(alignment));
}

void qmalloc_QFreeAligned(void* ptr) {
    qFreeAligned(ptr);
}
