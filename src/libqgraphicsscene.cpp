#include <QBrush>
#include <QChildEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <QGraphicsItemGroup>
#include <QGraphicsLineItem>
#include <QGraphicsPathItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsPolygonItem>
#include <QGraphicsProxyWidget>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHelpEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsSimpleTextItem>
#include <QGraphicsTextItem>
#include <QGraphicsView>
#include <QGraphicsWidget>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLineF>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPalette>
#include <QPen>
#include <QPixmap>
#include <QPointF>
#include <QPolygonF>
#include <QRectF>
#include <QString>
#include <QStyle>
#include <QStyleOptionGraphicsItem>
#include <QTimerEvent>
#include <QTransform>
#include <QVariant>
#include <QWidget>
#include <qgraphicsscene.h>
#include "libqgraphicsscene.h"
#include "libqgraphicsscene.hxx"

QGraphicsScene* QGraphicsScene_new() {
    return new VirtualQGraphicsScene();
}

QGraphicsScene* QGraphicsScene_new2(const QRectF* sceneRect) {
    return new VirtualQGraphicsScene(*sceneRect);
}

QGraphicsScene* QGraphicsScene_new3(double x, double y, double width, double height) {
    return new VirtualQGraphicsScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(width), static_cast<qreal>(height));
}

QGraphicsScene* QGraphicsScene_new4(QObject* parent) {
    return new VirtualQGraphicsScene(parent);
}

QGraphicsScene* QGraphicsScene_new5(const QRectF* sceneRect, QObject* parent) {
    return new VirtualQGraphicsScene(*sceneRect, parent);
}

QGraphicsScene* QGraphicsScene_new6(double x, double y, double width, double height, QObject* parent) {
    return new VirtualQGraphicsScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(width), static_cast<qreal>(height), parent);
}

