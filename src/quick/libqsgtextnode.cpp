#include <QColor>
#include <QPointF>
#include <QRectF>
#include <QSGNode>
#include <QSGTextNode>
#include <QSGTransformNode>
#include <QTextDocument>
#include <QTextLayout>
#include <qsgtextnode.h>
#include "libqsgtextnode.h"
#include "libqsgtextnode.hxx"

void QSGTextNode_SetColor(QSGTextNode* self, QColor* color) {
    self->setColor(*color);
}

QColor* QSGTextNode_Color(const QSGTextNode* self) {
    return new QColor(self->color());
}

void QSGTextNode_SetTextStyle(QSGTextNode* self, uint8_t textStyle) {
    self->setTextStyle(static_cast<QSGTextNode::TextStyle>(textStyle));
}

uint8_t QSGTextNode_TextStyle(QSGTextNode* self) {
    return static_cast<uint8_t>(self->textStyle());
}

void QSGTextNode_SetStyleColor(QSGTextNode* self, QColor* styleColor) {
    self->setStyleColor(*styleColor);
}

QColor* QSGTextNode_StyleColor(const QSGTextNode* self) {
    return new QColor(self->styleColor());
}

void QSGTextNode_SetLinkColor(QSGTextNode* self, QColor* linkColor) {
    self->setLinkColor(*linkColor);
}

QColor* QSGTextNode_LinkColor(const QSGTextNode* self) {
    return new QColor(self->linkColor());
}

void QSGTextNode_SetSelectionColor(QSGTextNode* self, QColor* selectionColor) {
    self->setSelectionColor(*selectionColor);
}

QColor* QSGTextNode_SelectionColor(const QSGTextNode* self) {
    return new QColor(self->selectionColor());
}

void QSGTextNode_SetSelectionTextColor(QSGTextNode* self, QColor* selectionTextColor) {
    self->setSelectionTextColor(*selectionTextColor);
}

QColor* QSGTextNode_SelectionTextColor(const QSGTextNode* self) {
    return new QColor(self->selectionTextColor());
}

void QSGTextNode_SetRenderType(QSGTextNode* self, uint8_t renderType) {
    self->setRenderType(static_cast<QSGTextNode::RenderType>(renderType));
}

uint8_t QSGTextNode_RenderType(const QSGTextNode* self) {
    return static_cast<uint8_t>(self->renderType());
}

void QSGTextNode_SetRenderTypeQuality(QSGTextNode* self, int renderTypeQuality) {
    self->setRenderTypeQuality(static_cast<int>(renderTypeQuality));
}

int QSGTextNode_RenderTypeQuality(const QSGTextNode* self) {
    return self->renderTypeQuality();
}

void QSGTextNode_SetFiltering(QSGTextNode* self, int filtering) {
    self->setFiltering(static_cast<QSGTexture::Filtering>(filtering));
}

int QSGTextNode_Filtering(const QSGTextNode* self) {
    return static_cast<int>(self->filtering());
}

void QSGTextNode_Clear(QSGTextNode* self) {
    self->clear();
}

void QSGTextNode_SetViewport(QSGTextNode* self, const QRectF* viewport) {
    self->setViewport(*viewport);
}

QRectF* QSGTextNode_Viewport(const QSGTextNode* self) {
    return new QRectF(self->viewport());
}

void QSGTextNode_AddTextLayout(QSGTextNode* self, QPointF* position, QTextLayout* layout) {
    self->addTextLayout(*position, layout);
}

void QSGTextNode_AddTextDocument(QSGTextNode* self, QPointF* position, QTextDocument* document) {
    self->addTextDocument(*position, document);
}

void QSGTextNode_AddTextLayout3(QSGTextNode* self, QPointF* position, QTextLayout* layout, int selectionStart) {
    self->addTextLayout(*position, layout, static_cast<int>(selectionStart));
}

void QSGTextNode_AddTextLayout4(QSGTextNode* self, QPointF* position, QTextLayout* layout, int selectionStart, int selectionCount) {
    self->addTextLayout(*position, layout, static_cast<int>(selectionStart), static_cast<int>(selectionCount));
}

void QSGTextNode_AddTextLayout5(QSGTextNode* self, QPointF* position, QTextLayout* layout, int selectionStart, int selectionCount, int lineStart) {
    self->addTextLayout(*position, layout, static_cast<int>(selectionStart), static_cast<int>(selectionCount), static_cast<int>(lineStart));
}

void QSGTextNode_AddTextLayout6(QSGTextNode* self, QPointF* position, QTextLayout* layout, int selectionStart, int selectionCount, int lineStart, int lineCount) {
    self->addTextLayout(*position, layout, static_cast<int>(selectionStart), static_cast<int>(selectionCount), static_cast<int>(lineStart), static_cast<int>(lineCount));
}

void QSGTextNode_AddTextDocument3(QSGTextNode* self, QPointF* position, QTextDocument* document, int selectionStart) {
    self->addTextDocument(*position, document, static_cast<int>(selectionStart));
}

void QSGTextNode_AddTextDocument4(QSGTextNode* self, QPointF* position, QTextDocument* document, int selectionStart, int selectionCount) {
    self->addTextDocument(*position, document, static_cast<int>(selectionStart), static_cast<int>(selectionCount));
}

void QSGTextNode_Delete(QSGTextNode* self) {
    delete self;
}
