#include <QBrush>
#include <QFont>
#include <QImage>
#include <QLine>
#include <QLineF>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEngineState>
#include <QPainter>
#include <QPainterPath>
#include <QPen>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextItem>
#include <QTransform>
#include <qpaintengine.h>
#include "libqpaintengine.h"
#include "libqpaintengine.hxx"

QTextItem* QTextItem_new(const QTextItem* other) {
    return new QTextItem(*other);
}

QTextItem* QTextItem_new2(QTextItem* other) {
    return new QTextItem(std::move(*other));
}

void QTextItem_CopyAssign(QTextItem* self, QTextItem* other) {
    *self = *other;
}

void QTextItem_MoveAssign(QTextItem* self, QTextItem* other) {
    *self = std::move(*other);
}

double QTextItem_Descent(const QTextItem* self) {
    return static_cast<double>(self->descent());
}

double QTextItem_Ascent(const QTextItem* self) {
    return static_cast<double>(self->ascent());
}

double QTextItem_Width(const QTextItem* self) {
    return static_cast<double>(self->width());
}

int QTextItem_RenderFlags(const QTextItem* self) {
    return static_cast<int>(self->renderFlags());
}

libqt_string QTextItem_Text(const QTextItem* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QFont* QTextItem_Font(const QTextItem* self) {
    return new QFont(self->font());
}

void QTextItem_Delete(QTextItem* self) {
    delete self;
}

QPaintEngine* QPaintEngine_new() {
    return new VirtualQPaintEngine();
}

QPaintEngine* QPaintEngine_new2(int features) {
    return new VirtualQPaintEngine(static_cast<QPaintEngine::PaintEngineFeatures>(features));
}

bool QPaintEngine_IsActive(const QPaintEngine* self) {
    return self->isActive();
}

void QPaintEngine_SetActive(QPaintEngine* self, bool newState) {
    self->setActive(newState);
}

void QPaintEngine_SetPaintDevice(QPaintEngine* self, QPaintDevice* device) {
    self->setPaintDevice(device);
}

QPaintDevice* QPaintEngine_PaintDevice(const QPaintEngine* self) {
    return self->paintDevice();
}

void QPaintEngine_SetSystemClip(QPaintEngine* self, const QRegion* baseClip) {
    self->setSystemClip(*baseClip);
}

QRegion* QPaintEngine_SystemClip(const QPaintEngine* self) {
    return new QRegion(self->systemClip());
}

void QPaintEngine_SetSystemRect(QPaintEngine* self, const QRect* rect) {
    self->setSystemRect(*rect);
}

QRect* QPaintEngine_SystemRect(const QPaintEngine* self) {
    return new QRect(self->systemRect());
}

void QPaintEngine_FixNegRect(QPaintEngine* self, int* x, int* y, int* w, int* h) {
    self->fix_neg_rect(static_cast<int*>(x), static_cast<int*>(y), static_cast<int*>(w), static_cast<int*>(h));
}

bool QPaintEngine_TestDirty(QPaintEngine* self, int df) {
    return self->testDirty(static_cast<QPaintEngine::DirtyFlags>(df));
}

void QPaintEngine_SetDirty(QPaintEngine* self, int df) {
    self->setDirty(static_cast<QPaintEngine::DirtyFlags>(df));
}

void QPaintEngine_ClearDirty(QPaintEngine* self, int df) {
    self->clearDirty(static_cast<QPaintEngine::DirtyFlags>(df));
}

bool QPaintEngine_HasFeature(const QPaintEngine* self, int feature) {
    return self->hasFeature(static_cast<QPaintEngine::PaintEngineFeatures>(feature));
}

QPainter* QPaintEngine_Painter(const QPaintEngine* self) {
    return self->painter();
}

void QPaintEngine_SyncState(QPaintEngine* self) {
    self->syncState();
}

bool QPaintEngine_IsExtended(const QPaintEngine* self) {
    return self->isExtended();
}

// Derived class handler implementation
bool QPaintEngine_Begin(QPaintEngine* self, QPaintDevice* pdev) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        return vqpaintengine->begin(pdev);
    } else {
        return ((VirtualQPaintEngine*)self)->begin(pdev);
    }
}

