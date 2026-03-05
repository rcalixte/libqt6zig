#pragma once
#ifndef SRCC_LIBVIRTUALQPAINTENGINE_H
#define SRCC_LIBVIRTUALQPAINTENGINE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPaintEngine so that we can call protected methods
class VirtualQPaintEngine : public QPaintEngine {

  public:
    // Virtual class boolean flag
    bool isVirtualQPaintEngine = true;

    // Virtual class public types (including callbacks)
    using QPaintEngine_Begin_Callback = bool (*)(QPaintEngine*, QPaintDevice*);
    using QPaintEngine_End_Callback = bool (*)();
    using QPaintEngine_UpdateState_Callback = void (*)(QPaintEngine*, QPaintEngineState*);
    using QPaintEngine_DrawRects_Callback = void (*)(QPaintEngine*, QRect*, int);
    using QPaintEngine_DrawRects2_Callback = void (*)(QPaintEngine*, QRectF*, int);
    using QPaintEngine_DrawLines_Callback = void (*)(QPaintEngine*, QLine*, int);
    using QPaintEngine_DrawLines2_Callback = void (*)(QPaintEngine*, QLineF*, int);
    using QPaintEngine_DrawEllipse_Callback = void (*)(QPaintEngine*, QRectF*);
    using QPaintEngine_DrawEllipse2_Callback = void (*)(QPaintEngine*, QRect*);
    using QPaintEngine_DrawPath_Callback = void (*)(QPaintEngine*, QPainterPath*);
    using QPaintEngine_DrawPoints_Callback = void (*)(QPaintEngine*, QPointF*, int);
    using QPaintEngine_DrawPoints2_Callback = void (*)(QPaintEngine*, QPoint*, int);
    using QPaintEngine_DrawPolygon_Callback = void (*)(QPaintEngine*, QPointF*, int, int);
    using QPaintEngine_DrawPolygon2_Callback = void (*)(QPaintEngine*, QPoint*, int, int);
    using QPaintEngine_DrawPixmap_Callback = void (*)(QPaintEngine*, QRectF*, QPixmap*, QRectF*);
    using QPaintEngine_DrawTextItem_Callback = void (*)(QPaintEngine*, QPointF*, QTextItem*);
    using QPaintEngine_DrawTiledPixmap_Callback = void (*)(QPaintEngine*, QRectF*, QPixmap*, QPointF*);
    using QPaintEngine_DrawImage_Callback = void (*)(QPaintEngine*, QRectF*, QImage*, QRectF*, int);
    using QPaintEngine_CoordinateOffset_Callback = QPoint* (*)();
    using QPaintEngine_Type_Callback = int (*)();
    using QPaintEngine_CreatePixmap_Callback = QPixmap* (*)(QPaintEngine*, QSize*);
    using QPaintEngine_CreatePixmapFromImage_Callback = QPixmap* (*)(QPaintEngine*, QImage*, int);

  protected:
    // Instance callback storage
    QPaintEngine_Begin_Callback qpaintengine_begin_callback = nullptr;
    QPaintEngine_End_Callback qpaintengine_end_callback = nullptr;
    QPaintEngine_UpdateState_Callback qpaintengine_updatestate_callback = nullptr;
    QPaintEngine_DrawRects_Callback qpaintengine_drawrects_callback = nullptr;
    QPaintEngine_DrawRects2_Callback qpaintengine_drawrects2_callback = nullptr;
    QPaintEngine_DrawLines_Callback qpaintengine_drawlines_callback = nullptr;
    QPaintEngine_DrawLines2_Callback qpaintengine_drawlines2_callback = nullptr;
    QPaintEngine_DrawEllipse_Callback qpaintengine_drawellipse_callback = nullptr;
    QPaintEngine_DrawEllipse2_Callback qpaintengine_drawellipse2_callback = nullptr;
    QPaintEngine_DrawPath_Callback qpaintengine_drawpath_callback = nullptr;
    QPaintEngine_DrawPoints_Callback qpaintengine_drawpoints_callback = nullptr;
    QPaintEngine_DrawPoints2_Callback qpaintengine_drawpoints2_callback = nullptr;
    QPaintEngine_DrawPolygon_Callback qpaintengine_drawpolygon_callback = nullptr;
    QPaintEngine_DrawPolygon2_Callback qpaintengine_drawpolygon2_callback = nullptr;
    QPaintEngine_DrawPixmap_Callback qpaintengine_drawpixmap_callback = nullptr;
    QPaintEngine_DrawTextItem_Callback qpaintengine_drawtextitem_callback = nullptr;
    QPaintEngine_DrawTiledPixmap_Callback qpaintengine_drawtiledpixmap_callback = nullptr;
    QPaintEngine_DrawImage_Callback qpaintengine_drawimage_callback = nullptr;
    QPaintEngine_CoordinateOffset_Callback qpaintengine_coordinateoffset_callback = nullptr;
    QPaintEngine_Type_Callback qpaintengine_type_callback = nullptr;
    QPaintEngine_CreatePixmap_Callback qpaintengine_createpixmap_callback = nullptr;
    QPaintEngine_CreatePixmapFromImage_Callback qpaintengine_createpixmapfromimage_callback = nullptr;

