#include <QRectF>
#include <QSGGeometry>
#define WORKAROUND_INNER_CLASS_DEFINITION_QSGGeometry__Attribute
#define WORKAROUND_INNER_CLASS_DEFINITION_QSGGeometry__AttributeSet
#define WORKAROUND_INNER_CLASS_DEFINITION_QSGGeometry__ColoredPoint2D
#define WORKAROUND_INNER_CLASS_DEFINITION_QSGGeometry__Point2D
#define WORKAROUND_INNER_CLASS_DEFINITION_QSGGeometry__TexturedPoint2D
#include <qsggeometry.h>
#include "libqsggeometry.h"
#include "libqsggeometry.hxx"

QSGGeometry* QSGGeometry_new(const QSGGeometry__AttributeSet* attribs, int vertexCount) {
    return new QSGGeometry(*attribs, static_cast<int>(vertexCount));
}

QSGGeometry* QSGGeometry_new2(const QSGGeometry__AttributeSet* attribs, int vertexCount, int indexCount) {
    return new QSGGeometry(*attribs, static_cast<int>(vertexCount), static_cast<int>(indexCount));
}

QSGGeometry* QSGGeometry_new3(const QSGGeometry__AttributeSet* attribs, int vertexCount, int indexCount, int indexType) {
    return new QSGGeometry(*attribs, static_cast<int>(vertexCount), static_cast<int>(indexCount), static_cast<int>(indexType));
}

QSGGeometry__AttributeSet* QSGGeometry_DefaultAttributes_Point2D() {
    const QSGGeometry::AttributeSet& _ret = QSGGeometry::defaultAttributes_Point2D();
    // Cast returned reference into pointer
    return const_cast<QSGGeometry::AttributeSet*>(&_ret);
}

QSGGeometry__AttributeSet* QSGGeometry_DefaultAttributes_TexturedPoint2D() {
    const QSGGeometry::AttributeSet& _ret = QSGGeometry::defaultAttributes_TexturedPoint2D();
    // Cast returned reference into pointer
    return const_cast<QSGGeometry::AttributeSet*>(&_ret);
}

QSGGeometry__AttributeSet* QSGGeometry_DefaultAttributes_ColoredPoint2D() {
    const QSGGeometry::AttributeSet& _ret = QSGGeometry::defaultAttributes_ColoredPoint2D();
    // Cast returned reference into pointer
    return const_cast<QSGGeometry::AttributeSet*>(&_ret);
}

void QSGGeometry_SetDrawingMode(QSGGeometry* self, unsigned int mode) {
    self->setDrawingMode(static_cast<unsigned int>(mode));
}

unsigned int QSGGeometry_DrawingMode(const QSGGeometry* self) {
    return self->drawingMode();
}

void QSGGeometry_Allocate(QSGGeometry* self, int vertexCount) {
    self->allocate(static_cast<int>(vertexCount));
}

int QSGGeometry_VertexCount(const QSGGeometry* self) {
    return self->vertexCount();
}

void* QSGGeometry_VertexData(QSGGeometry* self) {
    return self->vertexData();
}

QSGGeometry__Point2D* QSGGeometry_VertexDataAsPoint2D(QSGGeometry* self) {
    return self->vertexDataAsPoint2D();
}

QSGGeometry__TexturedPoint2D* QSGGeometry_VertexDataAsTexturedPoint2D(QSGGeometry* self) {
    return self->vertexDataAsTexturedPoint2D();
}

QSGGeometry__ColoredPoint2D* QSGGeometry_VertexDataAsColoredPoint2D(QSGGeometry* self) {
    return self->vertexDataAsColoredPoint2D();
}

const void* QSGGeometry_VertexData2(const QSGGeometry* self) {
    return (const void*)self->vertexData();
}

QSGGeometry__Point2D* QSGGeometry_VertexDataAsPoint2D2(const QSGGeometry* self) {
    return (QSGGeometry__Point2D*)self->vertexDataAsPoint2D();
}

QSGGeometry__TexturedPoint2D* QSGGeometry_VertexDataAsTexturedPoint2D2(const QSGGeometry* self) {
    return (QSGGeometry__TexturedPoint2D*)self->vertexDataAsTexturedPoint2D();
}

