#pragma once
#ifndef SRCC_LIBQFONTDATABASE_H
#define SRCC_LIBQFONTDATABASE_H

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
typedef struct QFontDatabase QFontDatabase;
typedef struct QFontInfo QFontInfo;
#endif

#ifdef __cplusplus
typedef QFontDatabase::QtGadgetHelper QtGadgetHelper; // C++ QFlags
typedef QFontDatabase::SystemFont SystemFont;         // C++ enum
typedef QFontDatabase::WritingSystem WritingSystem;   // C++ enum
#else
typedef int SystemFont;      // C ABI enum
typedef int WritingSystem;   // C ABI enum
typedef void QtGadgetHelper; // C ABI QFlags
#endif

QFontDatabase* QFontDatabase_new(QFontDatabase* other);
QFontDatabase* QFontDatabase_new2(QFontDatabase* other);
QFontDatabase* QFontDatabase_new3();
void QFontDatabase_CopyAssign(QFontDatabase* self, QFontDatabase* other);
void QFontDatabase_MoveAssign(QFontDatabase* self, QFontDatabase* other);
libqt_list /* of int */ QFontDatabase_StandardSizes();
libqt_list /* of int */ QFontDatabase_WritingSystems();
libqt_list /* of int */ QFontDatabase_WritingSystemsWithFamily(libqt_string family);
libqt_list /* of libqt_string */ QFontDatabase_Families();
libqt_list /* of libqt_string */ QFontDatabase_Styles(libqt_string family);
libqt_list /* of int */ QFontDatabase_PointSizes(libqt_string family);
libqt_list /* of int */ QFontDatabase_SmoothSizes(libqt_string family, libqt_string style);
libqt_string QFontDatabase_StyleString(QFont* font);
libqt_string QFontDatabase_StyleStringWithFontInfo(QFontInfo* fontInfo);
QFont* QFontDatabase_Font(libqt_string family, libqt_string style, int pointSize);
bool QFontDatabase_IsBitmapScalable(libqt_string family);
bool QFontDatabase_IsSmoothlyScalable(libqt_string family);
bool QFontDatabase_IsScalable(libqt_string family);
bool QFontDatabase_IsFixedPitch(libqt_string family);
bool QFontDatabase_Italic(libqt_string family, libqt_string style);
bool QFontDatabase_Bold(libqt_string family, libqt_string style);
int QFontDatabase_Weight(libqt_string family, libqt_string style);
bool QFontDatabase_HasFamily(libqt_string family);
bool QFontDatabase_IsPrivateFamily(libqt_string family);
libqt_string QFontDatabase_WritingSystemName(int writingSystem);
libqt_string QFontDatabase_WritingSystemSample(int writingSystem);
int QFontDatabase_AddApplicationFont(libqt_string fileName);
int QFontDatabase_AddApplicationFontFromData(libqt_string fontData);
libqt_list /* of libqt_string */ QFontDatabase_ApplicationFontFamilies(int id);
bool QFontDatabase_RemoveApplicationFont(int id);
bool QFontDatabase_RemoveAllApplicationFonts();
QFont* QFontDatabase_SystemFont(int typeVal);
libqt_list /* of libqt_string */ QFontDatabase_Families1(int writingSystem);
libqt_list /* of int */ QFontDatabase_PointSizes2(libqt_string family, libqt_string style);
bool QFontDatabase_IsBitmapScalable2(libqt_string family, libqt_string style);
bool QFontDatabase_IsSmoothlyScalable2(libqt_string family, libqt_string style);
bool QFontDatabase_IsScalable2(libqt_string family, libqt_string style);
bool QFontDatabase_IsFixedPitch2(libqt_string family, libqt_string style);
void QFontDatabase_Delete(QFontDatabase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