    // Instance base flags
    mutable bool qpaintengine_begin_isbase = false;
    mutable bool qpaintengine_end_isbase = false;
    mutable bool qpaintengine_updatestate_isbase = false;
    mutable bool qpaintengine_drawrects_isbase = false;
    mutable bool qpaintengine_drawrects2_isbase = false;
    mutable bool qpaintengine_drawlines_isbase = false;
    mutable bool qpaintengine_drawlines2_isbase = false;
    mutable bool qpaintengine_drawellipse_isbase = false;
    mutable bool qpaintengine_drawellipse2_isbase = false;
    mutable bool qpaintengine_drawpath_isbase = false;
    mutable bool qpaintengine_drawpoints_isbase = false;
    mutable bool qpaintengine_drawpoints2_isbase = false;
    mutable bool qpaintengine_drawpolygon_isbase = false;
    mutable bool qpaintengine_drawpolygon2_isbase = false;
    mutable bool qpaintengine_drawpixmap_isbase = false;
    mutable bool qpaintengine_drawtextitem_isbase = false;
    mutable bool qpaintengine_drawtiledpixmap_isbase = false;
    mutable bool qpaintengine_drawimage_isbase = false;
    mutable bool qpaintengine_coordinateoffset_isbase = false;
    mutable bool qpaintengine_type_isbase = false;
    mutable bool qpaintengine_createpixmap_isbase = false;
    mutable bool qpaintengine_createpixmapfromimage_isbase = false;

  public:
    VirtualQPaintEngine() : QPaintEngine() {};
    VirtualQPaintEngine(QPaintEngine::PaintEngineFeatures features) : QPaintEngine(features) {};

