#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBKSYSTEMCLIPBOARD_H
#define SRC_EXTRAS_KGUIADDONSC_LIBKSYSTEMCLIPBOARD_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KSystemClipboard KSystemClipboard;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QObject QObject;
#endif

QMetaObject* KSystemClipboard_MetaObject(const KSystemClipboard* self);
void* KSystemClipboard_Metacast(KSystemClipboard* self, const char* param1);
int KSystemClipboard_Metacall(KSystemClipboard* self, int param1, int param2, void** param3);
libqt_string KSystemClipboard_Tr(const char* s);
KSystemClipboard* KSystemClipboard_Instance();
void KSystemClipboard_SetMimeData(KSystemClipboard* self, QMimeData* mime, int mode);
void KSystemClipboard_Clear(KSystemClipboard* self, int mode);
QMimeData* KSystemClipboard_MimeData(const KSystemClipboard* self, int mode);
libqt_string KSystemClipboard_Text(KSystemClipboard* self, int mode);
void KSystemClipboard_Changed(KSystemClipboard* self, int mode);
void KSystemClipboard_Connect_Changed(KSystemClipboard* self, intptr_t slot);
libqt_string KSystemClipboard_Tr2(const char* s, const char* c);
libqt_string KSystemClipboard_Tr3(const char* s, const char* c, int n);
void KSystemClipboard_Delete(KSystemClipboard* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
