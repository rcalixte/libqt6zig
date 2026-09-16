#pragma once
#ifndef QUICK_LIBQSGRECTANGLENODE_H
#define QUICK_LIBQSGRECTANGLENODE_H

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
typedef struct QSGRectangleNode QSGRectangleNode;
#endif

void QSGRectangleNode_SetRect(QSGRectangleNode* self, const QRectF* rect);
void QSGRectangleNode_SetRect2(QSGRectangleNode* self, double x, double y, double w, double h);
QRectF* QSGRectangleNode_Rect(const QSGRectangleNode* self);
void QSGRectangleNode_SetColor(QSGRectangleNode* self, const QColor* color);
QColor* QSGRectangleNode_Color(const QSGRectangleNode* self);
void QSGRectangleNode_Delete(QSGRectangleNode* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
