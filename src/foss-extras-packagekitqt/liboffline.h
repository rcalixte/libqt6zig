#pragma once
#ifndef SRC_FOSS_EXTRAS_PACKAGEKITQTC_LIBOFFLINE_H
#define SRC_FOSS_EXTRAS_PACKAGEKITQTC_LIBOFFLINE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef PackageKit::Offline PackageKit__Offline;
#else
typedef struct PackageKit__Offline PackageKit__Offline;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

QMetaObject* PackageKit__Offline_MetaObject(const PackageKit__Offline* self);
void* PackageKit__Offline_Metacast(PackageKit__Offline* self, const char* param1);
int PackageKit__Offline_Metacall(PackageKit__Offline* self, int param1, int param2, void** param3);
libqt_map /* of libqt_string to QVariant* */ PackageKit__Offline_PreparedUpgrade(const PackageKit__Offline* self);
int PackageKit__Offline_TriggerAction(const PackageKit__Offline* self);
bool PackageKit__Offline_UpdatePrepared(const PackageKit__Offline* self);
bool PackageKit__Offline_UpdateTriggered(const PackageKit__Offline* self);
bool PackageKit__Offline_UpgradePrepared(const PackageKit__Offline* self);
bool PackageKit__Offline_UpgradeTriggered(const PackageKit__Offline* self);
void PackageKit__Offline_GetPrepared(PackageKit__Offline* self);
void PackageKit__Offline_PreparedUpdates(PackageKit__Offline* self, const libqt_list /* of libqt_string */ updates);
void PackageKit__Offline_Connect_PreparedUpdates(PackageKit__Offline* self, intptr_t slot);
void PackageKit__Offline_Changed(PackageKit__Offline* self);
void PackageKit__Offline_Connect_Changed(PackageKit__Offline* self, intptr_t slot);
void PackageKit__Offline_Delete(PackageKit__Offline* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