// Base class handler implementation
bool QPaintEngine_QBaseBegin(QPaintEngine* self, QPaintDevice* pdev) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_Begin_IsBase(true);
        return vqpaintengine->begin(pdev);
    } else {
        return ((VirtualQPaintEngine*)self)->begin(pdev);
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnBegin(QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_Begin_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_Begin_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPaintEngine_End(QPaintEngine* self) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        return vqpaintengine->end();
    } else {
        return ((VirtualQPaintEngine*)self)->end();
    }
}

// Base class handler implementation
bool QPaintEngine_QBaseEnd(QPaintEngine* self) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_End_IsBase(true);
        return vqpaintengine->end();
    } else {
        return ((VirtualQPaintEngine*)self)->end();
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnEnd(QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_End_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_End_Callback>(slot));
    }
}

// Derived class handler implementation
void QPaintEngine_UpdateState(QPaintEngine* self, const QPaintEngineState* state) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->updateState(*state);
    } else {
        ((VirtualQPaintEngine*)self)->updateState(*state);
    }
}

// Base class handler implementation
void QPaintEngine_QBaseUpdateState(QPaintEngine* self, const QPaintEngineState* state) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_UpdateState_IsBase(true);
        vqpaintengine->updateState(*state);
    } else {
        ((VirtualQPaintEngine*)self)->updateState(*state);
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnUpdateState(QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_UpdateState_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_UpdateState_Callback>(slot));
    }
}

// Derived class handler implementation
void QPaintEngine_DrawRects(QPaintEngine* self, const QRect* rects, int rectCount) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->drawRects(rects, static_cast<int>(rectCount));
    } else {
        self->QPaintEngine::drawRects(rects, static_cast<int>(rectCount));
    }
}

// Base class handler implementation
void QPaintEngine_QBaseDrawRects(QPaintEngine* self, const QRect* rects, int rectCount) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawRects_IsBase(true);
        vqpaintengine->drawRects(rects, static_cast<int>(rectCount));
    } else {
        self->QPaintEngine::drawRects(rects, static_cast<int>(rectCount));
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnDrawRects(QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawRects_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_DrawRects_Callback>(slot));
    }
}

// Derived class handler implementation
void QPaintEngine_DrawRects2(QPaintEngine* self, const QRectF* rects, int rectCount) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->drawRects(rects, static_cast<int>(rectCount));
    } else {
        self->QPaintEngine::drawRects(rects, static_cast<int>(rectCount));
    }
}

// Base class handler implementation
void QPaintEngine_QBaseDrawRects2(QPaintEngine* self, const QRectF* rects, int rectCount) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawRects2_IsBase(true);
        vqpaintengine->drawRects(rects, static_cast<int>(rectCount));
    } else {
        self->QPaintEngine::drawRects(rects, static_cast<int>(rectCount));
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnDrawRects2(QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawRects2_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_DrawRects2_Callback>(slot));
    }
}

// Derived class handler implementation
void QPaintEngine_DrawLines(QPaintEngine* self, const QLine* lines, int lineCount) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->drawLines(lines, static_cast<int>(lineCount));
    } else {
        self->QPaintEngine::drawLines(lines, static_cast<int>(lineCount));
    }
}

// Base class handler implementation
void QPaintEngine_QBaseDrawLines(QPaintEngine* self, const QLine* lines, int lineCount) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawLines_IsBase(true);
        vqpaintengine->drawLines(lines, static_cast<int>(lineCount));
    } else {
        self->QPaintEngine::drawLines(lines, static_cast<int>(lineCount));
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnDrawLines(QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawLines_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_DrawLines_Callback>(slot));
    }
}

