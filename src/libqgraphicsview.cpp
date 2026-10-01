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
#include <QPolygon>
#include <QPolygonF>
#include <QRect>
#include <QRectF>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionFrame>
#include <QStyleOptionGraphicsItem>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGraphicsView_Tr(const char* s) {
    auto _ret = QGraphicsView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QGraphicsView_SizeHint(const QGraphicsView* self) {
    return new QSize(self->sizeHint());
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * (_ret.size())));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * (_ret.size())));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * (_ret.size())));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * (_ret.size())));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QGraphicsItem* */ QGraphicsView_Items6(const QGraphicsView* self, const QPolygon* polygon) {
    QList<QGraphicsItem*> _ret = self->items(*polygon);
    // Convert QList<> from C++ memory to manually-managed C memory
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * (_ret.size())));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * (_ret.size())));
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

QPolygonF* QGraphicsView_MapToScene2(const QGraphicsView* self, const QRect* rect) {
    return new QPolygonF(self->mapToScene(*rect));
}

QPolygonF* QGraphicsView_MapToScene3(const QGraphicsView* self, const QPolygon* polygon) {
    return new QPolygonF(self->mapToScene(*polygon));
}

QPainterPath* QGraphicsView_MapToScene4(const QGraphicsView* self, const QPainterPath* path) {
    return new QPainterPath(self->mapToScene(*path));
}

QPoint* QGraphicsView_MapFromScene(const QGraphicsView* self, const QPointF* point) {
    return new QPoint(self->mapFromScene(*point));
}

QPolygon* QGraphicsView_MapFromScene2(const QGraphicsView* self, const QRectF* rect) {
    return new QPolygon(self->mapFromScene(*rect));
}

QPolygon* QGraphicsView_MapFromScene3(const QGraphicsView* self, const QPolygonF* polygon) {
    return new QPolygon(self->mapFromScene(*polygon));
}

QPainterPath* QGraphicsView_MapFromScene4(const QGraphicsView* self, const QPainterPath* path) {
    return new QPainterPath(self->mapFromScene(*path));
}

QPointF* QGraphicsView_MapToScene5(const QGraphicsView* self, int x, int y) {
    return new QPointF(self->mapToScene(static_cast<int>(x), static_cast<int>(y)));
}

QPolygonF* QGraphicsView_MapToScene6(const QGraphicsView* self, int x, int y, int w, int h) {
    return new QPolygonF(self->mapToScene(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h)));
}

QPoint* QGraphicsView_MapFromScene5(const QGraphicsView* self, double x, double y) {
    return new QPoint(self->mapFromScene(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPolygon* QGraphicsView_MapFromScene6(const QGraphicsView* self, double x, double y, double w, double h) {
    return new QPolygon(self->mapFromScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QVariant* QGraphicsView_InputMethodQuery(const QGraphicsView* self, int query) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
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
    QGraphicsView::connect(self,
                           static_cast<void (QGraphicsView::*)(QRect, QPointF, QPointF)>(&QGraphicsView::rubberBandChanged),
                           [self, slotFunc](QRect viewportRect, QPointF fromScenePoint, QPointF toScenePoint) {
                               QRect* sigval1 = new QRect(viewportRect);
                               QPointF* sigval2 = new QPointF(fromScenePoint);
                               QPointF* sigval3 = new QPointF(toScenePoint);
                               slotFunc(self, sigval1, sigval2, sigval3);
                           });
}

void QGraphicsView_SetupViewport(QGraphicsView* self, QWidget* widget) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->setupViewport(widget);
    }
}

bool QGraphicsView_Event(QGraphicsView* self, QEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        return vqgraphicsview->event(event);
    }
    qFatal("Error: Protected method QGraphicsView::event called without a directly constructed type");
}

bool QGraphicsView_ViewportEvent(QGraphicsView* self, QEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        return vqgraphicsview->viewportEvent(event);
    }
    qFatal("Error: Protected method QGraphicsView::viewportEvent called without a directly constructed type");
}

void QGraphicsView_ContextMenuEvent(QGraphicsView* self, QContextMenuEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->contextMenuEvent(event);
    }
}

void QGraphicsView_DragEnterEvent(QGraphicsView* self, QDragEnterEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->dragEnterEvent(event);
    }
}

void QGraphicsView_DragLeaveEvent(QGraphicsView* self, QDragLeaveEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->dragLeaveEvent(event);
    }
}

