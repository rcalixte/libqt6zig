#pragma once
#ifndef SRCC_LIBQTEXTLAYOUT_H
#define SRCC_LIBQTEXTLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextLayout__FormatRange)
typedef QTextLayout::FormatRange QTextLayout__FormatRange;
#endif
#else
typedef struct QFont QFont;
typedef struct QGlyphRun QGlyphRun;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPainter QPainter;
typedef struct QPointF QPointF;
typedef struct QRawFont QRawFont;
typedef struct QRectF QRectF;
typedef struct QTextBlock QTextBlock;
typedef struct QTextFormat QTextFormat;
typedef struct QTextInlineObject QTextInlineObject;
typedef struct QTextLayout QTextLayout;
typedef struct QTextLayout__FormatRange QTextLayout__FormatRange;
typedef struct QTextLine QTextLine;
typedef struct QTextOption QTextOption;
#endif

QTextInlineObject* QTextInlineObject_new(const QTextInlineObject* other);
QTextInlineObject* QTextInlineObject_new2(QTextInlineObject* other);
QTextInlineObject* QTextInlineObject_new3();
void QTextInlineObject_CopyAssign(QTextInlineObject* self, QTextInlineObject* other);
void QTextInlineObject_MoveAssign(QTextInlineObject* self, QTextInlineObject* other);
bool QTextInlineObject_IsValid(const QTextInlineObject* self);
QRectF* QTextInlineObject_Rect(const QTextInlineObject* self);
double QTextInlineObject_Width(const QTextInlineObject* self);
double QTextInlineObject_Ascent(const QTextInlineObject* self);
double QTextInlineObject_Descent(const QTextInlineObject* self);
double QTextInlineObject_Height(const QTextInlineObject* self);
int QTextInlineObject_TextDirection(const QTextInlineObject* self);
void QTextInlineObject_SetWidth(QTextInlineObject* self, double w);
void QTextInlineObject_SetAscent(QTextInlineObject* self, double a);
void QTextInlineObject_SetDescent(QTextInlineObject* self, double d);
int QTextInlineObject_TextPosition(const QTextInlineObject* self);
int QTextInlineObject_FormatIndex(const QTextInlineObject* self);
QTextFormat* QTextInlineObject_Format(const QTextInlineObject* self);
void QTextInlineObject_Delete(QTextInlineObject* self);

QTextLayout* QTextLayout_new();
QTextLayout* QTextLayout_new2(const libqt_string text);
QTextLayout* QTextLayout_new3(const libqt_string text, const QFont* font);
QTextLayout* QTextLayout_new4(const QTextBlock* b);
QTextLayout* QTextLayout_new5(const libqt_string text, const QFont* font, const QPaintDevice* paintdevice);
void QTextLayout_SetFont(QTextLayout* self, const QFont* f);
QFont* QTextLayout_Font(const QTextLayout* self);
void QTextLayout_SetRawFont(QTextLayout* self, const QRawFont* rawFont);
void QTextLayout_SetText(QTextLayout* self, const libqt_string stringVal);
libqt_string QTextLayout_Text(const QTextLayout* self);
void QTextLayout_SetTextOption(QTextLayout* self, const QTextOption* option);
QTextOption* QTextLayout_TextOption(const QTextLayout* self);
void QTextLayout_SetPreeditArea(QTextLayout* self, int position, const libqt_string text);
int QTextLayout_PreeditAreaPosition(const QTextLayout* self);
libqt_string QTextLayout_PreeditAreaText(const QTextLayout* self);
void QTextLayout_SetFormats(QTextLayout* self, const libqt_list /* of QTextLayout__FormatRange* */ overrides);
libqt_list /* of QTextLayout__FormatRange* */ QTextLayout_Formats(const QTextLayout* self);
void QTextLayout_ClearFormats(QTextLayout* self);
void QTextLayout_SetCacheEnabled(QTextLayout* self, bool enable);
bool QTextLayout_CacheEnabled(const QTextLayout* self);
void QTextLayout_SetCursorMoveStyle(QTextLayout* self, int style);
int QTextLayout_CursorMoveStyle(const QTextLayout* self);
void QTextLayout_BeginLayout(QTextLayout* self);
void QTextLayout_EndLayout(QTextLayout* self);
void QTextLayout_ClearLayout(QTextLayout* self);
QTextLine* QTextLayout_CreateLine(QTextLayout* self);
int QTextLayout_LineCount(const QTextLayout* self);
QTextLine* QTextLayout_LineAt(const QTextLayout* self, int i);
QTextLine* QTextLayout_LineForTextPosition(const QTextLayout* self, int pos);
bool QTextLayout_IsValidCursorPosition(const QTextLayout* self, int pos);
int QTextLayout_NextCursorPosition(const QTextLayout* self, int oldPos);
int QTextLayout_PreviousCursorPosition(const QTextLayout* self, int oldPos);
int QTextLayout_LeftCursorPosition(const QTextLayout* self, int oldPos);
int QTextLayout_RightCursorPosition(const QTextLayout* self, int oldPos);
void QTextLayout_Draw(const QTextLayout* self, QPainter* p, const QPointF* pos);
void QTextLayout_DrawCursor(const QTextLayout* self, QPainter* p, const QPointF* pos, int cursorPosition);
void QTextLayout_DrawCursor2(const QTextLayout* self, QPainter* p, const QPointF* pos, int cursorPosition, int width);
QPointF* QTextLayout_Position(const QTextLayout* self);
void QTextLayout_SetPosition(QTextLayout* self, const QPointF* p);
QRectF* QTextLayout_BoundingRect(const QTextLayout* self);
double QTextLayout_MinimumWidth(const QTextLayout* self);
double QTextLayout_MaximumWidth(const QTextLayout* self);
libqt_list /* of QGlyphRun* */ QTextLayout_GlyphRuns(const QTextLayout* self, int from, int length, int flags);
libqt_list /* of QGlyphRun* */ QTextLayout_GlyphRuns2(const QTextLayout* self);
void QTextLayout_SetFlags(QTextLayout* self, int flags);
int QTextLayout_NextCursorPosition2(const QTextLayout* self, int oldPos, int mode);
int QTextLayout_PreviousCursorPosition2(const QTextLayout* self, int oldPos, int mode);
void QTextLayout_Draw3(const QTextLayout* self, QPainter* p, const QPointF* pos, const libqt_list /* of QTextLayout__FormatRange* */ selections);
void QTextLayout_Draw4(const QTextLayout* self, QPainter* p, const QPointF* pos, const libqt_list /* of QTextLayout__FormatRange* */ selections, const QRectF* clip);
libqt_list /* of QGlyphRun* */ QTextLayout_GlyphRuns1(const QTextLayout* self, int from);
libqt_list /* of QGlyphRun* */ QTextLayout_GlyphRuns22(const QTextLayout* self, int from, int length);
void QTextLayout_Delete(QTextLayout* self);

