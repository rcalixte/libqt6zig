#pragma once
#ifndef QUICK_LIBQSGGEOMETRY_H
#define QUICK_LIBQSGGEOMETRY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QSGGeometry__Attribute)
typedef QSGGeometry::Attribute QSGGeometry__Attribute;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QSGGeometry__AttributeSet)
typedef QSGGeometry::AttributeSet QSGGeometry__AttributeSet;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QSGGeometry__ColoredPoint2D)
typedef QSGGeometry::ColoredPoint2D QSGGeometry__ColoredPoint2D;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QSGGeometry__Point2D)
typedef QSGGeometry::Point2D QSGGeometry__Point2D;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QSGGeometry__TexturedPoint2D)
typedef QSGGeometry::TexturedPoint2D QSGGeometry__TexturedPoint2D;
#endif
#else
typedef struct QRectF QRectF;
typedef struct QSGGeometry QSGGeometry;
typedef struct QSGGeometry__Attribute QSGGeometry__Attribute;
typedef struct QSGGeometry__AttributeSet QSGGeometry__AttributeSet;
typedef struct QSGGeometry__ColoredPoint2D QSGGeometry__ColoredPoint2D;
typedef struct QSGGeometry__Point2D QSGGeometry__Point2D;
typedef struct QSGGeometry__TexturedPoint2D QSGGeometry__TexturedPoint2D;
#endif

QSGGeometry* QSGGeometry_new(const QSGGeometry__AttributeSet* attribs, int vertexCount);
QSGGeometry* QSGGeometry_new2(const QSGGeometry__AttributeSet* attribs, int vertexCount, int indexCount);
QSGGeometry* QSGGeometry_new3(const QSGGeometry__AttributeSet* attribs, int vertexCount, int indexCount, int indexType);
QSGGeometry__AttributeSet* QSGGeometry_DefaultAttributes_Point2D();
QSGGeometry__AttributeSet* QSGGeometry_DefaultAttributes_TexturedPoint2D();
QSGGeometry__AttributeSet* QSGGeometry_DefaultAttributes_ColoredPoint2D();
void QSGGeometry_SetDrawingMode(QSGGeometry* self, unsigned int mode);
unsigned int QSGGeometry_DrawingMode(const QSGGeometry* self);
void QSGGeometry_Allocate(QSGGeometry* self, int vertexCount);
int QSGGeometry_VertexCount(const QSGGeometry* self);
void* QSGGeometry_VertexData(QSGGeometry* self);
QSGGeometry__Point2D* QSGGeometry_VertexDataAsPoint2D(QSGGeometry* self);
QSGGeometry__TexturedPoint2D* QSGGeometry_VertexDataAsTexturedPoint2D(QSGGeometry* self);
QSGGeometry__ColoredPoint2D* QSGGeometry_VertexDataAsColoredPoint2D(QSGGeometry* self);
const void* QSGGeometry_VertexData2(const QSGGeometry* self);
QSGGeometry__Point2D* QSGGeometry_VertexDataAsPoint2D2(const QSGGeometry* self);
QSGGeometry__TexturedPoint2D* QSGGeometry_VertexDataAsTexturedPoint2D2(const QSGGeometry* self);
QSGGeometry__ColoredPoint2D* QSGGeometry_VertexDataAsColoredPoint2D2(const QSGGeometry* self);
int QSGGeometry_IndexType(const QSGGeometry* self);
int QSGGeometry_IndexCount(const QSGGeometry* self);
void* QSGGeometry_IndexData(QSGGeometry* self);
unsigned int* QSGGeometry_IndexDataAsUInt(QSGGeometry* self);
uint16_t* QSGGeometry_IndexDataAsUShort(QSGGeometry* self);
int QSGGeometry_SizeOfIndex(const QSGGeometry* self);
const void* QSGGeometry_IndexData2(const QSGGeometry* self);
const unsigned int* QSGGeometry_IndexDataAsUInt2(const QSGGeometry* self);
const uint16_t* QSGGeometry_IndexDataAsUShort2(const QSGGeometry* self);
int QSGGeometry_AttributeCount(const QSGGeometry* self);
QSGGeometry__Attribute* QSGGeometry_Attributes(const QSGGeometry* self);
int QSGGeometry_SizeOfVertex(const QSGGeometry* self);
void QSGGeometry_UpdateRectGeometry(QSGGeometry* g, const QRectF* rect);
void QSGGeometry_UpdateTexturedRectGeometry(QSGGeometry* g, const QRectF* rect, const QRectF* sourceRect);
void QSGGeometry_UpdateColoredRectGeometry(QSGGeometry* g, const QRectF* rect);
void QSGGeometry_SetIndexDataPattern(QSGGeometry* self, int p);
int QSGGeometry_IndexDataPattern(const QSGGeometry* self);
void QSGGeometry_SetVertexDataPattern(QSGGeometry* self, int p);
int QSGGeometry_VertexDataPattern(const QSGGeometry* self);
void QSGGeometry_MarkIndexDataDirty(QSGGeometry* self);
void QSGGeometry_MarkVertexDataDirty(QSGGeometry* self);
float QSGGeometry_LineWidth(const QSGGeometry* self);
void QSGGeometry_SetLineWidth(QSGGeometry* self, float w);
void QSGGeometry_Allocate2(QSGGeometry* self, int vertexCount, int indexCount);
void QSGGeometry_Delete(QSGGeometry* self);

