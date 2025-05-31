#pragma once
#ifndef SRCC_LIBQPAINTENGINE_H
#define SRCC_LIBQPAINTENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBrush QBrush;
typedef struct QFont QFont;
typedef struct QImage QImage;
typedef struct QLine QLine;
typedef struct QLineF QLineF;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEngineState QPaintEngineState;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPen QPen;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
typedef struct QSize QSize;
typedef struct QTextItem QTextItem;
typedef struct QTransform QTransform;
#endif

#ifdef __cplusplus
typedef QPaintEngine::DirtyFlag DirtyFlag;                     // C++ enum
typedef QPaintEngine::DirtyFlags DirtyFlags;                   // C++ QFlags
typedef QPaintEngine::PaintEngineFeature PaintEngineFeature;   // C++ enum
typedef QPaintEngine::PaintEngineFeatures PaintEngineFeatures; // C++ QFlags
typedef QPaintEngine::PolygonDrawMode PolygonDrawMode;         // C++ enum
typedef QPaintEngine::Type Type;                               // C++ enum
typedef QTextItem::RenderFlag RenderFlag;                      // C++ enum
typedef QTextItem::RenderFlags RenderFlags;                    // C++ QFlags
#else
typedef int DirtyFlag;           // C ABI enum
typedef int DirtyFlags;          // C ABI QFlags
typedef int PaintEngineFeature;  // C ABI enum
typedef int PaintEngineFeatures; // C ABI QFlags
typedef int PolygonDrawMode;     // C ABI enum
typedef int RenderFlag;          // C ABI enum
typedef int RenderFlags;         // C ABI QFlags
typedef unsigned char Type;      // C ABI enum
#endif

QTextItem* QTextItem_new(const QTextItem* other);
QTextItem* QTextItem_new2(QTextItem* other);
void QTextItem_CopyAssign(QTextItem* self, QTextItem* other);
void QTextItem_MoveAssign(QTextItem* self, QTextItem* other);
double QTextItem_Descent(const QTextItem* self);
double QTextItem_Ascent(const QTextItem* self);
double QTextItem_Width(const QTextItem* self);
int QTextItem_RenderFlags(const QTextItem* self);
libqt_string QTextItem_Text(const QTextItem* self);
QFont* QTextItem_Font(const QTextItem* self);
void QTextItem_Delete(QTextItem* self);

