#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKRECENTDOCUMENT_H
#define SRC_EXTRAS_KIOC_LIBKRECENTDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KRecentDocument KRecentDocument;
typedef struct QDateTime QDateTime;
typedef struct QUrl QUrl;
#endif

KRecentDocument* KRecentDocument_new(const KRecentDocument* other);
KRecentDocument* KRecentDocument_new2(KRecentDocument* other);
void KRecentDocument_CopyAssign(KRecentDocument* self, KRecentDocument* other);
void KRecentDocument_MoveAssign(KRecentDocument* self, KRecentDocument* other);
libqt_list /* of QUrl* */ KRecentDocument_RecentUrls();
void KRecentDocument_Add(const QUrl* url);
void KRecentDocument_Add2(const QUrl* url, libqt_list /* of int */ groups);
void KRecentDocument_Add3(const QUrl* url, const libqt_string desktopEntryName);
void KRecentDocument_Add4(const QUrl* url, const libqt_string desktopEntryName, libqt_list /* of int */ groups);
bool KRecentDocument_ClearEntriesOldestEntries(int maxEntries);
void KRecentDocument_RemoveFile(const QUrl* url);
void KRecentDocument_RemoveApplication(const libqt_string desktopEntryName);
void KRecentDocument_RemoveBookmarksModifiedSince(const QDateTime* since);
void KRecentDocument_Clear();
int KRecentDocument_MaximumItems();
void KRecentDocument_Delete(KRecentDocument* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
