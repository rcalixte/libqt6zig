#pragma once
#ifndef WEBENGINE_LIBQTWEBENGINECOREGLOBAL_H
#define WEBENGINE_LIBQTWEBENGINECOREGLOBAL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QUrl QUrl;
#endif

const char* qtwebenginecoreglobal_h_QWebEngineVersion();
const char* qtwebenginecoreglobal_h_QWebEngineProcessName();
const char* qtwebenginecoreglobal_h_QWebEngineChromiumVersion();
const char* qtwebenginecoreglobal_h_QWebEngineChromiumSecurityPatchVersion();
libqt_string qtwebenginecoreglobal_h_QWebEngineGetDomainAndRegistry(const QUrl* url);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
