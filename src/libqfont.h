#pragma once
#ifndef SRCC_LIBQFONT_H
#define SRCC_LIBQFONT_H

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
typedef struct QFont QFont;
typedef struct QFont__Tag QFont__Tag;
typedef struct QPaintDevice QPaintDevice;
typedef struct QVariant QVariant;
#endif

QFont* QFont_new();
QFont* QFont_new2(const libqt_string family);
QFont* QFont_new3(const libqt_list /* of libqt_string */ families);
QFont* QFont_new4(const QFont* font, const QPaintDevice* pd);
QFont* QFont_new5(const QFont* font);
QFont* QFont_new6(const libqt_string family, int pointSize);
QFont* QFont_new7(const libqt_string family, int pointSize, int weight);
QFont* QFont_new8(const libqt_string family, int pointSize, int weight, bool italic);
QFont* QFont_new9(const libqt_list /* of libqt_string */ families, int pointSize);
QFont* QFont_new10(const libqt_list /* of libqt_string */ families, int pointSize, int weight);
QFont* QFont_new11(const libqt_list /* of libqt_string */ families, int pointSize, int weight, bool italic);
void QFont_Swap(QFont* self, QFont* other);
libqt_string QFont_Family(const QFont* self);
void QFont_SetFamily(QFont* self, const libqt_string family);
libqt_list /* of libqt_string */ QFont_Families(const QFont* self);
void QFont_SetFamilies(QFont* self, const libqt_list /* of libqt_string */ families);
libqt_string QFont_StyleName(const QFont* self);
void QFont_SetStyleName(QFont* self, const libqt_string styleName);
int QFont_PointSize(const QFont* self);
void QFont_SetPointSize(QFont* self, int pointSize);
double QFont_PointSizeF(const QFont* self);
void QFont_SetPointSizeF(QFont* self, double pointSizeF);
int QFont_PixelSize(const QFont* self);
void QFont_SetPixelSize(QFont* self, int pixelSize);
int QFont_Weight(const QFont* self);
void QFont_SetWeight(QFont* self, int weight);
bool QFont_Bold(const QFont* self);
void QFont_SetBold(QFont* self, bool bold);
void QFont_SetStyle(QFont* self, int style);
int QFont_Style(const QFont* self);
bool QFont_Italic(const QFont* self);
void QFont_SetItalic(QFont* self, bool b);
bool QFont_Underline(const QFont* self);
void QFont_SetUnderline(QFont* self, bool underline);
bool QFont_Overline(const QFont* self);
void QFont_SetOverline(QFont* self, bool overline);
bool QFont_StrikeOut(const QFont* self);
void QFont_SetStrikeOut(QFont* self, bool strikeOut);
bool QFont_FixedPitch(const QFont* self);
void QFont_SetFixedPitch(QFont* self, bool fixedPitch);
bool QFont_Kerning(const QFont* self);
void QFont_SetKerning(QFont* self, bool kerning);
int QFont_StyleHint(const QFont* self);
int QFont_StyleStrategy(const QFont* self);
void QFont_SetStyleHint(QFont* self, int param1);
void QFont_SetStyleStrategy(QFont* self, int s);
int QFont_Stretch(const QFont* self);
void QFont_SetStretch(QFont* self, int stretch);
double QFont_LetterSpacing(const QFont* self);
int QFont_LetterSpacingType(const QFont* self);
void QFont_SetLetterSpacing(QFont* self, int typeVal, double spacing);
double QFont_WordSpacing(const QFont* self);
void QFont_SetWordSpacing(QFont* self, double spacing);
void QFont_SetCapitalization(QFont* self, int capitalization);
int QFont_Capitalization(const QFont* self);
void QFont_SetHintingPreference(QFont* self, int hintingPreference);
int QFont_HintingPreference(const QFont* self);
void QFont_SetFeature(QFont* self, QFont__Tag* tag, unsigned int value);
void QFont_UnsetFeature(QFont* self, QFont__Tag* tag);
unsigned int QFont_FeatureValue(const QFont* self, QFont__Tag* tag);
bool QFont_IsFeatureSet(const QFont* self, QFont__Tag* tag);
libqt_list /* of QFont__Tag* */ QFont_FeatureTags(const QFont* self);
void QFont_ClearFeatures(QFont* self);
void QFont_SetVariableAxis(QFont* self, QFont__Tag* tag, float value);
void QFont_UnsetVariableAxis(QFont* self, QFont__Tag* tag);
bool QFont_IsVariableAxisSet(const QFont* self, QFont__Tag* tag);
float QFont_VariableAxisValue(const QFont* self, QFont__Tag* tag);
void QFont_ClearVariableAxes(QFont* self);
libqt_list /* of QFont__Tag* */ QFont_VariableAxisTags(const QFont* self);
bool QFont_ExactMatch(const QFont* self);
void QFont_OperatorAssign(QFont* self, const QFont* param1);
bool QFont_OperatorEqual(const QFont* self, const QFont* param1);
bool QFont_OperatorNotEqual(const QFont* self, const QFont* param1);
bool QFont_OperatorLesser(const QFont* self, const QFont* param1);
QVariant* QFont_ToQVariant(const QFont* self);
bool QFont_IsCopyOf(const QFont* self, const QFont* param1);
libqt_string QFont_Key(const QFont* self);
libqt_string QFont_ToString(const QFont* self);
bool QFont_FromString(QFont* self, const libqt_string param1);
libqt_string QFont_Substitute(const libqt_string param1);
libqt_list /* of libqt_string */ QFont_Substitutes(const libqt_string param1);
libqt_list /* of libqt_string */ QFont_Substitutions();
void QFont_InsertSubstitution(const libqt_string param1, const libqt_string param2);
void QFont_InsertSubstitutions(const libqt_string param1, const libqt_list /* of libqt_string */ param2);
void QFont_RemoveSubstitutions(const libqt_string param1);
void QFont_Initialize();
void QFont_Cleanup();
void QFont_CacheStatistics();
libqt_string QFont_DefaultFamily(const QFont* self);
QFont* QFont_Resolve(const QFont* self, const QFont* param1);
unsigned int QFont_ResolveMask(const QFont* self);
void QFont_SetResolveMask(QFont* self, unsigned int mask);
void QFont_SetLegacyWeight(QFont* self, int legacyWeight);
int QFont_LegacyWeight(const QFont* self);
void QFont_SetStyleHint2(QFont* self, int param1, int param2);
void QFont_Delete(QFont* self);

QFont__Tag* QFont__Tag_new(const QFont__Tag* other);
QFont__Tag* QFont__Tag_new2(QFont__Tag* other);
QFont__Tag* QFont__Tag_new3();
QFont__Tag* QFont__Tag_new4(const QFont__Tag* param1);
void QFont__Tag_CopyAssign(QFont__Tag* self, QFont__Tag* other);
void QFont__Tag_MoveAssign(QFont__Tag* self, QFont__Tag* other);
bool QFont__Tag_IsValid(const QFont__Tag* self);
unsigned int QFont__Tag_Value(const QFont__Tag* self);
libqt_string QFont__Tag_ToString(const QFont__Tag* self);
void QFont__Tag_Delete(QFont__Tag* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