    // Callback setters
    inline void setQPaintEngine_Begin_Callback(QPaintEngine_Begin_Callback cb) { qpaintengine_begin_callback = cb; }
    inline void setQPaintEngine_End_Callback(QPaintEngine_End_Callback cb) { qpaintengine_end_callback = cb; }
    inline void setQPaintEngine_UpdateState_Callback(QPaintEngine_UpdateState_Callback cb) { qpaintengine_updatestate_callback = cb; }
    inline void setQPaintEngine_DrawRects_Callback(QPaintEngine_DrawRects_Callback cb) { qpaintengine_drawrects_callback = cb; }
    inline void setQPaintEngine_DrawRects2_Callback(QPaintEngine_DrawRects2_Callback cb) { qpaintengine_drawrects2_callback = cb; }
    inline void setQPaintEngine_DrawLines_Callback(QPaintEngine_DrawLines_Callback cb) { qpaintengine_drawlines_callback = cb; }
    inline void setQPaintEngine_DrawLines2_Callback(QPaintEngine_DrawLines2_Callback cb) { qpaintengine_drawlines2_callback = cb; }
    inline void setQPaintEngine_DrawEllipse_Callback(QPaintEngine_DrawEllipse_Callback cb) { qpaintengine_drawellipse_callback = cb; }
    inline void setQPaintEngine_DrawEllipse2_Callback(QPaintEngine_DrawEllipse2_Callback cb) { qpaintengine_drawellipse2_callback = cb; }
    inline void setQPaintEngine_DrawPath_Callback(QPaintEngine_DrawPath_Callback cb) { qpaintengine_drawpath_callback = cb; }
    inline void setQPaintEngine_DrawPoints_Callback(QPaintEngine_DrawPoints_Callback cb) { qpaintengine_drawpoints_callback = cb; }
    inline void setQPaintEngine_DrawPoints2_Callback(QPaintEngine_DrawPoints2_Callback cb) { qpaintengine_drawpoints2_callback = cb; }
    inline void setQPaintEngine_DrawPolygon_Callback(QPaintEngine_DrawPolygon_Callback cb) { qpaintengine_drawpolygon_callback = cb; }
    inline void setQPaintEngine_DrawPolygon2_Callback(QPaintEngine_DrawPolygon2_Callback cb) { qpaintengine_drawpolygon2_callback = cb; }
    inline void setQPaintEngine_DrawPixmap_Callback(QPaintEngine_DrawPixmap_Callback cb) { qpaintengine_drawpixmap_callback = cb; }
    inline void setQPaintEngine_DrawTextItem_Callback(QPaintEngine_DrawTextItem_Callback cb) { qpaintengine_drawtextitem_callback = cb; }
    inline void setQPaintEngine_DrawTiledPixmap_Callback(QPaintEngine_DrawTiledPixmap_Callback cb) { qpaintengine_drawtiledpixmap_callback = cb; }
    inline void setQPaintEngine_DrawImage_Callback(QPaintEngine_DrawImage_Callback cb) { qpaintengine_drawimage_callback = cb; }
    inline void setQPaintEngine_CoordinateOffset_Callback(QPaintEngine_CoordinateOffset_Callback cb) { qpaintengine_coordinateoffset_callback = cb; }
    inline void setQPaintEngine_Type_Callback(QPaintEngine_Type_Callback cb) { qpaintengine_type_callback = cb; }
    inline void setQPaintEngine_CreatePixmap_Callback(QPaintEngine_CreatePixmap_Callback cb) { qpaintengine_createpixmap_callback = cb; }
    inline void setQPaintEngine_CreatePixmapFromImage_Callback(QPaintEngine_CreatePixmapFromImage_Callback cb) { qpaintengine_createpixmapfromimage_callback = cb; }

