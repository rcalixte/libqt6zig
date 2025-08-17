#pragma once
#ifndef SRCC_LIBQGRAPHICSLAYOUTITEM_H
#define SRCC_LIBQGRAPHICSLAYOUTITEM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QSizePolicy QSizePolicy;
#endif

QGraphicsLayoutItem* QGraphicsLayoutItem_new();
QGraphicsLayoutItem* QGraphicsLayoutItem_new2(QGraphicsLayoutItem* parent);
QGraphicsLayoutItem* QGraphicsLayoutItem_new3(QGraphicsLayoutItem* parent, bool isLayout);
void QGraphicsLayoutItem_SetSizePolicy(QGraphicsLayoutItem* self, const QSizePolicy* policy);
void QGraphicsLayoutItem_SetSizePolicy2(QGraphicsLayoutItem* self, int hPolicy, int vPolicy);
QSizePolicy* QGraphicsLayoutItem_SizePolicy(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetMinimumSize(QGraphicsLayoutItem* self, const QSizeF* size);
void QGraphicsLayoutItem_SetMinimumSize2(QGraphicsLayoutItem* self, double w, double h);
QSizeF* QGraphicsLayoutItem_MinimumSize(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetMinimumWidth(QGraphicsLayoutItem* self, double width);
double QGraphicsLayoutItem_MinimumWidth(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetMinimumHeight(QGraphicsLayoutItem* self, double height);
double QGraphicsLayoutItem_MinimumHeight(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetPreferredSize(QGraphicsLayoutItem* self, const QSizeF* size);
void QGraphicsLayoutItem_SetPreferredSize2(QGraphicsLayoutItem* self, double w, double h);
QSizeF* QGraphicsLayoutItem_PreferredSize(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetPreferredWidth(QGraphicsLayoutItem* self, double width);
double QGraphicsLayoutItem_PreferredWidth(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetPreferredHeight(QGraphicsLayoutItem* self, double height);
double QGraphicsLayoutItem_PreferredHeight(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetMaximumSize(QGraphicsLayoutItem* self, const QSizeF* size);
void QGraphicsLayoutItem_SetMaximumSize2(QGraphicsLayoutItem* self, double w, double h);
QSizeF* QGraphicsLayoutItem_MaximumSize(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetMaximumWidth(QGraphicsLayoutItem* self, double width);
double QGraphicsLayoutItem_MaximumWidth(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetMaximumHeight(QGraphicsLayoutItem* self, double height);
double QGraphicsLayoutItem_MaximumHeight(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetGeometry(QGraphicsLayoutItem* self, const QRectF* rect);
void QGraphicsLayoutItem_OnSetGeometry(QGraphicsLayoutItem* self, intptr_t slot);
void QGraphicsLayoutItem_QBaseSetGeometry(QGraphicsLayoutItem* self, const QRectF* rect);
QRectF* QGraphicsLayoutItem_Geometry(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_GetContentsMargins(const QGraphicsLayoutItem* self, double* left, double* top, double* right, double* bottom);
void QGraphicsLayoutItem_OnGetContentsMargins(const QGraphicsLayoutItem* self, intptr_t slot);
void QGraphicsLayoutItem_QBaseGetContentsMargins(const QGraphicsLayoutItem* self, double* left, double* top, double* right, double* bottom);
QRectF* QGraphicsLayoutItem_ContentsRect(const QGraphicsLayoutItem* self);
QSizeF* QGraphicsLayoutItem_EffectiveSizeHint(const QGraphicsLayoutItem* self, int which);
void QGraphicsLayoutItem_UpdateGeometry(QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_OnUpdateGeometry(QGraphicsLayoutItem* self, intptr_t slot);
void QGraphicsLayoutItem_QBaseUpdateGeometry(QGraphicsLayoutItem* self);
bool QGraphicsLayoutItem_IsEmpty(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_OnIsEmpty(const QGraphicsLayoutItem* self, intptr_t slot);
bool QGraphicsLayoutItem_QBaseIsEmpty(const QGraphicsLayoutItem* self);
QGraphicsLayoutItem* QGraphicsLayoutItem_ParentLayoutItem(const QGraphicsLayoutItem* self);
void QGraphicsLayoutItem_SetParentLayoutItem(QGraphicsLayoutItem* self, QGraphicsLayoutItem* parent);
bool QGraphicsLayoutItem_IsLayout(const QGraphicsLayoutItem* self);
QGraphicsItem* QGraphicsLayoutItem_GraphicsItem(const QGraphicsLayoutItem* self);
bool QGraphicsLayoutItem_OwnedByLayout(const QGraphicsLayoutItem* self);
QSizeF* QGraphicsLayoutItem_SizeHint(const QGraphicsLayoutItem* self, int which, const QSizeF* constraint);
void QGraphicsLayoutItem_OnSizeHint(const QGraphicsLayoutItem* self, intptr_t slot);
QSizeF* QGraphicsLayoutItem_QBaseSizeHint(const QGraphicsLayoutItem* self, int which, const QSizeF* constraint);
void QGraphicsLayoutItem_SetSizePolicy3(QGraphicsLayoutItem* self, int hPolicy, int vPolicy, int controlType);
QSizeF* QGraphicsLayoutItem_EffectiveSizeHint2(const QGraphicsLayoutItem* self, int which, const QSizeF* constraint);
void QGraphicsLayoutItem_SetGraphicsItem(QGraphicsLayoutItem* self, QGraphicsItem* item);
void QGraphicsLayoutItem_OnSetGraphicsItem(QGraphicsLayoutItem* self, intptr_t slot);
void QGraphicsLayoutItem_QBaseSetGraphicsItem(QGraphicsLayoutItem* self, QGraphicsItem* item);
void QGraphicsLayoutItem_SetOwnedByLayout(QGraphicsLayoutItem* self, bool ownedByLayout);
void QGraphicsLayoutItem_OnSetOwnedByLayout(QGraphicsLayoutItem* self, intptr_t slot);
void QGraphicsLayoutItem_QBaseSetOwnedByLayout(QGraphicsLayoutItem* self, bool ownedByLayout);
void QGraphicsLayoutItem_Delete(QGraphicsLayoutItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