void QGraphicsView_DragMoveEvent(QGraphicsView* self, QDragMoveEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->dragMoveEvent(event);
    }
}

void QGraphicsView_DropEvent(QGraphicsView* self, QDropEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->dropEvent(event);
    }
}

void QGraphicsView_FocusInEvent(QGraphicsView* self, QFocusEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->focusInEvent(event);
    }
}

bool QGraphicsView_FocusNextPrevChild(QGraphicsView* self, bool next) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        return vqgraphicsview->focusNextPrevChild(next);
    }
    qFatal("Error: Protected method QGraphicsView::focusNextPrevChild called without a directly constructed type");
}

void QGraphicsView_FocusOutEvent(QGraphicsView* self, QFocusEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->focusOutEvent(event);
    }
}

void QGraphicsView_KeyPressEvent(QGraphicsView* self, QKeyEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->keyPressEvent(event);
    }
}

void QGraphicsView_KeyReleaseEvent(QGraphicsView* self, QKeyEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->keyReleaseEvent(event);
    }
}

void QGraphicsView_MouseDoubleClickEvent(QGraphicsView* self, QMouseEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->mouseDoubleClickEvent(event);
    }
}

void QGraphicsView_MousePressEvent(QGraphicsView* self, QMouseEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->mousePressEvent(event);
    }
}

void QGraphicsView_MouseMoveEvent(QGraphicsView* self, QMouseEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->mouseMoveEvent(event);
    }
}

void QGraphicsView_MouseReleaseEvent(QGraphicsView* self, QMouseEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->mouseReleaseEvent(event);
    }
}

void QGraphicsView_WheelEvent(QGraphicsView* self, QWheelEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->wheelEvent(event);
    }
}

void QGraphicsView_PaintEvent(QGraphicsView* self, QPaintEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->paintEvent(event);
    }
}

void QGraphicsView_ResizeEvent(QGraphicsView* self, QResizeEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->resizeEvent(event);
    }
}

void QGraphicsView_ScrollContentsBy(QGraphicsView* self, int dx, int dy) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

void QGraphicsView_ShowEvent(QGraphicsView* self, QShowEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->showEvent(event);
    }
}

void QGraphicsView_InputMethodEvent(QGraphicsView* self, QInputMethodEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->inputMethodEvent(event);
    }
}

void QGraphicsView_DrawBackground(QGraphicsView* self, QPainter* painter, const QRectF* rect) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->drawBackground(painter, *rect);
    }
}

void QGraphicsView_DrawForeground(QGraphicsView* self, QPainter* painter, const QRectF* rect) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->drawForeground(painter, *rect);
    }
}

void QGraphicsView_DrawItems(QGraphicsView* self, QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->drawItems(painter, static_cast<int>(numItems), items, options);
    }
}

libqt_string QGraphicsView_Tr2(const char* s, const char* c) {
    auto _ret = QGraphicsView::tr(s, c);
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
    auto _ret = QGraphicsView::tr(s, c, static_cast<int>(n));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * (_ret.size())));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QGraphicsItem* */ QGraphicsView_Items23(const QGraphicsView* self, const QPolygon* polygon, int mode) {
    QList<QGraphicsItem*> _ret = self->items(*polygon, static_cast<Qt::ItemSelectionMode>(mode));
    // Convert QList<> from C++ memory to manually-managed C memory
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * (_ret.size())));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * (_ret.size())));
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