// Derived class handler implementation
void QPaintEngine_DrawLines2(QPaintEngine* self, const QLineF* lines, int lineCount) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->drawLines(lines, static_cast<int>(lineCount));
    } else {
        self->QPaintEngine::drawLines(lines, static_cast<int>(lineCount));
    }
}

// Base class handler implementation
void QPaintEngine_QBaseDrawLines2(QPaintEngine* self, const QLineF* lines, int lineCount) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawLines2_IsBase(true);
        vqpaintengine->drawLines(lines, static_cast<int>(lineCount));
    } else {
        self->QPaintEngine::drawLines(lines, static_cast<int>(lineCount));
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnDrawLines2(QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawLines2_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_DrawLines2_Callback>(slot));
    }
}

// Derived class handler implementation
void QPaintEngine_DrawEllipse(QPaintEngine* self, const QRectF* r) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->drawEllipse(*r);
    } else {
        self->QPaintEngine::drawEllipse(*r);
    }
}

// Base class handler implementation
void QPaintEngine_QBaseDrawEllipse(QPaintEngine* self, const QRectF* r) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawEllipse_IsBase(true);
        vqpaintengine->drawEllipse(*r);
    } else {
        self->QPaintEngine::drawEllipse(*r);
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnDrawEllipse(QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawEllipse_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_DrawEllipse_Callback>(slot));
    }
}

// Derived class handler implementation
void QPaintEngine_DrawEllipseWithQRect(QPaintEngine* self, const QRect* r) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->drawEllipse(*r);
    } else {
        self->QPaintEngine::drawEllipse(*r);
    }
}

// Base class handler implementation
void QPaintEngine_QBaseDrawEllipseWithQRect(QPaintEngine* self, const QRect* r) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawEllipseWithQRect_IsBase(true);
        vqpaintengine->drawEllipse(*r);
    } else {
        self->QPaintEngine::drawEllipse(*r);
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnDrawEllipseWithQRect(QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawEllipseWithQRect_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_DrawEllipseWithQRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QPaintEngine_DrawPath(QPaintEngine* self, const QPainterPath* path) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->drawPath(*path);
    } else {
        self->QPaintEngine::drawPath(*path);
    }
}

// Base class handler implementation
void QPaintEngine_QBaseDrawPath(QPaintEngine* self, const QPainterPath* path) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawPath_IsBase(true);
        vqpaintengine->drawPath(*path);
    } else {
        self->QPaintEngine::drawPath(*path);
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnDrawPath(QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawPath_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_DrawPath_Callback>(slot));
    }
}

// Derived class handler implementation
void QPaintEngine_DrawPoints(QPaintEngine* self, const QPointF* points, int pointCount) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->drawPoints(points, static_cast<int>(pointCount));
    } else {
        self->QPaintEngine::drawPoints(points, static_cast<int>(pointCount));
    }
}

// Base class handler implementation
void QPaintEngine_QBaseDrawPoints(QPaintEngine* self, const QPointF* points, int pointCount) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawPoints_IsBase(true);
        vqpaintengine->drawPoints(points, static_cast<int>(pointCount));
    } else {
        self->QPaintEngine::drawPoints(points, static_cast<int>(pointCount));
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnDrawPoints(QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawPoints_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_DrawPoints_Callback>(slot));
    }
}

// Derived class handler implementation
void QPaintEngine_DrawPoints2(QPaintEngine* self, const QPoint* points, int pointCount) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->drawPoints(points, static_cast<int>(pointCount));
    } else {
        self->QPaintEngine::drawPoints(points, static_cast<int>(pointCount));
    }
}

// Base class handler implementation
void QPaintEngine_QBaseDrawPoints2(QPaintEngine* self, const QPoint* points, int pointCount) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawPoints2_IsBase(true);
        vqpaintengine->drawPoints(points, static_cast<int>(pointCount));
    } else {
        self->QPaintEngine::drawPoints(points, static_cast<int>(pointCount));
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnDrawPoints2(QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawPoints2_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_DrawPoints2_Callback>(slot));
    }
}

