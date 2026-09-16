#pragma once
#ifndef QUICK_LIBQSGTEXTNODE_H
#define QUICK_LIBQSGTEXTNODE_H

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
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QSGNode QSGNode;
typedef struct QSGTextNode QSGTextNode;
typedef struct QSGTransformNode QSGTransformNode;
typedef struct QTextDocument QTextDocument;
typedef struct QTextLayout QTextLayout;
#endif

void QSGTextNode_SetColor(QSGTextNode* self, QColor* color);
QColor* QSGTextNode_Color(const QSGTextNode* self);
void QSGTextNode_SetTextStyle(QSGTextNode* self, uint8_t textStyle);
uint8_t QSGTextNode_TextStyle(QSGTextNode* self);
void QSGTextNode_SetStyleColor(QSGTextNode* self, QColor* styleColor);
QColor* QSGTextNode_StyleColor(const QSGTextNode* self);
void QSGTextNode_SetLinkColor(QSGTextNode* self, QColor* linkColor);
QColor* QSGTextNode_LinkColor(const QSGTextNode* self);
void QSGTextNode_SetSelectionColor(QSGTextNode* self, QColor* selectionColor);
QColor* QSGTextNode_SelectionColor(const QSGTextNode* self);
void QSGTextNode_SetSelectionTextColor(QSGTextNode* self, QColor* selectionTextColor);
QColor* QSGTextNode_SelectionTextColor(const QSGTextNode* self);
void QSGTextNode_SetRenderType(QSGTextNode* self, uint8_t renderType);
uint8_t QSGTextNode_RenderType(const QSGTextNode* self);
void QSGTextNode_SetRenderTypeQuality(QSGTextNode* self, int renderTypeQuality);
int QSGTextNode_RenderTypeQuality(const QSGTextNode* self);
void QSGTextNode_SetFiltering(QSGTextNode* self, int filtering);
int QSGTextNode_Filtering(const QSGTextNode* self);
void QSGTextNode_Clear(QSGTextNode* self);
void QSGTextNode_SetViewport(QSGTextNode* self, const QRectF* viewport);
QRectF* QSGTextNode_Viewport(const QSGTextNode* self);
void QSGTextNode_AddTextLayout(QSGTextNode* self, QPointF* position, QTextLayout* layout);
void QSGTextNode_AddTextDocument(QSGTextNode* self, QPointF* position, QTextDocument* document);
void QSGTextNode_AddTextLayout3(QSGTextNode* self, QPointF* position, QTextLayout* layout, int selectionStart);
void QSGTextNode_AddTextLayout4(QSGTextNode* self, QPointF* position, QTextLayout* layout, int selectionStart, int selectionCount);
void QSGTextNode_AddTextLayout5(QSGTextNode* self, QPointF* position, QTextLayout* layout, int selectionStart, int selectionCount, int lineStart);
void QSGTextNode_AddTextLayout6(QSGTextNode* self, QPointF* position, QTextLayout* layout, int selectionStart, int selectionCount, int lineStart, int lineCount);
void QSGTextNode_AddTextDocument3(QSGTextNode* self, QPointF* position, QTextDocument* document, int selectionStart);
void QSGTextNode_AddTextDocument4(QSGTextNode* self, QPointF* position, QTextDocument* document, int selectionStart, int selectionCount);
void QSGTextNode_Delete(QSGTextNode* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