QTextLine* QTextLine_new(const QTextLine* other);
QTextLine* QTextLine_new2(QTextLine* other);
QTextLine* QTextLine_new3();
void QTextLine_CopyAssign(QTextLine* self, QTextLine* other);
void QTextLine_MoveAssign(QTextLine* self, QTextLine* other);
bool QTextLine_IsValid(const QTextLine* self);
QRectF* QTextLine_Rect(const QTextLine* self);
double QTextLine_X(const QTextLine* self);
double QTextLine_Y(const QTextLine* self);
double QTextLine_Width(const QTextLine* self);
double QTextLine_Ascent(const QTextLine* self);
double QTextLine_Descent(const QTextLine* self);
double QTextLine_Height(const QTextLine* self);
double QTextLine_Leading(const QTextLine* self);
void QTextLine_SetLeadingIncluded(QTextLine* self, bool included);
bool QTextLine_LeadingIncluded(const QTextLine* self);
double QTextLine_NaturalTextWidth(const QTextLine* self);
double QTextLine_HorizontalAdvance(const QTextLine* self);
QRectF* QTextLine_NaturalTextRect(const QTextLine* self);
double QTextLine_CursorToX(const QTextLine* self, int* cursorPos);
double QTextLine_CursorToX2(const QTextLine* self, int cursorPos);
int QTextLine_XToCursor(const QTextLine* self, double x);
void QTextLine_SetLineWidth(QTextLine* self, double width);
void QTextLine_SetNumColumns(QTextLine* self, int columns);
void QTextLine_SetNumColumns2(QTextLine* self, int columns, double alignmentWidth);
void QTextLine_SetPosition(QTextLine* self, const QPointF* pos);
QPointF* QTextLine_Position(const QTextLine* self);
int QTextLine_TextStart(const QTextLine* self);
int QTextLine_TextLength(const QTextLine* self);
int QTextLine_LineNumber(const QTextLine* self);
void QTextLine_Draw(const QTextLine* self, QPainter* painter, const QPointF* position);
libqt_list /* of QGlyphRun* */ QTextLine_GlyphRuns(const QTextLine* self, int from, int length, int flags);
libqt_list /* of QGlyphRun* */ QTextLine_GlyphRuns2(const QTextLine* self);
double QTextLine_CursorToX22(const QTextLine* self, int* cursorPos, int edge);
double QTextLine_CursorToX23(const QTextLine* self, int cursorPos, int edge);
int QTextLine_XToCursor2(const QTextLine* self, double x, int param2);
libqt_list /* of QGlyphRun* */ QTextLine_GlyphRuns1(const QTextLine* self, int from);
libqt_list /* of QGlyphRun* */ QTextLine_GlyphRuns22(const QTextLine* self, int from, int length);
void QTextLine_Delete(QTextLine* self);

QTextLayout__FormatRange* QTextLayout__FormatRange_new();
void QTextLayout__FormatRange_Delete(QTextLayout__FormatRange* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
