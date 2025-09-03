#pragma once
#ifndef SRC_EXTRAS_KICONTHEMESC_LIBKICONTHEME_H
#define SRC_EXTRAS_KICONTHEMESC_LIBKICONTHEME_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KIconTheme KIconTheme;
#endif

KIconTheme* KIconTheme_new(const libqt_string name);
KIconTheme* KIconTheme_new2(const libqt_string name, const libqt_string appName);
KIconTheme* KIconTheme_new3(const libqt_string name, const libqt_string appName, const libqt_string basePathHint);
libqt_string KIconTheme_Name(const KIconTheme* self);
libqt_string KIconTheme_InternalName(const KIconTheme* self);
libqt_string KIconTheme_Description(const KIconTheme* self);
libqt_string KIconTheme_Example(const KIconTheme* self);
libqt_string KIconTheme_Screenshot(const KIconTheme* self);
libqt_string KIconTheme_Dir(const KIconTheme* self);
libqt_list /* of libqt_string */ KIconTheme_Inherits(const KIconTheme* self);
bool KIconTheme_IsValid(const KIconTheme* self);
bool KIconTheme_IsHidden(const KIconTheme* self);
int KIconTheme_Depth(const KIconTheme* self);
int KIconTheme_DefaultSize(const KIconTheme* self, int group);
libqt_list /* of int */ KIconTheme_QuerySizes(const KIconTheme* self, int group);
libqt_list /* of libqt_string */ KIconTheme_QueryIcons(const KIconTheme* self);
libqt_list /* of libqt_string */ KIconTheme_QueryIcons2(const KIconTheme* self, int size);
libqt_list /* of libqt_string */ KIconTheme_QueryIconsByContext(const KIconTheme* self, int size);
libqt_string KIconTheme_IconPath(const KIconTheme* self, const libqt_string name, int size, int match);
libqt_string KIconTheme_IconPath2(const KIconTheme* self, const libqt_string name, int size, int match, double scale);
libqt_string KIconTheme_IconPathByName(const KIconTheme* self, const libqt_string name, int size, int match);
libqt_string KIconTheme_IconPathByName2(const KIconTheme* self, const libqt_string name, int size, int match, double scale);
bool KIconTheme_HasContext(const KIconTheme* self, int context);
bool KIconTheme_FollowsColorScheme(const KIconTheme* self);
libqt_list /* of libqt_string */ KIconTheme_List();
libqt_string KIconTheme_Current();
void KIconTheme_ForceThemeForTests(const libqt_string themeName);
void KIconTheme_Reconfigure();
libqt_string KIconTheme_DefaultThemeName();
void KIconTheme_InitTheme();
libqt_list /* of libqt_string */ KIconTheme_QueryIcons22(const KIconTheme* self, int size, int context);
libqt_list /* of libqt_string */ KIconTheme_QueryIconsByContext2(const KIconTheme* self, int size, int context);
void KIconTheme_Delete(KIconTheme* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
