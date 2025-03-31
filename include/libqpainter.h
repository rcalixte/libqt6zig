#pragma once
#ifndef SRCC_LIBQPAINTER_H
#define SRCC_LIBQPAINTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QPainter__PixmapFragment)
typedef QPainter::PixmapFragment QPainter__PixmapFragment;
#endif
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QFontInfo QFontInfo;
typedef struct QFontMetrics QFontMetrics;
typedef struct QGlyphRun QGlyphRun;
typedef struct QImage QImage;
typedef struct QLine QLine;
typedef struct QLineF QLineF;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPainter__PixmapFragment QPainter__PixmapFragment;
typedef struct QPen QPen;
typedef struct QPicture QPicture;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
typedef struct QStaticText QStaticText;
typedef struct QTextItem QTextItem;
typedef struct QTextOption QTextOption;
typedef struct QTransform QTransform;
#endif

#ifdef __cplusplus
typedef QPainter::CompositionMode CompositionMode;         // C++ enum
typedef QPainter::PixmapFragmentHint PixmapFragmentHint;   // C++ enum
typedef QPainter::PixmapFragmentHints PixmapFragmentHints; // C++ QFlags
typedef QPainter::QtGadgetHelper QtGadgetHelper;           // C++ QFlags
typedef QPainter::RenderHint RenderHint;                   // C++ enum
typedef QPainter::RenderHints RenderHints;                 // C++ QFlags
#else
typedef int CompositionMode;     // C ABI enum
typedef int PixmapFragmentHint;  // C ABI enum
typedef int PixmapFragmentHints; // C ABI QFlags
typedef int RenderHint;          // C ABI enum
typedef int RenderHints;         // C ABI QFlags
typedef void QtGadgetHelper;     // C ABI QFlags
#endif