int QSGGeometry__Attribute_Position(const QSGGeometry__Attribute* self);
void QSGGeometry__Attribute_SetPosition(QSGGeometry__Attribute* self, int position);
int QSGGeometry__Attribute_TupleSize(const QSGGeometry__Attribute* self);
void QSGGeometry__Attribute_SetTupleSize(QSGGeometry__Attribute* self, int tupleSize);
int QSGGeometry__Attribute_Type(const QSGGeometry__Attribute* self);
void QSGGeometry__Attribute_SetType(QSGGeometry__Attribute* self, int type);
unsigned int QSGGeometry__Attribute_IsVertexCoordinate(const QSGGeometry__Attribute* self);
void QSGGeometry__Attribute_SetIsVertexCoordinate(QSGGeometry__Attribute* self, unsigned int isVertexCoordinate);
int QSGGeometry__Attribute_AttributeType(const QSGGeometry__Attribute* self);
void QSGGeometry__Attribute_SetAttributeType(QSGGeometry__Attribute* self, int attributeType);
unsigned int QSGGeometry__Attribute_Reserved(const QSGGeometry__Attribute* self);
void QSGGeometry__Attribute_SetReserved(QSGGeometry__Attribute* self, unsigned int reserved);
QSGGeometry__Attribute* QSGGeometry__Attribute_Create(int pos, int tupleSize, int primitiveType);
QSGGeometry__Attribute* QSGGeometry__Attribute_CreateWithAttributeType(int pos, int tupleSize, int primitiveType, int attributeType);
QSGGeometry__Attribute* QSGGeometry__Attribute_Create4(int pos, int tupleSize, int primitiveType, bool isPosition);
void QSGGeometry__Attribute_Delete(QSGGeometry__Attribute* self);

int QSGGeometry__AttributeSet_Count(const QSGGeometry__AttributeSet* self);
void QSGGeometry__AttributeSet_SetCount(QSGGeometry__AttributeSet* self, int count);
int QSGGeometry__AttributeSet_Stride(const QSGGeometry__AttributeSet* self);
void QSGGeometry__AttributeSet_SetStride(QSGGeometry__AttributeSet* self, int stride);
QSGGeometry__Attribute* QSGGeometry__AttributeSet_Attributes(const QSGGeometry__AttributeSet* self);
void QSGGeometry__AttributeSet_SetAttributes(QSGGeometry__AttributeSet* self, const QSGGeometry__Attribute* attributes);
void QSGGeometry__AttributeSet_Delete(QSGGeometry__AttributeSet* self);

float QSGGeometry__Point2D_X(const QSGGeometry__Point2D* self);
void QSGGeometry__Point2D_SetX(QSGGeometry__Point2D* self, float x);
float QSGGeometry__Point2D_Y(const QSGGeometry__Point2D* self);
void QSGGeometry__Point2D_SetY(QSGGeometry__Point2D* self, float y);
void QSGGeometry__Point2D_Set(QSGGeometry__Point2D* self, float nx, float ny);
void QSGGeometry__Point2D_Delete(QSGGeometry__Point2D* self);

float QSGGeometry__TexturedPoint2D_X(const QSGGeometry__TexturedPoint2D* self);
void QSGGeometry__TexturedPoint2D_SetX(QSGGeometry__TexturedPoint2D* self, float x);
float QSGGeometry__TexturedPoint2D_Y(const QSGGeometry__TexturedPoint2D* self);
void QSGGeometry__TexturedPoint2D_SetY(QSGGeometry__TexturedPoint2D* self, float y);
float QSGGeometry__TexturedPoint2D_Tx(const QSGGeometry__TexturedPoint2D* self);
void QSGGeometry__TexturedPoint2D_SetTx(QSGGeometry__TexturedPoint2D* self, float tx);
float QSGGeometry__TexturedPoint2D_Ty(const QSGGeometry__TexturedPoint2D* self);
void QSGGeometry__TexturedPoint2D_SetTy(QSGGeometry__TexturedPoint2D* self, float ty);
void QSGGeometry__TexturedPoint2D_Set(QSGGeometry__TexturedPoint2D* self, float nx, float ny, float ntx, float nty);
void QSGGeometry__TexturedPoint2D_Delete(QSGGeometry__TexturedPoint2D* self);

float QSGGeometry__ColoredPoint2D_X(const QSGGeometry__ColoredPoint2D* self);
void QSGGeometry__ColoredPoint2D_SetX(QSGGeometry__ColoredPoint2D* self, float x);
float QSGGeometry__ColoredPoint2D_Y(const QSGGeometry__ColoredPoint2D* self);
void QSGGeometry__ColoredPoint2D_SetY(QSGGeometry__ColoredPoint2D* self, float y);
unsigned char QSGGeometry__ColoredPoint2D_R(const QSGGeometry__ColoredPoint2D* self);
void QSGGeometry__ColoredPoint2D_SetR(QSGGeometry__ColoredPoint2D* self, unsigned char r);
unsigned char QSGGeometry__ColoredPoint2D_G(const QSGGeometry__ColoredPoint2D* self);
void QSGGeometry__ColoredPoint2D_SetG(QSGGeometry__ColoredPoint2D* self, unsigned char g);
unsigned char QSGGeometry__ColoredPoint2D_B(const QSGGeometry__ColoredPoint2D* self);
void QSGGeometry__ColoredPoint2D_SetB(QSGGeometry__ColoredPoint2D* self, unsigned char b);
unsigned char QSGGeometry__ColoredPoint2D_A(const QSGGeometry__ColoredPoint2D* self);
void QSGGeometry__ColoredPoint2D_SetA(QSGGeometry__ColoredPoint2D* self, unsigned char a);
void QSGGeometry__ColoredPoint2D_Set(QSGGeometry__ColoredPoint2D* self, float nx, float ny, unsigned char nr, unsigned char ng, unsigned char nb, unsigned char na);
void QSGGeometry__ColoredPoint2D_Delete(QSGGeometry__ColoredPoint2D* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