QSGGeometry__ColoredPoint2D* QSGGeometry_VertexDataAsColoredPoint2D2(const QSGGeometry* self) {
    return (QSGGeometry__ColoredPoint2D*)self->vertexDataAsColoredPoint2D();
}

int QSGGeometry_IndexType(const QSGGeometry* self) {
    return self->indexType();
}

int QSGGeometry_IndexCount(const QSGGeometry* self) {
    return self->indexCount();
}

void* QSGGeometry_IndexData(QSGGeometry* self) {
    return self->indexData();
}

unsigned int* QSGGeometry_IndexDataAsUInt(QSGGeometry* self) {
    return static_cast<unsigned int*>(self->indexDataAsUInt());
}

uint16_t* QSGGeometry_IndexDataAsUShort(QSGGeometry* self) {
    return static_cast<uint16_t*>(self->indexDataAsUShort());
}

int QSGGeometry_SizeOfIndex(const QSGGeometry* self) {
    return self->sizeOfIndex();
}

const void* QSGGeometry_IndexData2(const QSGGeometry* self) {
    return (const void*)self->indexData();
}

const unsigned int* QSGGeometry_IndexDataAsUInt2(const QSGGeometry* self) {
    return static_cast<const unsigned int*>(self->indexDataAsUInt());
}

const uint16_t* QSGGeometry_IndexDataAsUShort2(const QSGGeometry* self) {
    return static_cast<const uint16_t*>(self->indexDataAsUShort());
}

int QSGGeometry_AttributeCount(const QSGGeometry* self) {
    return self->attributeCount();
}

QSGGeometry__Attribute* QSGGeometry_Attributes(const QSGGeometry* self) {
    return (QSGGeometry__Attribute*)self->attributes();
}

int QSGGeometry_SizeOfVertex(const QSGGeometry* self) {
    return self->sizeOfVertex();
}

void QSGGeometry_UpdateRectGeometry(QSGGeometry* g, const QRectF* rect) {
    QSGGeometry::updateRectGeometry(g, *rect);
}

void QSGGeometry_UpdateTexturedRectGeometry(QSGGeometry* g, const QRectF* rect, const QRectF* sourceRect) {
    QSGGeometry::updateTexturedRectGeometry(g, *rect, *sourceRect);
}

void QSGGeometry_UpdateColoredRectGeometry(QSGGeometry* g, const QRectF* rect) {
    QSGGeometry::updateColoredRectGeometry(g, *rect);
}

void QSGGeometry_SetIndexDataPattern(QSGGeometry* self, int p) {
    self->setIndexDataPattern(static_cast<QSGGeometry::DataPattern>(p));
}

int QSGGeometry_IndexDataPattern(const QSGGeometry* self) {
    return static_cast<int>(self->indexDataPattern());
}

void QSGGeometry_SetVertexDataPattern(QSGGeometry* self, int p) {
    self->setVertexDataPattern(static_cast<QSGGeometry::DataPattern>(p));
}

int QSGGeometry_VertexDataPattern(const QSGGeometry* self) {
    return static_cast<int>(self->vertexDataPattern());
}

void QSGGeometry_MarkIndexDataDirty(QSGGeometry* self) {
    self->markIndexDataDirty();
}

void QSGGeometry_MarkVertexDataDirty(QSGGeometry* self) {
    self->markVertexDataDirty();
}

float QSGGeometry_LineWidth(const QSGGeometry* self) {
    return self->lineWidth();
}

void QSGGeometry_SetLineWidth(QSGGeometry* self, float w) {
    self->setLineWidth(static_cast<float>(w));
}

void QSGGeometry_Allocate2(QSGGeometry* self, int vertexCount, int indexCount) {
    self->allocate(static_cast<int>(vertexCount), static_cast<int>(indexCount));
}

void QSGGeometry_Delete(QSGGeometry* self) {
    delete self;
}

int QSGGeometry__Attribute_Position(const QSGGeometry__Attribute* self) {
    return self->position;
}

void QSGGeometry__Attribute_SetPosition(QSGGeometry__Attribute* self, int position) {
    self->position = static_cast<int>(position);
}

int QSGGeometry__Attribute_TupleSize(const QSGGeometry__Attribute* self) {
    return self->tupleSize;
}

void QSGGeometry__Attribute_SetTupleSize(QSGGeometry__Attribute* self, int tupleSize) {
    self->tupleSize = static_cast<int>(tupleSize);
}