    // Base flag setters
    inline void setQPaintEngine_Begin_IsBase(bool value) const { qpaintengine_begin_isbase = value; }
    inline void setQPaintEngine_End_IsBase(bool value) const { qpaintengine_end_isbase = value; }
    inline void setQPaintEngine_UpdateState_IsBase(bool value) const { qpaintengine_updatestate_isbase = value; }
    inline void setQPaintEngine_DrawRects_IsBase(bool value) const { qpaintengine_drawrects_isbase = value; }
    inline void setQPaintEngine_DrawRects2_IsBase(bool value) const { qpaintengine_drawrects2_isbase = value; }
    inline void setQPaintEngine_DrawLines_IsBase(bool value) const { qpaintengine_drawlines_isbase = value; }
    inline void setQPaintEngine_DrawLines2_IsBase(bool value) const { qpaintengine_drawlines2_isbase = value; }
    inline void setQPaintEngine_DrawEllipse_IsBase(bool value) const { qpaintengine_drawellipse_isbase = value; }
    inline void setQPaintEngine_DrawEllipse2_IsBase(bool value) const { qpaintengine_drawellipse2_isbase = value; }
    inline void setQPaintEngine_DrawPath_IsBase(bool value) const { qpaintengine_drawpath_isbase = value; }
    inline void setQPaintEngine_DrawPoints_IsBase(bool value) const { qpaintengine_drawpoints_isbase = value; }
    inline void setQPaintEngine_DrawPoints2_IsBase(bool value) const { qpaintengine_drawpoints2_isbase = value; }
    inline void setQPaintEngine_DrawPolygon_IsBase(bool value) const { qpaintengine_drawpolygon_isbase = value; }
    inline void setQPaintEngine_DrawPolygon2_IsBase(bool value) const { qpaintengine_drawpolygon2_isbase = value; }
    inline void setQPaintEngine_DrawPixmap_IsBase(bool value) const { qpaintengine_drawpixmap_isbase = value; }
    inline void setQPaintEngine_DrawTextItem_IsBase(bool value) const { qpaintengine_drawtextitem_isbase = value; }
    inline void setQPaintEngine_DrawTiledPixmap_IsBase(bool value) const { qpaintengine_drawtiledpixmap_isbase = value; }
    inline void setQPaintEngine_DrawImage_IsBase(bool value) const { qpaintengine_drawimage_isbase = value; }
    inline void setQPaintEngine_CoordinateOffset_IsBase(bool value) const { qpaintengine_coordinateoffset_isbase = value; }
    inline void setQPaintEngine_Type_IsBase(bool value) const { qpaintengine_type_isbase = value; }
    inline void setQPaintEngine_CreatePixmap_IsBase(bool value) const { qpaintengine_createpixmap_isbase = value; }
    inline void setQPaintEngine_CreatePixmapFromImage_IsBase(bool value) const { qpaintengine_createpixmapfromimage_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool begin(QPaintDevice* pdev) override {
        auto begin_cb = qpaintengine_begin_callback;
        if (begin_cb) {
            QPaintDevice* cbval1 = pdev;

            bool callback_ret = begin_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool end() override {
        auto end_cb = qpaintengine_end_callback;
        if (end_cb) {
            bool callback_ret = end_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(const QPaintEngineState& state) override {
        auto updatestate_cb = qpaintengine_updatestate_callback;
        if (updatestate_cb) {
            const QPaintEngineState& state_ret = state;
            // Cast returned reference into pointer
            QPaintEngineState* cbval1 = const_cast<QPaintEngineState*>(&state_ret);

            updatestate_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawRects(const QRect* rects, int rectCount) override {
        if (qpaintengine_drawrects_isbase) {
            qpaintengine_drawrects_isbase = false;
            QPaintEngine::drawRects(rects, rectCount);
            return;
        }
        auto drawrects_cb = qpaintengine_drawrects_callback;
        if (drawrects_cb) {
            QRect* cbval1 = (QRect*)rects;
            int cbval2 = rectCount;

            drawrects_cb(this, cbval1, cbval2);
            return;
        }
        QPaintEngine::drawRects(rects, rectCount);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawRects(const QRectF* rects, int rectCount) override {
        if (qpaintengine_drawrects2_isbase) {
            qpaintengine_drawrects2_isbase = false;
            QPaintEngine::drawRects(rects, rectCount);
            return;
        }
        auto drawrects2_cb = qpaintengine_drawrects2_callback;
        if (drawrects2_cb) {
            QRectF* cbval1 = (QRectF*)rects;
            int cbval2 = rectCount;

            drawrects2_cb(this, cbval1, cbval2);
            return;
        }
        QPaintEngine::drawRects(rects, rectCount);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawLines(const QLine* lines, int lineCount) override {
        if (qpaintengine_drawlines_isbase) {
            qpaintengine_drawlines_isbase = false;
            QPaintEngine::drawLines(lines, lineCount);
            return;
        }
        auto drawlines_cb = qpaintengine_drawlines_callback;
        if (drawlines_cb) {
            QLine* cbval1 = (QLine*)lines;
            int cbval2 = lineCount;

            drawlines_cb(this, cbval1, cbval2);
            return;
        }
        QPaintEngine::drawLines(lines, lineCount);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawLines(const QLineF* lines, int lineCount) override {
        if (qpaintengine_drawlines2_isbase) {
            qpaintengine_drawlines2_isbase = false;
            QPaintEngine::drawLines(lines, lineCount);
            return;
        }
        auto drawlines2_cb = qpaintengine_drawlines2_callback;
        if (drawlines2_cb) {
            QLineF* cbval1 = (QLineF*)lines;
            int cbval2 = lineCount;

            drawlines2_cb(this, cbval1, cbval2);
            return;
        }
        QPaintEngine::drawLines(lines, lineCount);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawEllipse(const QRectF& r) override {
        if (qpaintengine_drawellipse_isbase) {
            qpaintengine_drawellipse_isbase = false;
            QPaintEngine::drawEllipse(r);
            return;
        }
        auto drawellipse_cb = qpaintengine_drawellipse_callback;
        if (drawellipse_cb) {
            const QRectF& r_ret = r;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&r_ret);

            drawellipse_cb(this, cbval1);
            return;
        }
        QPaintEngine::drawEllipse(r);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawEllipse(const QRect& r) override {
        if (qpaintengine_drawellipse2_isbase) {
            qpaintengine_drawellipse2_isbase = false;
            QPaintEngine::drawEllipse(r);
            return;
        }
        auto drawellipse2_cb = qpaintengine_drawellipse2_callback;
        if (drawellipse2_cb) {
            const QRect& r_ret = r;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&r_ret);

            drawellipse2_cb(this, cbval1);
            return;
        }
        QPaintEngine::drawEllipse(r);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPath(const QPainterPath& path) override {
        if (qpaintengine_drawpath_isbase) {
            qpaintengine_drawpath_isbase = false;
            QPaintEngine::drawPath(path);
            return;
        }
        auto drawpath_cb = qpaintengine_drawpath_callback;
        if (drawpath_cb) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);

            drawpath_cb(this, cbval1);
            return;
        }
        QPaintEngine::drawPath(path);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPoints(const QPointF* points, int pointCount) override {
        if (qpaintengine_drawpoints_isbase) {
            qpaintengine_drawpoints_isbase = false;
            QPaintEngine::drawPoints(points, pointCount);
            return;
        }
        auto drawpoints_cb = qpaintengine_drawpoints_callback;
        if (drawpoints_cb) {
            QPointF* cbval1 = (QPointF*)points;
            int cbval2 = pointCount;

            drawpoints_cb(this, cbval1, cbval2);
            return;
        }
        QPaintEngine::drawPoints(points, pointCount);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPoints(const QPoint* points, int pointCount) override {
        if (qpaintengine_drawpoints2_isbase) {
            qpaintengine_drawpoints2_isbase = false;
            QPaintEngine::drawPoints(points, pointCount);
            return;
        }
        auto drawpoints2_cb = qpaintengine_drawpoints2_callback;
        if (drawpoints2_cb) {
            QPoint* cbval1 = (QPoint*)points;
            int cbval2 = pointCount;

            drawpoints2_cb(this, cbval1, cbval2);
            return;
        }
        QPaintEngine::drawPoints(points, pointCount);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPolygon(const QPointF* points, int pointCount, QPaintEngine::PolygonDrawMode mode) override {
        if (qpaintengine_drawpolygon_isbase) {
            qpaintengine_drawpolygon_isbase = false;
            QPaintEngine::drawPolygon(points, pointCount, mode);
            return;
        }
        auto drawpolygon_cb = qpaintengine_drawpolygon_callback;
        if (drawpolygon_cb) {
            QPointF* cbval1 = (QPointF*)points;
            int cbval2 = pointCount;
            int cbval3 = static_cast<int>(mode);

            drawpolygon_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QPaintEngine::drawPolygon(points, pointCount, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPolygon(const QPoint* points, int pointCount, QPaintEngine::PolygonDrawMode mode) override {
        if (qpaintengine_drawpolygon2_isbase) {
            qpaintengine_drawpolygon2_isbase = false;
            QPaintEngine::drawPolygon(points, pointCount, mode);
            return;
        }
        auto drawpolygon2_cb = qpaintengine_drawpolygon2_callback;
        if (drawpolygon2_cb) {
            QPoint* cbval1 = (QPoint*)points;
            int cbval2 = pointCount;
            int cbval3 = static_cast<int>(mode);

            drawpolygon2_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QPaintEngine::drawPolygon(points, pointCount, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPixmap(const QRectF& r, const QPixmap& pm, const QRectF& sr) override {
        auto drawpixmap_cb = qpaintengine_drawpixmap_callback;
        if (drawpixmap_cb) {
            const QRectF& r_ret = r;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&r_ret);
            const QPixmap& pm_ret = pm;
            // Cast returned reference into pointer
            QPixmap* cbval2 = const_cast<QPixmap*>(&pm_ret);
            const QRectF& sr_ret = sr;
            // Cast returned reference into pointer
            QRectF* cbval3 = const_cast<QRectF*>(&sr_ret);

            drawpixmap_cb(this, cbval1, cbval2, cbval3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawTextItem(const QPointF& p, const QTextItem& textItem) override {
        if (qpaintengine_drawtextitem_isbase) {
            qpaintengine_drawtextitem_isbase = false;
            QPaintEngine::drawTextItem(p, textItem);
            return;
        }
        auto drawtextitem_cb = qpaintengine_drawtextitem_callback;
        if (drawtextitem_cb) {
            const QPointF& p_ret = p;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&p_ret);
            const QTextItem& textItem_ret = textItem;
            // Cast returned reference into pointer
            QTextItem* cbval2 = const_cast<QTextItem*>(&textItem_ret);

            drawtextitem_cb(this, cbval1, cbval2);
            return;
        }
        QPaintEngine::drawTextItem(p, textItem);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawTiledPixmap(const QRectF& r, const QPixmap& pixmap, const QPointF& s) override {
        if (qpaintengine_drawtiledpixmap_isbase) {
            qpaintengine_drawtiledpixmap_isbase = false;
            QPaintEngine::drawTiledPixmap(r, pixmap, s);
            return;
        }
        auto drawtiledpixmap_cb = qpaintengine_drawtiledpixmap_callback;
        if (drawtiledpixmap_cb) {
            const QRectF& r_ret = r;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&r_ret);
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval2 = const_cast<QPixmap*>(&pixmap_ret);
            const QPointF& s_ret = s;
            // Cast returned reference into pointer
            QPointF* cbval3 = const_cast<QPointF*>(&s_ret);

            drawtiledpixmap_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QPaintEngine::drawTiledPixmap(r, pixmap, s);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawImage(const QRectF& r, const QImage& pm, const QRectF& sr, Qt::ImageConversionFlags flags) override {
        if (qpaintengine_drawimage_isbase) {
            qpaintengine_drawimage_isbase = false;
            QPaintEngine::drawImage(r, pm, sr, flags);
            return;
        }
        auto drawimage_cb = qpaintengine_drawimage_callback;
        if (drawimage_cb) {
            const QRectF& r_ret = r;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&r_ret);
            const QImage& pm_ret = pm;
            // Cast returned reference into pointer
            QImage* cbval2 = const_cast<QImage*>(&pm_ret);
            const QRectF& sr_ret = sr;
            // Cast returned reference into pointer
            QRectF* cbval3 = const_cast<QRectF*>(&sr_ret);
            int cbval4 = static_cast<int>(flags);

            drawimage_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QPaintEngine::drawImage(r, pm, sr, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPoint coordinateOffset() const override {
        if (qpaintengine_coordinateoffset_isbase) {
            qpaintengine_coordinateoffset_isbase = false;
            return QPaintEngine::coordinateOffset();
        }
        auto coordinateoffset_cb = qpaintengine_coordinateoffset_callback;
        if (coordinateoffset_cb) {
            QPoint* callback_ret = coordinateoffset_cb();
            return *callback_ret;
        }
        return QPaintEngine::coordinateOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine::Type type() const override {
        auto type_cb = qpaintengine_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<QPaintEngine::Type>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap createPixmap(QSize size) override {
        if (qpaintengine_createpixmap_isbase) {
            qpaintengine_createpixmap_isbase = false;
            return QPaintEngine::createPixmap(size);
        }
        auto createpixmap_cb = qpaintengine_createpixmap_callback;
        if (createpixmap_cb) {
            QSize* cbval1 = new QSize(size);

            QPixmap* callback_ret = createpixmap_cb(this, cbval1);
            return *callback_ret;
        }
        return QPaintEngine::createPixmap(size);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap createPixmapFromImage(QImage image, Qt::ImageConversionFlags flags) override {
        if (qpaintengine_createpixmapfromimage_isbase) {
            qpaintengine_createpixmapfromimage_isbase = false;
            return QPaintEngine::createPixmapFromImage(image, flags);
        }
        auto createpixmapfromimage_cb = qpaintengine_createpixmapfromimage_callback;
        if (createpixmapfromimage_cb) {
            QImage* cbval1 = new QImage(image);
            int cbval2 = static_cast<int>(flags);

            QPixmap* callback_ret = createpixmapfromimage_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QPaintEngine::createPixmapFromImage(image, flags);
    }
};

#endif
