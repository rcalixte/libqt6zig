#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKFILEITEMLISTPROPERTIES_H
#define SRC_EXTRAS_KIOC_LIBKFILEITEMLISTPROPERTIES_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KFileItemList KFileItemList;
typedef struct KFileItemListProperties KFileItemListProperties;
typedef struct QUrl QUrl;
#endif

KFileItemListProperties* KFileItemListProperties_new();
KFileItemListProperties* KFileItemListProperties_new2(const KFileItemList* items);
KFileItemListProperties* KFileItemListProperties_new3(const KFileItemListProperties* param1);
void KFileItemListProperties_OperatorAssign(KFileItemListProperties* self, const KFileItemListProperties* other);
void KFileItemListProperties_SetItems(KFileItemListProperties* self, const KFileItemList* items);
bool KFileItemListProperties_SupportsReading(const KFileItemListProperties* self);
bool KFileItemListProperties_SupportsDeleting(const KFileItemListProperties* self);
bool KFileItemListProperties_SupportsWriting(const KFileItemListProperties* self);
bool KFileItemListProperties_SupportsMoving(const KFileItemListProperties* self);
bool KFileItemListProperties_IsLocal(const KFileItemListProperties* self);
libqt_list /* of QUrl* */ KFileItemListProperties_UrlList(const KFileItemListProperties* self);
bool KFileItemListProperties_IsDirectory(const KFileItemListProperties* self);
bool KFileItemListProperties_IsFile(const KFileItemListProperties* self);
libqt_string KFileItemListProperties_MimeType(const KFileItemListProperties* self);
libqt_string KFileItemListProperties_MimeGroup(const KFileItemListProperties* self);
void KFileItemListProperties_Delete(KFileItemListProperties* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
