#include <KCursor>
#include <QEvent>
#include <QObject>
#include <QWidget>
#include <kcursor.h>
#include "libkcursor.h"
#include "libkcursor.hxx"

KCursor* KCursor_new(const KCursor* other) {
    return new KCursor(*other);
}

KCursor* KCursor_new2(KCursor* other) {
    return new KCursor(std::move(*other));
}

void KCursor_CopyAssign(KCursor* self, KCursor* other) {
    *self = *other;
}

void KCursor_MoveAssign(KCursor* self, KCursor* other) {
    *self = std::move(*other);
}

void KCursor_SetAutoHideCursor(QWidget* w, bool enable) {
    KCursor::setAutoHideCursor(w, enable);
}

void KCursor_SetHideCursorDelay(int ms) {
    KCursor::setHideCursorDelay(static_cast<int>(ms));
}

int KCursor_HideCursorDelay() {
    return KCursor::hideCursorDelay();
}

void KCursor_AutoHideEventFilter(QObject* param1, QEvent* param2) {
    KCursor::autoHideEventFilter(param1, param2);
}

void KCursor_SetAutoHideCursor3(QWidget* w, bool enable, bool customEventFilter) {
    KCursor::setAutoHideCursor(w, enable, customEventFilter);
}

void KCursor_Delete(KCursor* self) {
    delete self;
}
