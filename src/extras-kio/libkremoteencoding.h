#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKREMOTEENCODING_H
#define SRC_EXTRAS_KIOC_LIBKREMOTEENCODING_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KRemoteEncoding KRemoteEncoding;
typedef struct QUrl QUrl;
#endif

KRemoteEncoding* KRemoteEncoding_new();
KRemoteEncoding* KRemoteEncoding_new2(const char* name);
libqt_string KRemoteEncoding_Decode(const KRemoteEncoding* self, const libqt_string name);
libqt_string KRemoteEncoding_Encode(const KRemoteEncoding* self, const libqt_string name);
libqt_string KRemoteEncoding_Encode2(const KRemoteEncoding* self, const QUrl* url);
libqt_string KRemoteEncoding_Directory(const KRemoteEncoding* self, const QUrl* url);
libqt_string KRemoteEncoding_FileName(const KRemoteEncoding* self, const QUrl* url);
const char* KRemoteEncoding_Encoding(const KRemoteEncoding* self);
void KRemoteEncoding_SetEncoding(KRemoteEncoding* self, const char* name);
void KRemoteEncoding_VirtualHook(KRemoteEncoding* self, int id, void* data);
libqt_string KRemoteEncoding_Directory2(const KRemoteEncoding* self, const QUrl* url, bool ignore_trailing_slash);
void KRemoteEncoding_OnVirtualHook(KRemoteEncoding* self, intptr_t slot);
void KRemoteEncoding_QBaseVirtualHook(KRemoteEncoding* self, int id, void* data);
void KRemoteEncoding_Delete(KRemoteEncoding* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