// Base class handler implementation
QMetaObject* QGraphicsView_SuperMetaObject(const QGraphicsView* self) {
    return (QMetaObject*)self->QGraphicsView::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMetaObject(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self)))
        vqgraphicsview->qgraphicsview_metaobject_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGraphicsView_SuperMetacast(QGraphicsView* self, const char* param1) {
    return self->QGraphicsView::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMetacast(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_metacast_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGraphicsView_SuperMetacall(QGraphicsView* self, int param1, int param2, void** param3) {
    return self->QGraphicsView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMetacall(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_metacall_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QGraphicsView_SuperSizeHint(const QGraphicsView* self) {
    return new QSize(self->QGraphicsView::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnSizeHint(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self)))
        vqgraphicsview->qgraphicsview_sizehint_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_SizeHint_Callback>(slot);
}

// Base class handler implementation
QVariant* QGraphicsView_SuperInputMethodQuery(const QGraphicsView* self, int query) {
    return new QVariant(self->QGraphicsView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnInputMethodQuery(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self)))
        vqgraphicsview->qgraphicsview_inputmethodquery_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_InputMethodQuery_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperSetupViewport(QGraphicsView* self, QWidget* widget) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::setupViewport(widget);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::setupViewport called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnSetupViewport(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_setupviewport_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_SetupViewport_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsView_SuperEvent(QGraphicsView* self, QEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        return vqgraphicsview->QGraphicsView::event(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_event_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Event_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsView_SuperViewportEvent(QGraphicsView* self, QEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        return vqgraphicsview->QGraphicsView::viewportEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnViewportEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_viewportevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ViewportEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperContextMenuEvent(QGraphicsView* self, QContextMenuEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnContextMenuEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_contextmenuevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperDragEnterEvent(QGraphicsView* self, QDragEnterEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDragEnterEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_dragenterevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DragEnterEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperDragLeaveEvent(QGraphicsView* self, QDragLeaveEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDragLeaveEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_dragleaveevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DragLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperDragMoveEvent(QGraphicsView* self, QDragMoveEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDragMoveEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_dragmoveevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DragMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperDropEvent(QGraphicsView* self, QDropEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDropEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_dropevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DropEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperFocusInEvent(QGraphicsView* self, QFocusEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnFocusInEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_focusinevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsView_SuperFocusNextPrevChild(QGraphicsView* self, bool next) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        return vqgraphicsview->QGraphicsView::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnFocusNextPrevChild(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_focusnextprevchild_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_FocusNextPrevChild_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperFocusOutEvent(QGraphicsView* self, QFocusEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnFocusOutEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_focusoutevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperKeyPressEvent(QGraphicsView* self, QKeyEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnKeyPressEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_keypressevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperKeyReleaseEvent(QGraphicsView* self, QKeyEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnKeyReleaseEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_keyreleaseevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_KeyReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperMouseDoubleClickEvent(QGraphicsView* self, QMouseEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMouseDoubleClickEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_mousedoubleclickevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MouseDoubleClickEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperMousePressEvent(QGraphicsView* self, QMouseEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMousePressEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_mousepressevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperMouseMoveEvent(QGraphicsView* self, QMouseEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMouseMoveEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_mousemoveevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperMouseReleaseEvent(QGraphicsView* self, QMouseEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMouseReleaseEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_mousereleaseevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperWheelEvent(QGraphicsView* self, QWheelEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnWheelEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_wheelevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_WheelEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperPaintEvent(QGraphicsView* self, QPaintEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnPaintEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_paintevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperResizeEvent(QGraphicsView* self, QResizeEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnResizeEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_resizeevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperScrollContentsBy(QGraphicsView* self, int dx, int dy) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QGraphicsView::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnScrollContentsBy(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_scrollcontentsby_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ScrollContentsBy_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperShowEvent(QGraphicsView* self, QShowEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnShowEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_showevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperInputMethodEvent(QGraphicsView* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnInputMethodEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_inputmethodevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_InputMethodEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperDrawBackground(QGraphicsView* self, QPainter* painter, const QRectF* rect) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::drawBackground(painter, *rect);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::drawBackground called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDrawBackground(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_drawbackground_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DrawBackground_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperDrawForeground(QGraphicsView* self, QPainter* painter, const QRectF* rect) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::drawForeground(painter, *rect);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::drawForeground called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDrawForeground(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_drawforeground_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DrawForeground_Callback>(slot);
}

// Base class handler implementation
void QGraphicsView_SuperDrawItems(QGraphicsView* self, QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::drawItems(painter, static_cast<int>(numItems), items, options);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::drawItems called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDrawItems(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_drawitems_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DrawItems_Callback>(slot);
}

// Derived class handler implementation
QSize* QGraphicsView_MinimumSizeHint(const QGraphicsView* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QGraphicsView_SuperMinimumSizeHint(const QGraphicsView* self) {
    return new QSize(self->QGraphicsView::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMinimumSizeHint(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self)))
        vqgraphicsview->qgraphicsview_minimumsizehint_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsView_EventFilter(QGraphicsView* self, QObject* param1, QEvent* param2) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        return vqgraphicsview->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QGraphicsView::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsView_SuperEventFilter(QGraphicsView* self, QObject* param1, QEvent* param2) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        return vqgraphicsview->QGraphicsView::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnEventFilter(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_eventfilter_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_EventFilter_Callback>(slot);
}

// Derived class handler implementation
QSize* QGraphicsView_ViewportSizeHint(const QGraphicsView* self) {
    return new QSize((self->*&VirtualQGraphicsView::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* QGraphicsView_SuperViewportSizeHint(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self)))
        return new QSize(vqgraphicsview->viewportSizeHint());
    qFatal("Error: Protected virtual method QGraphicsView::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnViewportSizeHint(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self)))
        vqgraphicsview->qgraphicsview_viewportsizehint_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsView_ChangeEvent(QGraphicsView* self, QEvent* param1) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QGraphicsView::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsView_SuperChangeEvent(QGraphicsView* self, QEvent* param1) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnChangeEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_changeevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsView_InitStyleOption(const QGraphicsView* self, QStyleOptionFrame* option) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview) {
        vqgraphicsview->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QGraphicsView::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsView_SuperInitStyleOption(const QGraphicsView* self, QStyleOptionFrame* option) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->QGraphicsView::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnInitStyleOption(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self)))
        vqgraphicsview->qgraphicsview_initstyleoption_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QGraphicsView_DevType(const QGraphicsView* self) {
    return self->devType();
}

// Base class handler implementation
int QGraphicsView_SuperDevType(const QGraphicsView* self) {
    return self->QGraphicsView::devType();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDevType(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self)))
        vqgraphicsview->qgraphicsview_devtype_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DevType_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsView_SetVisible(QGraphicsView* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QGraphicsView_SuperSetVisible(QGraphicsView* self, bool visible) {
    self->QGraphicsView::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnSetVisible(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_setvisible_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QGraphicsView_HeightForWidth(const QGraphicsView* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QGraphicsView_SuperHeightForWidth(const QGraphicsView* self, int param1) {
    return self->QGraphicsView::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnHeightForWidth(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self)))
        vqgraphicsview->qgraphicsview_heightforwidth_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsView_HasHeightForWidth(const QGraphicsView* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QGraphicsView_SuperHasHeightForWidth(const QGraphicsView* self) {
    return self->QGraphicsView::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnHasHeightForWidth(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self)))
        vqgraphicsview->qgraphicsview_hasheightforwidth_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QGraphicsView_PaintEngine(const QGraphicsView* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QGraphicsView_SuperPaintEngine(const QGraphicsView* self) {
    return self->QGraphicsView::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnPaintEngine(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self)))
        vqgraphicsview->qgraphicsview_paintengine_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsView_EnterEvent(QGraphicsView* self, QEnterEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsView::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsView_SuperEnterEvent(QGraphicsView* self, QEnterEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnEnterEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_enterevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsView_LeaveEvent(QGraphicsView* self, QEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsView::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsView_SuperLeaveEvent(QGraphicsView* self, QEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnLeaveEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_leaveevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsView_MoveEvent(QGraphicsView* self, QMoveEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsView::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsView_SuperMoveEvent(QGraphicsView* self, QMoveEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMoveEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_moveevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsView_CloseEvent(QGraphicsView* self, QCloseEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsView::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsView_SuperCloseEvent(QGraphicsView* self, QCloseEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnCloseEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_closeevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsView_TabletEvent(QGraphicsView* self, QTabletEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsView::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsView_SuperTabletEvent(QGraphicsView* self, QTabletEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnTabletEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_tabletevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsView_ActionEvent(QGraphicsView* self, QActionEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsView::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsView_SuperActionEvent(QGraphicsView* self, QActionEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnActionEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_actionevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsView_HideEvent(QGraphicsView* self, QHideEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsView::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsView_SuperHideEvent(QGraphicsView* self, QHideEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnHideEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_hideevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsView_NativeEvent(QGraphicsView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        return vqgraphicsview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QGraphicsView::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsView_SuperNativeEvent(QGraphicsView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        return vqgraphicsview->QGraphicsView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QGraphicsView::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnNativeEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_nativeevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QGraphicsView_Metric(const QGraphicsView* self, int param1) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview) {
        return vqgraphicsview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QGraphicsView::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QGraphicsView_SuperMetric(const QGraphicsView* self, int param1) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return vqgraphicsview->QGraphicsView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QGraphicsView::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMetric(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self)))
        vqgraphicsview->qgraphicsview_metric_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Metric_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsView_InitPainter(const QGraphicsView* self, QPainter* painter) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview) {
        vqgraphicsview->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QGraphicsView::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsView_SuperInitPainter(const QGraphicsView* self, QPainter* painter) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->QGraphicsView::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnInitPainter(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self)))
        vqgraphicsview->qgraphicsview_initpainter_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QGraphicsView_Redirected(const QGraphicsView* self, QPoint* offset) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview) {
        return vqgraphicsview->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QGraphicsView::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QGraphicsView_SuperRedirected(const QGraphicsView* self, QPoint* offset) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return vqgraphicsview->QGraphicsView::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnRedirected(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self)))
        vqgraphicsview->qgraphicsview_redirected_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QGraphicsView_SharedPainter(const QGraphicsView* self) {
    auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self));
    if (vqgraphicsview) {
        return vqgraphicsview->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QGraphicsView::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QGraphicsView_SuperSharedPainter(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return vqgraphicsview->QGraphicsView::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QGraphicsView::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnSharedPainter(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self)))
        vqgraphicsview->qgraphicsview_sharedpainter_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsView_TimerEvent(QGraphicsView* self, QTimerEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsView::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsView_SuperTimerEvent(QGraphicsView* self, QTimerEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnTimerEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_timerevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsView_ChildEvent(QGraphicsView* self, QChildEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsView::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsView_SuperChildEvent(QGraphicsView* self, QChildEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnChildEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_childevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsView_CustomEvent(QGraphicsView* self, QEvent* event) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsView::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsView_SuperCustomEvent(QGraphicsView* self, QEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnCustomEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_customevent_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsView_ConnectNotify(QGraphicsView* self, const QMetaMethod* signal) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsView::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsView_SuperConnectNotify(QGraphicsView* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnConnectNotify(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_connectnotify_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsView_DisconnectNotify(QGraphicsView* self, const QMetaMethod* signal) {
    auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
    if (vqgraphicsview) {
        vqgraphicsview->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsView::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsView_SuperDisconnectNotify(QGraphicsView* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->QGraphicsView::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsView::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDisconnectNotify(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self))
        vqgraphicsview->qgraphicsview_disconnectnotify_callback = reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsView_SetViewportMargins(QGraphicsView* self, int left, int top, int right, int bottom) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->VirtualQGraphicsView::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QGraphicsView::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QGraphicsView_ViewportMargins(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self)))
        return new QMargins(vqgraphicsview->viewportMargins());
    qFatal("Error: Protected method QGraphicsView::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsView_DrawFrame(QGraphicsView* self, QPainter* param1) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->VirtualQGraphicsView::drawFrame(param1);
    } else
        qFatal("Error: Protected method QGraphicsView::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsView_UpdateMicroFocus(QGraphicsView* self) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->VirtualQGraphicsView::updateMicroFocus();
    } else
        qFatal("Error: Protected method QGraphicsView::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsView_Create(QGraphicsView* self) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->VirtualQGraphicsView::create();
    } else
        qFatal("Error: Protected method QGraphicsView::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsView_Destroy(QGraphicsView* self) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->VirtualQGraphicsView::destroy();
    } else
        qFatal("Error: Protected method QGraphicsView::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsView_FocusNextChild(QGraphicsView* self) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        return vqgraphicsview->VirtualQGraphicsView::focusNextChild();
    } else
        qFatal("Error: Protected method QGraphicsView::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsView_FocusPreviousChild(QGraphicsView* self) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        return vqgraphicsview->VirtualQGraphicsView::focusPreviousChild();
    } else
        qFatal("Error: Protected method QGraphicsView::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGraphicsView_Sender(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return vqgraphicsview->VirtualQGraphicsView::sender();
    } else
        qFatal("Error: Protected method QGraphicsView::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsView_SenderSignalIndex(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return vqgraphicsview->VirtualQGraphicsView::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGraphicsView::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsView_Receivers(const QGraphicsView* self, const char* signal) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return vqgraphicsview->VirtualQGraphicsView::receivers(signal);
    } else
        qFatal("Error: Protected method QGraphicsView::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsView_IsSignalConnected(const QGraphicsView* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return vqgraphicsview->VirtualQGraphicsView::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGraphicsView::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QGraphicsView_GetDecodedMetricF(const QGraphicsView* self, int metricA, int metricB) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return vqgraphicsview->VirtualQGraphicsView::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QGraphicsView::getDecodedMetricF called without a directly constructed type");
}

void QGraphicsView_Delete(QGraphicsView* self) {
    delete self;
}
