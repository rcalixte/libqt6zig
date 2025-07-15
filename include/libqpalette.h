#pragma once
#ifndef SRCC_LIBQPALETTE_H
#define SRCC_LIBQPALETTE_H

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
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QPalette QPalette;
typedef struct QVariant QVariant;
#endif

QPalette* QPalette_new();
QPalette* QPalette_new2(const QColor* button);
QPalette* QPalette_new3(int button);
QPalette* QPalette_new4(const QColor* button, const QColor* window);
QPalette* QPalette_new5(const QBrush* windowText, const QBrush* button, const QBrush* light, const QBrush* dark, const QBrush* mid, const QBrush* text, const QBrush* bright_text, const QBrush* base, const QBrush* window);
QPalette* QPalette_new6(const QColor* windowText, const QColor* window, const QColor* light, const QColor* dark, const QColor* mid, const QColor* text, const QColor* base);
QPalette* QPalette_new7(const QPalette* palette);
void QPalette_OperatorAssign(QPalette* self, const QPalette* palette);
void QPalette_Swap(QPalette* self, QPalette* other);
QVariant* QPalette_ToQVariant(const QPalette* self);
int QPalette_CurrentColorGroup(const QPalette* self);
void QPalette_SetCurrentColorGroup(QPalette* self, int cg);
QColor* QPalette_Color(const QPalette* self, int cg, int cr);
QBrush* QPalette_Brush(const QPalette* self, int cg, int cr);
void QPalette_SetColor(QPalette* self, int cg, int cr, const QColor* color);
void QPalette_SetColor2(QPalette* self, int cr, const QColor* color);
void QPalette_SetBrush(QPalette* self, int cr, const QBrush* brush);
bool QPalette_IsBrushSet(const QPalette* self, int cg, int cr);
void QPalette_SetBrush2(QPalette* self, int cg, int cr, const QBrush* brush);
void QPalette_SetColorGroup(QPalette* self, int cr, const QBrush* windowText, const QBrush* button, const QBrush* light, const QBrush* dark, const QBrush* mid, const QBrush* text, const QBrush* bright_text, const QBrush* base, const QBrush* window);
bool QPalette_IsEqual(const QPalette* self, int cr1, int cr2);
QColor* QPalette_Color2(const QPalette* self, int cr);
QBrush* QPalette_Brush2(const QPalette* self, int cr);
QBrush* QPalette_WindowText(const QPalette* self);
QBrush* QPalette_Button(const QPalette* self);
QBrush* QPalette_Light(const QPalette* self);
QBrush* QPalette_Dark(const QPalette* self);
QBrush* QPalette_Mid(const QPalette* self);
QBrush* QPalette_Text(const QPalette* self);
QBrush* QPalette_Base(const QPalette* self);
QBrush* QPalette_AlternateBase(const QPalette* self);
QBrush* QPalette_ToolTipBase(const QPalette* self);
QBrush* QPalette_ToolTipText(const QPalette* self);
QBrush* QPalette_Window(const QPalette* self);
QBrush* QPalette_Midlight(const QPalette* self);
QBrush* QPalette_BrightText(const QPalette* self);
QBrush* QPalette_ButtonText(const QPalette* self);
QBrush* QPalette_Shadow(const QPalette* self);
QBrush* QPalette_Highlight(const QPalette* self);
QBrush* QPalette_HighlightedText(const QPalette* self);
QBrush* QPalette_Link(const QPalette* self);
QBrush* QPalette_LinkVisited(const QPalette* self);
QBrush* QPalette_PlaceholderText(const QPalette* self);
QBrush* QPalette_Accent(const QPalette* self);
bool QPalette_OperatorEqual(const QPalette* self, const QPalette* p);
bool QPalette_OperatorNotEqual(const QPalette* self, const QPalette* p);
bool QPalette_IsCopyOf(const QPalette* self, const QPalette* p);
long long QPalette_CacheKey(const QPalette* self);
QPalette* QPalette_Resolve(const QPalette* self, const QPalette* other);
unsigned long long QPalette_ResolveMask(const QPalette* self);
void QPalette_SetResolveMask(QPalette* self, unsigned long long mask);
void QPalette_Delete(QPalette* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
