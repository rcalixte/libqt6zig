#pragma once
#ifndef LIBQPAINTENGINE_HXX
#define LIBQPAINTENGINE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPaintEngine
class VirtualQPaintEngine : public QPaintEngine {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPaintEngine_Begin_Callback = bool (*)(QPaintEngine*, QPaintDevice*);
    using QPaintEngine_End_Callback = bool (*)(QPaintEngine*);
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
    using QPaintEngine_CoordinateOffset_Callback = QPoint* (*)(const QPaintEngine*);
    using QPaintEngine_Type_Callback = int (*)(const QPaintEngine*);
    using QPaintEngine_CreatePixmap_Callback = QPixmap* (*)(QPaintEngine*, QSize*);
    using QPaintEngine_CreatePixmapFromImage_Callback = QPixmap* (*)(QPaintEngine*, QImage*, int);

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

    VirtualQPaintEngine() : QPaintEngine() {};
    VirtualQPaintEngine(QPaintEngine::PaintEngineFeatures features) : QPaintEngine(features) {};

    // Virtual method for C ABI access and custom callback
    virtual bool begin(QPaintDevice* pdev) override {
        if (qpaintengine_begin_callback) {
            QPaintDevice* cbval1 = pdev;
            bool callback_ret = qpaintengine_begin_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QPaintEngine::begin called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool end() override {
        if (qpaintengine_end_callback) {
            bool callback_ret = qpaintengine_end_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QPaintEngine::end called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(const QPaintEngineState& state) override {
        if (qpaintengine_updatestate_callback) {
            const QPaintEngineState& state_ret = state;
            // Cast returned reference into pointer
            QPaintEngineState* cbval1 = const_cast<QPaintEngineState*>(&state_ret);
            qpaintengine_updatestate_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QPaintEngine::updateState called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawRects(const QRect* rects, int rectCount) override {
        if (qpaintengine_drawrects_callback) {
            QRect* cbval1 = (QRect*)rects;
            int cbval2 = rectCount;
            qpaintengine_drawrects_callback(this, cbval1, cbval2);
            return;
        }
        QPaintEngine::drawRects(rects, rectCount);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawRects(const QRectF* rects, int rectCount) override {
        if (qpaintengine_drawrects2_callback) {
            QRectF* cbval1 = (QRectF*)rects;
            int cbval2 = rectCount;
            qpaintengine_drawrects2_callback(this, cbval1, cbval2);
            return;
        }
        QPaintEngine::drawRects(rects, rectCount);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawLines(const QLine* lines, int lineCount) override {
        if (qpaintengine_drawlines_callback) {
            QLine* cbval1 = (QLine*)lines;
            int cbval2 = lineCount;
            qpaintengine_drawlines_callback(this, cbval1, cbval2);
            return;
        }
        QPaintEngine::drawLines(lines, lineCount);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawLines(const QLineF* lines, int lineCount) override {
        if (qpaintengine_drawlines2_callback) {
            QLineF* cbval1 = (QLineF*)lines;
            int cbval2 = lineCount;
            qpaintengine_drawlines2_callback(this, cbval1, cbval2);
            return;
        }
        QPaintEngine::drawLines(lines, lineCount);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawEllipse(const QRectF& r) override {
        if (qpaintengine_drawellipse_callback) {
            const QRectF& r_ret = r;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&r_ret);
            qpaintengine_drawellipse_callback(this, cbval1);
            return;
        }
        QPaintEngine::drawEllipse(r);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawEllipse(const QRect& r) override {
        if (qpaintengine_drawellipse2_callback) {
            const QRect& r_ret = r;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&r_ret);
            qpaintengine_drawellipse2_callback(this, cbval1);
            return;
        }
        QPaintEngine::drawEllipse(r);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPath(const QPainterPath& path) override {
        if (qpaintengine_drawpath_callback) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            qpaintengine_drawpath_callback(this, cbval1);
            return;
        }
        QPaintEngine::drawPath(path);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPoints(const QPointF* points, int pointCount) override {
        if (qpaintengine_drawpoints_callback) {
            QPointF* cbval1 = (QPointF*)points;
            int cbval2 = pointCount;
            qpaintengine_drawpoints_callback(this, cbval1, cbval2);
            return;
        }
        QPaintEngine::drawPoints(points, pointCount);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPoints(const QPoint* points, int pointCount) override {
        if (qpaintengine_drawpoints2_callback) {
            QPoint* cbval1 = (QPoint*)points;
            int cbval2 = pointCount;
            qpaintengine_drawpoints2_callback(this, cbval1, cbval2);
            return;
        }
        QPaintEngine::drawPoints(points, pointCount);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPolygon(const QPointF* points, int pointCount, QPaintEngine::PolygonDrawMode mode) override {
        if (qpaintengine_drawpolygon_callback) {
            QPointF* cbval1 = (QPointF*)points;
            int cbval2 = pointCount;
            int cbval3 = static_cast<int>(mode);
            qpaintengine_drawpolygon_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QPaintEngine::drawPolygon(points, pointCount, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPolygon(const QPoint* points, int pointCount, QPaintEngine::PolygonDrawMode mode) override {
        if (qpaintengine_drawpolygon2_callback) {
            QPoint* cbval1 = (QPoint*)points;
            int cbval2 = pointCount;
            int cbval3 = static_cast<int>(mode);
            qpaintengine_drawpolygon2_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QPaintEngine::drawPolygon(points, pointCount, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPixmap(const QRectF& r, const QPixmap& pm, const QRectF& sr) override {
        if (qpaintengine_drawpixmap_callback) {
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
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QPaintEngine::drawPixmap called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawTextItem(const QPointF& p, const QTextItem& textItem) override {
        if (qpaintengine_drawtextitem_callback) {
            const QPointF& p_ret = p;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&p_ret);
            const QTextItem& textItem_ret = textItem;
            // Cast returned reference into pointer
            QTextItem* cbval2 = const_cast<QTextItem*>(&textItem_ret);
            qpaintengine_drawtextitem_callback(this, cbval1, cbval2);
            return;
        }
        QPaintEngine::drawTextItem(p, textItem);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawTiledPixmap(const QRectF& r, const QPixmap& pixmap, const QPointF& s) override {
        if (qpaintengine_drawtiledpixmap_callback) {
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
            return;
        }
        QPaintEngine::drawTiledPixmap(r, pixmap, s);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawImage(const QRectF& r, const QImage& pm, const QRectF& sr, Qt::ImageConversionFlags flags) override {
        if (qpaintengine_drawimage_callback) {
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
            return;
        }
        QPaintEngine::drawImage(r, pm, sr, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPoint coordinateOffset() const override {
        if (qpaintengine_coordinateoffset_callback) {
            QPoint* callback_ret = qpaintengine_coordinateoffset_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPaintEngine::coordinateOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine::Type type() const override {
        if (qpaintengine_type_callback) {
            int callback_ret = qpaintengine_type_callback(this);
            return static_cast<QPaintEngine::Type>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QPaintEngine::type called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap createPixmap(QSize size) override {
        if (qpaintengine_createpixmap_callback) {
            QSize* cbval1 = new QSize(size);
            QPixmap* callback_ret = qpaintengine_createpixmap_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPaintEngine::createPixmap(size);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap createPixmapFromImage(QImage image, Qt::ImageConversionFlags flags) override {
        if (qpaintengine_createpixmapfromimage_callback) {
            QImage* cbval1 = new QImage(image);
            int cbval2 = static_cast<int>(flags);
            QPixmap* callback_ret = qpaintengine_createpixmapfromimage_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPaintEngine::createPixmapFromImage(image, flags);
    }
};

#endif
