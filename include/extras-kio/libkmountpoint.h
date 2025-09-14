#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKMOUNTPOINT_H
#define SRC_EXTRAS_KIOC_LIBKMOUNTPOINT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KMountPoint__List)
typedef KMountPoint::List KMountPoint__List;
#endif
#else
typedef struct KMountPoint KMountPoint;
typedef struct KMountPoint__List KMountPoint__List;
typedef struct QSharedData QSharedData;
#endif

KMountPoint__List* KMountPoint_PossibleMountPoints();
KMountPoint__List* KMountPoint_CurrentMountPoints();
libqt_string KMountPoint_MountedFrom(const KMountPoint* self);
bool KMountPoint_IsOnNetwork(const KMountPoint* self);
dev_t KMountPoint_DeviceId(const KMountPoint* self);
libqt_string KMountPoint_RealDeviceName(const KMountPoint* self);
libqt_string KMountPoint_MountPoint(const KMountPoint* self);
libqt_string KMountPoint_MountType(const KMountPoint* self);
libqt_list /* of libqt_string */ KMountPoint_MountOptions(const KMountPoint* self);
bool KMountPoint_ProbablySlow(const KMountPoint* self);
bool KMountPoint_TestFileSystemFlag(const KMountPoint* self, int flag);
KMountPoint__List* KMountPoint_PossibleMountPoints1(int infoNeeded);
KMountPoint__List* KMountPoint_CurrentMountPoints1(int infoNeeded);
void KMountPoint_Delete(KMountPoint* self);

KMountPoint__List* KMountPoint__List_new();
void KMountPoint__List_Delete(KMountPoint__List* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