QMetaObject* QGraphicsScene_MetaObject(const QGraphicsScene* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsScene_Metacast(QGraphicsScene* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsScene_Metacall(QGraphicsScene* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGraphicsScene_Tr(const char* s) {
    auto _ret = QGraphicsScene::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QRectF* QGraphicsScene_SceneRect(const QGraphicsScene* self) {
    return new QRectF(self->sceneRect());
}

double QGraphicsScene_Width(const QGraphicsScene* self) {
    return static_cast<double>(self->width());
}

double QGraphicsScene_Height(const QGraphicsScene* self) {
    return static_cast<double>(self->height());
}

void QGraphicsScene_SetSceneRect(QGraphicsScene* self, const QRectF* rect) {
    self->setSceneRect(*rect);
}

void QGraphicsScene_SetSceneRect2(QGraphicsScene* self, double x, double y, double w, double h) {
    self->setSceneRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsScene_Render(QGraphicsScene* self, QPainter* painter) {
    self->render(painter);
}

int QGraphicsScene_ItemIndexMethod(const QGraphicsScene* self) {
    return static_cast<int>(self->itemIndexMethod());
}

void QGraphicsScene_SetItemIndexMethod(QGraphicsScene* self, int method) {
    self->setItemIndexMethod(static_cast<QGraphicsScene::ItemIndexMethod>(method));
}

int QGraphicsScene_BspTreeDepth(const QGraphicsScene* self) {
    return self->bspTreeDepth();
}

void QGraphicsScene_SetBspTreeDepth(QGraphicsScene* self, int depth) {
    self->setBspTreeDepth(static_cast<int>(depth));
}

QRectF* QGraphicsScene_ItemsBoundingRect(const QGraphicsScene* self) {
    return new QRectF(self->itemsBoundingRect());
}

libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items(const QGraphicsScene* self) {
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

libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items2(const QGraphicsScene* self, const QPointF* pos) {
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

libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items3(const QGraphicsScene* self, const QRectF* rect) {
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

libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items4(const QGraphicsScene* self, const QPolygonF* polygon) {
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

libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items5(const QGraphicsScene* self, const QPainterPath* path) {
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

libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items6(const QGraphicsScene* self, double x, double y, double w, double h, int mode, int order) {
    QList<QGraphicsItem*> _ret = self->items(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
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

libqt_list /* of QGraphicsItem* */ QGraphicsScene_CollidingItems(const QGraphicsScene* self, const QGraphicsItem* item) {
    QList<QGraphicsItem*> _ret = self->collidingItems(item);
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

QGraphicsItem* QGraphicsScene_ItemAt(const QGraphicsScene* self, const QPointF* pos, const QTransform* deviceTransform) {
    return self->itemAt(*pos, *deviceTransform);
}

QGraphicsItem* QGraphicsScene_ItemAt2(const QGraphicsScene* self, double x, double y, const QTransform* deviceTransform) {
    return self->itemAt(static_cast<qreal>(x), static_cast<qreal>(y), *deviceTransform);
}

libqt_list /* of QGraphicsItem* */ QGraphicsScene_SelectedItems(const QGraphicsScene* self) {
    QList<QGraphicsItem*> _ret = self->selectedItems();
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

QPainterPath* QGraphicsScene_SelectionArea(const QGraphicsScene* self) {
    return new QPainterPath(self->selectionArea());
}

void QGraphicsScene_SetSelectionArea(QGraphicsScene* self, const QPainterPath* path, const QTransform* deviceTransform) {
    self->setSelectionArea(*path, *deviceTransform);
}

void QGraphicsScene_SetSelectionArea2(QGraphicsScene* self, const QPainterPath* path) {
    self->setSelectionArea(*path);
}

QGraphicsItemGroup* QGraphicsScene_CreateItemGroup(QGraphicsScene* self, const libqt_list /* of QGraphicsItem* */ items) {
    QList<QGraphicsItem*> items_QList;
    items_QList.reserve(items.len);
    QGraphicsItem** items_arr = static_cast<QGraphicsItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    return self->createItemGroup(items_QList);
}

void QGraphicsScene_DestroyItemGroup(QGraphicsScene* self, QGraphicsItemGroup* group) {
    self->destroyItemGroup(group);
}

void QGraphicsScene_AddItem(QGraphicsScene* self, QGraphicsItem* item) {
    self->addItem(item);
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse(QGraphicsScene* self, const QRectF* rect) {
    return self->addEllipse(*rect);
}

QGraphicsLineItem* QGraphicsScene_AddLine(QGraphicsScene* self, const QLineF* line) {
    return self->addLine(*line);
}

QGraphicsPathItem* QGraphicsScene_AddPath(QGraphicsScene* self, const QPainterPath* path) {
    return self->addPath(*path);
}

QGraphicsPixmapItem* QGraphicsScene_AddPixmap(QGraphicsScene* self, const QPixmap* pixmap) {
    return self->addPixmap(*pixmap);
}

QGraphicsPolygonItem* QGraphicsScene_AddPolygon(QGraphicsScene* self, const QPolygonF* polygon) {
    return self->addPolygon(*polygon);
}

QGraphicsRectItem* QGraphicsScene_AddRect(QGraphicsScene* self, const QRectF* rect) {
    return self->addRect(*rect);
}

QGraphicsTextItem* QGraphicsScene_AddText(QGraphicsScene* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addText(text_QString);
}

QGraphicsSimpleTextItem* QGraphicsScene_AddSimpleText(QGraphicsScene* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addSimpleText(text_QString);
}

QGraphicsProxyWidget* QGraphicsScene_AddWidget(QGraphicsScene* self, QWidget* widget) {
    return self->addWidget(widget);
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse2(QGraphicsScene* self, double x, double y, double w, double h) {
    return self->addEllipse(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QGraphicsLineItem* QGraphicsScene_AddLine2(QGraphicsScene* self, double x1, double y1, double x2, double y2) {
    return self->addLine(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

QGraphicsRectItem* QGraphicsScene_AddRect2(QGraphicsScene* self, double x, double y, double w, double h) {
    return self->addRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsScene_RemoveItem(QGraphicsScene* self, QGraphicsItem* item) {
    self->removeItem(item);
}

QGraphicsItem* QGraphicsScene_FocusItem(const QGraphicsScene* self) {
    return self->focusItem();
}

void QGraphicsScene_SetFocusItem(QGraphicsScene* self, QGraphicsItem* item) {
    self->setFocusItem(item);
}

bool QGraphicsScene_HasFocus(const QGraphicsScene* self) {
    return self->hasFocus();
}

void QGraphicsScene_SetFocus(QGraphicsScene* self) {
    self->setFocus();
}

void QGraphicsScene_ClearFocus(QGraphicsScene* self) {
    self->clearFocus();
}

void QGraphicsScene_SetStickyFocus(QGraphicsScene* self, bool enabled) {
    self->setStickyFocus(enabled);
}

bool QGraphicsScene_StickyFocus(const QGraphicsScene* self) {
    return self->stickyFocus();
}

QGraphicsItem* QGraphicsScene_MouseGrabberItem(const QGraphicsScene* self) {
    return self->mouseGrabberItem();
}

QBrush* QGraphicsScene_BackgroundBrush(const QGraphicsScene* self) {
    return new QBrush(self->backgroundBrush());
}

void QGraphicsScene_SetBackgroundBrush(QGraphicsScene* self, const QBrush* brush) {
    self->setBackgroundBrush(*brush);
}

QBrush* QGraphicsScene_ForegroundBrush(const QGraphicsScene* self) {
    return new QBrush(self->foregroundBrush());
}

void QGraphicsScene_SetForegroundBrush(QGraphicsScene* self, const QBrush* brush) {
    self->setForegroundBrush(*brush);
}

QVariant* QGraphicsScene_InputMethodQuery(const QGraphicsScene* self, int query) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

libqt_list /* of QGraphicsView* */ QGraphicsScene_Views(const QGraphicsScene* self) {
    QList<QGraphicsView*> _ret = self->views();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGraphicsView** _arr = static_cast<QGraphicsView**>(malloc(sizeof(QGraphicsView*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGraphicsScene_Update(QGraphicsScene* self, double x, double y, double w, double h) {
    self->update(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsScene_Invalidate(QGraphicsScene* self, double x, double y, double w, double h) {
    self->invalidate(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QStyle* QGraphicsScene_Style(const QGraphicsScene* self) {
    return self->style();
}

void QGraphicsScene_SetStyle(QGraphicsScene* self, QStyle* style) {
    self->setStyle(style);
}

QFont* QGraphicsScene_Font(const QGraphicsScene* self) {
    return new QFont(self->font());
}

void QGraphicsScene_SetFont(QGraphicsScene* self, const QFont* font) {
    self->setFont(*font);
}

QPalette* QGraphicsScene_Palette(const QGraphicsScene* self) {
    return new QPalette(self->palette());
}

void QGraphicsScene_SetPalette(QGraphicsScene* self, const QPalette* palette) {
    self->setPalette(*palette);
}

bool QGraphicsScene_IsActive(const QGraphicsScene* self) {
    return self->isActive();
}

QGraphicsItem* QGraphicsScene_ActivePanel(const QGraphicsScene* self) {
    return self->activePanel();
}

void QGraphicsScene_SetActivePanel(QGraphicsScene* self, QGraphicsItem* item) {
    self->setActivePanel(item);
}

QGraphicsWidget* QGraphicsScene_ActiveWindow(const QGraphicsScene* self) {
    return self->activeWindow();
}

void QGraphicsScene_SetActiveWindow(QGraphicsScene* self, QGraphicsWidget* widget) {
    self->setActiveWindow(widget);
}

bool QGraphicsScene_SendEvent(QGraphicsScene* self, QGraphicsItem* item, QEvent* event) {
    return self->sendEvent(item, event);
}

double QGraphicsScene_MinimumRenderSize(const QGraphicsScene* self) {
    return static_cast<double>(self->minimumRenderSize());
}

void QGraphicsScene_SetMinimumRenderSize(QGraphicsScene* self, double minSize) {
    self->setMinimumRenderSize(static_cast<qreal>(minSize));
}

bool QGraphicsScene_FocusOnTouch(const QGraphicsScene* self) {
    return self->focusOnTouch();
}

void QGraphicsScene_SetFocusOnTouch(QGraphicsScene* self, bool enabled) {
    self->setFocusOnTouch(enabled);
}

void QGraphicsScene_Update2(QGraphicsScene* self) {
    self->update();
}

void QGraphicsScene_Invalidate2(QGraphicsScene* self) {
    self->invalidate();
}

void QGraphicsScene_Advance(QGraphicsScene* self) {
    self->advance();
}

void QGraphicsScene_ClearSelection(QGraphicsScene* self) {
    self->clearSelection();
}

void QGraphicsScene_Clear(QGraphicsScene* self) {
    self->clear();
}

bool QGraphicsScene_Event(QGraphicsScene* self, QEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        return vqgraphicsscene->event(event);
    }
    qFatal("Error: Protected method QGraphicsScene::event called without a directly constructed type");
}

bool QGraphicsScene_EventFilter(QGraphicsScene* self, QObject* watched, QEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        return vqgraphicsscene->eventFilter(watched, event);
    }
    qFatal("Error: Protected method QGraphicsScene::eventFilter called without a directly constructed type");
}

void QGraphicsScene_ContextMenuEvent(QGraphicsScene* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->contextMenuEvent(event);
    }
}

void QGraphicsScene_DragEnterEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->dragEnterEvent(event);
    }
}

void QGraphicsScene_DragMoveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->dragMoveEvent(event);
    }
}

void QGraphicsScene_DragLeaveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->dragLeaveEvent(event);
    }
}

void QGraphicsScene_DropEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->dropEvent(event);
    }
}

void QGraphicsScene_FocusInEvent(QGraphicsScene* self, QFocusEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->focusInEvent(event);
    }
}

void QGraphicsScene_FocusOutEvent(QGraphicsScene* self, QFocusEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->focusOutEvent(event);
    }
}

void QGraphicsScene_HelpEvent(QGraphicsScene* self, QGraphicsSceneHelpEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->helpEvent(event);
    }
}

void QGraphicsScene_KeyPressEvent(QGraphicsScene* self, QKeyEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->keyPressEvent(event);
    }
}

void QGraphicsScene_KeyReleaseEvent(QGraphicsScene* self, QKeyEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->keyReleaseEvent(event);
    }
}

void QGraphicsScene_MousePressEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->mousePressEvent(event);
    }
}

void QGraphicsScene_MouseMoveEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->mouseMoveEvent(event);
    }
}

void QGraphicsScene_MouseReleaseEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->mouseReleaseEvent(event);
    }
}

void QGraphicsScene_MouseDoubleClickEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->mouseDoubleClickEvent(event);
    }
}

void QGraphicsScene_WheelEvent(QGraphicsScene* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->wheelEvent(event);
    }
}

void QGraphicsScene_InputMethodEvent(QGraphicsScene* self, QInputMethodEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->inputMethodEvent(event);
    }
}

void QGraphicsScene_DrawBackground(QGraphicsScene* self, QPainter* painter, const QRectF* rect) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->drawBackground(painter, *rect);
    }
}

void QGraphicsScene_DrawForeground(QGraphicsScene* self, QPainter* painter, const QRectF* rect) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->drawForeground(painter, *rect);
    }
}

