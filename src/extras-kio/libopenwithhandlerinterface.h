#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBOPENWITHHANDLERINTERFACE_H
#define SRC_EXTRAS_KIOC_LIBOPENWITHHANDLERINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__OpenWithHandlerInterface)
typedef KIO::OpenWithHandlerInterface KIO__OpenWithHandlerInterface;
#endif
#else
typedef struct KIO__OpenWithHandlerInterface KIO__OpenWithHandlerInterface;
typedef struct KJob KJob;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__OpenWithHandlerInterface_MetaObject(const KIO__OpenWithHandlerInterface* self);
void* KIO__OpenWithHandlerInterface_Metacast(KIO__OpenWithHandlerInterface* self, const char* param1);
int KIO__OpenWithHandlerInterface_Metacall(KIO__OpenWithHandlerInterface* self, int param1, int param2, void** param3);
libqt_string KIO__OpenWithHandlerInterface_Tr(const char* s);
void KIO__OpenWithHandlerInterface_PromptUserForApplication(KIO__OpenWithHandlerInterface* self, KJob* job, const libqt_list /* of QUrl* */ urls, const libqt_string mimeType);
void KIO__OpenWithHandlerInterface_Canceled(KIO__OpenWithHandlerInterface* self);
void KIO__OpenWithHandlerInterface_Connect_Canceled(KIO__OpenWithHandlerInterface* self, intptr_t slot);
void KIO__OpenWithHandlerInterface_Handled(KIO__OpenWithHandlerInterface* self);
void KIO__OpenWithHandlerInterface_Connect_Handled(KIO__OpenWithHandlerInterface* self, intptr_t slot);
libqt_string KIO__OpenWithHandlerInterface_Tr2(const char* s, const char* c);
libqt_string KIO__OpenWithHandlerInterface_Tr3(const char* s, const char* c, int n);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
