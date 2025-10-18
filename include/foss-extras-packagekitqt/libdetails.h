#pragma once
#ifndef SRC_FOSS_EXTRAS_PACKAGEKITQTC_LIBDETAILS_H
#define SRC_FOSS_EXTRAS_PACKAGEKITQTC_LIBDETAILS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef PackageKit::Details PackageKit__Details;
#else
typedef struct PackageKit__Details PackageKit__Details;
typedef struct QVariant QVariant;
#endif

PackageKit__Details* PackageKit__Details_new();
PackageKit__Details* PackageKit__Details_new2(const libqt_map /* of libqt_string to QVariant* */ other);
libqt_string PackageKit__Details_PackageId(const PackageKit__Details* self);
libqt_string PackageKit__Details_Description(const PackageKit__Details* self);
int PackageKit__Details_Group(const PackageKit__Details* self);
libqt_string PackageKit__Details_Summary(const PackageKit__Details* self);
libqt_string PackageKit__Details_Url(const PackageKit__Details* self);
libqt_string PackageKit__Details_License(const PackageKit__Details* self);
unsigned long long PackageKit__Details_Size(const PackageKit__Details* self);
void PackageKit__Details_Delete(PackageKit__Details* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