QPaintEngine* QPaintEngine_new();
QPaintEngine* QPaintEngine_new2(int features);
bool QPaintEngine_IsActive(const QPaintEngine* self);
void QPaintEngine_SetActive(QPaintEngine* self, bool newState);
bool QPaintEngine_Begin(QPaintEngine* self, QPaintDevice* pdev);
void QPaintEngine_OnBegin(QPaintEngine* self, intptr_t slot);
bool QPaintEngine_QBaseBegin(QPaintEngine* self, QPaintDevice* pdev);
bool QPaintEngine_End(QPaintEngine* self);
void QPaintEngine_OnEnd(QPaintEngine* self, intptr_t slot);
bool QPaintEngine_QBaseEnd(QPaintEngine* self);
void QPaintEngine_UpdateState(QPaintEngine* self, const QPaintEngineState* state);
void QPaintEngine_OnUpdateState(QPaintEngine* self, intptr_t slot);
void QPaintEngine_QBaseUpdateState(QPaintEngine* self, const QPaintEngineState* state);
void QPaintEngine_DrawRects(QPaintEngine* self, const QRect* rects, int rectCount);
void QPaintEngine_OnDrawRects(QPaintEngine* self, intptr_t slot);
void QPaintEngine_QBaseDrawRects(QPaintEngine* self, const QRect* rects, int rectCount);
void QPaintEngine_DrawRects2(QPaintEngine* self, const QRectF* rects, int rectCount);
void QPaintEngine_OnDrawRects2(QPaintEngine* self, intptr_t slot);
void QPaintEngine_QBaseDrawRects2(QPaintEngine* self, const QRectF* rects, int rectCount);
void QPaintEngine_DrawLines(QPaintEngine* self, const QLine* lines, int lineCount);
void QPaintEngine_OnDrawLines(QPaintEngine* self, intptr_t slot);
void QPaintEngine_QBaseDrawLines(QPaintEngine* self, const QLine* lines, int lineCount);
void QPaintEngine_DrawLines2(QPaintEngine* self, const QLineF* lines, int lineCount);
void QPaintEngine_OnDrawLines2(QPaintEngine* self, intptr_t slot);
void QPaintEngine_QBaseDrawLines2(QPaintEngine* self, const QLineF* lines, int lineCount);
void QPaintEngine_DrawEllipse(QPaintEngine* self, const QRectF* r);
void QPaintEngine_OnDrawEllipse(QPaintEngine* self, intptr_t slot);
void QPaintEngine_QBaseDrawEllipse(QPaintEngine* self, const QRectF* r);
void QPaintEngine_DrawEllipseWithQRect(QPaintEngine* self, const QRect* r);
void QPaintEngine_OnDrawEllipseWithQRect(QPaintEngine* self, intptr_t slot);
void QPaintEngine_QBaseDrawEllipseWithQRect(QPaintEngine* self, const QRect* r);
void QPaintEngine_DrawPath(QPaintEngine* self, const QPainterPath* path);
void QPaintEngine_OnDrawPath(QPaintEngine* self, intptr_t slot);
void QPaintEngine_QBaseDrawPath(QPaintEngine* self, const QPainterPath* path);
void QPaintEngine_DrawPoints(QPaintEngine* self, const QPointF* points, int pointCount);
void QPaintEngine_OnDrawPoints(QPaintEngine* self, intptr_t slot);
void QPaintEngine_QBaseDrawPoints(QPaintEngine* self, const QPointF* points, int pointCount);
void QPaintEngine_DrawPoints2(QPaintEngine* self, const QPoint* points, int pointCount);
void QPaintEngine_OnDrawPoints2(QPaintEngine* self, intptr_t slot);
void QPaintEngine_QBaseDrawPoints2(QPaintEngine* self, const QPoint* points, int pointCount);
void QPaintEngine_DrawPolygon(QPaintEngine* self, const QPointF* points, int pointCount, int mode);
void QPaintEngine_OnDrawPolygon(QPaintEngine* self, intptr_t slot);
void QPaintEngine_QBaseDrawPolygon(QPaintEngine* self, const QPointF* points, int pointCount, int mode);
void QPaintEngine_DrawPolygon2(QPaintEngine* self, const QPoint* points, int pointCount, int mode);
void QPaintEngine_OnDrawPolygon2(QPaintEngine* self, intptr_t slot);
void QPaintEngine_QBaseDrawPolygon2(QPaintEngine* self, const QPoint* points, int pointCount, int mode);
void QPaintEngine_DrawPixmap(QPaintEngine* self, const QRectF* r, const QPixmap* pm, const QRectF* sr);
void QPaintEngine_OnDrawPixmap(QPaintEngine* self, intptr_t slot);
void QPaintEngine_QBaseDrawPixmap(QPaintEngine* self, const QRectF* r, const QPixmap* pm, const QRectF* sr);
void QPaintEngine_DrawTextItem(QPaintEngine* self, const QPointF* p, const QTextItem* textItem);
void QPaintEngine_OnDrawTextItem(QPaintEngine* self, intptr_t slot);
void QPaintEngine_QBaseDrawTextItem(QPaintEngine* self, const QPointF* p, const QTextItem* textItem);
void QPaintEngine_DrawTiledPixmap(QPaintEngine* self, const QRectF* r, const QPixmap* pixmap, const QPointF* s);
void QPaintEngine_OnDrawTiledPixmap(QPaintEngine* self, intptr_t slot);
void QPaintEngine_QBaseDrawTiledPixmap(QPaintEngine* self, const QRectF* r, const QPixmap* pixmap, const QPointF* s);
void QPaintEngine_DrawImage(QPaintEngine* self, const QRectF* r, const QImage* pm, const QRectF* sr, int flags);
void QPaintEngine_OnDrawImage(QPaintEngine* self, intptr_t slot);
void QPaintEngine_QBaseDrawImage(QPaintEngine* self, const QRectF* r, const QImage* pm, const QRectF* sr, int flags);
void QPaintEngine_SetPaintDevice(QPaintEngine* self, QPaintDevice* device);
QPaintDevice* QPaintEngine_PaintDevice(const QPaintEngine* self);
void QPaintEngine_SetSystemClip(QPaintEngine* self, const QRegion* baseClip);
QRegion* QPaintEngine_SystemClip(const QPaintEngine* self);
void QPaintEngine_SetSystemRect(QPaintEngine* self, const QRect* rect);
QRect* QPaintEngine_SystemRect(const QPaintEngine* self);
QPoint* QPaintEngine_CoordinateOffset(const QPaintEngine* self);
void QPaintEngine_OnCoordinateOffset(const QPaintEngine* self, intptr_t slot);
QPoint* QPaintEngine_QBaseCoordinateOffset(const QPaintEngine* self);
int QPaintEngine_Type(const QPaintEngine* self);
void QPaintEngine_OnType(const QPaintEngine* self, intptr_t slot);
int QPaintEngine_QBaseType(const QPaintEngine* self);
void QPaintEngine_FixNegRect(QPaintEngine* self, int* x, int* y, int* w, int* h);
bool QPaintEngine_TestDirty(QPaintEngine* self, int df);
void QPaintEngine_SetDirty(QPaintEngine* self, int df);
void QPaintEngine_ClearDirty(QPaintEngine* self, int df);
bool QPaintEngine_HasFeature(const QPaintEngine* self, int feature);
QPainter* QPaintEngine_Painter(const QPaintEngine* self);
void QPaintEngine_SyncState(QPaintEngine* self);
bool QPaintEngine_IsExtended(const QPaintEngine* self);
QPixmap* QPaintEngine_CreatePixmap(QPaintEngine* self, QSize* size);
void QPaintEngine_OnCreatePixmap(QPaintEngine* self, intptr_t slot);
QPixmap* QPaintEngine_QBaseCreatePixmap(QPaintEngine* self, QSize* size);
QPixmap* QPaintEngine_CreatePixmapFromImage(QPaintEngine* self, QImage* image, int flags);
void QPaintEngine_OnCreatePixmapFromImage(QPaintEngine* self, intptr_t slot);
QPixmap* QPaintEngine_QBaseCreatePixmapFromImage(QPaintEngine* self, QImage* image, int flags);
void QPaintEngine_Delete(QPaintEngine* self);

