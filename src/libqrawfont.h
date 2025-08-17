#pragma once
#ifndef SRCC_LIBQRAWFONT_H
#define SRCC_LIBQRAWFONT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QFont__Tag)
typedef QFont::Tag QFont__Tag;
#endif
#else
typedef struct QChar QChar;
typedef struct QFont QFont;
typedef struct QFont__Tag QFont__Tag;
typedef struct QImage QImage;
typedef struct QPainterPath QPainterPath;
typedef struct QPointF QPointF;
typedef struct QRawFont QRawFont;
typedef struct QRectF QRectF;
typedef struct QTransform QTransform;
#endif

QRawFont* QRawFont_new();
QRawFont* QRawFont_new2(const libqt_string fileName, double pixelSize);
QRawFont* QRawFont_new3(const libqt_string fontData, double pixelSize);
QRawFont* QRawFont_new4(const QRawFont* other);
QRawFont* QRawFont_new5(const libqt_string fileName, double pixelSize, int hintingPreference);
QRawFont* QRawFont_new6(const libqt_string fontData, double pixelSize, int hintingPreference);
void QRawFont_OperatorAssign(QRawFont* self, const QRawFont* other);
void QRawFont_Swap(QRawFont* self, QRawFont* other);
bool QRawFont_IsValid(const QRawFont* self);
bool QRawFont_OperatorEqual(const QRawFont* self, const QRawFont* other);
bool QRawFont_OperatorNotEqual(const QRawFont* self, const QRawFont* other);
libqt_string QRawFont_FamilyName(const QRawFont* self);
libqt_string QRawFont_StyleName(const QRawFont* self);
int QRawFont_Style(const QRawFont* self);
int QRawFont_Weight(const QRawFont* self);
libqt_list /* of unsigned int */ QRawFont_GlyphIndexesForString(const QRawFont* self, const libqt_string text);
libqt_list /* of QPointF* */ QRawFont_AdvancesForGlyphIndexes(const QRawFont* self, const libqt_list /* of unsigned int */ glyphIndexes);
libqt_list /* of QPointF* */ QRawFont_AdvancesForGlyphIndexes2(const QRawFont* self, const libqt_list /* of unsigned int */ glyphIndexes, int layoutFlags);
bool QRawFont_GlyphIndexesForChars(const QRawFont* self, const QChar* chars, int numChars, unsigned int* glyphIndexes, int* numGlyphs);
bool QRawFont_AdvancesForGlyphIndexes3(const QRawFont* self, const unsigned int* glyphIndexes, QPointF* advances, int numGlyphs);
bool QRawFont_AdvancesForGlyphIndexes4(const QRawFont* self, const unsigned int* glyphIndexes, QPointF* advances, int numGlyphs, int layoutFlags);
QImage* QRawFont_AlphaMapForGlyph(const QRawFont* self, unsigned int glyphIndex);
QPainterPath* QRawFont_PathForGlyph(const QRawFont* self, unsigned int glyphIndex);
QRectF* QRawFont_BoundingRect(const QRawFont* self, unsigned int glyphIndex);
void QRawFont_SetPixelSize(QRawFont* self, double pixelSize);
double QRawFont_PixelSize(const QRawFont* self);
int QRawFont_HintingPreference(const QRawFont* self);
double QRawFont_Ascent(const QRawFont* self);
double QRawFont_CapHeight(const QRawFont* self);
double QRawFont_Descent(const QRawFont* self);
double QRawFont_Leading(const QRawFont* self);
double QRawFont_XHeight(const QRawFont* self);
double QRawFont_AverageCharWidth(const QRawFont* self);
double QRawFont_MaxCharWidth(const QRawFont* self);
double QRawFont_LineThickness(const QRawFont* self);
double QRawFont_UnderlinePosition(const QRawFont* self);
double QRawFont_UnitsPerEm(const QRawFont* self);
void QRawFont_LoadFromFile(QRawFont* self, const libqt_string fileName, double pixelSize, int hintingPreference);
void QRawFont_LoadFromData(QRawFont* self, const libqt_string fontData, double pixelSize, int hintingPreference);
bool QRawFont_SupportsCharacter(const QRawFont* self, unsigned int ucs4);
bool QRawFont_SupportsCharacter2(const QRawFont* self, QChar* character);
libqt_list /* of int */ QRawFont_SupportedWritingSystems(const QRawFont* self);
libqt_string QRawFont_FontTable(const QRawFont* self, const char* tagName);
libqt_string QRawFont_FontTable2(const QRawFont* self, QFont__Tag* tag);
QRawFont* QRawFont_FromFont(const QFont* font);
QImage* QRawFont_AlphaMapForGlyph2(const QRawFont* self, unsigned int glyphIndex, int antialiasingType);
QImage* QRawFont_AlphaMapForGlyph3(const QRawFont* self, unsigned int glyphIndex, int antialiasingType, const QTransform* transform);
QRawFont* QRawFont_FromFont2(const QFont* font, int writingSystem);
void QRawFont_Delete(QRawFont* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
