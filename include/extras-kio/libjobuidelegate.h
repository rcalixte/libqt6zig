#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBJOBUIDELEGATE_H
#define SRC_EXTRAS_KIOC_LIBJOBUIDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__JobUiDelegate)
typedef KIO::JobUiDelegate KIO__JobUiDelegate;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__JobUiDelegateExtension)
typedef KIO::JobUiDelegateExtension KIO__JobUiDelegateExtension;
#endif
#else
typedef struct KDialogJobUiDelegate KDialogJobUiDelegate;
typedef struct KIO__JobUiDelegate KIO__JobUiDelegate;
typedef struct KIO__JobUiDelegateExtension KIO__JobUiDelegateExtension;
typedef struct KJob KJob;
typedef struct KJobUiDelegate KJobUiDelegate;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QWidget QWidget;
#endif

QMetaObject* KIO__JobUiDelegate_MetaObject(const KIO__JobUiDelegate* self);
void* KIO__JobUiDelegate_Metacast(KIO__JobUiDelegate* self, const char* param1);
int KIO__JobUiDelegate_Metacall(KIO__JobUiDelegate* self, int param1, int param2, void** param3);
libqt_string KIO__JobUiDelegate_Tr(const char* s);
void KIO__JobUiDelegate_SetWindow(KIO__JobUiDelegate* self, QWidget* window);
void KIO__JobUiDelegate_UnregisterWindow(QWidget* window);
bool KIO__JobUiDelegate_AskDeleteConfirmation(KIO__JobUiDelegate* self, const libqt_list /* of QUrl* */ urls, int deletionType, int confirmationType);
void KIO__JobUiDelegate_UpdateUrlInClipboard(KIO__JobUiDelegate* self, const QUrl* src, const QUrl* dest);
libqt_string KIO__JobUiDelegate_Tr2(const char* s, const char* c);
libqt_string KIO__JobUiDelegate_Tr3(const char* s, const char* c, int n);
void KIO__JobUiDelegate_Delete(KIO__JobUiDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
