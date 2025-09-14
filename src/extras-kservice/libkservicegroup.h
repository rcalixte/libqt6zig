#pragma once
#ifndef SRC_EXTRAS_KSERVICEC_LIBKSERVICEGROUP_H
#define SRC_EXTRAS_KSERVICEC_LIBKSERVICEGROUP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KServiceGroup KServiceGroup;
typedef struct KSycocaEntry KSycocaEntry;
typedef struct QSharedData QSharedData;
#endif

KServiceGroup* KServiceGroup_new(const libqt_string name);
KServiceGroup* KServiceGroup_new2(const libqt_string _fullpath, const libqt_string _relpath);
libqt_string KServiceGroup_RelPath(const KServiceGroup* self);
libqt_string KServiceGroup_Caption(const KServiceGroup* self);
libqt_string KServiceGroup_Icon(const KServiceGroup* self);
libqt_string KServiceGroup_Comment(const KServiceGroup* self);
int KServiceGroup_ChildCount(const KServiceGroup* self);
bool KServiceGroup_NoDisplay(const KServiceGroup* self);
bool KServiceGroup_ShowEmptyMenu(const KServiceGroup* self);
void KServiceGroup_SetShowEmptyMenu(KServiceGroup* self, bool b);
bool KServiceGroup_ShowInlineHeader(const KServiceGroup* self);
void KServiceGroup_SetShowInlineHeader(KServiceGroup* self, bool _b);
bool KServiceGroup_InlineAlias(const KServiceGroup* self);
void KServiceGroup_SetInlineAlias(KServiceGroup* self, bool _b);
bool KServiceGroup_AllowInline(const KServiceGroup* self);
void KServiceGroup_SetAllowInline(KServiceGroup* self, bool _b);
int KServiceGroup_InlineValue(const KServiceGroup* self);
void KServiceGroup_SetInlineValue(KServiceGroup* self, int _val);
libqt_list /* of libqt_string */ KServiceGroup_SuppressGenericNames(const KServiceGroup* self);
void KServiceGroup_SetLayoutInfo(KServiceGroup* self, const libqt_list /* of libqt_string */ layout);
libqt_list /* of libqt_string */ KServiceGroup_LayoutInfo(const KServiceGroup* self);
libqt_string KServiceGroup_BaseGroupName(const KServiceGroup* self);
libqt_string KServiceGroup_DirectoryEntryPath(const KServiceGroup* self);
void KServiceGroup_Delete(KServiceGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