int QSGGeometry__Attribute_Type(const QSGGeometry__Attribute* self) {
    return self->type;
}

void QSGGeometry__Attribute_SetType(QSGGeometry__Attribute* self, int type) {
    self->type = static_cast<int>(type);
}

unsigned int QSGGeometry__Attribute_IsVertexCoordinate(const QSGGeometry__Attribute* self) {
    return static_cast<unsigned int>(self->isVertexCoordinate);
}

void QSGGeometry__Attribute_SetIsVertexCoordinate(QSGGeometry__Attribute* self, unsigned int isVertexCoordinate) {
    self->isVertexCoordinate = static_cast<uint>(isVertexCoordinate);
}

int QSGGeometry__Attribute_AttributeType(const QSGGeometry__Attribute* self) {
    return static_cast<int>(self->attributeType);
}

void QSGGeometry__Attribute_SetAttributeType(QSGGeometry__Attribute* self, int attributeType) {
    self->attributeType = static_cast<QSGGeometry::AttributeType>(attributeType);
}

unsigned int QSGGeometry__Attribute_Reserved(const QSGGeometry__Attribute* self) {
    return static_cast<unsigned int>(self->reserved);
}

void QSGGeometry__Attribute_SetReserved(QSGGeometry__Attribute* self, unsigned int reserved) {
    self->reserved = static_cast<uint>(reserved);
}

QSGGeometry__Attribute* QSGGeometry__Attribute_Create(int pos, int tupleSize, int primitiveType) {
    return new QSGGeometry::Attribute(QSGGeometry::Attribute::create(static_cast<int>(pos), static_cast<int>(tupleSize), static_cast<int>(primitiveType)));
}

QSGGeometry__Attribute* QSGGeometry__Attribute_CreateWithAttributeType(int pos, int tupleSize, int primitiveType, int attributeType) {
    return new QSGGeometry::Attribute(QSGGeometry::Attribute::createWithAttributeType(static_cast<int>(pos), static_cast<int>(tupleSize), static_cast<int>(primitiveType), static_cast<QSGGeometry::AttributeType>(attributeType)));
}

QSGGeometry__Attribute* QSGGeometry__Attribute_Create4(int pos, int tupleSize, int primitiveType, bool isPosition) {
    return new QSGGeometry::Attribute(QSGGeometry::Attribute::create(static_cast<int>(pos), static_cast<int>(tupleSize), static_cast<int>(primitiveType), isPosition));
}

void QSGGeometry__Attribute_Delete(QSGGeometry__Attribute* self) {
    delete self;
}

int QSGGeometry__AttributeSet_Count(const QSGGeometry__AttributeSet* self) {
    return self->count;
}

void QSGGeometry__AttributeSet_SetCount(QSGGeometry__AttributeSet* self, int count) {
    self->count = static_cast<int>(count);
}

int QSGGeometry__AttributeSet_Stride(const QSGGeometry__AttributeSet* self) {
    return self->stride;
}

void QSGGeometry__AttributeSet_SetStride(QSGGeometry__AttributeSet* self, int stride) {
    self->stride = static_cast<int>(stride);
}

QSGGeometry__Attribute* QSGGeometry__AttributeSet_Attributes(const QSGGeometry__AttributeSet* self) {
    return (QSGGeometry__Attribute*)self->attributes;
}

void QSGGeometry__AttributeSet_SetAttributes(QSGGeometry__AttributeSet* self, const QSGGeometry__Attribute* attributes) {
    self->attributes = attributes;
}

void QSGGeometry__AttributeSet_Delete(QSGGeometry__AttributeSet* self) {
    delete self;
}

float QSGGeometry__Point2D_X(const QSGGeometry__Point2D* self) {
    return self->x;
}

void QSGGeometry__Point2D_SetX(QSGGeometry__Point2D* self, float x) {
    self->x = static_cast<float>(x);
}

float QSGGeometry__Point2D_Y(const QSGGeometry__Point2D* self) {
    return self->y;
}

void QSGGeometry__Point2D_SetY(QSGGeometry__Point2D* self, float y) {
    self->y = static_cast<float>(y);
}

void QSGGeometry__Point2D_Set(QSGGeometry__Point2D* self, float nx, float ny) {
    self->set(static_cast<float>(nx), static_cast<float>(ny));
}

