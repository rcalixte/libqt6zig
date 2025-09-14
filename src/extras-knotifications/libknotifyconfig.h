#pragma once
#ifndef SRC_EXTRAS_KNOTIFICATIONSC_LIBKNOTIFYCONFIG_H
#define SRC_EXTRAS_KNOTIFICATIONSC_LIBKNOTIFYCONFIG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KNotifyConfig KNotifyConfig;
#endif

KNotifyConfig* KNotifyConfig_new(const libqt_string applicationName, const libqt_string eventId);
KNotifyConfig* KNotifyConfig_new2(const KNotifyConfig* other);
void KNotifyConfig_OperatorAssign(KNotifyConfig* self, const KNotifyConfig* other);
libqt_string KNotifyConfig_ApplicationName(const KNotifyConfig* self);
libqt_string KNotifyConfig_EventId(const KNotifyConfig* self);
bool KNotifyConfig_IsValid(const KNotifyConfig* self);
libqt_string KNotifyConfig_ReadGlobalEntry(const KNotifyConfig* self, const libqt_string key);
libqt_string KNotifyConfig_ReadEntry(const KNotifyConfig* self, const libqt_string key);
libqt_string KNotifyConfig_ReadPathEntry(const KNotifyConfig* self, const libqt_string key);
void KNotifyConfig_ReparseConfiguration();
void KNotifyConfig_ReparseSingleConfiguration(const libqt_string app);
void KNotifyConfig_Delete(KNotifyConfig* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
