#pragma once
#ifndef SRCC_LIBQGRAPHICSANCHORLAYOUT_H
#define SRCC_LIBQGRAPHICSANCHORLAYOUT_H

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
typedef struct QGraphicsAnchor QGraphicsAnchor;
typedef struct QGraphicsAnchorLayout QGraphicsAnchorLayout;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsLayout QGraphicsLayout;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
#endif

QMetaObject* QGraphicsAnchor_MetaObject(const QGraphicsAnchor* self);
void* QGraphicsAnchor_Metacast(QGraphicsAnchor* self, const char* param1);
int QGraphicsAnchor_Metacall(QGraphicsAnchor* self, int param1, int param2, void** param3);
libqt_string QGraphicsAnchor_Tr(const char* s);
void QGraphicsAnchor_SetSpacing(QGraphicsAnchor* self, double spacing);
void QGraphicsAnchor_UnsetSpacing(QGraphicsAnchor* self);
double QGraphicsAnchor_Spacing(const QGraphicsAnchor* self);
void QGraphicsAnchor_SetSizePolicy(QGraphicsAnchor* self, int policy);
int QGraphicsAnchor_SizePolicy(const QGraphicsAnchor* self);
libqt_string QGraphicsAnchor_Tr2(const char* s, const char* c);
libqt_string QGraphicsAnchor_Tr3(const char* s, const char* c, int n);
void QGraphicsAnchor_Delete(QGraphicsAnchor* self);