void QGraphicsScene_DrawItems(QGraphicsScene* self, QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options, QWidget* widget) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->drawItems(painter, static_cast<int>(numItems), items, options, widget);
    }
}

bool QGraphicsScene_FocusNextPrevChild(QGraphicsScene* self, bool next) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        return vqgraphicsscene->focusNextPrevChild(next);
    }
    qFatal("Error: Protected method QGraphicsScene::focusNextPrevChild called without a directly constructed type");
}

void QGraphicsScene_Changed(QGraphicsScene* self, const libqt_list /* of QRectF* */ region) {
    QList<QRectF> region_QList;
    region_QList.reserve(region.len);
    QRectF** region_arr = static_cast<QRectF**>(region.data);
    for (size_t i = 0; i < region.len; ++i) {
        region_QList.push_back(*(region_arr[i]));
    }
    self->changed(region_QList);
}

void QGraphicsScene_Connect_Changed(QGraphicsScene* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScene*, libqt_list /* of QRectF* */) = reinterpret_cast<void (*)(QGraphicsScene*, libqt_list /* of QRectF* */)>(slot);
    QGraphicsScene::connect(self,
                            static_cast<void (QGraphicsScene::*)(const QList<QRectF>&)>(&QGraphicsScene::changed),
                            [self, slotFunc](const QList<QRectF>& region) {
                                const QList<QRectF>& region_ret = region;
                                // Convert QList<> from C++ memory to manually-managed C memory
                                QRectF** region_arr = static_cast<QRectF**>(malloc(sizeof(QRectF*) * (region_ret.size())));
                                for (qsizetype i = 0; i < region_ret.size(); ++i) {
                                    region_arr[i] = new QRectF(region_ret[i]);
                                }
                                libqt_list region_out;
                                region_out.len = region_ret.size();
                                region_out.data = static_cast<void*>(region_arr);
                                libqt_list /* of QRectF* */ sigval1 = region_out;
                                slotFunc(self, sigval1);
                                free(region_arr);
                            });
}