// Derived class handler implementation
void QPaintEngine_DrawPolygon(QPaintEngine* self, const QPointF* points, int pointCount, int mode) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));
    } else {
        self->QPaintEngine::drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));
    }
}

// Base class handler implementation
void QPaintEngine_QBaseDrawPolygon(QPaintEngine* self, const QPointF* points, int pointCount, int mode) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawPolygon_IsBase(true);
        vqpaintengine->drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));
    } else {
        self->QPaintEngine::drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnDrawPolygon(QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawPolygon_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_DrawPolygon_Callback>(slot));
    }
}

// Derived class handler implementation
void QPaintEngine_DrawPolygon2(QPaintEngine* self, const QPoint* points, int pointCount, int mode) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));
    } else {
        self->QPaintEngine::drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));
    }
}

// Base class handler implementation
void QPaintEngine_QBaseDrawPolygon2(QPaintEngine* self, const QPoint* points, int pointCount, int mode) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawPolygon2_IsBase(true);
        vqpaintengine->drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));
    } else {
        self->QPaintEngine::drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnDrawPolygon2(QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawPolygon2_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_DrawPolygon2_Callback>(slot));
    }
}

// Derived class handler implementation
void QPaintEngine_DrawPixmap(QPaintEngine* self, const QRectF* r, const QPixmap* pm, const QRectF* sr) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->drawPixmap(*r, *pm, *sr);
    } else {
        ((VirtualQPaintEngine*)self)->drawPixmap(*r, *pm, *sr);
    }
}

// Base class handler implementation
void QPaintEngine_QBaseDrawPixmap(QPaintEngine* self, const QRectF* r, const QPixmap* pm, const QRectF* sr) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawPixmap_IsBase(true);
        vqpaintengine->drawPixmap(*r, *pm, *sr);
    } else {
        ((VirtualQPaintEngine*)self)->drawPixmap(*r, *pm, *sr);
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnDrawPixmap(QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawPixmap_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_DrawPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
void QPaintEngine_DrawTextItem(QPaintEngine* self, const QPointF* p, const QTextItem* textItem) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->drawTextItem(*p, *textItem);
    } else {
        self->QPaintEngine::drawTextItem(*p, *textItem);
    }
}

// Base class handler implementation
void QPaintEngine_QBaseDrawTextItem(QPaintEngine* self, const QPointF* p, const QTextItem* textItem) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawTextItem_IsBase(true);
        vqpaintengine->drawTextItem(*p, *textItem);
    } else {
        self->QPaintEngine::drawTextItem(*p, *textItem);
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnDrawTextItem(QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawTextItem_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_DrawTextItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QPaintEngine_DrawTiledPixmap(QPaintEngine* self, const QRectF* r, const QPixmap* pixmap, const QPointF* s) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->drawTiledPixmap(*r, *pixmap, *s);
    } else {
        self->QPaintEngine::drawTiledPixmap(*r, *pixmap, *s);
    }
}

// Base class handler implementation
void QPaintEngine_QBaseDrawTiledPixmap(QPaintEngine* self, const QRectF* r, const QPixmap* pixmap, const QPointF* s) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawTiledPixmap_IsBase(true);
        vqpaintengine->drawTiledPixmap(*r, *pixmap, *s);
    } else {
        self->QPaintEngine::drawTiledPixmap(*r, *pixmap, *s);
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnDrawTiledPixmap(QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawTiledPixmap_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_DrawTiledPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
void QPaintEngine_DrawImage(QPaintEngine* self, const QRectF* r, const QImage* pm, const QRectF* sr, int flags) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->drawImage(*r, *pm, *sr, static_cast<Qt::ImageConversionFlags>(flags));
    } else {
        self->QPaintEngine::drawImage(*r, *pm, *sr, static_cast<Qt::ImageConversionFlags>(flags));
    }
}

