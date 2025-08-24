#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKCURSOR_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKCURSOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KCursor KCursor;
typedef struct QEvent QEvent;
typedef struct QObject QObject;
typedef struct QWidget QWidget;
#endif

KCursor* KCursor_new(const KCursor* other);
KCursor* KCursor_new2(KCursor* other);
void KCursor_CopyAssign(KCursor* self, KCursor* other);
void KCursor_MoveAssign(KCursor* self, KCursor* other);
void KCursor_SetAutoHideCursor(QWidget* w, bool enable);
void KCursor_SetHideCursorDelay(int ms);
int KCursor_HideCursorDelay();
void KCursor_AutoHideEventFilter(QObject* param1, QEvent* param2);
void KCursor_SetAutoHideCursor3(QWidget* w, bool enable, bool customEventFilter);
void KCursor_Delete(KCursor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
