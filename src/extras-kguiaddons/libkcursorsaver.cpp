#include <KCursorSaver>
#include <kcursorsaver.h>
#include "libkcursorsaver.h"
#include "libkcursorsaver.hxx"

KCursorSaver* KCursorSaver_new(int shape) {
    return new KCursorSaver(static_cast<Qt::CursorShape>(shape));
}

void KCursorSaver_RestoreCursor(KCursorSaver* self) {
    self->restoreCursor();
}

void KCursorSaver_Delete(KCursorSaver* self) {
    delete self;
}
