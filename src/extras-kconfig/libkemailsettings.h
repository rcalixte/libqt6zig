#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKEMAILSETTINGS_H
#define SRC_EXTRAS_KCONFIGC_LIBKEMAILSETTINGS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KEMailSettings KEMailSettings;
#endif

KEMailSettings* KEMailSettings_new();
libqt_string KEMailSettings_Tr(const char* sourceText);
libqt_list /* of libqt_string */ KEMailSettings_Profiles(const KEMailSettings* self);
void KEMailSettings_SetProfile(KEMailSettings* self, const libqt_string s);
libqt_string KEMailSettings_DefaultProfileName(const KEMailSettings* self);
void KEMailSettings_SetDefault(KEMailSettings* self, const libqt_string def);
libqt_string KEMailSettings_GetSetting(const KEMailSettings* self, int s);
void KEMailSettings_SetSetting(KEMailSettings* self, int s, const libqt_string v);
libqt_string KEMailSettings_Tr2(const char* sourceText, const char* disambiguation);
libqt_string KEMailSettings_Tr3(const char* sourceText, const char* disambiguation, int n);
void KEMailSettings_Delete(KEMailSettings* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
