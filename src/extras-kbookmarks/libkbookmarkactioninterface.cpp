#include <KBookmark>
#include <KBookmarkActionInterface>
#include <kbookmarkactioninterface.h>
#include "libkbookmarkactioninterface.h"
#include "libkbookmarkactioninterface.hxx"

KBookmarkActionInterface* KBookmarkActionInterface_new(const KBookmark* bk) {
    return new KBookmarkActionInterface(*bk);
}

KBookmarkActionInterface* KBookmarkActionInterface_new2(const KBookmarkActionInterface* param1) {
    return new KBookmarkActionInterface(*param1);
}

KBookmark* KBookmarkActionInterface_Bookmark(const KBookmarkActionInterface* self) {
    return new KBookmark(self->bookmark());
}

void KBookmarkActionInterface_Delete(KBookmarkActionInterface* self) {
    delete self;
}
