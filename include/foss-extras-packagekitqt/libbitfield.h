#pragma once
#ifndef SRC_FOSS_EXTRAS_PACKAGEKITQTC_LIBBITFIELD_H
#define SRC_FOSS_EXTRAS_PACKAGEKITQTC_LIBBITFIELD_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_PackageKit__Bitfield)
typedef PackageKit::Bitfield PackageKit__Bitfield;
#endif
#else
typedef struct PackageKit__Bitfield PackageKit__Bitfield;
#endif

PackageKit__Bitfield* PackageKit__Bitfield_new();
PackageKit__Bitfield* PackageKit__Bitfield_new2(unsigned long long val);
PackageKit__Bitfield* PackageKit__Bitfield_new3(const PackageKit__Bitfield* param1);
unsigned long long PackageKit__Bitfield_OperatorBitwiseAnd(const PackageKit__Bitfield* self, unsigned long long mask);
void PackageKit__Bitfield_OperatorBitwiseAndAssign(PackageKit__Bitfield* self, unsigned long long mask);
unsigned long long PackageKit__Bitfield_OperatorBitwiseOr(const PackageKit__Bitfield* self, unsigned long long mask);
void PackageKit__Bitfield_OperatorBitwiseOrAssign(PackageKit__Bitfield* self, unsigned long long mask);
PackageKit__Bitfield* PackageKit__Bitfield_OperatorBitwiseAnd2(const PackageKit__Bitfield* self, PackageKit__Bitfield* mask);
void PackageKit__Bitfield_OperatorBitwiseAndAssign2(PackageKit__Bitfield* self, PackageKit__Bitfield* mask);
PackageKit__Bitfield* PackageKit__Bitfield_OperatorBitwiseOr2(const PackageKit__Bitfield* self, PackageKit__Bitfield* mask);
void PackageKit__Bitfield_OperatorBitwiseOrAssign2(PackageKit__Bitfield* self, PackageKit__Bitfield* mask);
void PackageKit__Bitfield_OperatorAssign(PackageKit__Bitfield* self, const PackageKit__Bitfield* other);
bool PackageKit__Bitfield_OperatorEqual(PackageKit__Bitfield* self, const PackageKit__Bitfield* other);
void PackageKit__Bitfield_Delete(PackageKit__Bitfield* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
