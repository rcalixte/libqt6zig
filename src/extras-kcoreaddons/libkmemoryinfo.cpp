#include <KMemoryInfo>
#include <kmemoryinfo.h>
#include "libkmemoryinfo.h"
#include "libkmemoryinfo.hxx"

KMemoryInfo* KMemoryInfo_new() {
    return new KMemoryInfo();
}

KMemoryInfo* KMemoryInfo_new2(const KMemoryInfo* other) {
    return new KMemoryInfo(*other);
}

void KMemoryInfo_OperatorAssign(KMemoryInfo* self, const KMemoryInfo* other) {
    self->operator=(*other);
}

bool KMemoryInfo_OperatorEqual(const KMemoryInfo* self, const KMemoryInfo* other) {
    return (*self == *other);
}

bool KMemoryInfo_OperatorNotEqual(const KMemoryInfo* self, const KMemoryInfo* other) {
    return (*self != *other);
}

bool KMemoryInfo_IsNull(const KMemoryInfo* self) {
    return self->isNull();
}

unsigned long long KMemoryInfo_TotalPhysical(const KMemoryInfo* self) {
    return static_cast<unsigned long long>(self->totalPhysical());
}

unsigned long long KMemoryInfo_FreePhysical(const KMemoryInfo* self) {
    return static_cast<unsigned long long>(self->freePhysical());
}

unsigned long long KMemoryInfo_AvailablePhysical(const KMemoryInfo* self) {
    return static_cast<unsigned long long>(self->availablePhysical());
}

unsigned long long KMemoryInfo_Cached(const KMemoryInfo* self) {
    return static_cast<unsigned long long>(self->cached());
}

unsigned long long KMemoryInfo_Buffers(const KMemoryInfo* self) {
    return static_cast<unsigned long long>(self->buffers());
}

unsigned long long KMemoryInfo_TotalSwapFile(const KMemoryInfo* self) {
    return static_cast<unsigned long long>(self->totalSwapFile());
}

unsigned long long KMemoryInfo_FreeSwapFile(const KMemoryInfo* self) {
    return static_cast<unsigned long long>(self->freeSwapFile());
}

void KMemoryInfo_Delete(KMemoryInfo* self) {
    delete self;
}
