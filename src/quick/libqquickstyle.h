#pragma once
#ifndef QUICK_LIBQQUICKSTYLE_H
#define QUICK_LIBQQUICKSTYLE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QQuickStyle QQuickStyle;
#endif

QQuickStyle* QQuickStyle_new(const QQuickStyle* other);
QQuickStyle* QQuickStyle_new2(QQuickStyle* other);
void QQuickStyle_CopyAssign(QQuickStyle* self, QQuickStyle* other);
void QQuickStyle_MoveAssign(QQuickStyle* self, QQuickStyle* other);
libqt_string QQuickStyle_Name();
void QQuickStyle_SetStyle(const libqt_string style);
void QQuickStyle_SetFallbackStyle(const libqt_string style);
void QQuickStyle_Delete(QQuickStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
