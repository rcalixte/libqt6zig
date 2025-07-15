#pragma once
#ifndef SRCC_LIBVIRTUALQPAINTENGINE_H
#define SRCC_LIBVIRTUALQPAINTENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPaintEngine so that we can call protected methods
class VirtualQPaintEngine final : public QPaintEngine {

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

    ~VirtualQPaintEngine() {
        qpaintengine_begin_callback = nullptr;
        qpaintengine_end_callback = nullptr;
        qpaintengine_updatestate_callback = nullptr;
        qpaintengine_drawrects_callback = nullptr;
        qpaintengine_drawrects2_callback = nullptr;
        qpaintengine_drawlines_callback = nullptr;
        qpaintengine_drawlines2_callback = nullptr;
        qpaintengine_drawellipse_callback = nullptr;
        qpaintengine_drawellipse2_callback = nullptr;
        qpaintengine_drawpath_callback = nullptr;
        qpaintengine_drawpoints_callback = nullptr;
        qpaintengine_drawpoints2_callback = nullptr;
        qpaintengine_drawpolygon_callback = nullptr;
        qpaintengine_drawpolygon2_callback = nullptr;
        qpaintengine_drawpixmap_callback = nullptr;
        qpaintengine_drawtextitem_callback = nullptr;
        qpaintengine_drawtiledpixmap_callback = nullptr;
        qpaintengine_drawimage_callback = nullptr;
        qpaintengine_coordinateoffset_callback = nullptr;
        qpaintengine_type_callback = nullptr;
        qpaintengine_createpixmap_callback = nullptr;
        qpaintengine_createpixmapfromimage_callback = nullptr;
    }

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
        if (qpaintengine_begin_callback != nullptr) {
            QPaintDevice* cbval1 = pdev;

            bool callback_ret = qpaintengine_begin_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool end() override {
        if (qpaintengine_end_callback != nullptr) {
            bool callback_ret = qpaintengine_end_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(const QPaintEngineState& state) override {
        if (qpaintengine_updatestate_callback != nullptr) {
            const QPaintEngineState& state_ret = state;
            // Cast returned reference into pointer
            QPaintEngineState* cbval1 = const_cast<QPaintEngineState*>(&state_ret);

            qpaintengine_updatestate_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawRects(const QRect* rects, int rectCount) override {
        if (qpaintengine_drawrects_isbase) {
            qpaintengine_drawrects_isbase = false;
            QPaintEngine::drawRects(rects, rectCount);
        } else if (qpaintengine_drawrects_callback != nullptr) {
            QRect* cbval1 = (QRect*)rects;
            int cbval2 = rectCount;

            qpaintengine_drawrects_callback(this, cbval1, cbval2);
        } else {
            QPaintEngine::drawRects(rects, rectCount);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawRects(const QRectF* rects, int rectCount) override {
        if (qpaintengine_drawrects2_isbase) {
            qpaintengine_drawrects2_isbase = false;
            QPaintEngine::drawRects(rects, rectCount);
        } else if (qpaintengine_drawrects2_callback != nullptr) {
            QRectF* cbval1 = (QRectF*)rects;
            int cbval2 = rectCount;

            qpaintengine_drawrects2_callback(this, cbval1, cbval2);
        } else {
            QPaintEngine::drawRects(rects, rectCount);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawLines(const QLine* lines, int lineCount) override {
        if (qpaintengine_drawlines_isbase) {
            qpaintengine_drawlines_isbase = false;
            QPaintEngine::drawLines(lines, lineCount);
        } else if (qpaintengine_drawlines_callback != nullptr) {
            QLine* cbval1 = (QLine*)lines;
            int cbval2 = lineCount;

            qpaintengine_drawlines_callback(this, cbval1, cbval2);
        } else {
            QPaintEngine::drawLines(lines, lineCount);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawLines(const QLineF* lines, int lineCount) override {
        if (qpaintengine_drawlines2_isbase) {
            qpaintengine_drawlines2_isbase = false;
            QPaintEngine::drawLines(lines, lineCount);
        } else if (qpaintengine_drawlines2_callback != nullptr) {
            QLineF* cbval1 = (QLineF*)lines;
            int cbval2 = lineCount;

            qpaintengine_drawlines2_callback(this, cbval1, cbval2);
        } else {
            QPaintEngine::drawLines(lines, lineCount);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawEllipse(const QRectF& r) override {
        if (qpaintengine_drawellipse_isbase) {
            qpaintengine_drawellipse_isbase = false;
            QPaintEngine::drawEllipse(r);
        } else if (qpaintengine_drawellipse_callback != nullptr) {
            const QRectF& r_ret = r;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&r_ret);

            qpaintengine_drawellipse_callback(this, cbval1);
        } else {
            QPaintEngine::drawEllipse(r);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawEllipse(const QRect& r) override {
        if (qpaintengine_drawellipse2_isbase) {
            qpaintengine_drawellipse2_isbase = false;
            QPaintEngine::drawEllipse(r);
        } else if (qpaintengine_drawellipse2_callback != nullptr) {
            const QRect& r_ret = r;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&r_ret);

            qpaintengine_drawellipse2_callback(this, cbval1);
        } else {
            QPaintEngine::drawEllipse(r);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPath(const QPainterPath& path) override {
        if (qpaintengine_drawpath_isbase) {
            qpaintengine_drawpath_isbase = false;
            QPaintEngine::drawPath(path);
        } else if (qpaintengine_drawpath_callback != nullptr) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);

            qpaintengine_drawpath_callback(this, cbval1);
        } else {
            QPaintEngine::drawPath(path);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPoints(const QPointF* points, int pointCount) override {
        if (qpaintengine_drawpoints_isbase) {
            qpaintengine_drawpoints_isbase = false;
            QPaintEngine::drawPoints(points, pointCount);
        } else if (qpaintengine_drawpoints_callback != nullptr) {
            QPointF* cbval1 = (QPointF*)points;
            int cbval2 = pointCount;

            qpaintengine_drawpoints_callback(this, cbval1, cbval2);
        } else {
            QPaintEngine::drawPoints(points, pointCount);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPoints(const QPoint* points, int pointCount) override {
        if (qpaintengine_drawpoints2_isbase) {
            qpaintengine_drawpoints2_isbase = false;
            QPaintEngine::drawPoints(points, pointCount);
        } else if (qpaintengine_drawpoints2_callback != nullptr) {
            QPoint* cbval1 = (QPoint*)points;
            int cbval2 = pointCount;

            qpaintengine_drawpoints2_callback(this, cbval1, cbval2);
        } else {
            QPaintEngine::drawPoints(points, pointCount);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPolygon(const QPointF* points, int pointCount, QPaintEngine::PolygonDrawMode mode) override {
        if (qpaintengine_drawpolygon_isbase) {
            qpaintengine_drawpolygon_isbase = false;
            QPaintEngine::drawPolygon(points, pointCount, mode);
        } else if (qpaintengine_drawpolygon_callback != nullptr) {
            QPointF* cbval1 = (QPointF*)points;
            int cbval2 = pointCount;
            int cbval3 = static_cast<int>(mode);

            qpaintengine_drawpolygon_callback(this, cbval1, cbval2, cbval3);
        } else {
            QPaintEngine::drawPolygon(points, pointCount, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPolygon(const QPoint* points, int pointCount, QPaintEngine::PolygonDrawMode mode) override {
        if (qpaintengine_drawpolygon2_isbase) {
            qpaintengine_drawpolygon2_isbase = false;
            QPaintEngine::drawPolygon(points, pointCount, mode);
        } else if (qpaintengine_drawpolygon2_callback != nullptr) {
            QPoint* cbval1 = (QPoint*)points;
            int cbval2 = pointCount;
            int cbval3 = static_cast<int>(mode);

            qpaintengine_drawpolygon2_callback(this, cbval1, cbval2, cbval3);
        } else {
            QPaintEngine::drawPolygon(points, pointCount, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPixmap(const QRectF& r, const QPixmap& pm, const QRectF& sr) override {
        if (qpaintengine_drawpixmap_callback != nullptr) {
            const QRectF& r_ret = r;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&r_ret);
            const QPixmap& pm_ret = pm;
            // Cast returned reference into pointer
            QPixmap* cbval2 = const_cast<QPixmap*>(&pm_ret);
            const QRectF& sr_ret = sr;
            // Cast returned reference into pointer
            QRectF* cbval3 = const_cast<QRectF*>(&sr_ret);

            qpaintengine_drawpixmap_callback(this, cbval1, cbval2, cbval3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawTextItem(const QPointF& p, const QTextItem& textItem) override {
        if (qpaintengine_drawtextitem_isbase) {
            qpaintengine_drawtextitem_isbase = false;
            QPaintEngine::drawTextItem(p, textItem);
        } else if (qpaintengine_drawtextitem_callback != nullptr) {
            const QPointF& p_ret = p;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&p_ret);
            const QTextItem& textItem_ret = textItem;
            // Cast returned reference into pointer
            QTextItem* cbval2 = const_cast<QTextItem*>(&textItem_ret);

            qpaintengine_drawtextitem_callback(this, cbval1, cbval2);
        } else {
            QPaintEngine::drawTextItem(p, textItem);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawTiledPixmap(const QRectF& r, const QPixmap& pixmap, const QPointF& s) override {
        if (qpaintengine_drawtiledpixmap_isbase) {
            qpaintengine_drawtiledpixmap_isbase = false;
            QPaintEngine::drawTiledPixmap(r, pixmap, s);
        } else if (qpaintengine_drawtiledpixmap_callback != nullptr) {
            const QRectF& r_ret = r;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&r_ret);
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval2 = const_cast<QPixmap*>(&pixmap_ret);
            const QPointF& s_ret = s;
            // Cast returned reference into pointer
            QPointF* cbval3 = const_cast<QPointF*>(&s_ret);

            qpaintengine_drawtiledpixmap_callback(this, cbval1, cbval2, cbval3);
        } else {
            QPaintEngine::drawTiledPixmap(r, pixmap, s);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawImage(const QRectF& r, const QImage& pm, const QRectF& sr, Qt::ImageConversionFlags flags) override {
        if (qpaintengine_drawimage_isbase) {
            qpaintengine_drawimage_isbase = false;
            QPaintEngine::drawImage(r, pm, sr, flags);
        } else if (qpaintengine_drawimage_callback != nullptr) {
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

            qpaintengine_drawimage_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QPaintEngine::drawImage(r, pm, sr, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPoint coordinateOffset() const override {
        if (qpaintengine_coordinateoffset_isbase) {
            qpaintengine_coordinateoffset_isbase = false;
            return QPaintEngine::coordinateOffset();
        } else if (qpaintengine_coordinateoffset_callback != nullptr) {
            QPoint* callback_ret = qpaintengine_coordinateoffset_callback();
            return *callback_ret;
        } else {
            return QPaintEngine::coordinateOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine::Type type() const override {
        if (qpaintengine_type_callback != nullptr) {
            int callback_ret = qpaintengine_type_callback();
            return static_cast<QPaintEngine::Type>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap createPixmap(QSize size) override {
        if (qpaintengine_createpixmap_isbase) {
            qpaintengine_createpixmap_isbase = false;
            return QPaintEngine::createPixmap(size);
        } else if (qpaintengine_createpixmap_callback != nullptr) {
            QSize* cbval1 = new QSize(size);

            QPixmap* callback_ret = qpaintengine_createpixmap_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QPaintEngine::createPixmap(size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap createPixmapFromImage(QImage image, Qt::ImageConversionFlags flags) override {
        if (qpaintengine_createpixmapfromimage_isbase) {
            qpaintengine_createpixmapfromimage_isbase = false;
            return QPaintEngine::createPixmapFromImage(image, flags);
        } else if (qpaintengine_createpixmapfromimage_callback != nullptr) {
            QImage* cbval1 = new QImage(image);
            int cbval2 = static_cast<int>(flags);

            QPixmap* callback_ret = qpaintengine_createpixmapfromimage_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QPaintEngine::createPixmapFromImage(image, flags);
        }
    }
};

#endif
