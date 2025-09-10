#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKSC_LIBKBOOKMARKACTIONINTERFACE_H
#define SRC_EXTRAS_KBOOKMARKSC_LIBKBOOKMARKACTIONINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KBookmark KBookmark;
typedef struct KBookmarkActionInterface KBookmarkActionInterface;
#endif

KBookmarkActionInterface* KBookmarkActionInterface_new(const KBookmark* bk);
KBookmarkActionInterface* KBookmarkActionInterface_new2(const KBookmarkActionInterface* param1);
KBookmark* KBookmarkActionInterface_Bookmark(const KBookmarkActionInterface* self);
void KBookmarkActionInterface_Delete(KBookmarkActionInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
