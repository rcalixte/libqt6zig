#pragma once
#ifndef SRCC_LIBQPEN_H
#define SRCC_LIBQPEN_H

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
typedef struct QPen QPen;
typedef struct QVariant QVariant;
#endif

QPen* QPen_new();
QPen* QPen_new2(int param1);
QPen* QPen_new3(const QColor* color);
QPen* QPen_new4(const QBrush* brush, double width);
QPen* QPen_new5(const QPen* pen);
QPen* QPen_new6(const QBrush* brush, double width, int s);
QPen* QPen_new7(const QBrush* brush, double width, int s, int c);
QPen* QPen_new8(const QBrush* brush, double width, int s, int c, int j);
void QPen_OperatorAssign(QPen* self, const QPen* pen);
void QPen_Swap(QPen* self, QPen* other);
int QPen_Style(const QPen* self);
void QPen_SetStyle(QPen* self, int style);
libqt_list /* of double */ QPen_DashPattern(const QPen* self);
void QPen_SetDashPattern(QPen* self, const libqt_list /* of double */ pattern);
double QPen_DashOffset(const QPen* self);
void QPen_SetDashOffset(QPen* self, double doffset);
double QPen_MiterLimit(const QPen* self);
void QPen_SetMiterLimit(QPen* self, double limit);
double QPen_WidthF(const QPen* self);
void QPen_SetWidthF(QPen* self, double width);
int QPen_Width(const QPen* self);
void QPen_SetWidth(QPen* self, int width);
QColor* QPen_Color(const QPen* self);
void QPen_SetColor(QPen* self, const QColor* color);
QBrush* QPen_Brush(const QPen* self);
void QPen_SetBrush(QPen* self, const QBrush* brush);
bool QPen_IsSolid(const QPen* self);
int QPen_CapStyle(const QPen* self);
void QPen_SetCapStyle(QPen* self, int pcs);
int QPen_JoinStyle(const QPen* self);
void QPen_SetJoinStyle(QPen* self, int pcs);
bool QPen_IsCosmetic(const QPen* self);
void QPen_SetCosmetic(QPen* self, bool cosmetic);
bool QPen_OperatorEqual(const QPen* self, const QPen* p);
bool QPen_OperatorNotEqual(const QPen* self, const QPen* p);
QVariant* QPen_ToQVariant(const QPen* self);
bool QPen_IsDetached(QPen* self);
void QPen_Delete(QPen* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