void QSGGeometry__Point2D_Delete(QSGGeometry__Point2D* self) {
    delete self;
}

float QSGGeometry__TexturedPoint2D_X(const QSGGeometry__TexturedPoint2D* self) {
    return self->x;
}

void QSGGeometry__TexturedPoint2D_SetX(QSGGeometry__TexturedPoint2D* self, float x) {
    self->x = static_cast<float>(x);
}

float QSGGeometry__TexturedPoint2D_Y(const QSGGeometry__TexturedPoint2D* self) {
    return self->y;
}

void QSGGeometry__TexturedPoint2D_SetY(QSGGeometry__TexturedPoint2D* self, float y) {
    self->y = static_cast<float>(y);
}

float QSGGeometry__TexturedPoint2D_Tx(const QSGGeometry__TexturedPoint2D* self) {
    return self->tx;
}

void QSGGeometry__TexturedPoint2D_SetTx(QSGGeometry__TexturedPoint2D* self, float tx) {
    self->tx = static_cast<float>(tx);
}

float QSGGeometry__TexturedPoint2D_Ty(const QSGGeometry__TexturedPoint2D* self) {
    return self->ty;
}

void QSGGeometry__TexturedPoint2D_SetTy(QSGGeometry__TexturedPoint2D* self, float ty) {
    self->ty = static_cast<float>(ty);
}

void QSGGeometry__TexturedPoint2D_Set(QSGGeometry__TexturedPoint2D* self, float nx, float ny, float ntx, float nty) {
    self->set(static_cast<float>(nx), static_cast<float>(ny), static_cast<float>(ntx), static_cast<float>(nty));
}

void QSGGeometry__TexturedPoint2D_Delete(QSGGeometry__TexturedPoint2D* self) {
    delete self;
}

float QSGGeometry__ColoredPoint2D_X(const QSGGeometry__ColoredPoint2D* self) {
    return self->x;
}

void QSGGeometry__ColoredPoint2D_SetX(QSGGeometry__ColoredPoint2D* self, float x) {
    self->x = static_cast<float>(x);
}

float QSGGeometry__ColoredPoint2D_Y(const QSGGeometry__ColoredPoint2D* self) {
    return self->y;
}

void QSGGeometry__ColoredPoint2D_SetY(QSGGeometry__ColoredPoint2D* self, float y) {
    self->y = static_cast<float>(y);
}

unsigned char QSGGeometry__ColoredPoint2D_R(const QSGGeometry__ColoredPoint2D* self) {
    return self->r;
}

void QSGGeometry__ColoredPoint2D_SetR(QSGGeometry__ColoredPoint2D* self, unsigned char r) {
    self->r = static_cast<unsigned char>(r);
}

unsigned char QSGGeometry__ColoredPoint2D_G(const QSGGeometry__ColoredPoint2D* self) {
    return self->g;
}

void QSGGeometry__ColoredPoint2D_SetG(QSGGeometry__ColoredPoint2D* self, unsigned char g) {
    self->g = static_cast<unsigned char>(g);
}

unsigned char QSGGeometry__ColoredPoint2D_B(const QSGGeometry__ColoredPoint2D* self) {
    return self->b;
}

void QSGGeometry__ColoredPoint2D_SetB(QSGGeometry__ColoredPoint2D* self, unsigned char b) {
    self->b = static_cast<unsigned char>(b);
}

unsigned char QSGGeometry__ColoredPoint2D_A(const QSGGeometry__ColoredPoint2D* self) {
    return self->a;
}

void QSGGeometry__ColoredPoint2D_SetA(QSGGeometry__ColoredPoint2D* self, unsigned char a) {
    self->a = static_cast<unsigned char>(a);
}

void QSGGeometry__ColoredPoint2D_Set(QSGGeometry__ColoredPoint2D* self, float nx, float ny, unsigned char nr, unsigned char ng, unsigned char nb, unsigned char na) {
    self->set(static_cast<float>(nx), static_cast<float>(ny), static_cast<uchar>(nr), static_cast<uchar>(ng), static_cast<uchar>(nb), static_cast<uchar>(na));
}

void QSGGeometry__ColoredPoint2D_Delete(QSGGeometry__ColoredPoint2D* self) {
    delete self;
}
