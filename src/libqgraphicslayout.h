#pragma once
#ifndef SRCC_LIBQGRAPHICSLAYOUT_H
#define SRCC_LIBQGRAPHICSLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QEvent QEvent;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsLayout QGraphicsLayout;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
#endif

QGraphicsLayout* QGraphicsLayout_new();
QGraphicsLayout* QGraphicsLayout_new2(QGraphicsLayoutItem* parent);
void QGraphicsLayout_SetContentsMargins(QGraphicsLayout* self, double left, double top, double right, double bottom);
void QGraphicsLayout_GetContentsMargins(const QGraphicsLayout* self, double* left, double* top, double* right, double* bottom);
void QGraphicsLayout_Activate(QGraphicsLayout* self);
bool QGraphicsLayout_IsActivated(const QGraphicsLayout* self);
void QGraphicsLayout_Invalidate(QGraphicsLayout* self);
void QGraphicsLayout_UpdateGeometry(QGraphicsLayout* self);
void QGraphicsLayout_WidgetEvent(QGraphicsLayout* self, QEvent* e);
int QGraphicsLayout_Count(const QGraphicsLayout* self);
QGraphicsLayoutItem* QGraphicsLayout_ItemAt(const QGraphicsLayout* self, int i);
void QGraphicsLayout_RemoveAt(QGraphicsLayout* self, int index);
void QGraphicsLayout_SetInstantInvalidatePropagation(bool enable);
bool QGraphicsLayout_InstantInvalidatePropagation();
void QGraphicsLayout_OnGetContentsMargins(const QGraphicsLayout* self, intptr_t slot);
void QGraphicsLayout_QBaseGetContentsMargins(const QGraphicsLayout* self, double* left, double* top, double* right, double* bottom);
void QGraphicsLayout_OnInvalidate(QGraphicsLayout* self, intptr_t slot);
void QGraphicsLayout_QBaseInvalidate(QGraphicsLayout* self);
void QGraphicsLayout_OnUpdateGeometry(QGraphicsLayout* self, intptr_t slot);
void QGraphicsLayout_QBaseUpdateGeometry(QGraphicsLayout* self);
void QGraphicsLayout_OnWidgetEvent(QGraphicsLayout* self, intptr_t slot);
void QGraphicsLayout_QBaseWidgetEvent(QGraphicsLayout* self, QEvent* e);
void QGraphicsLayout_OnCount(const QGraphicsLayout* self, intptr_t slot);
int QGraphicsLayout_QBaseCount(const QGraphicsLayout* self);
void QGraphicsLayout_OnItemAt(const QGraphicsLayout* self, intptr_t slot);
QGraphicsLayoutItem* QGraphicsLayout_QBaseItemAt(const QGraphicsLayout* self, int i);
void QGraphicsLayout_OnRemoveAt(QGraphicsLayout* self, intptr_t slot);
void QGraphicsLayout_QBaseRemoveAt(QGraphicsLayout* self, int index);
void QGraphicsLayout_SetGeometry(QGraphicsLayout* self, const QRectF* rect);
void QGraphicsLayout_OnSetGeometry(QGraphicsLayout* self, intptr_t slot);
void QGraphicsLayout_QBaseSetGeometry(QGraphicsLayout* self, const QRectF* rect);
bool QGraphicsLayout_IsEmpty(const QGraphicsLayout* self);
void QGraphicsLayout_OnIsEmpty(const QGraphicsLayout* self, intptr_t slot);
bool QGraphicsLayout_QBaseIsEmpty(const QGraphicsLayout* self);
QSizeF* QGraphicsLayout_SizeHint(const QGraphicsLayout* self, int which, const QSizeF* constraint);
void QGraphicsLayout_OnSizeHint(const QGraphicsLayout* self, intptr_t slot);
QSizeF* QGraphicsLayout_QBaseSizeHint(const QGraphicsLayout* self, int which, const QSizeF* constraint);
void QGraphicsLayout_AddChildLayoutItem(QGraphicsLayout* self, QGraphicsLayoutItem* layoutItem);
void QGraphicsLayout_OnAddChildLayoutItem(QGraphicsLayout* self, intptr_t slot);
void QGraphicsLayout_QBaseAddChildLayoutItem(QGraphicsLayout* self, QGraphicsLayoutItem* layoutItem);
void QGraphicsLayout_SetGraphicsItem(QGraphicsLayout* self, QGraphicsItem* item);
void QGraphicsLayout_OnSetGraphicsItem(QGraphicsLayout* self, intptr_t slot);
void QGraphicsLayout_QBaseSetGraphicsItem(QGraphicsLayout* self, QGraphicsItem* item);
void QGraphicsLayout_SetOwnedByLayout(QGraphicsLayout* self, bool ownedByLayout);
void QGraphicsLayout_OnSetOwnedByLayout(QGraphicsLayout* self, intptr_t slot);
void QGraphicsLayout_QBaseSetOwnedByLayout(QGraphicsLayout* self, bool ownedByLayout);
void QGraphicsLayout_Delete(QGraphicsLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
