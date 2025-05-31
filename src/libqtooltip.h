#pragma once
#ifndef SRCC_LIBQTOOLTIP_H
#define SRCC_LIBQTOOLTIP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QFont QFont;
typedef struct QPalette QPalette;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QToolTip QToolTip;
typedef struct QWidget QWidget;
#endif

QToolTip* QToolTip_new(const QToolTip* other);
QToolTip* QToolTip_new2(QToolTip* other);
void QToolTip_CopyAssign(QToolTip* self, QToolTip* other);
void QToolTip_MoveAssign(QToolTip* self, QToolTip* other);
void QToolTip_ShowText(const QPoint* pos, const libqt_string text);
void QToolTip_HideText();
bool QToolTip_IsVisible();
libqt_string QToolTip_Text();
QPalette* QToolTip_Palette();
void QToolTip_SetPalette(const QPalette* palette);
QFont* QToolTip_Font();
void QToolTip_SetFont(const QFont* font);
void QToolTip_ShowText3(const QPoint* pos, const libqt_string text, QWidget* w);
void QToolTip_ShowText4(const QPoint* pos, const libqt_string text, QWidget* w, const QRect* rect);
void QToolTip_ShowText5(const QPoint* pos, const libqt_string text, QWidget* w, const QRect* rect, int msecShowTime);
void QToolTip_Delete(QToolTip* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