QPaintEngineState* QPaintEngineState_new(const QPaintEngineState* other);
QPaintEngineState* QPaintEngineState_new2(QPaintEngineState* other);
void QPaintEngineState_CopyAssign(QPaintEngineState* self, QPaintEngineState* other);
void QPaintEngineState_MoveAssign(QPaintEngineState* self, QPaintEngineState* other);
int QPaintEngineState_State(const QPaintEngineState* self);
QPen* QPaintEngineState_Pen(const QPaintEngineState* self);
QBrush* QPaintEngineState_Brush(const QPaintEngineState* self);
QPointF* QPaintEngineState_BrushOrigin(const QPaintEngineState* self);
QBrush* QPaintEngineState_BackgroundBrush(const QPaintEngineState* self);
int QPaintEngineState_BackgroundMode(const QPaintEngineState* self);
QFont* QPaintEngineState_Font(const QPaintEngineState* self);
QTransform* QPaintEngineState_Transform(const QPaintEngineState* self);
int QPaintEngineState_ClipOperation(const QPaintEngineState* self);
QRegion* QPaintEngineState_ClipRegion(const QPaintEngineState* self);
QPainterPath* QPaintEngineState_ClipPath(const QPaintEngineState* self);
bool QPaintEngineState_IsClipEnabled(const QPaintEngineState* self);
int QPaintEngineState_RenderHints(const QPaintEngineState* self);
int QPaintEngineState_CompositionMode(const QPaintEngineState* self);
double QPaintEngineState_Opacity(const QPaintEngineState* self);
QPainter* QPaintEngineState_Painter(const QPaintEngineState* self);
bool QPaintEngineState_BrushNeedsResolving(const QPaintEngineState* self);
bool QPaintEngineState_PenNeedsResolving(const QPaintEngineState* self);
void QPaintEngineState_Delete(QPaintEngineState* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
