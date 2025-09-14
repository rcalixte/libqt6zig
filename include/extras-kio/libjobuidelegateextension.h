#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBJOBUIDELEGATEEXTENSION_H
#define SRC_EXTRAS_KIOC_LIBJOBUIDELEGATEEXTENSION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__JobUiDelegateExtension)
typedef KIO::JobUiDelegateExtension KIO__JobUiDelegateExtension;
#endif
#else
typedef struct KIO KIO;
typedef struct KIO__JobUiDelegateExtension KIO__JobUiDelegateExtension;
typedef struct QUrl QUrl;
#endif

bool KIO__JobUiDelegateExtension_AskDeleteConfirmation(KIO__JobUiDelegateExtension* self, const libqt_list /* of QUrl* */ urls, int deletionType, int confirmationType);
void KIO__JobUiDelegateExtension_UpdateUrlInClipboard(KIO__JobUiDelegateExtension* self, const QUrl* src, const QUrl* dest);

KIO__JobUiDelegateExtension* KIO_DefaultJobUiDelegateExtension();
void KIO_SetDefaultJobUiDelegateExtension(KIO__JobUiDelegateExtension* param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