QGraphicsAnchorLayout* QGraphicsAnchorLayout_new();
QGraphicsAnchorLayout* QGraphicsAnchorLayout_new2(QGraphicsLayoutItem* parent);
QGraphicsAnchor* QGraphicsAnchorLayout_AddAnchor(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstEdge, QGraphicsLayoutItem* secondItem, int secondEdge);
QGraphicsAnchor* QGraphicsAnchorLayout_Anchor(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstEdge, QGraphicsLayoutItem* secondItem, int secondEdge);
void QGraphicsAnchorLayout_AddCornerAnchors(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstCorner, QGraphicsLayoutItem* secondItem, int secondCorner);
void QGraphicsAnchorLayout_AddAnchors(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, QGraphicsLayoutItem* secondItem);
void QGraphicsAnchorLayout_SetHorizontalSpacing(QGraphicsAnchorLayout* self, double spacing);
void QGraphicsAnchorLayout_SetVerticalSpacing(QGraphicsAnchorLayout* self, double spacing);
void QGraphicsAnchorLayout_SetSpacing(QGraphicsAnchorLayout* self, double spacing);
double QGraphicsAnchorLayout_HorizontalSpacing(const QGraphicsAnchorLayout* self);
double QGraphicsAnchorLayout_VerticalSpacing(const QGraphicsAnchorLayout* self);
void QGraphicsAnchorLayout_RemoveAt(QGraphicsAnchorLayout* self, int index);
void QGraphicsAnchorLayout_OnRemoveAt(QGraphicsAnchorLayout* self, intptr_t slot);
void QGraphicsAnchorLayout_QBaseRemoveAt(QGraphicsAnchorLayout* self, int index);
void QGraphicsAnchorLayout_SetGeometry(QGraphicsAnchorLayout* self, const QRectF* rect);
void QGraphicsAnchorLayout_OnSetGeometry(QGraphicsAnchorLayout* self, intptr_t slot);
void QGraphicsAnchorLayout_QBaseSetGeometry(QGraphicsAnchorLayout* self, const QRectF* rect);
int QGraphicsAnchorLayout_Count(const QGraphicsAnchorLayout* self);
void QGraphicsAnchorLayout_OnCount(const QGraphicsAnchorLayout* self, intptr_t slot);
int QGraphicsAnchorLayout_QBaseCount(const QGraphicsAnchorLayout* self);
QGraphicsLayoutItem* QGraphicsAnchorLayout_ItemAt(const QGraphicsAnchorLayout* self, int index);
void QGraphicsAnchorLayout_OnItemAt(const QGraphicsAnchorLayout* self, intptr_t slot);
QGraphicsLayoutItem* QGraphicsAnchorLayout_QBaseItemAt(const QGraphicsAnchorLayout* self, int index);
void QGraphicsAnchorLayout_Invalidate(QGraphicsAnchorLayout* self);
void QGraphicsAnchorLayout_OnInvalidate(QGraphicsAnchorLayout* self, intptr_t slot);
void QGraphicsAnchorLayout_QBaseInvalidate(QGraphicsAnchorLayout* self);
QSizeF* QGraphicsAnchorLayout_SizeHint(const QGraphicsAnchorLayout* self, int which, const QSizeF* constraint);
void QGraphicsAnchorLayout_OnSizeHint(const QGraphicsAnchorLayout* self, intptr_t slot);
QSizeF* QGraphicsAnchorLayout_QBaseSizeHint(const QGraphicsAnchorLayout* self, int which, const QSizeF* constraint);
void QGraphicsAnchorLayout_AddAnchors3(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, QGraphicsLayoutItem* secondItem, int orientations);
void QGraphicsAnchorLayout_GetContentsMargins(const QGraphicsAnchorLayout* self, double* left, double* top, double* right, double* bottom);
void QGraphicsAnchorLayout_OnGetContentsMargins(const QGraphicsAnchorLayout* self, intptr_t slot);
void QGraphicsAnchorLayout_QBaseGetContentsMargins(const QGraphicsAnchorLayout* self, double* left, double* top, double* right, double* bottom);
void QGraphicsAnchorLayout_UpdateGeometry(QGraphicsAnchorLayout* self);
void QGraphicsAnchorLayout_OnUpdateGeometry(QGraphicsAnchorLayout* self, intptr_t slot);
void QGraphicsAnchorLayout_QBaseUpdateGeometry(QGraphicsAnchorLayout* self);
void QGraphicsAnchorLayout_WidgetEvent(QGraphicsAnchorLayout* self, QEvent* e);
void QGraphicsAnchorLayout_OnWidgetEvent(QGraphicsAnchorLayout* self, intptr_t slot);
void QGraphicsAnchorLayout_QBaseWidgetEvent(QGraphicsAnchorLayout* self, QEvent* e);
bool QGraphicsAnchorLayout_IsEmpty(const QGraphicsAnchorLayout* self);
void QGraphicsAnchorLayout_OnIsEmpty(const QGraphicsAnchorLayout* self, intptr_t slot);
bool QGraphicsAnchorLayout_QBaseIsEmpty(const QGraphicsAnchorLayout* self);
void QGraphicsAnchorLayout_AddChildLayoutItem(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* layoutItem);
void QGraphicsAnchorLayout_OnAddChildLayoutItem(QGraphicsAnchorLayout* self, intptr_t slot);
void QGraphicsAnchorLayout_QBaseAddChildLayoutItem(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* layoutItem);
void QGraphicsAnchorLayout_SetGraphicsItem(QGraphicsAnchorLayout* self, QGraphicsItem* item);
void QGraphicsAnchorLayout_OnSetGraphicsItem(QGraphicsAnchorLayout* self, intptr_t slot);
void QGraphicsAnchorLayout_QBaseSetGraphicsItem(QGraphicsAnchorLayout* self, QGraphicsItem* item);
void QGraphicsAnchorLayout_SetOwnedByLayout(QGraphicsAnchorLayout* self, bool ownedByLayout);
void QGraphicsAnchorLayout_OnSetOwnedByLayout(QGraphicsAnchorLayout* self, intptr_t slot);
void QGraphicsAnchorLayout_QBaseSetOwnedByLayout(QGraphicsAnchorLayout* self, bool ownedByLayout);
void QGraphicsAnchorLayout_Delete(QGraphicsAnchorLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
