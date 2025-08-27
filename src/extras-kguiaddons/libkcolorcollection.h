#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBKCOLORCOLLECTION_H
#define SRC_EXTRAS_KGUIADDONSC_LIBKCOLORCOLLECTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KColorCollection KColorCollection;
typedef struct QColor QColor;
#endif

KColorCollection* KColorCollection_new();
KColorCollection* KColorCollection_new2(const KColorCollection* param1);
KColorCollection* KColorCollection_new3(const libqt_string name);
libqt_list /* of libqt_string */ KColorCollection_InstalledCollections();
void KColorCollection_OperatorAssign(KColorCollection* self, const KColorCollection* param1);
bool KColorCollection_Save(KColorCollection* self);
libqt_string KColorCollection_Description(const KColorCollection* self);
void KColorCollection_SetDescription(KColorCollection* self, const libqt_string desc);
libqt_string KColorCollection_Name(const KColorCollection* self);
void KColorCollection_SetName(KColorCollection* self, const libqt_string name);
int KColorCollection_Editable(const KColorCollection* self);
void KColorCollection_SetEditable(KColorCollection* self, int editable);
int KColorCollection_Count(const KColorCollection* self);
QColor* KColorCollection_Color(const KColorCollection* self, int index);
int KColorCollection_FindColor(const KColorCollection* self, const QColor* color);
libqt_string KColorCollection_Name2(const KColorCollection* self, int index);
libqt_string KColorCollection_Name3(const KColorCollection* self, const QColor* color);
int KColorCollection_AddColor(KColorCollection* self, const QColor* newColor);
int KColorCollection_ChangeColor(KColorCollection* self, int index, const QColor* newColor);
int KColorCollection_ChangeColor2(KColorCollection* self, const QColor* oldColor, const QColor* newColor);
int KColorCollection_AddColor2(KColorCollection* self, const QColor* newColor, const libqt_string newColorName);
int KColorCollection_ChangeColor3(KColorCollection* self, int index, const QColor* newColor, const libqt_string newColorName);
int KColorCollection_ChangeColor32(KColorCollection* self, const QColor* oldColor, const QColor* newColor, const libqt_string newColorName);
void KColorCollection_Delete(KColorCollection* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
