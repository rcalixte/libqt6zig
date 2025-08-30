#pragma once
#ifndef SRC_EXTRAS_KCOLORSCHEMEC_LIBKCOLORSCHEME_H
#define SRC_EXTRAS_KCOLORSCHEMEC_LIBKCOLORSCHEME_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KColorScheme KColorScheme;
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QPalette QPalette;
#endif

KColorScheme* KColorScheme_new(const KColorScheme* param1);
KColorScheme* KColorScheme_new2();
KColorScheme* KColorScheme_new3(int param1);
KColorScheme* KColorScheme_new4(int param1, int param2);
void KColorScheme_OperatorAssign(KColorScheme* self, const KColorScheme* param1);
QBrush* KColorScheme_Background(const KColorScheme* self);
QBrush* KColorScheme_Foreground(const KColorScheme* self);
QBrush* KColorScheme_Decoration(const KColorScheme* self, int param1);
QColor* KColorScheme_Shade(const KColorScheme* self, int param1);
double KColorScheme_ContrastF();
QColor* KColorScheme_Shade2(const QColor* param1, int param2);
QColor* KColorScheme_Shade3(const QColor* param1, int param2, double contrast);
void KColorScheme_AdjustBackground(QPalette* param1);
void KColorScheme_AdjustForeground(QPalette* param1);
bool KColorScheme_OperatorEqual(const KColorScheme* self, const KColorScheme* other);
QBrush* KColorScheme_Background1(const KColorScheme* self, int param1);
QBrush* KColorScheme_Foreground1(const KColorScheme* self, int param1);
QColor* KColorScheme_Shade4(const QColor* param1, int param2, double contrast, double chromaAdjust);
void KColorScheme_AdjustBackground2(QPalette* param1, int newRole);
void KColorScheme_AdjustBackground3(QPalette* param1, int newRole, int color);
void KColorScheme_AdjustBackground4(QPalette* param1, int newRole, int color, int set);
void KColorScheme_AdjustForeground2(QPalette* param1, int newRole);
void KColorScheme_AdjustForeground3(QPalette* param1, int newRole, int color);
void KColorScheme_AdjustForeground4(QPalette* param1, int newRole, int color, int set);
void KColorScheme_Delete(KColorScheme* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
