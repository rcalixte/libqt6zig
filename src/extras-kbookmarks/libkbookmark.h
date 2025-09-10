#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKSC_LIBKBOOKMARK_H
#define SRC_EXTRAS_KBOOKMARKSC_LIBKBOOKMARK_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KBookmark__List)
typedef KBookmark::List KBookmark__List;
#endif
#else
typedef struct KBookmark KBookmark;
typedef struct KBookmarkGroup KBookmarkGroup;
typedef struct KBookmark__List KBookmark__List;
typedef struct QDomDocument QDomDocument;
typedef struct QDomElement QDomElement;
typedef struct QDomNode QDomNode;
typedef struct QMimeData QMimeData;
typedef struct QUrl QUrl;
#endif

KBookmark* KBookmark_new();
KBookmark* KBookmark_new2(const QDomElement* elem);
KBookmark* KBookmark_StandaloneBookmark(const libqt_string text, const QUrl* url, const libqt_string icon);
bool KBookmark_IsGroup(const KBookmark* self);
bool KBookmark_IsSeparator(const KBookmark* self);
bool KBookmark_IsNull(const KBookmark* self);
bool KBookmark_HasParent(const KBookmark* self);
libqt_string KBookmark_Text(const KBookmark* self);
libqt_string KBookmark_FullText(const KBookmark* self);
void KBookmark_SetFullText(KBookmark* self, const libqt_string fullText);
QUrl* KBookmark_Url(const KBookmark* self);
void KBookmark_SetUrl(KBookmark* self, const QUrl* url);
libqt_string KBookmark_Icon(const KBookmark* self);
void KBookmark_SetIcon(KBookmark* self, const libqt_string icon);
libqt_string KBookmark_Description(const KBookmark* self);
void KBookmark_SetDescription(KBookmark* self, const libqt_string description);
libqt_string KBookmark_MimeType(const KBookmark* self);
void KBookmark_SetMimeType(KBookmark* self, const libqt_string mimeType);
bool KBookmark_ShowInToolbar(const KBookmark* self);
void KBookmark_SetShowInToolbar(KBookmark* self, bool show);
KBookmarkGroup* KBookmark_ParentGroup(const KBookmark* self);
KBookmarkGroup* KBookmark_ToGroup(const KBookmark* self);
libqt_string KBookmark_Address(const KBookmark* self);
int KBookmark_PositionInParent(const KBookmark* self);
QDomElement* KBookmark_InternalElement(const KBookmark* self);
void KBookmark_UpdateAccessMetadata(KBookmark* self);
libqt_string KBookmark_ParentAddress(const libqt_string address);
unsigned int KBookmark_PositionInParent2(const libqt_string address);
libqt_string KBookmark_PreviousAddress(const libqt_string address);
libqt_string KBookmark_NextAddress(const libqt_string address);
libqt_string KBookmark_CommonParent(const libqt_string A, const libqt_string B);
QDomNode* KBookmark_MetaData(const KBookmark* self, const libqt_string owner, bool create);
libqt_string KBookmark_MetaDataItem(const KBookmark* self, const libqt_string key);
void KBookmark_SetMetaDataItem(KBookmark* self, const libqt_string key, const libqt_string value);
void KBookmark_PopulateMimeData(const KBookmark* self, QMimeData* mimeData);
bool KBookmark_OperatorEqual(const KBookmark* self, const KBookmark* rhs);
void KBookmark_SetMetaDataItem3(KBookmark* self, const libqt_string key, const libqt_string value, int mode);
void KBookmark_Delete(KBookmark* self);

KBookmarkGroup* KBookmarkGroup_new();
KBookmarkGroup* KBookmarkGroup_new2(const QDomElement* elem);
bool KBookmarkGroup_IsOpen(const KBookmarkGroup* self);
KBookmark* KBookmarkGroup_First(const KBookmarkGroup* self);
KBookmark* KBookmarkGroup_Previous(const KBookmarkGroup* self, const KBookmark* current);
KBookmark* KBookmarkGroup_Next(const KBookmarkGroup* self, const KBookmark* current);
int KBookmarkGroup_IndexOf(const KBookmarkGroup* self, const KBookmark* child);
KBookmarkGroup* KBookmarkGroup_CreateNewFolder(KBookmarkGroup* self, const libqt_string text);
KBookmark* KBookmarkGroup_CreateNewSeparator(KBookmarkGroup* self);
KBookmark* KBookmarkGroup_AddBookmark(KBookmarkGroup* self, const KBookmark* bm);
KBookmark* KBookmarkGroup_AddBookmark2(KBookmarkGroup* self, const libqt_string text, const QUrl* url, const libqt_string icon);
bool KBookmarkGroup_MoveBookmark(KBookmarkGroup* self, const KBookmark* bookmark, const KBookmark* after);
void KBookmarkGroup_DeleteBookmark(KBookmarkGroup* self, const KBookmark* bk);
bool KBookmarkGroup_IsToolbarGroup(const KBookmarkGroup* self);
QDomElement* KBookmarkGroup_FindToolbar(const KBookmarkGroup* self);
libqt_list /* of QUrl* */ KBookmarkGroup_GroupUrlList(const KBookmarkGroup* self);
void KBookmarkGroup_Delete(KBookmarkGroup* self);

KBookmark__List* KBookmark__List_new();
void KBookmark__List_PopulateMimeData(const KBookmark__List* self, QMimeData* mimeData);
bool KBookmark__List_CanDecode(const QMimeData* mimeData);
libqt_list /* of libqt_string */ KBookmark__List_MimeDataTypes();
KBookmark__List* KBookmark__List_FromMimeData(const QMimeData* mimeData, QDomDocument* parentDocument);
void KBookmark__List_Delete(KBookmark__List* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
