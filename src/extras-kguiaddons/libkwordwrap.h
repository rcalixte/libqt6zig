#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBKWORDWRAP_H
#define SRC_EXTRAS_KGUIADDONSC_LIBKWORDWRAP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KWordWrap KWordWrap;
typedef struct QFontMetrics QFontMetrics;
typedef struct QPainter QPainter;
typedef struct QRect QRect;
#endif

KWordWrap* KWordWrap_new(const KWordWrap* other);
KWordWrap* KWordWrap_FormatText(QFontMetrics* fm, const QRect* r, int flags, const libqt_string str);
QRect* KWordWrap_BoundingRect(const KWordWrap* self);
libqt_string KWordWrap_WrappedString(const KWordWrap* self);
libqt_string KWordWrap_TruncatedString(const KWordWrap* self);
void KWordWrap_DrawText(const KWordWrap* self, QPainter* painter, int x, int y);
void KWordWrap_OperatorAssign(KWordWrap* self, const KWordWrap* other);
void KWordWrap_DrawFadeoutText(QPainter* p, int x, int y, int maxW, const libqt_string t);
void KWordWrap_DrawTruncateText(QPainter* p, int x, int y, int maxW, const libqt_string t);
KWordWrap* KWordWrap_FormatText5(QFontMetrics* fm, const QRect* r, int flags, const libqt_string str, int lenVal);
libqt_string KWordWrap_TruncatedString1(const KWordWrap* self, bool dots);
void KWordWrap_DrawText4(const KWordWrap* self, QPainter* painter, int x, int y, int flags);
void KWordWrap_Delete(KWordWrap* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
