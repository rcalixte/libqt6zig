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
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
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
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGraphicsScene*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsScene_OnMetacall(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_Metacall_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsScene_QBaseMetacall(QGraphicsScene* self, int param1, int param2, void** param3) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_Metacall_IsBase(true);
        return vqgraphicsscene->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGraphicsScene*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGraphicsScene_Tr(const char* s) {
    QString _ret = QGraphicsScene::tr(s);
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
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

libqt_list /* of QGraphicsView* */ QGraphicsScene_Views(const QGraphicsScene* self) {
    QList<QGraphicsView*> _ret = self->views();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGraphicsView** _arr = static_cast<QGraphicsView**>(malloc(sizeof(QGraphicsView*) * _ret.size()));
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
    QGraphicsScene::connect(self, &QGraphicsScene::changed, [self, slotFunc](const QList<QRectF>& region) {
        const QList<QRectF>& region_ret = region;
        // Convert QList<> from C++ memory to manually-managed C memory
        QRectF** region_arr = static_cast<QRectF**>(malloc(sizeof(QRectF*) * region_ret.size()));
        for (qsizetype i = 0; i < region_ret.size(); ++i) {
            region_arr[i] = new QRectF(region_ret[i]);
        }
        libqt_list region_out;
        region_out.len = region_ret.size();
        region_out.data = static_cast<void*>(region_arr);
        libqt_list /* of QRectF* */ sigval1 = region_out;
        slotFunc(self, sigval1);
    });
}

void QGraphicsScene_SceneRectChanged(QGraphicsScene* self, const QRectF* rect) {
    self->sceneRectChanged(*rect);
}

void QGraphicsScene_Connect_SceneRectChanged(QGraphicsScene* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScene*, QRectF*) = reinterpret_cast<void (*)(QGraphicsScene*, QRectF*)>(slot);
    QGraphicsScene::connect(self, &QGraphicsScene::sceneRectChanged, [self, slotFunc](const QRectF& rect) {
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
    QGraphicsScene::connect(self, &QGraphicsScene::selectionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGraphicsScene_FocusItemChanged(QGraphicsScene* self, QGraphicsItem* newFocus, QGraphicsItem* oldFocus, int reason) {
    self->focusItemChanged(newFocus, oldFocus, static_cast<Qt::FocusReason>(reason));
}

void QGraphicsScene_Connect_FocusItemChanged(QGraphicsScene* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScene*, QGraphicsItem*, QGraphicsItem*, int) = reinterpret_cast<void (*)(QGraphicsScene*, QGraphicsItem*, QGraphicsItem*, int)>(slot);
    QGraphicsScene::connect(self, &QGraphicsScene::focusItemChanged, [self, slotFunc](QGraphicsItem* newFocus, QGraphicsItem* oldFocus, Qt::FocusReason reason) {
        QGraphicsItem* sigval1 = newFocus;
        QGraphicsItem* sigval2 = oldFocus;
        int sigval3 = static_cast<int>(reason);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

libqt_string QGraphicsScene_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsScene::tr(s, c);
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
    QString _ret = QGraphicsScene::tr(s, c, static_cast<int>(n));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
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
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.size()));
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

// Derived class handler implementation
QVariant* QGraphicsScene_InputMethodQuery(const QGraphicsScene* self, int query) {
    auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self));
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        return new QVariant(vqgraphicsscene->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQGraphicsScene*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QGraphicsScene_QBaseInputMethodQuery(const QGraphicsScene* self, int query) {
    auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self));
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_InputMethodQuery_IsBase(true);
        return new QVariant(vqgraphicsscene->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQGraphicsScene*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnInputMethodQuery(const QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self));
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsScene_Event(QGraphicsScene* self, QEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        return vqgraphicsscene->event(event);
    } else {
        return ((VirtualQGraphicsScene*)self)->event(event);
    }
}

// Base class handler implementation
bool QGraphicsScene_QBaseEvent(QGraphicsScene* self, QEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_Event_IsBase(true);
        return vqgraphicsscene->event(event);
    } else {
        return ((VirtualQGraphicsScene*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnEvent(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_Event_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsScene_EventFilter(QGraphicsScene* self, QObject* watched, QEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        return vqgraphicsscene->eventFilter(watched, event);
    } else {
        return ((VirtualQGraphicsScene*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsScene_QBaseEventFilter(QGraphicsScene* self, QObject* watched, QEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_EventFilter_IsBase(true);
        return vqgraphicsscene->eventFilter(watched, event);
    } else {
        return ((VirtualQGraphicsScene*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnEventFilter(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_ContextMenuEvent(QGraphicsScene* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->contextMenuEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseContextMenuEvent(QGraphicsScene* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_ContextMenuEvent_IsBase(true);
        vqgraphicsscene->contextMenuEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnContextMenuEvent(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_DragEnterEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->dragEnterEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseDragEnterEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_DragEnterEvent_IsBase(true);
        vqgraphicsscene->dragEnterEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDragEnterEvent(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_DragMoveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->dragMoveEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseDragMoveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_DragMoveEvent_IsBase(true);
        vqgraphicsscene->dragMoveEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDragMoveEvent(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_DragLeaveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->dragLeaveEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseDragLeaveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_DragLeaveEvent_IsBase(true);
        vqgraphicsscene->dragLeaveEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDragLeaveEvent(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_DropEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->dropEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseDropEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_DropEvent_IsBase(true);
        vqgraphicsscene->dropEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDropEvent(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_FocusInEvent(QGraphicsScene* self, QFocusEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->focusInEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseFocusInEvent(QGraphicsScene* self, QFocusEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_FocusInEvent_IsBase(true);
        vqgraphicsscene->focusInEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnFocusInEvent(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_FocusOutEvent(QGraphicsScene* self, QFocusEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->focusOutEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseFocusOutEvent(QGraphicsScene* self, QFocusEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_FocusOutEvent_IsBase(true);
        vqgraphicsscene->focusOutEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnFocusOutEvent(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_HelpEvent(QGraphicsScene* self, QGraphicsSceneHelpEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->helpEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->helpEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseHelpEvent(QGraphicsScene* self, QGraphicsSceneHelpEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_HelpEvent_IsBase(true);
        vqgraphicsscene->helpEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->helpEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnHelpEvent(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_HelpEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_HelpEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_KeyPressEvent(QGraphicsScene* self, QKeyEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->keyPressEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseKeyPressEvent(QGraphicsScene* self, QKeyEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_KeyPressEvent_IsBase(true);
        vqgraphicsscene->keyPressEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnKeyPressEvent(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_KeyReleaseEvent(QGraphicsScene* self, QKeyEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->keyReleaseEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseKeyReleaseEvent(QGraphicsScene* self, QKeyEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_KeyReleaseEvent_IsBase(true);
        vqgraphicsscene->keyReleaseEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnKeyReleaseEvent(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_MousePressEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->mousePressEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseMousePressEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_MousePressEvent_IsBase(true);
        vqgraphicsscene->mousePressEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnMousePressEvent(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_MouseMoveEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->mouseMoveEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseMouseMoveEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_MouseMoveEvent_IsBase(true);
        vqgraphicsscene->mouseMoveEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnMouseMoveEvent(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_MouseReleaseEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->mouseReleaseEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseMouseReleaseEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_MouseReleaseEvent_IsBase(true);
        vqgraphicsscene->mouseReleaseEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnMouseReleaseEvent(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_MouseDoubleClickEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseMouseDoubleClickEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_MouseDoubleClickEvent_IsBase(true);
        vqgraphicsscene->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnMouseDoubleClickEvent(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_WheelEvent(QGraphicsScene* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->wheelEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseWheelEvent(QGraphicsScene* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_WheelEvent_IsBase(true);
        vqgraphicsscene->wheelEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnWheelEvent(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_InputMethodEvent(QGraphicsScene* self, QInputMethodEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->inputMethodEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseInputMethodEvent(QGraphicsScene* self, QInputMethodEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_InputMethodEvent_IsBase(true);
        vqgraphicsscene->inputMethodEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnInputMethodEvent(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_DrawBackground(QGraphicsScene* self, QPainter* painter, const QRectF* rect) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->drawBackground(painter, *rect);
    } else {
        ((VirtualQGraphicsScene*)self)->drawBackground(painter, *rect);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseDrawBackground(QGraphicsScene* self, QPainter* painter, const QRectF* rect) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_DrawBackground_IsBase(true);
        vqgraphicsscene->drawBackground(painter, *rect);
    } else {
        ((VirtualQGraphicsScene*)self)->drawBackground(painter, *rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDrawBackground(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_DrawBackground_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DrawBackground_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_DrawForeground(QGraphicsScene* self, QPainter* painter, const QRectF* rect) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->drawForeground(painter, *rect);
    } else {
        ((VirtualQGraphicsScene*)self)->drawForeground(painter, *rect);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseDrawForeground(QGraphicsScene* self, QPainter* painter, const QRectF* rect) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_DrawForeground_IsBase(true);
        vqgraphicsscene->drawForeground(painter, *rect);
    } else {
        ((VirtualQGraphicsScene*)self)->drawForeground(painter, *rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDrawForeground(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_DrawForeground_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DrawForeground_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsScene_FocusNextPrevChild(QGraphicsScene* self, bool next) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        return vqgraphicsscene->focusNextPrevChild(next);
    } else {
        return ((VirtualQGraphicsScene*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QGraphicsScene_QBaseFocusNextPrevChild(QGraphicsScene* self, bool next) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_FocusNextPrevChild_IsBase(true);
        return vqgraphicsscene->focusNextPrevChild(next);
    } else {
        return ((VirtualQGraphicsScene*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnFocusNextPrevChild(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_TimerEvent(QGraphicsScene* self, QTimerEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->timerEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseTimerEvent(QGraphicsScene* self, QTimerEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_TimerEvent_IsBase(true);
        vqgraphicsscene->timerEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnTimerEvent(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_TimerEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_ChildEvent(QGraphicsScene* self, QChildEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->childEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseChildEvent(QGraphicsScene* self, QChildEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_ChildEvent_IsBase(true);
        vqgraphicsscene->childEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnChildEvent(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_ChildEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_CustomEvent(QGraphicsScene* self, QEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->customEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseCustomEvent(QGraphicsScene* self, QEvent* event) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_CustomEvent_IsBase(true);
        vqgraphicsscene->customEvent(event);
    } else {
        ((VirtualQGraphicsScene*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnCustomEvent(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_CustomEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_ConnectNotify(QGraphicsScene* self, const QMetaMethod* signal) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->connectNotify(*signal);
    } else {
        ((VirtualQGraphicsScene*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseConnectNotify(QGraphicsScene* self, const QMetaMethod* signal) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_ConnectNotify_IsBase(true);
        vqgraphicsscene->connectNotify(*signal);
    } else {
        ((VirtualQGraphicsScene*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnConnectNotify(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_ConnectNotify_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsScene_DisconnectNotify(QGraphicsScene* self, const QMetaMethod* signal) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->disconnectNotify(*signal);
    } else {
        ((VirtualQGraphicsScene*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsScene_QBaseDisconnectNotify(QGraphicsScene* self, const QMetaMethod* signal) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_DisconnectNotify_IsBase(true);
        vqgraphicsscene->disconnectNotify(*signal);
    } else {
        ((VirtualQGraphicsScene*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDisconnectNotify(QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_DisconnectNotify_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGraphicsScene_Sender(const QGraphicsScene* self) {
    auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self));
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        return vqgraphicsscene->sender();
    } else {
        return ((VirtualQGraphicsScene*)self)->sender();
    }
}

// Base class handler implementation
QObject* QGraphicsScene_QBaseSender(const QGraphicsScene* self) {
    auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self));
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_Sender_IsBase(true);
        return vqgraphicsscene->sender();
    } else {
        return ((VirtualQGraphicsScene*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnSender(const QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self));
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_Sender_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsScene_SenderSignalIndex(const QGraphicsScene* self) {
    auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self));
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        return vqgraphicsscene->senderSignalIndex();
    } else {
        return ((VirtualQGraphicsScene*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QGraphicsScene_QBaseSenderSignalIndex(const QGraphicsScene* self) {
    auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self));
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_SenderSignalIndex_IsBase(true);
        return vqgraphicsscene->senderSignalIndex();
    } else {
        return ((VirtualQGraphicsScene*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnSenderSignalIndex(const QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self));
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsScene_Receivers(const QGraphicsScene* self, const char* signal) {
    auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self));
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        return vqgraphicsscene->receivers(signal);
    } else {
        return ((VirtualQGraphicsScene*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QGraphicsScene_QBaseReceivers(const QGraphicsScene* self, const char* signal) {
    auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self));
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_Receivers_IsBase(true);
        return vqgraphicsscene->receivers(signal);
    } else {
        return ((VirtualQGraphicsScene*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnReceivers(const QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self));
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_Receivers_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsScene_IsSignalConnected(const QGraphicsScene* self, const QMetaMethod* signal) {
    auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self));
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        return vqgraphicsscene->isSignalConnected(*signal);
    } else {
        return ((VirtualQGraphicsScene*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGraphicsScene_QBaseIsSignalConnected(const QGraphicsScene* self, const QMetaMethod* signal) {
    auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self));
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_IsSignalConnected_IsBase(true);
        return vqgraphicsscene->isSignalConnected(*signal);
    } else {
        return ((VirtualQGraphicsScene*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnIsSignalConnected(const QGraphicsScene* self, intptr_t slot) {
    auto* vqgraphicsscene = const_cast<VirtualQGraphicsScene*>(dynamic_cast<const VirtualQGraphicsScene*>(self));
    if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
        vqgraphicsscene->setQGraphicsScene_IsSignalConnected_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_IsSignalConnected_Callback>(slot));
    }
}

void QGraphicsScene_Delete(QGraphicsScene* self) {
    delete self;
}