// Base class handler implementation
void QPaintEngine_QBaseDrawImage(QPaintEngine* self, const QRectF* r, const QImage* pm, const QRectF* sr, int flags) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawImage_IsBase(true);
        vqpaintengine->drawImage(*r, *pm, *sr, static_cast<Qt::ImageConversionFlags>(flags));
    } else {
        self->QPaintEngine::drawImage(*r, *pm, *sr, static_cast<Qt::ImageConversionFlags>(flags));
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnDrawImage(QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_DrawImage_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_DrawImage_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* QPaintEngine_CoordinateOffset(const QPaintEngine* self) {
    auto* vqpaintengine = const_cast<VirtualQPaintEngine*>(dynamic_cast<const VirtualQPaintEngine*>(self));
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        return new QPoint(vqpaintengine->coordinateOffset());
    } else {
        return new QPoint(((VirtualQPaintEngine*)self)->coordinateOffset());
    }
}

// Base class handler implementation
QPoint* QPaintEngine_QBaseCoordinateOffset(const QPaintEngine* self) {
    auto* vqpaintengine = const_cast<VirtualQPaintEngine*>(dynamic_cast<const VirtualQPaintEngine*>(self));
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_CoordinateOffset_IsBase(true);
        return new QPoint(vqpaintengine->coordinateOffset());
    } else {
        return new QPoint(((VirtualQPaintEngine*)self)->coordinateOffset());
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnCoordinateOffset(const QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = const_cast<VirtualQPaintEngine*>(dynamic_cast<const VirtualQPaintEngine*>(self));
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_CoordinateOffset_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_CoordinateOffset_Callback>(slot));
    }
}

// Derived class handler implementation
int QPaintEngine_Type(const QPaintEngine* self) {
    auto* vqpaintengine = const_cast<VirtualQPaintEngine*>(dynamic_cast<const VirtualQPaintEngine*>(self));
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        return static_cast<int>(vqpaintengine->type());
    } else {
        return static_cast<int>(((VirtualQPaintEngine*)self)->type());
    }
}

// Base class handler implementation
int QPaintEngine_QBaseType(const QPaintEngine* self) {
    auto* vqpaintengine = const_cast<VirtualQPaintEngine*>(dynamic_cast<const VirtualQPaintEngine*>(self));
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_Type_IsBase(true);
        return static_cast<int>(vqpaintengine->type());
    } else {
        return static_cast<int>(((VirtualQPaintEngine*)self)->type());
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnType(const QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = const_cast<VirtualQPaintEngine*>(dynamic_cast<const VirtualQPaintEngine*>(self));
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_Type_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_Type_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QPaintEngine_CreatePixmap(QPaintEngine* self, QSize* size) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        return new QPixmap(vqpaintengine->createPixmap(*size));
    } else {
        return new QPixmap(((VirtualQPaintEngine*)self)->createPixmap(*size));
    }
}

// Base class handler implementation
QPixmap* QPaintEngine_QBaseCreatePixmap(QPaintEngine* self, QSize* size) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_CreatePixmap_IsBase(true);
        return new QPixmap(vqpaintengine->createPixmap(*size));
    } else {
        return new QPixmap(((VirtualQPaintEngine*)self)->createPixmap(*size));
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnCreatePixmap(QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_CreatePixmap_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_CreatePixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QPaintEngine_CreatePixmapFromImage(QPaintEngine* self, QImage* image, int flags) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        return new QPixmap(vqpaintengine->createPixmapFromImage(*image, static_cast<Qt::ImageConversionFlags>(flags)));
    } else {
        return new QPixmap(((VirtualQPaintEngine*)self)->createPixmapFromImage(*image, static_cast<Qt::ImageConversionFlags>(flags)));
    }
}

