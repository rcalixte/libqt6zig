#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEGLOBALSETTINGS_H
#define SRC_WEBENGINEC_LIBQWEBENGINEGLOBALSETTINGS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QWebEngineGlobalSettings__DnsMode)
typedef QWebEngineGlobalSettings::DnsMode QWebEngineGlobalSettings__DnsMode;
#endif
#else
typedef struct QWebEngineGlobalSettings QWebEngineGlobalSettings;
typedef struct QWebEngineGlobalSettings__DnsMode QWebEngineGlobalSettings__DnsMode;
#endif

bool QWebEngineGlobalSettings_SetDnsMode(QWebEngineGlobalSettings__DnsMode* param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
