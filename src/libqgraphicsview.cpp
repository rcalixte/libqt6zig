#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QBrush>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPainterPath>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QTransform>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qgraphicsview.h>
#include "libqgraphicsview.h"
#include "libqgraphicsview.hxx"

QGraphicsView* QGraphicsView_new(QWidget* parent) {
    return new VirtualQGraphicsView(parent);
}

QGraphicsView* QGraphicsView_new2() {
    return new VirtualQGraphicsView();
}

QGraphicsView* QGraphicsView_new3(QGraphicsScene* scene) {
    return new VirtualQGraphicsView(scene);
}

QGraphicsView* QGraphicsView_new4(QGraphicsScene* scene, QWidget* parent) {
    return new VirtualQGraphicsView(scene, parent);
}

QMetaObject* QGraphicsView_MetaObject(const QGraphicsView* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsView_Metacast(QGraphicsView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsView_Metacall(QGraphicsView* self, int param1, int param2, void** param3) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGraphicsView*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsView_OnMetacall(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_Metacall_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsView_QBaseMetacall(QGraphicsView* self, int param1, int param2, void** param3) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_Metacall_IsBase(true);
        return vqgraphicsview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGraphicsView*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGraphicsView_Tr(const char* s) {
    QString _ret = QGraphicsView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QGraphicsView_RenderHints(const QGraphicsView* self) {
    return static_cast<int>(self->renderHints());
}

void QGraphicsView_SetRenderHint(QGraphicsView* self, int hint) {
    self->setRenderHint(static_cast<QPainter::RenderHint>(hint));
}

void QGraphicsView_SetRenderHints(QGraphicsView* self, int hints) {
    self->setRenderHints(static_cast<QPainter::RenderHints>(hints));
}

int QGraphicsView_Alignment(const QGraphicsView* self) {
    return static_cast<int>(self->alignment());
}

void QGraphicsView_SetAlignment(QGraphicsView* self, int alignment) {
    self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

int QGraphicsView_TransformationAnchor(const QGraphicsView* self) {
    return static_cast<int>(self->transformationAnchor());
}

void QGraphicsView_SetTransformationAnchor(QGraphicsView* self, int anchor) {
    self->setTransformationAnchor(static_cast<QGraphicsView::ViewportAnchor>(anchor));
}

int QGraphicsView_ResizeAnchor(const QGraphicsView* self) {
    return static_cast<int>(self->resizeAnchor());
}

void QGraphicsView_SetResizeAnchor(QGraphicsView* self, int anchor) {
    self->setResizeAnchor(static_cast<QGraphicsView::ViewportAnchor>(anchor));
}

int QGraphicsView_ViewportUpdateMode(const QGraphicsView* self) {
    return static_cast<int>(self->viewportUpdateMode());
}

void QGraphicsView_SetViewportUpdateMode(QGraphicsView* self, int mode) {
    self->setViewportUpdateMode(static_cast<QGraphicsView::ViewportUpdateMode>(mode));
}

int QGraphicsView_OptimizationFlags(const QGraphicsView* self) {
    return static_cast<int>(self->optimizationFlags());
}

void QGraphicsView_SetOptimizationFlag(QGraphicsView* self, int flag) {
    self->setOptimizationFlag(static_cast<QGraphicsView::OptimizationFlag>(flag));
}

void QGraphicsView_SetOptimizationFlags(QGraphicsView* self, int flags) {
    self->setOptimizationFlags(static_cast<QGraphicsView::OptimizationFlags>(flags));
}

int QGraphicsView_DragMode(const QGraphicsView* self) {
    return static_cast<int>(self->dragMode());
}

void QGraphicsView_SetDragMode(QGraphicsView* self, int mode) {
    self->setDragMode(static_cast<QGraphicsView::DragMode>(mode));
}

int QGraphicsView_RubberBandSelectionMode(const QGraphicsView* self) {
    return static_cast<int>(self->rubberBandSelectionMode());
}

void QGraphicsView_SetRubberBandSelectionMode(QGraphicsView* self, int mode) {
    self->setRubberBandSelectionMode(static_cast<Qt::ItemSelectionMode>(mode));
}

QRect* QGraphicsView_RubberBandRect(const QGraphicsView* self) {
    return new QRect(self->rubberBandRect());
}

int QGraphicsView_CacheMode(const QGraphicsView* self) {
    return static_cast<int>(self->cacheMode());
}

void QGraphicsView_SetCacheMode(QGraphicsView* self, int mode) {
    self->setCacheMode(static_cast<QGraphicsView::CacheMode>(mode));
}

void QGraphicsView_ResetCachedContent(QGraphicsView* self) {
    self->resetCachedContent();
}

bool QGraphicsView_IsInteractive(const QGraphicsView* self) {
    return self->isInteractive();
}

void QGraphicsView_SetInteractive(QGraphicsView* self, bool allowed) {
    self->setInteractive(allowed);
}

QGraphicsScene* QGraphicsView_Scene(const QGraphicsView* self) {
    return self->scene();
}

void QGraphicsView_SetScene(QGraphicsView* self, QGraphicsScene* scene) {
    self->setScene(scene);
}

QRectF* QGraphicsView_SceneRect(const QGraphicsView* self) {
    return new QRectF(self->sceneRect());
}

void QGraphicsView_SetSceneRect(QGraphicsView* self, const QRectF* rect) {
    self->setSceneRect(*rect);
}

void QGraphicsView_SetSceneRect2(QGraphicsView* self, double x, double y, double w, double h) {
    self->setSceneRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QTransform* QGraphicsView_Transform(const QGraphicsView* self) {
    return new QTransform(self->transform());
}

QTransform* QGraphicsView_ViewportTransform(const QGraphicsView* self) {
    return new QTransform(self->viewportTransform());
}

bool QGraphicsView_IsTransformed(const QGraphicsView* self) {
    return self->isTransformed();
}

void QGraphicsView_SetTransform(QGraphicsView* self, const QTransform* matrix) {
    self->setTransform(*matrix);
}

void QGraphicsView_ResetTransform(QGraphicsView* self) {
    self->resetTransform();
}

void QGraphicsView_Rotate(QGraphicsView* self, double angle) {
    self->rotate(static_cast<qreal>(angle));
}

void QGraphicsView_Scale(QGraphicsView* self, double sx, double sy) {
    self->scale(static_cast<qreal>(sx), static_cast<qreal>(sy));
}

void QGraphicsView_Shear(QGraphicsView* self, double sh, double sv) {
    self->shear(static_cast<qreal>(sh), static_cast<qreal>(sv));
}

void QGraphicsView_Translate(QGraphicsView* self, double dx, double dy) {
    self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QGraphicsView_CenterOn(QGraphicsView* self, const QPointF* pos) {
    self->centerOn(*pos);
}

void QGraphicsView_CenterOn2(QGraphicsView* self, double x, double y) {
    self->centerOn(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QGraphicsView_CenterOn3(QGraphicsView* self, const QGraphicsItem* item) {
    self->centerOn(item);
}

void QGraphicsView_EnsureVisible(QGraphicsView* self, const QRectF* rect) {
    self->ensureVisible(*rect);
}

void QGraphicsView_EnsureVisible2(QGraphicsView* self, double x, double y, double w, double h) {
    self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsView_EnsureVisible3(QGraphicsView* self, const QGraphicsItem* item) {
    self->ensureVisible(item);
}

void QGraphicsView_FitInView(QGraphicsView* self, const QRectF* rect) {
    self->fitInView(*rect);
}

void QGraphicsView_FitInView2(QGraphicsView* self, double x, double y, double w, double h) {
    self->fitInView(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsView_FitInView3(QGraphicsView* self, const QGraphicsItem* item) {
    self->fitInView(item);
}

void QGraphicsView_Render(QGraphicsView* self, QPainter* painter) {
    self->render(painter);
}

libqt_list /* of QGraphicsItem* */ QGraphicsView_Items(const QGraphicsView* self) {
    QList<QGraphicsItem*> _ret = self->items();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QGraphicsItem* */ QGraphicsView_Items2(const QGraphicsView* self, const QPoint* pos) {
    QList<QGraphicsItem*> _ret = self->items(*pos);
    // Convert QList<> from C++ memory to manually-managed C memory
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QGraphicsItem* */ QGraphicsView_Items3(const QGraphicsView* self, int x, int y) {
    QList<QGraphicsItem*> _ret = self->items(static_cast<int>(x), static_cast<int>(y));
    // Convert QList<> from C++ memory to manually-managed C memory
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QGraphicsItem* */ QGraphicsView_Items4(const QGraphicsView* self, const QRect* rect) {
    QList<QGraphicsItem*> _ret = self->items(*rect);
    // Convert QList<> from C++ memory to manually-managed C memory
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QGraphicsItem* */ QGraphicsView_Items5(const QGraphicsView* self, int x, int y, int w, int h) {
    QList<QGraphicsItem*> _ret = self->items(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
    // Convert QList<> from C++ memory to manually-managed C memory
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QGraphicsItem* */ QGraphicsView_Items7(const QGraphicsView* self, const QPainterPath* path) {
    QList<QGraphicsItem*> _ret = self->items(*path);
    // Convert QList<> from C++ memory to manually-managed C memory
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QGraphicsItem* QGraphicsView_ItemAt(const QGraphicsView* self, const QPoint* pos) {
    return self->itemAt(*pos);
}

QGraphicsItem* QGraphicsView_ItemAt2(const QGraphicsView* self, int x, int y) {
    return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QPointF* QGraphicsView_MapToScene(const QGraphicsView* self, const QPoint* point) {
    return new QPointF(self->mapToScene(*point));
}

QPainterPath* QGraphicsView_MapToScene4(const QGraphicsView* self, const QPainterPath* path) {
    return new QPainterPath(self->mapToScene(*path));
}

QPoint* QGraphicsView_MapFromScene(const QGraphicsView* self, const QPointF* point) {
    return new QPoint(self->mapFromScene(*point));
}

QPainterPath* QGraphicsView_MapFromScene4(const QGraphicsView* self, const QPainterPath* path) {
    return new QPainterPath(self->mapFromScene(*path));
}

QPointF* QGraphicsView_MapToScene5(const QGraphicsView* self, int x, int y) {
    return new QPointF(self->mapToScene(static_cast<int>(x), static_cast<int>(y)));
}

QPoint* QGraphicsView_MapFromScene5(const QGraphicsView* self, double x, double y) {
    return new QPoint(self->mapFromScene(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QBrush* QGraphicsView_BackgroundBrush(const QGraphicsView* self) {
    return new QBrush(self->backgroundBrush());
}

void QGraphicsView_SetBackgroundBrush(QGraphicsView* self, const QBrush* brush) {
    self->setBackgroundBrush(*brush);
}

QBrush* QGraphicsView_ForegroundBrush(const QGraphicsView* self) {
    return new QBrush(self->foregroundBrush());
}

void QGraphicsView_SetForegroundBrush(QGraphicsView* self, const QBrush* brush) {
    self->setForegroundBrush(*brush);
}

void QGraphicsView_UpdateScene(QGraphicsView* self, const libqt_list /* of QRectF* */ rects) {
    QList<QRectF> rects_QList;
    rects_QList.reserve(rects.len);
    QRectF** rects_arr = static_cast<QRectF**>(rects.data);
    for (size_t i = 0; i < rects.len; ++i) {
        rects_QList.push_back(*(rects_arr[i]));
    }
    self->updateScene(rects_QList);
}

void QGraphicsView_InvalidateScene(QGraphicsView* self) {
    self->invalidateScene();
}

void QGraphicsView_UpdateSceneRect(QGraphicsView* self, const QRectF* rect) {
    self->updateSceneRect(*rect);
}

void QGraphicsView_RubberBandChanged(QGraphicsView* self, QRect* viewportRect, QPointF* fromScenePoint, QPointF* toScenePoint) {
    self->rubberBandChanged(*viewportRect, *fromScenePoint, *toScenePoint);
}

void QGraphicsView_Connect_RubberBandChanged(QGraphicsView* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsView*, QRect*, QPointF*, QPointF*) = reinterpret_cast<void (*)(QGraphicsView*, QRect*, QPointF*, QPointF*)>(slot);
    QGraphicsView::connect(self, &QGraphicsView::rubberBandChanged, [self, slotFunc](QRect viewportRect, QPointF fromScenePoint, QPointF toScenePoint) {
        QRect* sigval1 = new QRect(viewportRect);
        QPointF* sigval2 = new QPointF(fromScenePoint);
        QPointF* sigval3 = new QPointF(toScenePoint);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

libqt_string QGraphicsView_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsView_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsView::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGraphicsView_SetRenderHint2(QGraphicsView* self, int hint, bool enabled) {
    self->setRenderHint(static_cast<QPainter::RenderHint>(hint), enabled);
}

void QGraphicsView_SetOptimizationFlag2(QGraphicsView* self, int flag, bool enabled) {
    self->setOptimizationFlag(static_cast<QGraphicsView::OptimizationFlag>(flag), enabled);
}

void QGraphicsView_SetTransform2(QGraphicsView* self, const QTransform* matrix, bool combine) {
    self->setTransform(*matrix, combine);
}

void QGraphicsView_EnsureVisible22(QGraphicsView* self, const QRectF* rect, int xmargin) {
    self->ensureVisible(*rect, static_cast<int>(xmargin));
}

void QGraphicsView_EnsureVisible32(QGraphicsView* self, const QRectF* rect, int xmargin, int ymargin) {
    self->ensureVisible(*rect, static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsView_EnsureVisible5(QGraphicsView* self, double x, double y, double w, double h, int xmargin) {
    self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xmargin));
}

void QGraphicsView_EnsureVisible6(QGraphicsView* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsView_EnsureVisible23(QGraphicsView* self, const QGraphicsItem* item, int xmargin) {
    self->ensureVisible(item, static_cast<int>(xmargin));
}

void QGraphicsView_EnsureVisible33(QGraphicsView* self, const QGraphicsItem* item, int xmargin, int ymargin) {
    self->ensureVisible(item, static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsView_FitInView22(QGraphicsView* self, const QRectF* rect, int aspectRadioMode) {
    self->fitInView(*rect, static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_FitInView5(QGraphicsView* self, double x, double y, double w, double h, int aspectRadioMode) {
    self->fitInView(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_FitInView23(QGraphicsView* self, const QGraphicsItem* item, int aspectRadioMode) {
    self->fitInView(item, static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_Render2(QGraphicsView* self, QPainter* painter, const QRectF* target) {
    self->render(painter, *target);
}

void QGraphicsView_Render3(QGraphicsView* self, QPainter* painter, const QRectF* target, const QRect* source) {
    self->render(painter, *target, *source);
}

void QGraphicsView_Render4(QGraphicsView* self, QPainter* painter, const QRectF* target, const QRect* source, int aspectRatioMode) {
    self->render(painter, *target, *source, static_cast<Qt::AspectRatioMode>(aspectRatioMode));
}

libqt_list /* of QGraphicsItem* */ QGraphicsView_Items22(const QGraphicsView* self, const QRect* rect, int mode) {
    QList<QGraphicsItem*> _ret = self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode));
    // Convert QList<> from C++ memory to manually-managed C memory
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QGraphicsItem* */ QGraphicsView_Items52(const QGraphicsView* self, int x, int y, int w, int h, int mode) {
    QList<QGraphicsItem*> _ret = self->items(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::ItemSelectionMode>(mode));
    // Convert QList<> from C++ memory to manually-managed C memory
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QGraphicsItem* */ QGraphicsView_Items24(const QGraphicsView* self, const QPainterPath* path, int mode) {
    QList<QGraphicsItem*> _ret = self->items(*path, static_cast<Qt::ItemSelectionMode>(mode));
    // Convert QList<> from C++ memory to manually-managed C memory
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGraphicsView_InvalidateScene1(QGraphicsView* self, const QRectF* rect) {
    self->invalidateScene(*rect);
}

void QGraphicsView_InvalidateScene2(QGraphicsView* self, const QRectF* rect, int layers) {
    self->invalidateScene(*rect, static_cast<QGraphicsScene::SceneLayers>(layers));
}

// Derived class handler implementation
QSize* QGraphicsView_SizeHint(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return new QSize(vqgraphicsview->sizeHint());
    } else {
        return new QSize(((VirtualQGraphicsView*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QGraphicsView_QBaseSizeHint(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_SizeHint_IsBase(true);
        return new QSize(vqgraphicsview->sizeHint());
    } else {
        return new QSize(((VirtualQGraphicsView*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnSizeHint(const QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_SizeHint_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsView_InputMethodQuery(const QGraphicsView* self, int query) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return new QVariant(vqgraphicsview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQGraphicsView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QGraphicsView_QBaseInputMethodQuery(const QGraphicsView* self, int query) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_InputMethodQuery_IsBase(true);
        return new QVariant(vqgraphicsview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQGraphicsView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnInputMethodQuery(const QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_SetupViewport(QGraphicsView* self, QWidget* widget) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setupViewport(widget);
    } else {
        ((VirtualQGraphicsView*)self)->setupViewport(widget);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseSetupViewport(QGraphicsView* self, QWidget* widget) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_SetupViewport_IsBase(true);
        vqgraphicsview->setupViewport(widget);
    } else {
        ((VirtualQGraphicsView*)self)->setupViewport(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnSetupViewport(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_SetupViewport_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsView_Event(QGraphicsView* self, QEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return vqgraphicsview->event(event);
    } else {
        return ((VirtualQGraphicsView*)self)->event(event);
    }
}

// Base class handler implementation
bool QGraphicsView_QBaseEvent(QGraphicsView* self, QEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_Event_IsBase(true);
        return vqgraphicsview->event(event);
    } else {
        return ((VirtualQGraphicsView*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_Event_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsView_ViewportEvent(QGraphicsView* self, QEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return vqgraphicsview->viewportEvent(event);
    } else {
        return ((VirtualQGraphicsView*)self)->viewportEvent(event);
    }
}

// Base class handler implementation
bool QGraphicsView_QBaseViewportEvent(QGraphicsView* self, QEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ViewportEvent_IsBase(true);
        return vqgraphicsview->viewportEvent(event);
    } else {
        return ((VirtualQGraphicsView*)self)->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnViewportEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ViewportEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_ContextMenuEvent(QGraphicsView* self, QContextMenuEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->contextMenuEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseContextMenuEvent(QGraphicsView* self, QContextMenuEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ContextMenuEvent_IsBase(true);
        vqgraphicsview->contextMenuEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnContextMenuEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_DragEnterEvent(QGraphicsView* self, QDragEnterEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->dragEnterEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseDragEnterEvent(QGraphicsView* self, QDragEnterEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_DragEnterEvent_IsBase(true);
        vqgraphicsview->dragEnterEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDragEnterEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_DragLeaveEvent(QGraphicsView* self, QDragLeaveEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->dragLeaveEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseDragLeaveEvent(QGraphicsView* self, QDragLeaveEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_DragLeaveEvent_IsBase(true);
        vqgraphicsview->dragLeaveEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDragLeaveEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_DragMoveEvent(QGraphicsView* self, QDragMoveEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->dragMoveEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseDragMoveEvent(QGraphicsView* self, QDragMoveEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_DragMoveEvent_IsBase(true);
        vqgraphicsview->dragMoveEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDragMoveEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_DropEvent(QGraphicsView* self, QDropEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->dropEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseDropEvent(QGraphicsView* self, QDropEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_DropEvent_IsBase(true);
        vqgraphicsview->dropEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDropEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_FocusInEvent(QGraphicsView* self, QFocusEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->focusInEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseFocusInEvent(QGraphicsView* self, QFocusEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_FocusInEvent_IsBase(true);
        vqgraphicsview->focusInEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnFocusInEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsView_FocusNextPrevChild(QGraphicsView* self, bool next) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return vqgraphicsview->focusNextPrevChild(next);
    } else {
        return ((VirtualQGraphicsView*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QGraphicsView_QBaseFocusNextPrevChild(QGraphicsView* self, bool next) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_FocusNextPrevChild_IsBase(true);
        return vqgraphicsview->focusNextPrevChild(next);
    } else {
        return ((VirtualQGraphicsView*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnFocusNextPrevChild(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_FocusOutEvent(QGraphicsView* self, QFocusEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->focusOutEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseFocusOutEvent(QGraphicsView* self, QFocusEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_FocusOutEvent_IsBase(true);
        vqgraphicsview->focusOutEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnFocusOutEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_KeyPressEvent(QGraphicsView* self, QKeyEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->keyPressEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseKeyPressEvent(QGraphicsView* self, QKeyEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_KeyPressEvent_IsBase(true);
        vqgraphicsview->keyPressEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnKeyPressEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_KeyReleaseEvent(QGraphicsView* self, QKeyEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->keyReleaseEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseKeyReleaseEvent(QGraphicsView* self, QKeyEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_KeyReleaseEvent_IsBase(true);
        vqgraphicsview->keyReleaseEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnKeyReleaseEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_MouseDoubleClickEvent(QGraphicsView* self, QMouseEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseMouseDoubleClickEvent(QGraphicsView* self, QMouseEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_MouseDoubleClickEvent_IsBase(true);
        vqgraphicsview->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMouseDoubleClickEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_MousePressEvent(QGraphicsView* self, QMouseEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->mousePressEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseMousePressEvent(QGraphicsView* self, QMouseEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_MousePressEvent_IsBase(true);
        vqgraphicsview->mousePressEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMousePressEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_MouseMoveEvent(QGraphicsView* self, QMouseEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->mouseMoveEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseMouseMoveEvent(QGraphicsView* self, QMouseEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_MouseMoveEvent_IsBase(true);
        vqgraphicsview->mouseMoveEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMouseMoveEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_MouseReleaseEvent(QGraphicsView* self, QMouseEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->mouseReleaseEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseMouseReleaseEvent(QGraphicsView* self, QMouseEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_MouseReleaseEvent_IsBase(true);
        vqgraphicsview->mouseReleaseEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMouseReleaseEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_WheelEvent(QGraphicsView* self, QWheelEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->wheelEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseWheelEvent(QGraphicsView* self, QWheelEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_WheelEvent_IsBase(true);
        vqgraphicsview->wheelEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnWheelEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_PaintEvent(QGraphicsView* self, QPaintEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->paintEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBasePaintEvent(QGraphicsView* self, QPaintEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_PaintEvent_IsBase(true);
        vqgraphicsview->paintEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnPaintEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_PaintEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_ResizeEvent(QGraphicsView* self, QResizeEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->resizeEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseResizeEvent(QGraphicsView* self, QResizeEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ResizeEvent_IsBase(true);
        vqgraphicsview->resizeEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnResizeEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ResizeEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_ScrollContentsBy(QGraphicsView* self, int dx, int dy) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQGraphicsView*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QGraphicsView_QBaseScrollContentsBy(QGraphicsView* self, int dx, int dy) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ScrollContentsBy_IsBase(true);
        vqgraphicsview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQGraphicsView*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnScrollContentsBy(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_ShowEvent(QGraphicsView* self, QShowEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->showEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseShowEvent(QGraphicsView* self, QShowEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ShowEvent_IsBase(true);
        vqgraphicsview->showEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnShowEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ShowEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_InputMethodEvent(QGraphicsView* self, QInputMethodEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->inputMethodEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseInputMethodEvent(QGraphicsView* self, QInputMethodEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_InputMethodEvent_IsBase(true);
        vqgraphicsview->inputMethodEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnInputMethodEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_DrawBackground(QGraphicsView* self, QPainter* painter, const QRectF* rect) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->drawBackground(painter, *rect);
    } else {
        ((VirtualQGraphicsView*)self)->drawBackground(painter, *rect);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseDrawBackground(QGraphicsView* self, QPainter* painter, const QRectF* rect) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_DrawBackground_IsBase(true);
        vqgraphicsview->drawBackground(painter, *rect);
    } else {
        ((VirtualQGraphicsView*)self)->drawBackground(painter, *rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDrawBackground(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_DrawBackground_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DrawBackground_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_DrawForeground(QGraphicsView* self, QPainter* painter, const QRectF* rect) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->drawForeground(painter, *rect);
    } else {
        ((VirtualQGraphicsView*)self)->drawForeground(painter, *rect);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseDrawForeground(QGraphicsView* self, QPainter* painter, const QRectF* rect) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_DrawForeground_IsBase(true);
        vqgraphicsview->drawForeground(painter, *rect);
    } else {
        ((VirtualQGraphicsView*)self)->drawForeground(painter, *rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDrawForeground(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_DrawForeground_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DrawForeground_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QGraphicsView_MinimumSizeHint(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return new QSize(vqgraphicsview->minimumSizeHint());
    } else {
        return new QSize(((VirtualQGraphicsView*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QGraphicsView_QBaseMinimumSizeHint(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_MinimumSizeHint_IsBase(true);
        return new QSize(vqgraphicsview->minimumSizeHint());
    } else {
        return new QSize(((VirtualQGraphicsView*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMinimumSizeHint(const QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_MinimumSizeHint_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsView_EventFilter(QGraphicsView* self, QObject* param1, QEvent* param2) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return vqgraphicsview->eventFilter(param1, param2);
    } else {
        return ((VirtualQGraphicsView*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QGraphicsView_QBaseEventFilter(QGraphicsView* self, QObject* param1, QEvent* param2) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_EventFilter_IsBase(true);
        return vqgraphicsview->eventFilter(param1, param2);
    } else {
        return ((VirtualQGraphicsView*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnEventFilter(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QGraphicsView_ViewportSizeHint(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return new QSize(vqgraphicsview->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QGraphicsView_QBaseViewportSizeHint(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ViewportSizeHint_IsBase(true);
        return new QSize(vqgraphicsview->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnViewportSizeHint(const QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_ChangeEvent(QGraphicsView* self, QEvent* param1) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->changeEvent(param1);
    } else {
        ((VirtualQGraphicsView*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseChangeEvent(QGraphicsView* self, QEvent* param1) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ChangeEvent_IsBase(true);
        vqgraphicsview->changeEvent(param1);
    } else {
        ((VirtualQGraphicsView*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnChangeEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ChangeEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_InitStyleOption(const QGraphicsView* self, QStyleOptionFrame* option) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->initStyleOption(option);
    } else {
        ((VirtualQGraphicsView*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseInitStyleOption(const QGraphicsView* self, QStyleOptionFrame* option) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_InitStyleOption_IsBase(true);
        vqgraphicsview->initStyleOption(option);
    } else {
        ((VirtualQGraphicsView*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnInitStyleOption(const QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_InitStyleOption_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsView_DevType(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return vqgraphicsview->devType();
    } else {
        return self->QGraphicsView::devType();
    }
}

// Base class handler implementation
int QGraphicsView_QBaseDevType(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_DevType_IsBase(true);
        return vqgraphicsview->devType();
    } else {
        return self->QGraphicsView::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDevType(const QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_DevType_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_SetVisible(QGraphicsView* self, bool visible) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setVisible(visible);
    } else {
        self->QGraphicsView::setVisible(visible);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseSetVisible(QGraphicsView* self, bool visible) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_SetVisible_IsBase(true);
        vqgraphicsview->setVisible(visible);
    } else {
        self->QGraphicsView::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnSetVisible(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_SetVisible_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsView_HeightForWidth(const QGraphicsView* self, int param1) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return vqgraphicsview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QGraphicsView::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QGraphicsView_QBaseHeightForWidth(const QGraphicsView* self, int param1) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_HeightForWidth_IsBase(true);
        return vqgraphicsview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QGraphicsView::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnHeightForWidth(const QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_HeightForWidth_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsView_HasHeightForWidth(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return vqgraphicsview->hasHeightForWidth();
    } else {
        return self->QGraphicsView::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QGraphicsView_QBaseHasHeightForWidth(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_HasHeightForWidth_IsBase(true);
        return vqgraphicsview->hasHeightForWidth();
    } else {
        return self->QGraphicsView::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnHasHeightForWidth(const QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_HasHeightForWidth_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QGraphicsView_PaintEngine(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return vqgraphicsview->paintEngine();
    } else {
        return self->QGraphicsView::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QGraphicsView_QBasePaintEngine(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_PaintEngine_IsBase(true);
        return vqgraphicsview->paintEngine();
    } else {
        return self->QGraphicsView::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnPaintEngine(const QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_PaintEngine_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_EnterEvent(QGraphicsView* self, QEnterEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->enterEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseEnterEvent(QGraphicsView* self, QEnterEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_EnterEvent_IsBase(true);
        vqgraphicsview->enterEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnEnterEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_EnterEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_LeaveEvent(QGraphicsView* self, QEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->leaveEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseLeaveEvent(QGraphicsView* self, QEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_LeaveEvent_IsBase(true);
        vqgraphicsview->leaveEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnLeaveEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_LeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_MoveEvent(QGraphicsView* self, QMoveEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->moveEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseMoveEvent(QGraphicsView* self, QMoveEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_MoveEvent_IsBase(true);
        vqgraphicsview->moveEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMoveEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_MoveEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_CloseEvent(QGraphicsView* self, QCloseEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->closeEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseCloseEvent(QGraphicsView* self, QCloseEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_CloseEvent_IsBase(true);
        vqgraphicsview->closeEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnCloseEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_CloseEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_TabletEvent(QGraphicsView* self, QTabletEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->tabletEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseTabletEvent(QGraphicsView* self, QTabletEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_TabletEvent_IsBase(true);
        vqgraphicsview->tabletEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnTabletEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_TabletEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_ActionEvent(QGraphicsView* self, QActionEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->actionEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseActionEvent(QGraphicsView* self, QActionEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ActionEvent_IsBase(true);
        vqgraphicsview->actionEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnActionEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ActionEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_HideEvent(QGraphicsView* self, QHideEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->hideEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseHideEvent(QGraphicsView* self, QHideEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_HideEvent_IsBase(true);
        vqgraphicsview->hideEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnHideEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_HideEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsView_NativeEvent(QGraphicsView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return vqgraphicsview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQGraphicsView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QGraphicsView_QBaseNativeEvent(QGraphicsView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_NativeEvent_IsBase(true);
        return vqgraphicsview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQGraphicsView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnNativeEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_NativeEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsView_Metric(const QGraphicsView* self, int param1) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return vqgraphicsview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQGraphicsView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QGraphicsView_QBaseMetric(const QGraphicsView* self, int param1) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_Metric_IsBase(true);
        return vqgraphicsview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQGraphicsView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMetric(const QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_Metric_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_InitPainter(const QGraphicsView* self, QPainter* painter) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->initPainter(painter);
    } else {
        ((VirtualQGraphicsView*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseInitPainter(const QGraphicsView* self, QPainter* painter) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_InitPainter_IsBase(true);
        vqgraphicsview->initPainter(painter);
    } else {
        ((VirtualQGraphicsView*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnInitPainter(const QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_InitPainter_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QGraphicsView_Redirected(const QGraphicsView* self, QPoint* offset) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return vqgraphicsview->redirected(offset);
    } else {
        return ((VirtualQGraphicsView*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QGraphicsView_QBaseRedirected(const QGraphicsView* self, QPoint* offset) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_Redirected_IsBase(true);
        return vqgraphicsview->redirected(offset);
    } else {
        return ((VirtualQGraphicsView*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnRedirected(const QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_Redirected_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QGraphicsView_SharedPainter(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return vqgraphicsview->sharedPainter();
    } else {
        return ((VirtualQGraphicsView*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QGraphicsView_QBaseSharedPainter(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_SharedPainter_IsBase(true);
        return vqgraphicsview->sharedPainter();
    } else {
        return ((VirtualQGraphicsView*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnSharedPainter(const QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_SharedPainter_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_TimerEvent(QGraphicsView* self, QTimerEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->timerEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseTimerEvent(QGraphicsView* self, QTimerEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_TimerEvent_IsBase(true);
        vqgraphicsview->timerEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnTimerEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_TimerEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_ChildEvent(QGraphicsView* self, QChildEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->childEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseChildEvent(QGraphicsView* self, QChildEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ChildEvent_IsBase(true);
        vqgraphicsview->childEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnChildEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ChildEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_CustomEvent(QGraphicsView* self, QEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->customEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseCustomEvent(QGraphicsView* self, QEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_CustomEvent_IsBase(true);
        vqgraphicsview->customEvent(event);
    } else {
        ((VirtualQGraphicsView*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnCustomEvent(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_CustomEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_ConnectNotify(QGraphicsView* self, const QMetaMethod* signal) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->connectNotify(*signal);
    } else {
        ((VirtualQGraphicsView*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseConnectNotify(QGraphicsView* self, const QMetaMethod* signal) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ConnectNotify_IsBase(true);
        vqgraphicsview->connectNotify(*signal);
    } else {
        ((VirtualQGraphicsView*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnConnectNotify(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ConnectNotify_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_DisconnectNotify(QGraphicsView* self, const QMetaMethod* signal) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->disconnectNotify(*signal);
    } else {
        ((VirtualQGraphicsView*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseDisconnectNotify(QGraphicsView* self, const QMetaMethod* signal) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_DisconnectNotify_IsBase(true);
        vqgraphicsview->disconnectNotify(*signal);
    } else {
        ((VirtualQGraphicsView*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDisconnectNotify(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_DisconnectNotify_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_SetViewportMargins(QGraphicsView* self, int left, int top, int right, int bottom) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQGraphicsView*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QGraphicsView_QBaseSetViewportMargins(QGraphicsView* self, int left, int top, int right, int bottom) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_SetViewportMargins_IsBase(true);
        vqgraphicsview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQGraphicsView*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnSetViewportMargins(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_SetViewportMargins_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QGraphicsView_ViewportMargins(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return new QMargins(vqgraphicsview->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QGraphicsView_QBaseViewportMargins(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ViewportMargins_IsBase(true);
        return new QMargins(vqgraphicsview->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnViewportMargins(const QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_ViewportMargins_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_DrawFrame(QGraphicsView* self, QPainter* param1) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->drawFrame(param1);
    } else {
        ((VirtualQGraphicsView*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseDrawFrame(QGraphicsView* self, QPainter* param1) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_DrawFrame_IsBase(true);
        vqgraphicsview->drawFrame(param1);
    } else {
        ((VirtualQGraphicsView*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDrawFrame(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_DrawFrame_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_UpdateMicroFocus(QGraphicsView* self) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->updateMicroFocus();
    } else {
        ((VirtualQGraphicsView*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QGraphicsView_QBaseUpdateMicroFocus(QGraphicsView* self) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_UpdateMicroFocus_IsBase(true);
        vqgraphicsview->updateMicroFocus();
    } else {
        ((VirtualQGraphicsView*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnUpdateMicroFocus(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_Create(QGraphicsView* self) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->create();
    } else {
        ((VirtualQGraphicsView*)self)->create();
    }
}

// Base class handler implementation
void QGraphicsView_QBaseCreate(QGraphicsView* self) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_Create_IsBase(true);
        vqgraphicsview->create();
    } else {
        ((VirtualQGraphicsView*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnCreate(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_Create_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_Destroy(QGraphicsView* self) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->destroy();
    } else {
        ((VirtualQGraphicsView*)self)->destroy();
    }
}

// Base class handler implementation
void QGraphicsView_QBaseDestroy(QGraphicsView* self) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_Destroy_IsBase(true);
        vqgraphicsview->destroy();
    } else {
        ((VirtualQGraphicsView*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDestroy(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_Destroy_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsView_FocusNextChild(QGraphicsView* self) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return vqgraphicsview->focusNextChild();
    } else {
        return ((VirtualQGraphicsView*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QGraphicsView_QBaseFocusNextChild(QGraphicsView* self) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_FocusNextChild_IsBase(true);
        return vqgraphicsview->focusNextChild();
    } else {
        return ((VirtualQGraphicsView*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnFocusNextChild(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_FocusNextChild_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsView_FocusPreviousChild(QGraphicsView* self) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return vqgraphicsview->focusPreviousChild();
    } else {
        return ((VirtualQGraphicsView*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QGraphicsView_QBaseFocusPreviousChild(QGraphicsView* self) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_FocusPreviousChild_IsBase(true);
        return vqgraphicsview->focusPreviousChild();
    } else {
        return ((VirtualQGraphicsView*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnFocusPreviousChild(QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_FocusPreviousChild_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGraphicsView_Sender(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return vqgraphicsview->sender();
    } else {
        return ((VirtualQGraphicsView*)self)->sender();
    }
}

// Base class handler implementation
QObject* QGraphicsView_QBaseSender(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_Sender_IsBase(true);
        return vqgraphicsview->sender();
    } else {
        return ((VirtualQGraphicsView*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnSender(const QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_Sender_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsView_SenderSignalIndex(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return vqgraphicsview->senderSignalIndex();
    } else {
        return ((VirtualQGraphicsView*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QGraphicsView_QBaseSenderSignalIndex(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_SenderSignalIndex_IsBase(true);
        return vqgraphicsview->senderSignalIndex();
    } else {
        return ((VirtualQGraphicsView*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnSenderSignalIndex(const QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsView_Receivers(const QGraphicsView* self, const char* signal) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return vqgraphicsview->receivers(signal);
    } else {
        return ((VirtualQGraphicsView*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QGraphicsView_QBaseReceivers(const QGraphicsView* self, const char* signal) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_Receivers_IsBase(true);
        return vqgraphicsview->receivers(signal);
    } else {
        return ((VirtualQGraphicsView*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnReceivers(const QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_Receivers_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsView_IsSignalConnected(const QGraphicsView* self, const QMetaMethod* signal) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return vqgraphicsview->isSignalConnected(*signal);
    } else {
        return ((VirtualQGraphicsView*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGraphicsView_QBaseIsSignalConnected(const QGraphicsView* self, const QMetaMethod* signal) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_IsSignalConnected_IsBase(true);
        return vqgraphicsview->isSignalConnected(*signal);
    } else {
        return ((VirtualQGraphicsView*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnIsSignalConnected(const QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_IsSignalConnected_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QGraphicsView_GetDecodedMetricF(const QGraphicsView* self, int metricA, int metricB) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        return vqgraphicsview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQGraphicsView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QGraphicsView_QBaseGetDecodedMetricF(const QGraphicsView* self, int metricA, int metricB) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_GetDecodedMetricF_IsBase(true);
        return vqgraphicsview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQGraphicsView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnGetDecodedMetricF(const QGraphicsView* self, intptr_t slot) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
        vqgraphicsview->setQGraphicsView_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_GetDecodedMetricF_Callback>(slot));
    }
}

void QGraphicsView_Delete(QGraphicsView* self) {
    delete self;
}
