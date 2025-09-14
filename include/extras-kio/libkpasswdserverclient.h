#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKPASSWDSERVERCLIENT_H
#define SRC_EXTRAS_KIOC_LIBKPASSWDSERVERCLIENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__AuthInfo)
typedef KIO::AuthInfo KIO__AuthInfo;
#endif
#else
typedef struct KIO__AuthInfo KIO__AuthInfo;
typedef struct KPasswdServerClient KPasswdServerClient;
#endif

KPasswdServerClient* KPasswdServerClient_new();
bool KPasswdServerClient_CheckAuthInfo(KPasswdServerClient* self, KIO__AuthInfo* info, long long windowId, long long usertime);
int KPasswdServerClient_QueryAuthInfo(KPasswdServerClient* self, KIO__AuthInfo* info, const libqt_string errorMsg, long long windowId, long long usertime);
void KPasswdServerClient_AddAuthInfo(KPasswdServerClient* self, const KIO__AuthInfo* info, long long windowId);
void KPasswdServerClient_RemoveAuthInfo(KPasswdServerClient* self, const libqt_string host, const libqt_string protocol, const libqt_string user);
void KPasswdServerClient_Delete(KPasswdServerClient* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
