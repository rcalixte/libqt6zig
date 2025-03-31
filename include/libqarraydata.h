#pragma once
#ifndef SRCC_LIBQARRAYDATA_H
#define SRCC_LIBQARRAYDATA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QArrayData QArrayData;
#endif

#ifdef __cplusplus
typedef QArrayData::AllocationOption AllocationOption;                            // C++ enum
typedef QArrayData::ArrayOption ArrayOption;                                      // C++ enum
typedef QArrayData::ArrayOptions ArrayOptions;                                    // C++ QFlags
typedef QArrayData::GrowthPosition GrowthPosition;                                // C++ enum
typedef QtPrivate::QContainerImplHelper::CutResult QContainerImplHelperCutResult; // C++ enum
#else
typedef int AllocationOption;              // C ABI enum
typedef int ArrayOption;                   // C ABI enum
typedef int ArrayOptions;                  // C ABI QFlags
typedef int GrowthPosition;                // C ABI enum
typedef int QContainerImplHelperCutResult; // C ABI enum
#endif

ptrdiff_t QArrayData_AllocatedCapacity(QArrayData* self);
ptrdiff_t QArrayData_ConstAllocatedCapacity(const QArrayData* self);
bool QArrayData_Ref(QArrayData* self);
bool QArrayData_Deref(QArrayData* self);
bool QArrayData_IsShared(const QArrayData* self);
bool QArrayData_NeedsDetach(const QArrayData* self);
ptrdiff_t QArrayData_DetachCapacity(const QArrayData* self, ptrdiff_t newSize);
libqt_pair /* tuple of QArrayData* and void* */ QArrayData_ReallocateUnaligned(QArrayData* data, void* dataPointer, ptrdiff_t objectSize, ptrdiff_t newCapacity, int option);
void QArrayData_Deallocate(QArrayData* data, ptrdiff_t objectSize, ptrdiff_t alignment);
void QArrayData_Delete(QArrayData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
