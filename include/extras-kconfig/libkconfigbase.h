#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKCONFIGBASE_H
#define SRC_EXTRAS_KCONFIGC_LIBKCONFIGBASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KConfigBase KConfigBase;
typedef struct KConfigGroup KConfigGroup;
#endif

libqt_list /* of libqt_string */ KConfigBase_GroupList(const KConfigBase* self);
bool KConfigBase_HasGroup(const KConfigBase* self, const libqt_string group);
KConfigGroup* KConfigBase_Group(KConfigBase* self, const libqt_string group);
KConfigGroup* KConfigBase_Group2(const KConfigBase* self, const libqt_string group);
void KConfigBase_DeleteGroup(KConfigBase* self, const libqt_string group);
bool KConfigBase_Sync(KConfigBase* self);
void KConfigBase_MarkAsClean(KConfigBase* self);
int KConfigBase_AccessMode(const KConfigBase* self);
bool KConfigBase_IsImmutable(const KConfigBase* self);
bool KConfigBase_IsGroupImmutable(const KConfigBase* self, const libqt_string group);
void KConfigBase_DeleteGroup2(KConfigBase* self, const libqt_string group, int flags);
void KConfigBase_Delete(KConfigBase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
