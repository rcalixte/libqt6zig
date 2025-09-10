#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKSC_LIBKBOOKMARKOWNER_H
#define SRC_EXTRAS_KBOOKMARKSC_LIBKBOOKMARKOWNER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KBookmarkOwner__FutureBookmark)
typedef KBookmarkOwner::FutureBookmark KBookmarkOwner__FutureBookmark;
#endif
#else
typedef struct KBookmark KBookmark;
typedef struct KBookmarkGroup KBookmarkGroup;
typedef struct KBookmarkOwner KBookmarkOwner;
typedef struct KBookmarkOwner__FutureBookmark KBookmarkOwner__FutureBookmark;
typedef struct QUrl QUrl;
#endif

KBookmarkOwner* KBookmarkOwner_new();
libqt_string KBookmarkOwner_CurrentTitle(const KBookmarkOwner* self);
QUrl* KBookmarkOwner_CurrentUrl(const KBookmarkOwner* self);
libqt_string KBookmarkOwner_CurrentIcon(const KBookmarkOwner* self);
bool KBookmarkOwner_SupportsTabs(const KBookmarkOwner* self);
libqt_list /* of KBookmarkOwner__FutureBookmark* */ KBookmarkOwner_CurrentBookmarkList(const KBookmarkOwner* self);
bool KBookmarkOwner_EnableOption(const KBookmarkOwner* self, int option);
void KBookmarkOwner_OpenBookmark(KBookmarkOwner* self, const KBookmark* bm, int mb, int km);
void KBookmarkOwner_OpenFolderinTabs(KBookmarkOwner* self, const KBookmarkGroup* bm);
void KBookmarkOwner_OpenInNewTab(KBookmarkOwner* self, const KBookmark* bm);
void KBookmarkOwner_OpenInNewWindow(KBookmarkOwner* self, const KBookmark* bm);
void KBookmarkOwner_OnCurrentTitle(const KBookmarkOwner* self, intptr_t slot);
libqt_string KBookmarkOwner_QBaseCurrentTitle(const KBookmarkOwner* self);
void KBookmarkOwner_OnCurrentUrl(const KBookmarkOwner* self, intptr_t slot);
QUrl* KBookmarkOwner_QBaseCurrentUrl(const KBookmarkOwner* self);
void KBookmarkOwner_OnCurrentIcon(const KBookmarkOwner* self, intptr_t slot);
libqt_string KBookmarkOwner_QBaseCurrentIcon(const KBookmarkOwner* self);
void KBookmarkOwner_OnSupportsTabs(const KBookmarkOwner* self, intptr_t slot);
bool KBookmarkOwner_QBaseSupportsTabs(const KBookmarkOwner* self);
void KBookmarkOwner_OnCurrentBookmarkList(const KBookmarkOwner* self, intptr_t slot);
libqt_list /* of KBookmarkOwner__FutureBookmark* */ KBookmarkOwner_QBaseCurrentBookmarkList(const KBookmarkOwner* self);
void KBookmarkOwner_OnEnableOption(const KBookmarkOwner* self, intptr_t slot);
bool KBookmarkOwner_QBaseEnableOption(const KBookmarkOwner* self, int option);
void KBookmarkOwner_OnOpenBookmark(KBookmarkOwner* self, intptr_t slot);
void KBookmarkOwner_QBaseOpenBookmark(KBookmarkOwner* self, const KBookmark* bm, int mb, int km);
void KBookmarkOwner_OnOpenFolderinTabs(KBookmarkOwner* self, intptr_t slot);
void KBookmarkOwner_QBaseOpenFolderinTabs(KBookmarkOwner* self, const KBookmarkGroup* bm);
void KBookmarkOwner_OnOpenInNewTab(KBookmarkOwner* self, intptr_t slot);
void KBookmarkOwner_QBaseOpenInNewTab(KBookmarkOwner* self, const KBookmark* bm);
void KBookmarkOwner_OnOpenInNewWindow(KBookmarkOwner* self, intptr_t slot);
void KBookmarkOwner_QBaseOpenInNewWindow(KBookmarkOwner* self, const KBookmark* bm);
void KBookmarkOwner_Delete(KBookmarkOwner* self);

KBookmarkOwner__FutureBookmark* KBookmarkOwner__FutureBookmark_new(const libqt_string title, const QUrl* url, const libqt_string icon);
KBookmarkOwner__FutureBookmark* KBookmarkOwner__FutureBookmark_new2(const KBookmarkOwner__FutureBookmark* other);
void KBookmarkOwner__FutureBookmark_OperatorAssign(KBookmarkOwner__FutureBookmark* self, const KBookmarkOwner__FutureBookmark* other);
libqt_string KBookmarkOwner__FutureBookmark_Title(const KBookmarkOwner__FutureBookmark* self);
QUrl* KBookmarkOwner__FutureBookmark_Url(const KBookmarkOwner__FutureBookmark* self);
libqt_string KBookmarkOwner__FutureBookmark_Icon(const KBookmarkOwner__FutureBookmark* self);
void KBookmarkOwner__FutureBookmark_Delete(KBookmarkOwner__FutureBookmark* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