QPainter* QPainter_new();
QPainter* QPainter_new2(QPaintDevice* param1);
QPaintDevice* QPainter_Device(const QPainter* self);
bool QPainter_Begin(QPainter* self, QPaintDevice* param1);
bool QPainter_End(QPainter* self);
bool QPainter_IsActive(const QPainter* self);
void QPainter_SetCompositionMode(QPainter* self, int mode);
int QPainter_CompositionMode(const QPainter* self);
QFont* QPainter_Font(const QPainter* self);
void QPainter_SetFont(QPainter* self, QFont* f);
QFontMetrics* QPainter_FontMetrics(const QPainter* self);
QFontInfo* QPainter_FontInfo(const QPainter* self);
void QPainter_SetPen(QPainter* self, QColor* color);
void QPainter_SetPenWithPen(QPainter* self, QPen* pen);
void QPainter_SetPenWithStyle(QPainter* self, int style);
QPen* QPainter_Pen(const QPainter* self);
void QPainter_SetBrush(QPainter* self, QBrush* brush);
void QPainter_SetBrushWithStyle(QPainter* self, int style);
QBrush* QPainter_Brush(const QPainter* self);
void QPainter_SetBackgroundMode(QPainter* self, int mode);
int QPainter_BackgroundMode(const QPainter* self);
QPoint* QPainter_BrushOrigin(const QPainter* self);
void QPainter_SetBrushOrigin(QPainter* self, int x, int y);
void QPainter_SetBrushOriginWithBrushOrigin(QPainter* self, QPoint* brushOrigin);
void QPainter_SetBrushOrigin2(QPainter* self, QPointF* brushOrigin);
void QPainter_SetBackground(QPainter* self, QBrush* bg);
QBrush* QPainter_Background(const QPainter* self);
double QPainter_Opacity(const QPainter* self);
void QPainter_SetOpacity(QPainter* self, double opacity);
QRegion* QPainter_ClipRegion(const QPainter* self);
QPainterPath* QPainter_ClipPath(const QPainter* self);
void QPainter_SetClipRect(QPainter* self, QRectF* param1);
void QPainter_SetClipRectWithQRect(QPainter* self, QRect* param1);
void QPainter_SetClipRect2(QPainter* self, int x, int y, int w, int h);
void QPainter_SetClipRegion(QPainter* self, QRegion* param1);
void QPainter_SetClipPath(QPainter* self, QPainterPath* path);
void QPainter_SetClipping(QPainter* self, bool enable);
bool QPainter_HasClipping(const QPainter* self);
QRectF* QPainter_ClipBoundingRect(const QPainter* self);
void QPainter_Save(QPainter* self);
void QPainter_Restore(QPainter* self);
void QPainter_SetTransform(QPainter* self, QTransform* transform);
QTransform* QPainter_Transform(const QPainter* self);
QTransform* QPainter_DeviceTransform(const QPainter* self);
void QPainter_ResetTransform(QPainter* self);
void QPainter_SetWorldTransform(QPainter* self, QTransform* matrix);
QTransform* QPainter_WorldTransform(const QPainter* self);
QTransform* QPainter_CombinedTransform(const QPainter* self);
void QPainter_SetWorldMatrixEnabled(QPainter* self, bool enabled);
bool QPainter_WorldMatrixEnabled(const QPainter* self);
void QPainter_Scale(QPainter* self, double sx, double sy);
void QPainter_Shear(QPainter* self, double sh, double sv);
void QPainter_Rotate(QPainter* self, double a);
void QPainter_Translate(QPainter* self, QPointF* offset);
void QPainter_TranslateWithOffset(QPainter* self, QPoint* offset);
void QPainter_Translate2(QPainter* self, double dx, double dy);
QRect* QPainter_Window(const QPainter* self);
void QPainter_SetWindow(QPainter* self, QRect* window);
void QPainter_SetWindow2(QPainter* self, int x, int y, int w, int h);
QRect* QPainter_Viewport(const QPainter* self);
void QPainter_SetViewport(QPainter* self, QRect* viewport);
void QPainter_SetViewport2(QPainter* self, int x, int y, int w, int h);
void QPainter_SetViewTransformEnabled(QPainter* self, bool enable);
bool QPainter_ViewTransformEnabled(const QPainter* self);
void QPainter_StrokePath(QPainter* self, QPainterPath* path, QPen* pen);
void QPainter_FillPath(QPainter* self, QPainterPath* path, QBrush* brush);
void QPainter_DrawPath(QPainter* self, QPainterPath* path);
void QPainter_DrawPoint(QPainter* self, QPointF* pt);
void QPainter_DrawPointWithQPoint(QPainter* self, QPoint* p);
void QPainter_DrawPoint2(QPainter* self, int x, int y);
void QPainter_DrawPoints(QPainter* self, QPointF* points, int pointCount);
void QPainter_DrawPoints2(QPainter* self, QPoint* points, int pointCount);
void QPainter_DrawLine(QPainter* self, QLineF* line);
void QPainter_DrawLineWithLine(QPainter* self, QLine* line);
void QPainter_DrawLine2(QPainter* self, int x1, int y1, int x2, int y2);
void QPainter_DrawLine3(QPainter* self, QPoint* p1, QPoint* p2);
void QPainter_DrawLine4(QPainter* self, QPointF* p1, QPointF* p2);
void QPainter_DrawLines(QPainter* self, QLineF* lines, int lineCount);
void QPainter_DrawLinesWithLines(QPainter* self, libqt_list /* of QLineF* */ lines);
void QPainter_DrawLines2(QPainter* self, QPointF* pointPairs, int lineCount);
void QPainter_DrawLinesWithPointPairs(QPainter* self, libqt_list /* of QPointF* */ pointPairs);
void QPainter_DrawLines3(QPainter* self, QLine* lines, int lineCount);
void QPainter_DrawLines4(QPainter* self, libqt_list /* of QLine* */ lines);
void QPainter_DrawLines5(QPainter* self, QPoint* pointPairs, int lineCount);
void QPainter_DrawLines6(QPainter* self, libqt_list /* of QPoint* */ pointPairs);
void QPainter_DrawRect(QPainter* self, QRectF* rect);
void QPainter_DrawRect2(QPainter* self, int x1, int y1, int w, int h);
void QPainter_DrawRectWithRect(QPainter* self, QRect* rect);
void QPainter_DrawRects(QPainter* self, QRectF* rects, int rectCount);
void QPainter_DrawRectsWithRectangles(QPainter* self, libqt_list /* of QRectF* */ rectangles);
void QPainter_DrawRects2(QPainter* self, QRect* rects, int rectCount);
void QPainter_DrawRects3(QPainter* self, libqt_list /* of QRect* */ rectangles);
void QPainter_DrawEllipse(QPainter* self, QRectF* r);
void QPainter_DrawEllipseWithQRect(QPainter* self, QRect* r);
void QPainter_DrawEllipse2(QPainter* self, int x, int y, int w, int h);
void QPainter_DrawEllipse3(QPainter* self, QPointF* center, double rx, double ry);
void QPainter_DrawEllipse4(QPainter* self, QPoint* center, int rx, int ry);
void QPainter_DrawPolyline(QPainter* self, QPointF* points, int pointCount);
void QPainter_DrawPolyline2(QPainter* self, QPoint* points, int pointCount);
void QPainter_DrawPolygon(QPainter* self, QPointF* points, int pointCount);
void QPainter_DrawPolygon2(QPainter* self, QPoint* points, int pointCount);
void QPainter_DrawConvexPolygon(QPainter* self, QPointF* points, int pointCount);
void QPainter_DrawConvexPolygon2(QPainter* self, QPoint* points, int pointCount);
void QPainter_DrawArc(QPainter* self, QRectF* rect, int a, int alen);
void QPainter_DrawArc2(QPainter* self, QRect* param1, int a, int alen);
void QPainter_DrawArc3(QPainter* self, int x, int y, int w, int h, int a, int alen);
void QPainter_DrawPie(QPainter* self, QRectF* rect, int a, int alen);
void QPainter_DrawPie2(QPainter* self, int x, int y, int w, int h, int a, int alen);
void QPainter_DrawPie3(QPainter* self, QRect* param1, int a, int alen);
void QPainter_DrawChord(QPainter* self, QRectF* rect, int a, int alen);
void QPainter_DrawChord2(QPainter* self, int x, int y, int w, int h, int a, int alen);
void QPainter_DrawChord3(QPainter* self, QRect* param1, int a, int alen);
void QPainter_DrawRoundedRect(QPainter* self, QRectF* rect, double xRadius, double yRadius);
void QPainter_DrawRoundedRect2(QPainter* self, int x, int y, int w, int h, double xRadius, double yRadius);
void QPainter_DrawRoundedRect3(QPainter* self, QRect* rect, double xRadius, double yRadius);
void QPainter_DrawTiledPixmap(QPainter* self, QRectF* rect, QPixmap* pm);
void QPainter_DrawTiledPixmap2(QPainter* self, int x, int y, int w, int h, QPixmap* param5);
void QPainter_DrawTiledPixmap3(QPainter* self, QRect* param1, QPixmap* param2);
void QPainter_DrawPicture(QPainter* self, QPointF* p, QPicture* picture);
void QPainter_DrawPicture2(QPainter* self, int x, int y, QPicture* picture);
void QPainter_DrawPicture3(QPainter* self, QPoint* p, QPicture* picture);
void QPainter_DrawPixmap(QPainter* self, QRectF* targetRect, QPixmap* pixmap, QRectF* sourceRect);
void QPainter_DrawPixmap2(QPainter* self, QRect* targetRect, QPixmap* pixmap, QRect* sourceRect);
void QPainter_DrawPixmap3(QPainter* self, int x, int y, int w, int h, QPixmap* pm, int sx, int sy, int sw, int sh);
void QPainter_DrawPixmap4(QPainter* self, int x, int y, QPixmap* pm, int sx, int sy, int sw, int sh);
void QPainter_DrawPixmap5(QPainter* self, QPointF* p, QPixmap* pm, QRectF* sr);
void QPainter_DrawPixmap6(QPainter* self, QPoint* p, QPixmap* pm, QRect* sr);
void QPainter_DrawPixmap7(QPainter* self, QPointF* p, QPixmap* pm);
void QPainter_DrawPixmap8(QPainter* self, QPoint* p, QPixmap* pm);
void QPainter_DrawPixmap9(QPainter* self, int x, int y, QPixmap* pm);
void QPainter_DrawPixmap10(QPainter* self, QRect* r, QPixmap* pm);
void QPainter_DrawPixmap11(QPainter* self, int x, int y, int w, int h, QPixmap* pm);
void QPainter_DrawPixmapFragments(QPainter* self, QPainter__PixmapFragment* fragments, int fragmentCount, QPixmap* pixmap);
void QPainter_DrawImage(QPainter* self, QRectF* targetRect, QImage* image, QRectF* sourceRect);
void QPainter_DrawImage2(QPainter* self, QRect* targetRect, QImage* image, QRect* sourceRect);
void QPainter_DrawImage3(QPainter* self, QPointF* p, QImage* image, QRectF* sr);
void QPainter_DrawImage4(QPainter* self, QPoint* p, QImage* image, QRect* sr);
void QPainter_DrawImage5(QPainter* self, QRectF* r, QImage* image);
void QPainter_DrawImage6(QPainter* self, QRect* r, QImage* image);
void QPainter_DrawImage7(QPainter* self, QPointF* p, QImage* image);
void QPainter_DrawImage8(QPainter* self, QPoint* p, QImage* image);
void QPainter_DrawImage9(QPainter* self, int x, int y, QImage* image);
void QPainter_SetLayoutDirection(QPainter* self, int direction);
int QPainter_LayoutDirection(const QPainter* self);
void QPainter_DrawGlyphRun(QPainter* self, QPointF* position, QGlyphRun* glyphRun);
void QPainter_DrawStaticText(QPainter* self, QPointF* topLeftPosition, QStaticText* staticText);
void QPainter_DrawStaticText2(QPainter* self, QPoint* topLeftPosition, QStaticText* staticText);
void QPainter_DrawStaticText3(QPainter* self, int left, int top, QStaticText* staticText);
void QPainter_DrawText(QPainter* self, QPointF* p, libqt_string s);
void QPainter_DrawText2(QPainter* self, QPoint* p, libqt_string s);
void QPainter_DrawText3(QPainter* self, int x, int y, libqt_string s);
void QPainter_DrawText4(QPainter* self, QPointF* p, libqt_string str, int tf, int justificationPadding);
void QPainter_DrawText5(QPainter* self, QRectF* r, int flags, libqt_string text);
void QPainter_DrawText6(QPainter* self, QRect* r, int flags, libqt_string text);
void QPainter_DrawText7(QPainter* self, int x, int y, int w, int h, int flags, libqt_string text);
void QPainter_DrawText8(QPainter* self, QRectF* r, libqt_string text);
QRectF* QPainter_BoundingRect(QPainter* self, QRectF* rect, int flags, libqt_string text);
QRect* QPainter_BoundingRect2(QPainter* self, QRect* rect, int flags, libqt_string text);
QRect* QPainter_BoundingRect3(QPainter* self, int x, int y, int w, int h, int flags, libqt_string text);
QRectF* QPainter_BoundingRect4(QPainter* self, QRectF* rect, libqt_string text);
void QPainter_DrawTextItem(QPainter* self, QPointF* p, QTextItem* ti);
void QPainter_DrawTextItem2(QPainter* self, int x, int y, QTextItem* ti);
void QPainter_DrawTextItem3(QPainter* self, QPoint* p, QTextItem* ti);
void QPainter_FillRect(QPainter* self, QRectF* param1, QBrush* param2);
void QPainter_FillRect2(QPainter* self, int x, int y, int w, int h, QBrush* param5);
void QPainter_FillRect3(QPainter* self, QRect* param1, QBrush* param2);
void QPainter_FillRect4(QPainter* self, QRectF* param1, QColor* color);
void QPainter_FillRect5(QPainter* self, int x, int y, int w, int h, QColor* color);
void QPainter_FillRect6(QPainter* self, QRect* param1, QColor* color);
void QPainter_FillRect7(QPainter* self, int x, int y, int w, int h, int c);
void QPainter_FillRect8(QPainter* self, QRect* r, int c);
void QPainter_FillRect9(QPainter* self, QRectF* r, int c);
void QPainter_FillRect10(QPainter* self, int x, int y, int w, int h, int style);
void QPainter_FillRect11(QPainter* self, QRect* r, int style);
void QPainter_FillRect12(QPainter* self, QRectF* r, int style);
void QPainter_FillRect13(QPainter* self, int x, int y, int w, int h, int preset);
void QPainter_FillRect14(QPainter* self, QRect* r, int preset);
void QPainter_FillRect15(QPainter* self, QRectF* r, int preset);
void QPainter_EraseRect(QPainter* self, QRectF* param1);
void QPainter_EraseRect2(QPainter* self, int x, int y, int w, int h);
void QPainter_EraseRectWithQRect(QPainter* self, QRect* param1);
void QPainter_SetRenderHint(QPainter* self, int hint);
void QPainter_SetRenderHints(QPainter* self, int hints);
int QPainter_RenderHints(const QPainter* self);
bool QPainter_TestRenderHint(const QPainter* self, int hint);
QPaintEngine* QPainter_PaintEngine(const QPainter* self);
void QPainter_BeginNativePainting(QPainter* self);
void QPainter_EndNativePainting(QPainter* self);
void QPainter_SetClipRect22(QPainter* self, QRectF* param1, int op);
void QPainter_SetClipRect23(QPainter* self, QRect* param1, int op);
void QPainter_SetClipRect5(QPainter* self, int x, int y, int w, int h, int op);
void QPainter_SetClipRegion2(QPainter* self, QRegion* param1, int op);
void QPainter_SetClipPath2(QPainter* self, QPainterPath* path, int op);
void QPainter_SetTransform2(QPainter* self, QTransform* transform, bool combine);
void QPainter_SetWorldTransform2(QPainter* self, QTransform* matrix, bool combine);
void QPainter_DrawPolygon32(QPainter* self, QPointF* points, int pointCount, int fillRule);
void QPainter_DrawPolygon33(QPainter* self, QPoint* points, int pointCount, int fillRule);
void QPainter_DrawRoundedRect4(QPainter* self, QRectF* rect, double xRadius, double yRadius, int mode);
void QPainter_DrawRoundedRect7(QPainter* self, int x, int y, int w, int h, double xRadius, double yRadius, int mode);
void QPainter_DrawRoundedRect42(QPainter* self, QRect* rect, double xRadius, double yRadius, int mode);
void QPainter_DrawTiledPixmap32(QPainter* self, QRectF* rect, QPixmap* pm, QPointF* offset);
void QPainter_DrawTiledPixmap6(QPainter* self, int x, int y, int w, int h, QPixmap* param5, int sx);
void QPainter_DrawTiledPixmap7(QPainter* self, int x, int y, int w, int h, QPixmap* param5, int sx, int sy);
void QPainter_DrawTiledPixmap33(QPainter* self, QRect* param1, QPixmap* param2, QPoint* param3);
void QPainter_DrawPixmapFragments4(QPainter* self, QPainter__PixmapFragment* fragments, int fragmentCount, QPixmap* pixmap, int hints);
void QPainter_DrawImage42(QPainter* self, QRectF* targetRect, QImage* image, QRectF* sourceRect, int flags);
void QPainter_DrawImage43(QPainter* self, QRect* targetRect, QImage* image, QRect* sourceRect, int flags);
void QPainter_DrawImage44(QPainter* self, QPointF* p, QImage* image, QRectF* sr, int flags);
void QPainter_DrawImage45(QPainter* self, QPoint* p, QImage* image, QRect* sr, int flags);
void QPainter_DrawImage46(QPainter* self, int x, int y, QImage* image, int sx);
void QPainter_DrawImage52(QPainter* self, int x, int y, QImage* image, int sx, int sy);
void QPainter_DrawImage62(QPainter* self, int x, int y, QImage* image, int sx, int sy, int sw);
void QPainter_DrawImage72(QPainter* self, int x, int y, QImage* image, int sx, int sy, int sw, int sh);
void QPainter_DrawImage82(QPainter* self, int x, int y, QImage* image, int sx, int sy, int sw, int sh, int flags);
void QPainter_DrawText42(QPainter* self, QRectF* r, int flags, libqt_string text, QRectF* br);
void QPainter_DrawText43(QPainter* self, QRect* r, int flags, libqt_string text, QRect* br);
void QPainter_DrawText72(QPainter* self, int x, int y, int w, int h, int flags, libqt_string text, QRect* br);
void QPainter_DrawText32(QPainter* self, QRectF* r, libqt_string text, QTextOption* o);
QRectF* QPainter_BoundingRect32(QPainter* self, QRectF* rect, libqt_string text, QTextOption* o);
void QPainter_SetRenderHint2(QPainter* self, int hint, bool on);
void QPainter_SetRenderHints2(QPainter* self, int hints, bool on);
void QPainter_Delete(QPainter* self);

QPainter__PixmapFragment* QPainter__PixmapFragment_Create(QPointF* pos, QRectF* sourceRect);
QPainter__PixmapFragment* QPainter__PixmapFragment_Create3(QPointF* pos, QRectF* sourceRect, double scaleX);
QPainter__PixmapFragment* QPainter__PixmapFragment_Create4(QPointF* pos, QRectF* sourceRect, double scaleX, double scaleY);
QPainter__PixmapFragment* QPainter__PixmapFragment_Create5(QPointF* pos, QRectF* sourceRect, double scaleX, double scaleY, double rotation);
QPainter__PixmapFragment* QPainter__PixmapFragment_Create6(QPointF* pos, QRectF* sourceRect, double scaleX, double scaleY, double rotation, double opacity);
void QPainter__PixmapFragment_Delete(QPainter__PixmapFragment* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