void QGraphicsScene_SceneRectChanged(QGraphicsScene* self, const QRectF* rect) {
    self->sceneRectChanged(*rect);
}

void QGraphicsScene_Connect_SceneRectChanged(QGraphicsScene* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScene*, QRectF*) = reinterpret_cast<void (*)(QGraphicsScene*, QRectF*)>(slot);
    QGraphicsScene::connect(self,
                            static_cast<void (QGraphicsScene::*)(const QRectF&)>(&QGraphicsScene::sceneRectChanged),
                            [self, slotFunc](const QRectF& rect) {
                                const QRectF& rect_ret = rect;
                                // Cast returned reference into pointer
                                QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);
                                slotFunc(self, sigval1);
                            });
}

void QGraphicsScene_SelectionChanged(QGraphicsScene* self) {
    self->selectionChanged();
}

void QGraphicsScene_Connect_SelectionChanged(QGraphicsScene* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScene*) = reinterpret_cast<void (*)(QGraphicsScene*)>(slot);
    QGraphicsScene::connect(self,
                            static_cast<void (QGraphicsScene::*)()>(&QGraphicsScene::selectionChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QGraphicsScene_FocusItemChanged(QGraphicsScene* self, QGraphicsItem* newFocus, QGraphicsItem* oldFocus, int reason) {
    self->focusItemChanged(newFocus, oldFocus, static_cast<Qt::FocusReason>(reason));
}

void QGraphicsScene_Connect_FocusItemChanged(QGraphicsScene* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScene*, QGraphicsItem*, QGraphicsItem*, int) = reinterpret_cast<void (*)(QGraphicsScene*, QGraphicsItem*, QGraphicsItem*, int)>(slot);
    QGraphicsScene::connect(self,
                            static_cast<void (QGraphicsScene::*)(QGraphicsItem*, QGraphicsItem*, Qt::FocusReason)>(&QGraphicsScene::focusItemChanged),
                            [self, slotFunc](QGraphicsItem* newFocus, QGraphicsItem* oldFocus, Qt::FocusReason reason) {
                                QGraphicsItem* sigval1 = newFocus;
                                QGraphicsItem* sigval2 = oldFocus;
                                int sigval3 = static_cast<int>(reason);
                                slotFunc(self, sigval1, sigval2, sigval3);
                            });
}

libqt_string QGraphicsScene_Tr2(const char* s, const char* c) {
    auto _ret = QGraphicsScene::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsScene_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGraphicsScene::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGraphicsScene_Render2(QGraphicsScene* self, QPainter* painter, const QRectF* target) {
    self->render(painter, *target);
}

void QGraphicsScene_Render3(QGraphicsScene* self, QPainter* painter, const QRectF* target, const QRectF* source) {
    self->render(painter, *target, *source);
}

void QGraphicsScene_Render4(QGraphicsScene* self, QPainter* painter, const QRectF* target, const QRectF* source, int aspectRatioMode) {
    self->render(painter, *target, *source, static_cast<Qt::AspectRatioMode>(aspectRatioMode));
}

libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items1(const QGraphicsScene* self, int order) {
    QList<QGraphicsItem*> _ret = self->items(static_cast<Qt::SortOrder>(order));
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

libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items22(const QGraphicsScene* self, const QPointF* pos, int mode) {
    QList<QGraphicsItem*> _ret = self->items(*pos, static_cast<Qt::ItemSelectionMode>(mode));
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

libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items32(const QGraphicsScene* self, const QPointF* pos, int mode, int order) {
    QList<QGraphicsItem*> _ret = self->items(*pos, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
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

libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items42(const QGraphicsScene* self, const QPointF* pos, int mode, int order, const QTransform* deviceTransform) {
    QList<QGraphicsItem*> _ret = self->items(*pos, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
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

libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items23(const QGraphicsScene* self, const QRectF* rect, int mode) {
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

libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items33(const QGraphicsScene* self, const QRectF* rect, int mode, int order) {
    QList<QGraphicsItem*> _ret = self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
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

libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items43(const QGraphicsScene* self, const QRectF* rect, int mode, int order, const QTransform* deviceTransform) {
    QList<QGraphicsItem*> _ret = self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
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

libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items24(const QGraphicsScene* self, const QPolygonF* polygon, int mode) {
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

libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items34(const QGraphicsScene* self, const QPolygonF* polygon, int mode, int order) {
    QList<QGraphicsItem*> _ret = self->items(*polygon, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
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

libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items44(const QGraphicsScene* self, const QPolygonF* polygon, int mode, int order, const QTransform* deviceTransform) {
    QList<QGraphicsItem*> _ret = self->items(*polygon, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
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

libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items25(const QGraphicsScene* self, const QPainterPath* path, int mode) {
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

libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items35(const QGraphicsScene* self, const QPainterPath* path, int mode, int order) {
    QList<QGraphicsItem*> _ret = self->items(*path, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
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

libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items45(const QGraphicsScene* self, const QPainterPath* path, int mode, int order, const QTransform* deviceTransform) {
    QList<QGraphicsItem*> _ret = self->items(*path, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
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

libqt_list /* of QGraphicsItem* */ QGraphicsScene_Items7(const QGraphicsScene* self, double x, double y, double w, double h, int mode, int order, const QTransform* deviceTransform) {
    QList<QGraphicsItem*> _ret = self->items(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
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

libqt_list /* of QGraphicsItem* */ QGraphicsScene_CollidingItems2(const QGraphicsScene* self, const QGraphicsItem* item, int mode) {
    QList<QGraphicsItem*> _ret = self->collidingItems(item, static_cast<Qt::ItemSelectionMode>(mode));
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

void QGraphicsScene_SetSelectionArea22(QGraphicsScene* self, const QPainterPath* path, int selectionOperation) {
    self->setSelectionArea(*path, static_cast<Qt::ItemSelectionOperation>(selectionOperation));
}

void QGraphicsScene_SetSelectionArea3(QGraphicsScene* self, const QPainterPath* path, int selectionOperation, int mode) {
    self->setSelectionArea(*path, static_cast<Qt::ItemSelectionOperation>(selectionOperation), static_cast<Qt::ItemSelectionMode>(mode));
}

void QGraphicsScene_SetSelectionArea4(QGraphicsScene* self, const QPainterPath* path, int selectionOperation, int mode, const QTransform* deviceTransform) {
    self->setSelectionArea(*path, static_cast<Qt::ItemSelectionOperation>(selectionOperation), static_cast<Qt::ItemSelectionMode>(mode), *deviceTransform);
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse22(QGraphicsScene* self, const QRectF* rect, const QPen* pen) {
    return self->addEllipse(*rect, *pen);
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse3(QGraphicsScene* self, const QRectF* rect, const QPen* pen, const QBrush* brush) {
    return self->addEllipse(*rect, *pen, *brush);
}

QGraphicsLineItem* QGraphicsScene_AddLine22(QGraphicsScene* self, const QLineF* line, const QPen* pen) {
    return self->addLine(*line, *pen);
}

QGraphicsPathItem* QGraphicsScene_AddPath2(QGraphicsScene* self, const QPainterPath* path, const QPen* pen) {
    return self->addPath(*path, *pen);
}

QGraphicsPathItem* QGraphicsScene_AddPath3(QGraphicsScene* self, const QPainterPath* path, const QPen* pen, const QBrush* brush) {
    return self->addPath(*path, *pen, *brush);
}

QGraphicsPolygonItem* QGraphicsScene_AddPolygon2(QGraphicsScene* self, const QPolygonF* polygon, const QPen* pen) {
    return self->addPolygon(*polygon, *pen);
}

QGraphicsPolygonItem* QGraphicsScene_AddPolygon3(QGraphicsScene* self, const QPolygonF* polygon, const QPen* pen, const QBrush* brush) {
    return self->addPolygon(*polygon, *pen, *brush);
}

QGraphicsRectItem* QGraphicsScene_AddRect22(QGraphicsScene* self, const QRectF* rect, const QPen* pen) {
    return self->addRect(*rect, *pen);
}

QGraphicsRectItem* QGraphicsScene_AddRect3(QGraphicsScene* self, const QRectF* rect, const QPen* pen, const QBrush* brush) {
    return self->addRect(*rect, *pen, *brush);
}

QGraphicsTextItem* QGraphicsScene_AddText2(QGraphicsScene* self, const libqt_string text, const QFont* font) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addText(text_QString, *font);
}

QGraphicsSimpleTextItem* QGraphicsScene_AddSimpleText2(QGraphicsScene* self, const libqt_string text, const QFont* font) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addSimpleText(text_QString, *font);
}

QGraphicsProxyWidget* QGraphicsScene_AddWidget2(QGraphicsScene* self, QWidget* widget, int wFlags) {
    return self->addWidget(widget, static_cast<Qt::WindowFlags>(wFlags));
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse5(QGraphicsScene* self, double x, double y, double w, double h, const QPen* pen) {
    return self->addEllipse(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), *pen);
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse6(QGraphicsScene* self, double x, double y, double w, double h, const QPen* pen, const QBrush* brush) {
    return self->addEllipse(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), *pen, *brush);
}

QGraphicsLineItem* QGraphicsScene_AddLine5(QGraphicsScene* self, double x1, double y1, double x2, double y2, const QPen* pen) {
    return self->addLine(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2), *pen);
}

QGraphicsRectItem* QGraphicsScene_AddRect5(QGraphicsScene* self, double x, double y, double w, double h, const QPen* pen) {
    return self->addRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), *pen);
}

QGraphicsRectItem* QGraphicsScene_AddRect6(QGraphicsScene* self, double x, double y, double w, double h, const QPen* pen, const QBrush* brush) {
    return self->addRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), *pen, *brush);
}

void QGraphicsScene_SetFocusItem2(QGraphicsScene* self, QGraphicsItem* item, int focusReason) {
    self->setFocusItem(item, static_cast<Qt::FocusReason>(focusReason));
}

void QGraphicsScene_SetFocus1(QGraphicsScene* self, int focusReason) {
    self->setFocus(static_cast<Qt::FocusReason>(focusReason));
}

void QGraphicsScene_Invalidate5(QGraphicsScene* self, double x, double y, double w, double h, int layers) {
    self->invalidate(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<QGraphicsScene::SceneLayers>(layers));
}

void QGraphicsScene_Update1(QGraphicsScene* self, const QRectF* rect) {
    self->update(*rect);
}

void QGraphicsScene_Invalidate1(QGraphicsScene* self, const QRectF* rect) {
    self->invalidate(*rect);
}

void QGraphicsScene_Invalidate22(QGraphicsScene* self, const QRectF* rect, int layers) {
    self->invalidate(*rect, static_cast<QGraphicsScene::SceneLayers>(layers));
}

// Base class handler implementation
QMetaObject* QGraphicsScene_SuperMetaObject(const QGraphicsScene* self) {
    return (QMetaObject*)self->QGraphicsScene::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnMetaObject(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self)))
        vqgraphicsscene->qgraphicsscene_metaobject_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGraphicsScene_SuperMetacast(QGraphicsScene* self, const char* param1) {
    return self->QGraphicsScene::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnMetacast(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_metacast_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGraphicsScene_SuperMetacall(QGraphicsScene* self, int param1, int param2, void** param3) {
    return self->QGraphicsScene::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnMetacall(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_metacall_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_Metacall_Callback>(slot);
}

// Base class handler implementation
QVariant* QGraphicsScene_SuperInputMethodQuery(const QGraphicsScene* self, int query) {
    return new QVariant(self->QGraphicsScene::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnInputMethodQuery(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self)))
        vqgraphicsscene->qgraphicsscene_inputmethodquery_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_InputMethodQuery_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsScene_SuperEvent(QGraphicsScene* self, QEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        return vqgraphicsscene->QGraphicsScene::event(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnEvent(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_event_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_Event_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsScene_SuperEventFilter(QGraphicsScene* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        return vqgraphicsscene->QGraphicsScene::eventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnEventFilter(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_eventfilter_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_EventFilter_Callback>(slot);
}

// Base class handler implementation
void QGraphicsScene_SuperContextMenuEvent(QGraphicsScene* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnContextMenuEvent(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_contextmenuevent_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsScene_SuperDragEnterEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDragEnterEvent(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_dragenterevent_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DragEnterEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsScene_SuperDragMoveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDragMoveEvent(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_dragmoveevent_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DragMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsScene_SuperDragLeaveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDragLeaveEvent(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_dragleaveevent_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DragLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsScene_SuperDropEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDropEvent(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_dropevent_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DropEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsScene_SuperFocusInEvent(QGraphicsScene* self, QFocusEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnFocusInEvent(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_focusinevent_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsScene_SuperFocusOutEvent(QGraphicsScene* self, QFocusEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnFocusOutEvent(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_focusoutevent_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsScene_SuperHelpEvent(QGraphicsScene* self, QGraphicsSceneHelpEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::helpEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::helpEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnHelpEvent(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_helpevent_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_HelpEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsScene_SuperKeyPressEvent(QGraphicsScene* self, QKeyEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnKeyPressEvent(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_keypressevent_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsScene_SuperKeyReleaseEvent(QGraphicsScene* self, QKeyEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnKeyReleaseEvent(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_keyreleaseevent_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_KeyReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsScene_SuperMousePressEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnMousePressEvent(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_mousepressevent_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsScene_SuperMouseMoveEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnMouseMoveEvent(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_mousemoveevent_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsScene_SuperMouseReleaseEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnMouseReleaseEvent(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_mousereleaseevent_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsScene_SuperMouseDoubleClickEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnMouseDoubleClickEvent(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_mousedoubleclickevent_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_MouseDoubleClickEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsScene_SuperWheelEvent(QGraphicsScene* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnWheelEvent(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_wheelevent_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_WheelEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsScene_SuperInputMethodEvent(QGraphicsScene* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnInputMethodEvent(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_inputmethodevent_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_InputMethodEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsScene_SuperDrawBackground(QGraphicsScene* self, QPainter* painter, const QRectF* rect) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::drawBackground(painter, *rect);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::drawBackground called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDrawBackground(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_drawbackground_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DrawBackground_Callback>(slot);
}

// Base class handler implementation
void QGraphicsScene_SuperDrawForeground(QGraphicsScene* self, QPainter* painter, const QRectF* rect) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::drawForeground(painter, *rect);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::drawForeground called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDrawForeground(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_drawforeground_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DrawForeground_Callback>(slot);
}

// Base class handler implementation
void QGraphicsScene_SuperDrawItems(QGraphicsScene* self, QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options, QWidget* widget) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::drawItems(painter, static_cast<int>(numItems), items, options, widget);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::drawItems called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDrawItems(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_drawitems_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DrawItems_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsScene_SuperFocusNextPrevChild(QGraphicsScene* self, bool next) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        return vqgraphicsscene->QGraphicsScene::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnFocusNextPrevChild(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_focusnextprevchild_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsScene_TimerEvent(QGraphicsScene* self, QTimerEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsScene::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsScene_SuperTimerEvent(QGraphicsScene* self, QTimerEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnTimerEvent(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_timerevent_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsScene_ChildEvent(QGraphicsScene* self, QChildEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsScene::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsScene_SuperChildEvent(QGraphicsScene* self, QChildEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnChildEvent(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_childevent_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsScene_CustomEvent(QGraphicsScene* self, QEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsScene::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsScene_SuperCustomEvent(QGraphicsScene* self, QEvent* event) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnCustomEvent(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_customevent_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsScene_ConnectNotify(QGraphicsScene* self, const QMetaMethod* signal) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsScene::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsScene_SuperConnectNotify(QGraphicsScene* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnConnectNotify(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_connectnotify_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsScene_DisconnectNotify(QGraphicsScene* self, const QMetaMethod* signal) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene) {
        vqgraphicsscene->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsScene::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsScene_SuperDisconnectNotify(QGraphicsScene* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self)) {
        vqgraphicsscene->QGraphicsScene::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsScene::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDisconnectNotify(QGraphicsScene* self, intptr_t slot) {
    if (auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self))
        vqgraphicsscene->qgraphicsscene_disconnectnotify_callback = reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QGraphicsScene_Sender(const QGraphicsScene* self) {
    if (auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self))) {
        return vqgraphicsscene->VirtualQGraphicsScene::sender();
    } else
        qFatal("Error: Protected method QGraphicsScene::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsScene_SenderSignalIndex(const QGraphicsScene* self) {
    if (auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self))) {
        return vqgraphicsscene->VirtualQGraphicsScene::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGraphicsScene::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsScene_Receivers(const QGraphicsScene* self, const char* signal) {
    if (auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self))) {
        return vqgraphicsscene->VirtualQGraphicsScene::receivers(signal);
    } else
        qFatal("Error: Protected method QGraphicsScene::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsScene_IsSignalConnected(const QGraphicsScene* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self))) {
        return vqgraphicsscene->VirtualQGraphicsScene::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGraphicsScene::isSignalConnected called without a directly constructed type");
}

void QGraphicsScene_Delete(QGraphicsScene* self) {
    delete self;
}
