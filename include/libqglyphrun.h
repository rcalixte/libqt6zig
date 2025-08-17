#pragma once
#ifndef SRCC_LIBQGLYPHRUN_H
#define SRCC_LIBQGLYPHRUN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QGlyphRun QGlyphRun;
typedef struct QPointF QPointF;
typedef struct QRawFont QRawFont;
typedef struct QRectF QRectF;
#endif

QGlyphRun* QGlyphRun_new();
QGlyphRun* QGlyphRun_new2(const QGlyphRun* other);
void QGlyphRun_OperatorAssign(QGlyphRun* self, const QGlyphRun* other);
void QGlyphRun_Swap(QGlyphRun* self, QGlyphRun* other);
QRawFont* QGlyphRun_RawFont(const QGlyphRun* self);
void QGlyphRun_SetRawFont(QGlyphRun* self, const QRawFont* rawFont);
void QGlyphRun_SetRawData(QGlyphRun* self, const unsigned int* glyphIndexArray, const QPointF* glyphPositionArray, int size);
libqt_list /* of unsigned int */ QGlyphRun_GlyphIndexes(const QGlyphRun* self);
void QGlyphRun_SetGlyphIndexes(QGlyphRun* self, const libqt_list /* of unsigned int */ glyphIndexes);
libqt_list /* of QPointF* */ QGlyphRun_Positions(const QGlyphRun* self);
void QGlyphRun_SetPositions(QGlyphRun* self, const libqt_list /* of QPointF* */ positions);
void QGlyphRun_Clear(QGlyphRun* self);
bool QGlyphRun_OperatorEqual(const QGlyphRun* self, const QGlyphRun* other);
bool QGlyphRun_OperatorNotEqual(const QGlyphRun* self, const QGlyphRun* other);
void QGlyphRun_SetOverline(QGlyphRun* self, bool overline);
bool QGlyphRun_Overline(const QGlyphRun* self);
void QGlyphRun_SetUnderline(QGlyphRun* self, bool underline);
bool QGlyphRun_Underline(const QGlyphRun* self);
void QGlyphRun_SetStrikeOut(QGlyphRun* self, bool strikeOut);
bool QGlyphRun_StrikeOut(const QGlyphRun* self);
void QGlyphRun_SetRightToLeft(QGlyphRun* self, bool on);
bool QGlyphRun_IsRightToLeft(const QGlyphRun* self);
void QGlyphRun_SetFlag(QGlyphRun* self, int flag);
void QGlyphRun_SetFlags(QGlyphRun* self, int flags);
int QGlyphRun_Flags(const QGlyphRun* self);
void QGlyphRun_SetBoundingRect(QGlyphRun* self, const QRectF* boundingRect);
QRectF* QGlyphRun_BoundingRect(const QGlyphRun* self);
libqt_list /* of ptrdiff_t */ QGlyphRun_StringIndexes(const QGlyphRun* self);
void QGlyphRun_SetStringIndexes(QGlyphRun* self, const libqt_list /* of ptrdiff_t */ stringIndexes);
void QGlyphRun_SetSourceString(QGlyphRun* self, const libqt_string sourceString);
libqt_string QGlyphRun_SourceString(const QGlyphRun* self);
bool QGlyphRun_IsEmpty(const QGlyphRun* self);
void QGlyphRun_SetFlag2(QGlyphRun* self, int flag, bool enabled);
void QGlyphRun_Delete(QGlyphRun* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