// Base class handler implementation
QPixmap* QPaintEngine_QBaseCreatePixmapFromImage(QPaintEngine* self, QImage* image, int flags) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_CreatePixmapFromImage_IsBase(true);
        return new QPixmap(vqpaintengine->createPixmapFromImage(*image, static_cast<Qt::ImageConversionFlags>(flags)));
    } else {
        return new QPixmap(((VirtualQPaintEngine*)self)->createPixmapFromImage(*image, static_cast<Qt::ImageConversionFlags>(flags)));
    }
}

// Auxiliary method to allow providing re-implementation
void QPaintEngine_OnCreatePixmapFromImage(QPaintEngine* self, intptr_t slot) {
    auto* vqpaintengine = dynamic_cast<VirtualQPaintEngine*>(self);
    if (vqpaintengine && vqpaintengine->isVirtualQPaintEngine) {
        vqpaintengine->setQPaintEngine_CreatePixmapFromImage_Callback(reinterpret_cast<VirtualQPaintEngine::QPaintEngine_CreatePixmapFromImage_Callback>(slot));
    }
}

void QPaintEngine_Delete(QPaintEngine* self) {
    delete self;
}

QPaintEngineState* QPaintEngineState_new(const QPaintEngineState* other) {
    return new QPaintEngineState(*other);
}

QPaintEngineState* QPaintEngineState_new2(QPaintEngineState* other) {
    return new QPaintEngineState(std::move(*other));
}

void QPaintEngineState_CopyAssign(QPaintEngineState* self, QPaintEngineState* other) {
    *self = *other;
}

void QPaintEngineState_MoveAssign(QPaintEngineState* self, QPaintEngineState* other) {
    *self = std::move(*other);
}

int QPaintEngineState_State(const QPaintEngineState* self) {
    return static_cast<int>(self->state());
}

QPen* QPaintEngineState_Pen(const QPaintEngineState* self) {
    return new QPen(self->pen());
}

QBrush* QPaintEngineState_Brush(const QPaintEngineState* self) {
    return new QBrush(self->brush());
}

QPointF* QPaintEngineState_BrushOrigin(const QPaintEngineState* self) {
    return new QPointF(self->brushOrigin());
}

QBrush* QPaintEngineState_BackgroundBrush(const QPaintEngineState* self) {
    return new QBrush(self->backgroundBrush());
}

int QPaintEngineState_BackgroundMode(const QPaintEngineState* self) {
    return static_cast<int>(self->backgroundMode());
}

QFont* QPaintEngineState_Font(const QPaintEngineState* self) {
    return new QFont(self->font());
}

QTransform* QPaintEngineState_Transform(const QPaintEngineState* self) {
    return new QTransform(self->transform());
}

int QPaintEngineState_ClipOperation(const QPaintEngineState* self) {
    return static_cast<int>(self->clipOperation());
}

QRegion* QPaintEngineState_ClipRegion(const QPaintEngineState* self) {
    return new QRegion(self->clipRegion());
}

QPainterPath* QPaintEngineState_ClipPath(const QPaintEngineState* self) {
    return new QPainterPath(self->clipPath());
}

bool QPaintEngineState_IsClipEnabled(const QPaintEngineState* self) {
    return self->isClipEnabled();
}

int QPaintEngineState_RenderHints(const QPaintEngineState* self) {
    return static_cast<int>(self->renderHints());
}

int QPaintEngineState_CompositionMode(const QPaintEngineState* self) {
    return static_cast<int>(self->compositionMode());
}

double QPaintEngineState_Opacity(const QPaintEngineState* self) {
    return static_cast<double>(self->opacity());
}

QPainter* QPaintEngineState_Painter(const QPaintEngineState* self) {
    return self->painter();
}

bool QPaintEngineState_BrushNeedsResolving(const QPaintEngineState* self) {
    return self->brushNeedsResolving();
}

bool QPaintEngineState_PenNeedsResolving(const QPaintEngineState* self) {
    return self->penNeedsResolving();
}

void QPaintEngineState_Delete(QPaintEngineState* self) {
    delete self;
}
