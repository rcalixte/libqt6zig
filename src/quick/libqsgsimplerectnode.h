#pragma once
#ifndef QUICK_LIBQSGSIMPLERECTNODE_H
#define QUICK_LIBQSGSIMPLERECTNODE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QColor QColor;
typedef struct QRectF QRectF;
typedef struct QSGBasicGeometryNode QSGBasicGeometryNode;
typedef struct QSGGeometryNode QSGGeometryNode;
typedef struct QSGNode QSGNode;
typedef struct QSGSimpleRectNode QSGSimpleRectNode;
#endif

QSGSimpleRectNode* QSGSimpleRectNode_new(const QRectF* rect, const QColor* color);
QSGSimpleRectNode* QSGSimpleRectNode_new2();
void QSGSimpleRectNode_SetRect(QSGSimpleRectNode* self, const QRectF* rect);
void QSGSimpleRectNode_SetRect2(QSGSimpleRectNode* self, double x, double y, double w, double h);
QRectF* QSGSimpleRectNode_Rect(const QSGSimpleRectNode* self);
void QSGSimpleRectNode_SetColor(QSGSimpleRectNode* self, const QColor* color);
QColor* QSGSimpleRectNode_Color(const QSGSimpleRectNode* self);
bool QSGSimpleRectNode_IsSubtreeBlocked(const QSGSimpleRectNode* self);
void QSGSimpleRectNode_OnIsSubtreeBlocked(const QSGSimpleRectNode* self, intptr_t slot);
bool QSGSimpleRectNode_SuperIsSubtreeBlocked(const QSGSimpleRectNode* self);
void QSGSimpleRectNode_Preprocess(QSGSimpleRectNode* self);
void QSGSimpleRectNode_OnPreprocess(QSGSimpleRectNode* self, intptr_t slot);
void QSGSimpleRectNode_SuperPreprocess(QSGSimpleRectNode* self);
void QSGSimpleRectNode_Delete(QSGSimpleRectNode* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
