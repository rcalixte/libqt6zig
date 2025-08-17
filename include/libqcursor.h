#pragma once
#ifndef SRCC_LIBQCURSOR_H
#define SRCC_LIBQCURSOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBitmap QBitmap;
typedef struct QCursor QCursor;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QScreen QScreen;
typedef struct QVariant QVariant;
#endif

QCursor* QCursor_new();
QCursor* QCursor_new2(int shape);
QCursor* QCursor_new3(const QBitmap* bitmap, const QBitmap* mask);
QCursor* QCursor_new4(const QPixmap* pixmap);
QCursor* QCursor_new5(const QCursor* cursor);
QCursor* QCursor_new6(const QBitmap* bitmap, const QBitmap* mask, int hotX);
QCursor* QCursor_new7(const QBitmap* bitmap, const QBitmap* mask, int hotX, int hotY);
QCursor* QCursor_new8(const QPixmap* pixmap, int hotX);
QCursor* QCursor_new9(const QPixmap* pixmap, int hotX, int hotY);
void QCursor_OperatorAssign(QCursor* self, const QCursor* cursor);
void QCursor_Swap(QCursor* self, QCursor* other);
QVariant* QCursor_ToQVariant(const QCursor* self);
int QCursor_Shape(const QCursor* self);
void QCursor_SetShape(QCursor* self, int newShape);
QBitmap* QCursor_Bitmap(const QCursor* self, int param1);
QBitmap* QCursor_Mask(const QCursor* self, int param1);
QBitmap* QCursor_Bitmap2(const QCursor* self);
QBitmap* QCursor_Mask2(const QCursor* self);
QPixmap* QCursor_Pixmap(const QCursor* self);
QPoint* QCursor_HotSpot(const QCursor* self);
QPoint* QCursor_Pos();
QPoint* QCursor_Pos2(const QScreen* screen);
void QCursor_SetPos(int x, int y);
void QCursor_SetPos2(QScreen* screen, int x, int y);
void QCursor_SetPos3(const QPoint* p);
void QCursor_SetPos4(QScreen* screen, const QPoint* p);
void QCursor_Delete(QCursor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
