#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBDESKTOPEXECPARSER_H
#define SRC_EXTRAS_KIOC_LIBDESKTOPEXECPARSER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__DesktopExecParser)
typedef KIO::DesktopExecParser KIO__DesktopExecParser;
#endif
#else
typedef struct KIO__DesktopExecParser KIO__DesktopExecParser;
typedef struct KService KService;
typedef struct QUrl QUrl;
#endif

KIO__DesktopExecParser* KIO__DesktopExecParser_new(const KService* service, const libqt_list /* of QUrl* */ urls);
void KIO__DesktopExecParser_SetUrlsAreTempFiles(KIO__DesktopExecParser* self, bool tempFiles);
void KIO__DesktopExecParser_SetSuggestedFileName(KIO__DesktopExecParser* self, const libqt_string suggestedFileName);
libqt_list /* of libqt_string */ KIO__DesktopExecParser_ResultingArguments(const KIO__DesktopExecParser* self);
libqt_string KIO__DesktopExecParser_ErrorMessage(const KIO__DesktopExecParser* self);
libqt_list /* of libqt_string */ KIO__DesktopExecParser_SupportedProtocols(const KService* service);
bool KIO__DesktopExecParser_IsProtocolInSupportedList(const QUrl* url, const libqt_list /* of libqt_string */ supportedProtocols);
bool KIO__DesktopExecParser_HasSchemeHandler(const QUrl* url);
libqt_string KIO__DesktopExecParser_ExecutableName(const libqt_string execLine);
libqt_string KIO__DesktopExecParser_ExecutablePath(const libqt_string execLine);
void KIO__DesktopExecParser_Delete(KIO__DesktopExecParser* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
