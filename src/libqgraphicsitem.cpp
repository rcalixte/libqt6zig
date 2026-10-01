#include <QAbstractGraphicsShapeItem>
#include <QBrush>
#include <QChildEvent>
#include <QColor>
#include <QCursor>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QGraphicsEffect>
#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <QGraphicsItemGroup>
#include <QGraphicsLineItem>
#include <QGraphicsObject>
#include <QGraphicsPathItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsPolygonItem>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsSimpleTextItem>
#include <QGraphicsTextItem>
#include <QGraphicsTransform>
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
#include <QPen>
#include <QPixmap>
#include <QPointF>
#include <QPolygonF>
#include <QRectF>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QStyleOptionGraphicsItem>
#include <QTextCursor>
#include <QTextDocument>
#include <QTimerEvent>
#include <QTransform>
#include <QVariant>
#include <QWidget>
#include <qgraphicsitem.h>
#include "libqgraphicsitem.h"
#include "libqgraphicsitem.hxx"

QGraphicsItem* QGraphicsItem_new() {
    return new VirtualQGraphicsItem();
}

QGraphicsItem* QGraphicsItem_new2(QGraphicsItem* parent) {
    return new VirtualQGraphicsItem(parent);
}

QGraphicsScene* QGraphicsItem_Scene(const QGraphicsItem* self) {
    return self->scene();
}

QGraphicsItem* QGraphicsItem_ParentItem(const QGraphicsItem* self) {
    return self->parentItem();
}

QGraphicsItem* QGraphicsItem_TopLevelItem(const QGraphicsItem* self) {
    return self->topLevelItem();
}

QGraphicsObject* QGraphicsItem_ParentObject(const QGraphicsItem* self) {
    return self->parentObject();
}

QGraphicsWidget* QGraphicsItem_ParentWidget(const QGraphicsItem* self) {
    return self->parentWidget();
}

QGraphicsWidget* QGraphicsItem_TopLevelWidget(const QGraphicsItem* self) {
    return self->topLevelWidget();
}

QGraphicsWidget* QGraphicsItem_Window(const QGraphicsItem* self) {
    return self->window();
}

QGraphicsItem* QGraphicsItem_Panel(const QGraphicsItem* self) {
    return self->panel();
}

void QGraphicsItem_SetParentItem(QGraphicsItem* self, QGraphicsItem* parent) {
    self->setParentItem(parent);
}

libqt_list /* of QGraphicsItem* */ QGraphicsItem_ChildItems(const QGraphicsItem* self) {
    QList<QGraphicsItem*> _ret = self->childItems();
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

bool QGraphicsItem_IsWidget(const QGraphicsItem* self) {
    return self->isWidget();
}

bool QGraphicsItem_IsWindow(const QGraphicsItem* self) {
    return self->isWindow();
}

bool QGraphicsItem_IsPanel(const QGraphicsItem* self) {
    return self->isPanel();
}

QGraphicsObject* QGraphicsItem_ToGraphicsObject(QGraphicsItem* self) {
    return self->toGraphicsObject();
}

QGraphicsObject* QGraphicsItem_ToGraphicsObject2(const QGraphicsItem* self) {
    return (QGraphicsObject*)self->toGraphicsObject();
}

QGraphicsItemGroup* QGraphicsItem_Group(const QGraphicsItem* self) {
    return self->group();
}

void QGraphicsItem_SetGroup(QGraphicsItem* self, QGraphicsItemGroup* group) {
    self->setGroup(group);
}

int QGraphicsItem_Flags(const QGraphicsItem* self) {
    return static_cast<int>(self->flags());
}

void QGraphicsItem_SetFlag(QGraphicsItem* self, int flag) {
    self->setFlag(static_cast<QGraphicsItem::GraphicsItemFlag>(flag));
}

void QGraphicsItem_SetFlags(QGraphicsItem* self, int flags) {
    self->setFlags(static_cast<QGraphicsItem::GraphicsItemFlags>(flags));
}

int QGraphicsItem_CacheMode(const QGraphicsItem* self) {
    return static_cast<int>(self->cacheMode());
}

void QGraphicsItem_SetCacheMode(QGraphicsItem* self, int mode) {
    self->setCacheMode(static_cast<QGraphicsItem::CacheMode>(mode));
}

int QGraphicsItem_PanelModality(const QGraphicsItem* self) {
    return static_cast<int>(self->panelModality());
}

void QGraphicsItem_SetPanelModality(QGraphicsItem* self, int panelModality) {
    self->setPanelModality(static_cast<QGraphicsItem::PanelModality>(panelModality));
}

bool QGraphicsItem_IsBlockedByModalPanel(const QGraphicsItem* self) {
    return self->isBlockedByModalPanel();
}

libqt_string QGraphicsItem_ToolTip(const QGraphicsItem* self) {
    auto _ret = self->toolTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGraphicsItem_SetToolTip(QGraphicsItem* self, const libqt_string toolTip) {
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    self->setToolTip(toolTip_QString);
}

QCursor* QGraphicsItem_Cursor(const QGraphicsItem* self) {
    return new QCursor(self->cursor());
}

void QGraphicsItem_SetCursor(QGraphicsItem* self, const QCursor* cursor) {
    self->setCursor(*cursor);
}

bool QGraphicsItem_HasCursor(const QGraphicsItem* self) {
    return self->hasCursor();
}

void QGraphicsItem_UnsetCursor(QGraphicsItem* self) {
    self->unsetCursor();
}

bool QGraphicsItem_IsVisible(const QGraphicsItem* self) {
    return self->isVisible();
}

bool QGraphicsItem_IsVisibleTo(const QGraphicsItem* self, const QGraphicsItem* parent) {
    return self->isVisibleTo(parent);
}

void QGraphicsItem_SetVisible(QGraphicsItem* self, bool visible) {
    self->setVisible(visible);
}

void QGraphicsItem_Hide(QGraphicsItem* self) {
    self->hide();
}

void QGraphicsItem_Show(QGraphicsItem* self) {
    self->show();
}

bool QGraphicsItem_IsEnabled(const QGraphicsItem* self) {
    return self->isEnabled();
}

void QGraphicsItem_SetEnabled(QGraphicsItem* self, bool enabled) {
    self->setEnabled(enabled);
}

bool QGraphicsItem_IsSelected(const QGraphicsItem* self) {
    return self->isSelected();
}

void QGraphicsItem_SetSelected(QGraphicsItem* self, bool selected) {
    self->setSelected(selected);
}

bool QGraphicsItem_AcceptDrops(const QGraphicsItem* self) {
    return self->acceptDrops();
}

void QGraphicsItem_SetAcceptDrops(QGraphicsItem* self, bool on) {
    self->setAcceptDrops(on);
}

double QGraphicsItem_Opacity(const QGraphicsItem* self) {
    return static_cast<double>(self->opacity());
}

double QGraphicsItem_EffectiveOpacity(const QGraphicsItem* self) {
    return static_cast<double>(self->effectiveOpacity());
}

void QGraphicsItem_SetOpacity(QGraphicsItem* self, double opacity) {
    self->setOpacity(static_cast<qreal>(opacity));
}

QGraphicsEffect* QGraphicsItem_GraphicsEffect(const QGraphicsItem* self) {
    return self->graphicsEffect();
}

void QGraphicsItem_SetGraphicsEffect(QGraphicsItem* self, QGraphicsEffect* effect) {
    self->setGraphicsEffect(effect);
}

int QGraphicsItem_AcceptedMouseButtons(const QGraphicsItem* self) {
    return static_cast<int>(self->acceptedMouseButtons());
}

void QGraphicsItem_SetAcceptedMouseButtons(QGraphicsItem* self, int buttons) {
    self->setAcceptedMouseButtons(static_cast<Qt::MouseButtons>(buttons));
}

bool QGraphicsItem_AcceptHoverEvents(const QGraphicsItem* self) {
    return self->acceptHoverEvents();
}

void QGraphicsItem_SetAcceptHoverEvents(QGraphicsItem* self, bool enabled) {
    self->setAcceptHoverEvents(enabled);
}

bool QGraphicsItem_AcceptTouchEvents(const QGraphicsItem* self) {
    return self->acceptTouchEvents();
}

void QGraphicsItem_SetAcceptTouchEvents(QGraphicsItem* self, bool enabled) {
    self->setAcceptTouchEvents(enabled);
}

bool QGraphicsItem_FiltersChildEvents(const QGraphicsItem* self) {
    return self->filtersChildEvents();
}

void QGraphicsItem_SetFiltersChildEvents(QGraphicsItem* self, bool enabled) {
    self->setFiltersChildEvents(enabled);
}

bool QGraphicsItem_HandlesChildEvents(const QGraphicsItem* self) {
    return self->handlesChildEvents();
}

void QGraphicsItem_SetHandlesChildEvents(QGraphicsItem* self, bool enabled) {
    self->setHandlesChildEvents(enabled);
}

bool QGraphicsItem_IsActive(const QGraphicsItem* self) {
    return self->isActive();
}

void QGraphicsItem_SetActive(QGraphicsItem* self, bool active) {
    self->setActive(active);
}

bool QGraphicsItem_HasFocus(const QGraphicsItem* self) {
    return self->hasFocus();
}

void QGraphicsItem_SetFocus(QGraphicsItem* self) {
    self->setFocus();
}

void QGraphicsItem_ClearFocus(QGraphicsItem* self) {
    self->clearFocus();
}

QGraphicsItem* QGraphicsItem_FocusProxy(const QGraphicsItem* self) {
    return self->focusProxy();
}

void QGraphicsItem_SetFocusProxy(QGraphicsItem* self, QGraphicsItem* item) {
    self->setFocusProxy(item);
}

QGraphicsItem* QGraphicsItem_FocusItem(const QGraphicsItem* self) {
    return self->focusItem();
}

QGraphicsItem* QGraphicsItem_FocusScopeItem(const QGraphicsItem* self) {
    return self->focusScopeItem();
}

void QGraphicsItem_GrabMouse(QGraphicsItem* self) {
    self->grabMouse();
}

void QGraphicsItem_UngrabMouse(QGraphicsItem* self) {
    self->ungrabMouse();
}

void QGraphicsItem_GrabKeyboard(QGraphicsItem* self) {
    self->grabKeyboard();
}

void QGraphicsItem_UngrabKeyboard(QGraphicsItem* self) {
    self->ungrabKeyboard();
}

QPointF* QGraphicsItem_Pos(const QGraphicsItem* self) {
    return new QPointF(self->pos());
}

double QGraphicsItem_X(const QGraphicsItem* self) {
    return static_cast<double>(self->x());
}

void QGraphicsItem_SetX(QGraphicsItem* self, double x) {
    self->setX(static_cast<qreal>(x));
}

double QGraphicsItem_Y(const QGraphicsItem* self) {
    return static_cast<double>(self->y());
}

void QGraphicsItem_SetY(QGraphicsItem* self, double y) {
    self->setY(static_cast<qreal>(y));
}

QPointF* QGraphicsItem_ScenePos(const QGraphicsItem* self) {
    return new QPointF(self->scenePos());
}

void QGraphicsItem_SetPos(QGraphicsItem* self, const QPointF* pos) {
    self->setPos(*pos);
}

void QGraphicsItem_SetPos2(QGraphicsItem* self, double x, double y) {
    self->setPos(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QGraphicsItem_MoveBy(QGraphicsItem* self, double dx, double dy) {
    self->moveBy(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QGraphicsItem_EnsureVisible(QGraphicsItem* self) {
    self->ensureVisible();
}

void QGraphicsItem_EnsureVisible2(QGraphicsItem* self, double x, double y, double w, double h) {
    self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QTransform* QGraphicsItem_Transform(const QGraphicsItem* self) {
    return new QTransform(self->transform());
}

QTransform* QGraphicsItem_SceneTransform(const QGraphicsItem* self) {
    return new QTransform(self->sceneTransform());
}

QTransform* QGraphicsItem_DeviceTransform(const QGraphicsItem* self, const QTransform* viewportTransform) {
    return new QTransform(self->deviceTransform(*viewportTransform));
}

QTransform* QGraphicsItem_ItemTransform(const QGraphicsItem* self, const QGraphicsItem* other) {
    return new QTransform(self->itemTransform(other));
}

void QGraphicsItem_SetTransform(QGraphicsItem* self, const QTransform* matrix) {
    self->setTransform(*matrix);
}

void QGraphicsItem_ResetTransform(QGraphicsItem* self) {
    self->resetTransform();
}

void QGraphicsItem_SetRotation(QGraphicsItem* self, double angle) {
    self->setRotation(static_cast<qreal>(angle));
}

double QGraphicsItem_Rotation(const QGraphicsItem* self) {
    return static_cast<double>(self->rotation());
}

void QGraphicsItem_SetScale(QGraphicsItem* self, double scale) {
    self->setScale(static_cast<qreal>(scale));
}

double QGraphicsItem_Scale(const QGraphicsItem* self) {
    return static_cast<double>(self->scale());
}

libqt_list /* of QGraphicsTransform* */ QGraphicsItem_Transformations(const QGraphicsItem* self) {
    QList<QGraphicsTransform*> _ret = self->transformations();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGraphicsTransform** _arr = static_cast<QGraphicsTransform**>(malloc(sizeof(QGraphicsTransform*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGraphicsItem_SetTransformations(QGraphicsItem* self, const libqt_list /* of QGraphicsTransform* */ transformations) {
    QList<QGraphicsTransform*> transformations_QList;
    transformations_QList.reserve(transformations.len);
    QGraphicsTransform** transformations_arr = static_cast<QGraphicsTransform**>(transformations.data);
    for (size_t i = 0; i < transformations.len; ++i) {
        transformations_QList.push_back(transformations_arr[i]);
    }
    self->setTransformations(transformations_QList);
}

QPointF* QGraphicsItem_TransformOriginPoint(const QGraphicsItem* self) {
    return new QPointF(self->transformOriginPoint());
}

void QGraphicsItem_SetTransformOriginPoint(QGraphicsItem* self, const QPointF* origin) {
    self->setTransformOriginPoint(*origin);
}

void QGraphicsItem_SetTransformOriginPoint2(QGraphicsItem* self, double ax, double ay) {
    self->setTransformOriginPoint(static_cast<qreal>(ax), static_cast<qreal>(ay));
}

void QGraphicsItem_Advance(QGraphicsItem* self, int phase) {
    self->advance(static_cast<int>(phase));
}

double QGraphicsItem_ZValue(const QGraphicsItem* self) {
    return static_cast<double>(self->zValue());
}

void QGraphicsItem_SetZValue(QGraphicsItem* self, double z) {
    self->setZValue(static_cast<qreal>(z));
}

void QGraphicsItem_StackBefore(QGraphicsItem* self, const QGraphicsItem* sibling) {
    self->stackBefore(sibling);
}

QRectF* QGraphicsItem_BoundingRect(const QGraphicsItem* self) {
    return new QRectF(self->boundingRect());
}

QRectF* QGraphicsItem_ChildrenBoundingRect(const QGraphicsItem* self) {
    return new QRectF(self->childrenBoundingRect());
}

QRectF* QGraphicsItem_SceneBoundingRect(const QGraphicsItem* self) {
    return new QRectF(self->sceneBoundingRect());
}

QPainterPath* QGraphicsItem_Shape(const QGraphicsItem* self) {
    return new QPainterPath(self->shape());
}

bool QGraphicsItem_IsClipped(const QGraphicsItem* self) {
    return self->isClipped();
}

QPainterPath* QGraphicsItem_ClipPath(const QGraphicsItem* self) {
    return new QPainterPath(self->clipPath());
}

bool QGraphicsItem_Contains(const QGraphicsItem* self, const QPointF* point) {
    return self->contains(*point);
}

bool QGraphicsItem_CollidesWithItem(const QGraphicsItem* self, const QGraphicsItem* other, int mode) {
    return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QGraphicsItem_CollidesWithPath(const QGraphicsItem* self, const QPainterPath* path, int mode) {
    return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

libqt_list /* of QGraphicsItem* */ QGraphicsItem_CollidingItems(const QGraphicsItem* self) {
    QList<QGraphicsItem*> _ret = self->collidingItems();
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

bool QGraphicsItem_IsObscured(const QGraphicsItem* self) {
    return self->isObscured();
}

bool QGraphicsItem_IsObscured2(const QGraphicsItem* self, double x, double y, double w, double h) {
    return self->isObscured(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

bool QGraphicsItem_IsObscuredBy(const QGraphicsItem* self, const QGraphicsItem* item) {
    return self->isObscuredBy(item);
}

QPainterPath* QGraphicsItem_OpaqueArea(const QGraphicsItem* self) {
    return new QPainterPath(self->opaqueArea());
}

QRegion* QGraphicsItem_BoundingRegion(const QGraphicsItem* self, const QTransform* itemToDeviceTransform) {
    return new QRegion(self->boundingRegion(*itemToDeviceTransform));
}

double QGraphicsItem_BoundingRegionGranularity(const QGraphicsItem* self) {
    return static_cast<double>(self->boundingRegionGranularity());
}

void QGraphicsItem_SetBoundingRegionGranularity(QGraphicsItem* self, double granularity) {
    self->setBoundingRegionGranularity(static_cast<qreal>(granularity));
}

void QGraphicsItem_Paint(QGraphicsItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paint(painter, option, widget);
}

void QGraphicsItem_Update(QGraphicsItem* self) {
    self->update();
}

void QGraphicsItem_Update2(QGraphicsItem* self, double x, double y, double width, double height) {
    self->update(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(width), static_cast<qreal>(height));
}

void QGraphicsItem_Scroll(QGraphicsItem* self, double dx, double dy) {
    self->scroll(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

QPointF* QGraphicsItem_MapToItem(const QGraphicsItem* self, const QGraphicsItem* item, const QPointF* point) {
    return new QPointF(self->mapToItem(item, *point));
}

QPointF* QGraphicsItem_MapToParent(const QGraphicsItem* self, const QPointF* point) {
    return new QPointF(self->mapToParent(*point));
}

QPointF* QGraphicsItem_MapToScene(const QGraphicsItem* self, const QPointF* point) {
    return new QPointF(self->mapToScene(*point));
}

QPolygonF* QGraphicsItem_MapToItem2(const QGraphicsItem* self, const QGraphicsItem* item, const QRectF* rect) {
    return new QPolygonF(self->mapToItem(item, *rect));
}

QPolygonF* QGraphicsItem_MapToParent2(const QGraphicsItem* self, const QRectF* rect) {
    return new QPolygonF(self->mapToParent(*rect));
}

QPolygonF* QGraphicsItem_MapToScene2(const QGraphicsItem* self, const QRectF* rect) {
    return new QPolygonF(self->mapToScene(*rect));
}

QRectF* QGraphicsItem_MapRectToItem(const QGraphicsItem* self, const QGraphicsItem* item, const QRectF* rect) {
    return new QRectF(self->mapRectToItem(item, *rect));
}

QRectF* QGraphicsItem_MapRectToParent(const QGraphicsItem* self, const QRectF* rect) {
    return new QRectF(self->mapRectToParent(*rect));
}

QRectF* QGraphicsItem_MapRectToScene(const QGraphicsItem* self, const QRectF* rect) {
    return new QRectF(self->mapRectToScene(*rect));
}

QPolygonF* QGraphicsItem_MapToItem3(const QGraphicsItem* self, const QGraphicsItem* item, const QPolygonF* polygon) {
    return new QPolygonF(self->mapToItem(item, *polygon));
}

QPolygonF* QGraphicsItem_MapToParent3(const QGraphicsItem* self, const QPolygonF* polygon) {
    return new QPolygonF(self->mapToParent(*polygon));
}

QPolygonF* QGraphicsItem_MapToScene3(const QGraphicsItem* self, const QPolygonF* polygon) {
    return new QPolygonF(self->mapToScene(*polygon));
}

QPainterPath* QGraphicsItem_MapToItem4(const QGraphicsItem* self, const QGraphicsItem* item, const QPainterPath* path) {
    return new QPainterPath(self->mapToItem(item, *path));
}

QPainterPath* QGraphicsItem_MapToParent4(const QGraphicsItem* self, const QPainterPath* path) {
    return new QPainterPath(self->mapToParent(*path));
}

QPainterPath* QGraphicsItem_MapToScene4(const QGraphicsItem* self, const QPainterPath* path) {
    return new QPainterPath(self->mapToScene(*path));
}

QPointF* QGraphicsItem_MapFromItem(const QGraphicsItem* self, const QGraphicsItem* item, const QPointF* point) {
    return new QPointF(self->mapFromItem(item, *point));
}

QPointF* QGraphicsItem_MapFromParent(const QGraphicsItem* self, const QPointF* point) {
    return new QPointF(self->mapFromParent(*point));
}

QPointF* QGraphicsItem_MapFromScene(const QGraphicsItem* self, const QPointF* point) {
    return new QPointF(self->mapFromScene(*point));
}

QPolygonF* QGraphicsItem_MapFromItem2(const QGraphicsItem* self, const QGraphicsItem* item, const QRectF* rect) {
    return new QPolygonF(self->mapFromItem(item, *rect));
}

QPolygonF* QGraphicsItem_MapFromParent2(const QGraphicsItem* self, const QRectF* rect) {
    return new QPolygonF(self->mapFromParent(*rect));
}

QPolygonF* QGraphicsItem_MapFromScene2(const QGraphicsItem* self, const QRectF* rect) {
    return new QPolygonF(self->mapFromScene(*rect));
}

QRectF* QGraphicsItem_MapRectFromItem(const QGraphicsItem* self, const QGraphicsItem* item, const QRectF* rect) {
    return new QRectF(self->mapRectFromItem(item, *rect));
}

QRectF* QGraphicsItem_MapRectFromParent(const QGraphicsItem* self, const QRectF* rect) {
    return new QRectF(self->mapRectFromParent(*rect));
}

QRectF* QGraphicsItem_MapRectFromScene(const QGraphicsItem* self, const QRectF* rect) {
    return new QRectF(self->mapRectFromScene(*rect));
}

QPolygonF* QGraphicsItem_MapFromItem3(const QGraphicsItem* self, const QGraphicsItem* item, const QPolygonF* polygon) {
    return new QPolygonF(self->mapFromItem(item, *polygon));
}

QPolygonF* QGraphicsItem_MapFromParent3(const QGraphicsItem* self, const QPolygonF* polygon) {
    return new QPolygonF(self->mapFromParent(*polygon));
}

QPolygonF* QGraphicsItem_MapFromScene3(const QGraphicsItem* self, const QPolygonF* polygon) {
    return new QPolygonF(self->mapFromScene(*polygon));
}

QPainterPath* QGraphicsItem_MapFromItem4(const QGraphicsItem* self, const QGraphicsItem* item, const QPainterPath* path) {
    return new QPainterPath(self->mapFromItem(item, *path));
}

QPainterPath* QGraphicsItem_MapFromParent4(const QGraphicsItem* self, const QPainterPath* path) {
    return new QPainterPath(self->mapFromParent(*path));
}

QPainterPath* QGraphicsItem_MapFromScene4(const QGraphicsItem* self, const QPainterPath* path) {
    return new QPainterPath(self->mapFromScene(*path));
}

QPointF* QGraphicsItem_MapToItem5(const QGraphicsItem* self, const QGraphicsItem* item, double x, double y) {
    return new QPointF(self->mapToItem(item, static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QGraphicsItem_MapToParent5(const QGraphicsItem* self, double x, double y) {
    return new QPointF(self->mapToParent(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QGraphicsItem_MapToScene5(const QGraphicsItem* self, double x, double y) {
    return new QPointF(self->mapToScene(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPolygonF* QGraphicsItem_MapToItem6(const QGraphicsItem* self, const QGraphicsItem* item, double x, double y, double w, double h) {
    return new QPolygonF(self->mapToItem(item, static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QPolygonF* QGraphicsItem_MapToParent6(const QGraphicsItem* self, double x, double y, double w, double h) {
    return new QPolygonF(self->mapToParent(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QPolygonF* QGraphicsItem_MapToScene6(const QGraphicsItem* self, double x, double y, double w, double h) {
    return new QPolygonF(self->mapToScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_MapRectToItem2(const QGraphicsItem* self, const QGraphicsItem* item, double x, double y, double w, double h) {
    return new QRectF(self->mapRectToItem(item, static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_MapRectToParent2(const QGraphicsItem* self, double x, double y, double w, double h) {
    return new QRectF(self->mapRectToParent(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_MapRectToScene2(const QGraphicsItem* self, double x, double y, double w, double h) {
    return new QRectF(self->mapRectToScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QPointF* QGraphicsItem_MapFromItem5(const QGraphicsItem* self, const QGraphicsItem* item, double x, double y) {
    return new QPointF(self->mapFromItem(item, static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QGraphicsItem_MapFromParent5(const QGraphicsItem* self, double x, double y) {
    return new QPointF(self->mapFromParent(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QGraphicsItem_MapFromScene5(const QGraphicsItem* self, double x, double y) {
    return new QPointF(self->mapFromScene(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPolygonF* QGraphicsItem_MapFromItem6(const QGraphicsItem* self, const QGraphicsItem* item, double x, double y, double w, double h) {
    return new QPolygonF(self->mapFromItem(item, static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QPolygonF* QGraphicsItem_MapFromParent6(const QGraphicsItem* self, double x, double y, double w, double h) {
    return new QPolygonF(self->mapFromParent(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QPolygonF* QGraphicsItem_MapFromScene6(const QGraphicsItem* self, double x, double y, double w, double h) {
    return new QPolygonF(self->mapFromScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_MapRectFromItem2(const QGraphicsItem* self, const QGraphicsItem* item, double x, double y, double w, double h) {
    return new QRectF(self->mapRectFromItem(item, static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_MapRectFromParent2(const QGraphicsItem* self, double x, double y, double w, double h) {
    return new QRectF(self->mapRectFromParent(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_MapRectFromScene2(const QGraphicsItem* self, double x, double y, double w, double h) {
    return new QRectF(self->mapRectFromScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

bool QGraphicsItem_IsAncestorOf(const QGraphicsItem* self, const QGraphicsItem* child) {
    return self->isAncestorOf(child);
}

QGraphicsItem* QGraphicsItem_CommonAncestorItem(const QGraphicsItem* self, const QGraphicsItem* other) {
    return self->commonAncestorItem(other);
}

bool QGraphicsItem_IsUnderMouse(const QGraphicsItem* self) {
    return self->isUnderMouse();
}

QVariant* QGraphicsItem_Data(const QGraphicsItem* self, int key) {
    return new QVariant(self->data(static_cast<int>(key)));
}

void QGraphicsItem_SetData(QGraphicsItem* self, int key, const QVariant* value) {
    self->setData(static_cast<int>(key), *value);
}

int QGraphicsItem_InputMethodHints(const QGraphicsItem* self) {
    return static_cast<int>(self->inputMethodHints());
}

void QGraphicsItem_SetInputMethodHints(QGraphicsItem* self, int hints) {
    self->setInputMethodHints(static_cast<Qt::InputMethodHints>(hints));
}

int QGraphicsItem_Type(const QGraphicsItem* self) {
    return self->type();
}

void QGraphicsItem_InstallSceneEventFilter(QGraphicsItem* self, QGraphicsItem* filterItem) {
    self->installSceneEventFilter(filterItem);
}

void QGraphicsItem_RemoveSceneEventFilter(QGraphicsItem* self, QGraphicsItem* filterItem) {
    self->removeSceneEventFilter(filterItem);
}

bool QGraphicsItem_SceneEventFilter(QGraphicsItem* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        return vqgraphicsitem->sceneEventFilter(watched, event);
    }
    qFatal("Error: Protected method QGraphicsItem::sceneEventFilter called without a directly constructed type");
}

bool QGraphicsItem_SceneEvent(QGraphicsItem* self, QEvent* event) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        return vqgraphicsitem->sceneEvent(event);
    }
    qFatal("Error: Protected method QGraphicsItem::sceneEvent called without a directly constructed type");
}

void QGraphicsItem_ContextMenuEvent(QGraphicsItem* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        vqgraphicsitem->contextMenuEvent(event);
    }
}

void QGraphicsItem_DragEnterEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        vqgraphicsitem->dragEnterEvent(event);
    }
}

void QGraphicsItem_DragLeaveEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        vqgraphicsitem->dragLeaveEvent(event);
    }
}

void QGraphicsItem_DragMoveEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        vqgraphicsitem->dragMoveEvent(event);
    }
}

void QGraphicsItem_DropEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        vqgraphicsitem->dropEvent(event);
    }
}

void QGraphicsItem_FocusInEvent(QGraphicsItem* self, QFocusEvent* event) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        vqgraphicsitem->focusInEvent(event);
    }
}

void QGraphicsItem_FocusOutEvent(QGraphicsItem* self, QFocusEvent* event) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        vqgraphicsitem->focusOutEvent(event);
    }
}

void QGraphicsItem_HoverEnterEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        vqgraphicsitem->hoverEnterEvent(event);
    }
}

void QGraphicsItem_HoverMoveEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        vqgraphicsitem->hoverMoveEvent(event);
    }
}

void QGraphicsItem_HoverLeaveEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        vqgraphicsitem->hoverLeaveEvent(event);
    }
}

void QGraphicsItem_KeyPressEvent(QGraphicsItem* self, QKeyEvent* event) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        vqgraphicsitem->keyPressEvent(event);
    }
}

void QGraphicsItem_KeyReleaseEvent(QGraphicsItem* self, QKeyEvent* event) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        vqgraphicsitem->keyReleaseEvent(event);
    }
}

void QGraphicsItem_MousePressEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        vqgraphicsitem->mousePressEvent(event);
    }
}

void QGraphicsItem_MouseMoveEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        vqgraphicsitem->mouseMoveEvent(event);
    }
}

void QGraphicsItem_MouseReleaseEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        vqgraphicsitem->mouseReleaseEvent(event);
    }
}

void QGraphicsItem_MouseDoubleClickEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        vqgraphicsitem->mouseDoubleClickEvent(event);
    }
}

void QGraphicsItem_WheelEvent(QGraphicsItem* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        vqgraphicsitem->wheelEvent(event);
    }
}

void QGraphicsItem_InputMethodEvent(QGraphicsItem* self, QInputMethodEvent* event) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        vqgraphicsitem->inputMethodEvent(event);
    }
}

QVariant* QGraphicsItem_InputMethodQuery(const QGraphicsItem* self, int query) {
    auto* vqgraphicsitem = dynamic_cast<const VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        return new QVariant(vqgraphicsitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    qFatal("Error: Protected method QGraphicsItem::inputMethodQuery called without a directly constructed type");
}

QVariant* QGraphicsItem_ItemChange(QGraphicsItem* self, int change, const QVariant* value) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        return new QVariant(vqgraphicsitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    qFatal("Error: Protected method QGraphicsItem::itemChange called without a directly constructed type");
}

bool QGraphicsItem_SupportsExtension(const QGraphicsItem* self, int extension) {
    auto* vqgraphicsitem = dynamic_cast<const VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        return vqgraphicsitem->supportsExtension(static_cast<VirtualQGraphicsItem::Extension>(extension));
    }
    qFatal("Error: Protected method QGraphicsItem::supportsExtension called without a directly constructed type");
}

void QGraphicsItem_SetExtension(QGraphicsItem* self, int extension, const QVariant* variant) {
    auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        vqgraphicsitem->setExtension(static_cast<VirtualQGraphicsItem::Extension>(extension), *variant);
    }
}

QVariant* QGraphicsItem_Extension(const QGraphicsItem* self, const QVariant* variant) {
    auto* vqgraphicsitem = dynamic_cast<const VirtualQGraphicsItem*>(self);
    if (vqgraphicsitem) {
        return new QVariant(vqgraphicsitem->extension(*variant));
    }
    qFatal("Error: Protected method QGraphicsItem::extension called without a directly constructed type");
}

void QGraphicsItem_SetFlag2(QGraphicsItem* self, int flag, bool enabled) {
    self->setFlag(static_cast<QGraphicsItem::GraphicsItemFlag>(flag), enabled);
}

void QGraphicsItem_SetCacheMode2(QGraphicsItem* self, int mode, const QSize* cacheSize) {
    self->setCacheMode(static_cast<QGraphicsItem::CacheMode>(mode), *cacheSize);
}

bool QGraphicsItem_IsBlockedByModalPanel1(const QGraphicsItem* self, QGraphicsItem** blockingPanel) {
    return self->isBlockedByModalPanel(blockingPanel);
}

void QGraphicsItem_SetFocus1(QGraphicsItem* self, int focusReason) {
    self->setFocus(static_cast<Qt::FocusReason>(focusReason));
}

void QGraphicsItem_EnsureVisible1(QGraphicsItem* self, const QRectF* rect) {
    self->ensureVisible(*rect);
}

void QGraphicsItem_EnsureVisible22(QGraphicsItem* self, const QRectF* rect, int xmargin) {
    self->ensureVisible(*rect, static_cast<int>(xmargin));
}

void QGraphicsItem_EnsureVisible3(QGraphicsItem* self, const QRectF* rect, int xmargin, int ymargin) {
    self->ensureVisible(*rect, static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsItem_EnsureVisible5(QGraphicsItem* self, double x, double y, double w, double h, int xmargin) {
    self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xmargin));
}

void QGraphicsItem_EnsureVisible6(QGraphicsItem* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xmargin), static_cast<int>(ymargin));
}

QTransform* QGraphicsItem_ItemTransform2(const QGraphicsItem* self, const QGraphicsItem* other, bool* ok) {
    return new QTransform(self->itemTransform(other, ok));
}

void QGraphicsItem_SetTransform2(QGraphicsItem* self, const QTransform* matrix, bool combine) {
    self->setTransform(*matrix, combine);
}

libqt_list /* of QGraphicsItem* */ QGraphicsItem_CollidingItems1(const QGraphicsItem* self, int mode) {
    QList<QGraphicsItem*> _ret = self->collidingItems(static_cast<Qt::ItemSelectionMode>(mode));
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

bool QGraphicsItem_IsObscured1(const QGraphicsItem* self, const QRectF* rect) {
    return self->isObscured(*rect);
}

void QGraphicsItem_Update1(QGraphicsItem* self, const QRectF* rect) {
    self->update(*rect);
}

void QGraphicsItem_Scroll3(QGraphicsItem* self, double dx, double dy, const QRectF* rect) {
    self->scroll(static_cast<qreal>(dx), static_cast<qreal>(dy), *rect);
}

// Base class handler implementation
void QGraphicsItem_SuperAdvance(QGraphicsItem* self, int phase) {
    self->QGraphicsItem::advance(static_cast<int>(phase));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnAdvance(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_advance_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_Advance_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnBoundingRect(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self)))
        vqgraphicsitem->qgraphicsitem_boundingrect_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_BoundingRect_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QGraphicsItem_SuperShape(const QGraphicsItem* self) {
    return new QPainterPath(self->QGraphicsItem::shape());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnShape(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self)))
        vqgraphicsitem->qgraphicsitem_shape_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_Shape_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsItem_SuperContains(const QGraphicsItem* self, const QPointF* point) {
    return self->QGraphicsItem::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnContains(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self)))
        vqgraphicsitem->qgraphicsitem_contains_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_Contains_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsItem_SuperCollidesWithItem(const QGraphicsItem* self, const QGraphicsItem* other, int mode) {
    return self->QGraphicsItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnCollidesWithItem(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self)))
        vqgraphicsitem->qgraphicsitem_collideswithitem_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_CollidesWithItem_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsItem_SuperCollidesWithPath(const QGraphicsItem* self, const QPainterPath* path, int mode) {
    return self->QGraphicsItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnCollidesWithPath(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self)))
        vqgraphicsitem->qgraphicsitem_collideswithpath_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_CollidesWithPath_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsItem_SuperIsObscuredBy(const QGraphicsItem* self, const QGraphicsItem* item) {
    return self->QGraphicsItem::isObscuredBy(item);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnIsObscuredBy(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self)))
        vqgraphicsitem->qgraphicsitem_isobscuredby_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_IsObscuredBy_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QGraphicsItem_SuperOpaqueArea(const QGraphicsItem* self) {
    return new QPainterPath(self->QGraphicsItem::opaqueArea());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnOpaqueArea(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self)))
        vqgraphicsitem->qgraphicsitem_opaquearea_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_OpaqueArea_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnPaint(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_paint_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_Paint_Callback>(slot);
}

// Base class handler implementation
int QGraphicsItem_SuperType(const QGraphicsItem* self) {
    return self->QGraphicsItem::type();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnType(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self)))
        vqgraphicsitem->qgraphicsitem_type_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_Type_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsItem_SuperSceneEventFilter(QGraphicsItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        return vqgraphicsitem->QGraphicsItem::sceneEventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::sceneEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnSceneEventFilter(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_sceneeventfilter_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_SceneEventFilter_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsItem_SuperSceneEvent(QGraphicsItem* self, QEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        return vqgraphicsitem->QGraphicsItem::sceneEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::sceneEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnSceneEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_sceneevent_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_SceneEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItem_SuperContextMenuEvent(QGraphicsItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->QGraphicsItem::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnContextMenuEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_contextmenuevent_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItem_SuperDragEnterEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->QGraphicsItem::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnDragEnterEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_dragenterevent_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_DragEnterEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItem_SuperDragLeaveEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->QGraphicsItem::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnDragLeaveEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_dragleaveevent_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_DragLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItem_SuperDragMoveEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->QGraphicsItem::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnDragMoveEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_dragmoveevent_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_DragMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItem_SuperDropEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->QGraphicsItem::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnDropEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_dropevent_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_DropEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItem_SuperFocusInEvent(QGraphicsItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->QGraphicsItem::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnFocusInEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_focusinevent_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItem_SuperFocusOutEvent(QGraphicsItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->QGraphicsItem::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnFocusOutEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_focusoutevent_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItem_SuperHoverEnterEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->QGraphicsItem::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnHoverEnterEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_hoverenterevent_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_HoverEnterEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItem_SuperHoverMoveEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->QGraphicsItem::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnHoverMoveEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_hovermoveevent_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_HoverMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItem_SuperHoverLeaveEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->QGraphicsItem::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnHoverLeaveEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_hoverleaveevent_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_HoverLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItem_SuperKeyPressEvent(QGraphicsItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->QGraphicsItem::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnKeyPressEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_keypressevent_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItem_SuperKeyReleaseEvent(QGraphicsItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->QGraphicsItem::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnKeyReleaseEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_keyreleaseevent_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_KeyReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItem_SuperMousePressEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->QGraphicsItem::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnMousePressEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_mousepressevent_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItem_SuperMouseMoveEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->QGraphicsItem::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnMouseMoveEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_mousemoveevent_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItem_SuperMouseReleaseEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->QGraphicsItem::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnMouseReleaseEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_mousereleaseevent_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItem_SuperMouseDoubleClickEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->QGraphicsItem::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnMouseDoubleClickEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_mousedoubleclickevent_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_MouseDoubleClickEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItem_SuperWheelEvent(QGraphicsItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->QGraphicsItem::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnWheelEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_wheelevent_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_WheelEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItem_SuperInputMethodEvent(QGraphicsItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->QGraphicsItem::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnInputMethodEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_inputmethodevent_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_InputMethodEvent_Callback>(slot);
}

// Base class handler implementation
QVariant* QGraphicsItem_SuperInputMethodQuery(const QGraphicsItem* self, int query) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self)))
        return new QVariant(vqgraphicsitem->QGraphicsItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    qFatal("Error: Protected virtual method QGraphicsItem::inputMethodQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnInputMethodQuery(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self)))
        vqgraphicsitem->qgraphicsitem_inputmethodquery_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_InputMethodQuery_Callback>(slot);
}

// Base class handler implementation
QVariant* QGraphicsItem_SuperItemChange(QGraphicsItem* self, int change, const QVariant* value) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        return new QVariant(vqgraphicsitem->QGraphicsItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    qFatal("Error: Protected virtual method QGraphicsItem::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnItemChange(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_itemchange_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_ItemChange_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsItem_SuperSupportsExtension(const QGraphicsItem* self, int extension) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        return vqgraphicsitem->QGraphicsItem::supportsExtension(static_cast<VirtualQGraphicsItem::Extension>(extension));
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::supportsExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnSupportsExtension(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self)))
        vqgraphicsitem->qgraphicsitem_supportsextension_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_SupportsExtension_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItem_SuperSetExtension(QGraphicsItem* self, int extension, const QVariant* variant) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->QGraphicsItem::setExtension(static_cast<VirtualQGraphicsItem::Extension>(extension), *variant);
    } else
        qFatal("Error: Protected virtual method QGraphicsItem::setExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnSetExtension(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self))
        vqgraphicsitem->qgraphicsitem_setextension_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_SetExtension_Callback>(slot);
}

// Base class handler implementation
QVariant* QGraphicsItem_SuperExtension(const QGraphicsItem* self, const QVariant* variant) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self)))
        return new QVariant(vqgraphicsitem->QGraphicsItem::extension(*variant));
    qFatal("Error: Protected virtual method QGraphicsItem::extension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnExtension(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self)))
        vqgraphicsitem->qgraphicsitem_extension_callback = reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_Extension_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsItem_UpdateMicroFocus(QGraphicsItem* self) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->VirtualQGraphicsItem::updateMicroFocus();
    } else
        qFatal("Error: Protected method QGraphicsItem::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsItem_AddToIndex(QGraphicsItem* self) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->VirtualQGraphicsItem::addToIndex();
    } else
        qFatal("Error: Protected method QGraphicsItem::addToIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsItem_RemoveFromIndex(QGraphicsItem* self) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->VirtualQGraphicsItem::removeFromIndex();
    } else
        qFatal("Error: Protected method QGraphicsItem::removeFromIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsItem_PrepareGeometryChange(QGraphicsItem* self) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->VirtualQGraphicsItem::prepareGeometryChange();
    } else
        qFatal("Error: Protected method QGraphicsItem::prepareGeometryChange called without a directly constructed type");
}

void QGraphicsItem_Delete(QGraphicsItem* self) {
    delete self;
}

QGraphicsObject* QGraphicsObject_new() {
    return new VirtualQGraphicsObject();
}

QGraphicsObject* QGraphicsObject_new2(QGraphicsItem* parent) {
    return new VirtualQGraphicsObject(parent);
}

QGraphicsItem* QGraphicsObject_AsQGraphicsItem(QGraphicsObject* self) {
    return static_cast<QGraphicsItem*>(self);
}

QGraphicsObject* QGraphicsObject_FromQGraphicsItem(QGraphicsItem* _qgraphicsitem) {
    return dynamic_cast<QGraphicsObject*>(static_cast<QGraphicsItem*>(_qgraphicsitem));
}

QMetaObject* QGraphicsObject_MetaObject(const QGraphicsObject* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsObject_Metacast(QGraphicsObject* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsObject_Metacall(QGraphicsObject* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGraphicsObject_Tr(const char* s) {
    auto _ret = QGraphicsObject::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGraphicsObject_GrabGesture(QGraphicsObject* self, int typeVal) {
    self->grabGesture(static_cast<Qt::GestureType>(typeVal));
}

void QGraphicsObject_UngrabGesture(QGraphicsObject* self, int typeVal) {
    self->ungrabGesture(static_cast<Qt::GestureType>(typeVal));
}

void QGraphicsObject_ParentChanged(QGraphicsObject* self) {
    self->parentChanged();
}

void QGraphicsObject_Connect_ParentChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self,
                             static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::parentChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QGraphicsObject_OpacityChanged(QGraphicsObject* self) {
    self->opacityChanged();
}

void QGraphicsObject_Connect_OpacityChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self,
                             static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::opacityChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QGraphicsObject_VisibleChanged(QGraphicsObject* self) {
    self->visibleChanged();
}

void QGraphicsObject_Connect_VisibleChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self,
                             static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::visibleChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QGraphicsObject_EnabledChanged(QGraphicsObject* self) {
    self->enabledChanged();
}

void QGraphicsObject_Connect_EnabledChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self,
                             static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::enabledChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QGraphicsObject_XChanged(QGraphicsObject* self) {
    self->xChanged();
}

void QGraphicsObject_Connect_XChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self,
                             static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::xChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QGraphicsObject_YChanged(QGraphicsObject* self) {
    self->yChanged();
}

void QGraphicsObject_Connect_YChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self,
                             static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::yChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QGraphicsObject_ZChanged(QGraphicsObject* self) {
    self->zChanged();
}

void QGraphicsObject_Connect_ZChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self,
                             static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::zChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QGraphicsObject_RotationChanged(QGraphicsObject* self) {
    self->rotationChanged();
}

void QGraphicsObject_Connect_RotationChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self,
                             static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::rotationChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QGraphicsObject_ScaleChanged(QGraphicsObject* self) {
    self->scaleChanged();
}

void QGraphicsObject_Connect_ScaleChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self,
                             static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::scaleChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QGraphicsObject_ChildrenChanged(QGraphicsObject* self) {
    self->childrenChanged();
}

void QGraphicsObject_Connect_ChildrenChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self,
                             static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::childrenChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QGraphicsObject_WidthChanged(QGraphicsObject* self) {
    self->widthChanged();
}

void QGraphicsObject_Connect_WidthChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self,
                             static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::widthChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QGraphicsObject_HeightChanged(QGraphicsObject* self) {
    self->heightChanged();
}

void QGraphicsObject_Connect_HeightChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self,
                             static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::heightChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

bool QGraphicsObject_Event(QGraphicsObject* self, QEvent* ev) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        return vqgraphicsobject->event(ev);
    }
    qFatal("Error: Protected method QGraphicsObject::event called without a directly constructed type");
}

libqt_string QGraphicsObject_Tr2(const char* s, const char* c) {
    auto _ret = QGraphicsObject::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsObject_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGraphicsObject::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGraphicsObject_GrabGesture2(QGraphicsObject* self, int typeVal, int flags) {
    self->grabGesture(static_cast<Qt::GestureType>(typeVal), static_cast<Qt::GestureFlags>(flags));
}

// Base class handler implementation
QMetaObject* QGraphicsObject_SuperMetaObject(const QGraphicsObject* self) {
    return (QMetaObject*)self->QGraphicsObject::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnMetaObject(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self)))
        vqgraphicsobject->qgraphicsobject_metaobject_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGraphicsObject_SuperMetacast(QGraphicsObject* self, const char* param1) {
    return self->QGraphicsObject::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnMetacast(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_metacast_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGraphicsObject_SuperMetacall(QGraphicsObject* self, int param1, int param2, void** param3) {
    return self->QGraphicsObject::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnMetacall(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_metacall_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsObject_SuperEvent(QGraphicsObject* self, QEvent* ev) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        return vqgraphicsobject->QGraphicsObject::event(ev);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_event_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsObject_EventFilter(QGraphicsObject* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGraphicsObject_SuperEventFilter(QGraphicsObject* self, QObject* watched, QEvent* event) {
    return self->QGraphicsObject::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnEventFilter(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_eventfilter_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_TimerEvent(QGraphicsObject* self, QTimerEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperTimerEvent(QGraphicsObject* self, QTimerEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnTimerEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_timerevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_ChildEvent(QGraphicsObject* self, QChildEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperChildEvent(QGraphicsObject* self, QChildEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnChildEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_childevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_CustomEvent(QGraphicsObject* self, QEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperCustomEvent(QGraphicsObject* self, QEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnCustomEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_customevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_ConnectNotify(QGraphicsObject* self, const QMetaMethod* signal) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperConnectNotify(QGraphicsObject* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnConnectNotify(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_connectnotify_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_DisconnectNotify(QGraphicsObject* self, const QMetaMethod* signal) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperDisconnectNotify(QGraphicsObject* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnDisconnectNotify(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_disconnectnotify_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_Advance(QGraphicsObject* self, int phase) {
    self->advance(static_cast<int>(phase));
}

// Base class handler implementation
void QGraphicsObject_SuperAdvance(QGraphicsObject* self, int phase) {
    self->QGraphicsObject::advance(static_cast<int>(phase));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnAdvance(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_advance_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_Advance_Callback>(slot);
}

// Derived class handler implementation
QRectF* QGraphicsObject_BoundingRect(const QGraphicsObject* self) {
    return new QRectF(self->boundingRect());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnBoundingRect(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self)))
        vqgraphicsobject->qgraphicsobject_boundingrect_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_BoundingRect_Callback>(slot);
}

// Derived class handler implementation
QPainterPath* QGraphicsObject_Shape(const QGraphicsObject* self) {
    return new QPainterPath(self->shape());
}

// Base class handler implementation
QPainterPath* QGraphicsObject_SuperShape(const QGraphicsObject* self) {
    return new QPainterPath(self->QGraphicsObject::shape());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnShape(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self)))
        vqgraphicsobject->qgraphicsobject_shape_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_Shape_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsObject_Contains(const QGraphicsObject* self, const QPointF* point) {
    return self->contains(*point);
}

// Base class handler implementation
bool QGraphicsObject_SuperContains(const QGraphicsObject* self, const QPointF* point) {
    return self->QGraphicsObject::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnContains(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self)))
        vqgraphicsobject->qgraphicsobject_contains_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_Contains_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsObject_CollidesWithItem(const QGraphicsObject* self, const QGraphicsItem* other, int mode) {
    return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsObject_SuperCollidesWithItem(const QGraphicsObject* self, const QGraphicsItem* other, int mode) {
    return self->QGraphicsObject::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnCollidesWithItem(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self)))
        vqgraphicsobject->qgraphicsobject_collideswithitem_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_CollidesWithItem_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsObject_CollidesWithPath(const QGraphicsObject* self, const QPainterPath* path, int mode) {
    return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsObject_SuperCollidesWithPath(const QGraphicsObject* self, const QPainterPath* path, int mode) {
    return self->QGraphicsObject::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnCollidesWithPath(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self)))
        vqgraphicsobject->qgraphicsobject_collideswithpath_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_CollidesWithPath_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsObject_IsObscuredBy(const QGraphicsObject* self, const QGraphicsItem* item) {
    return self->isObscuredBy(item);
}

// Base class handler implementation
bool QGraphicsObject_SuperIsObscuredBy(const QGraphicsObject* self, const QGraphicsItem* item) {
    return self->QGraphicsObject::isObscuredBy(item);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnIsObscuredBy(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self)))
        vqgraphicsobject->qgraphicsobject_isobscuredby_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_IsObscuredBy_Callback>(slot);
}

// Derived class handler implementation
QPainterPath* QGraphicsObject_OpaqueArea(const QGraphicsObject* self) {
    return new QPainterPath(self->opaqueArea());
}

// Base class handler implementation
QPainterPath* QGraphicsObject_SuperOpaqueArea(const QGraphicsObject* self) {
    return new QPainterPath(self->QGraphicsObject::opaqueArea());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnOpaqueArea(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self)))
        vqgraphicsobject->qgraphicsobject_opaquearea_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_OpaqueArea_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_Paint(QGraphicsObject* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paint(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnPaint(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_paint_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_Paint_Callback>(slot);
}

// Derived class handler implementation
int QGraphicsObject_Type(const QGraphicsObject* self) {
    return self->type();
}

// Base class handler implementation
int QGraphicsObject_SuperType(const QGraphicsObject* self) {
    return self->QGraphicsObject::type();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnType(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self)))
        vqgraphicsobject->qgraphicsobject_type_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_Type_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsObject_SceneEventFilter(QGraphicsObject* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        return vqgraphicsobject->sceneEventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::sceneEventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsObject_SuperSceneEventFilter(QGraphicsObject* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        return vqgraphicsobject->QGraphicsObject::sceneEventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::sceneEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnSceneEventFilter(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_sceneeventfilter_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_SceneEventFilter_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsObject_SceneEvent(QGraphicsObject* self, QEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        return vqgraphicsobject->sceneEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::sceneEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsObject_SuperSceneEvent(QGraphicsObject* self, QEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        return vqgraphicsobject->QGraphicsObject::sceneEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::sceneEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnSceneEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_sceneevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_SceneEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_ContextMenuEvent(QGraphicsObject* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperContextMenuEvent(QGraphicsObject* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnContextMenuEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_contextmenuevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_DragEnterEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperDragEnterEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnDragEnterEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_dragenterevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_DragLeaveEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperDragLeaveEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnDragLeaveEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_dragleaveevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_DragMoveEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperDragMoveEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnDragMoveEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_dragmoveevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_DropEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperDropEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnDropEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_dropevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_FocusInEvent(QGraphicsObject* self, QFocusEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperFocusInEvent(QGraphicsObject* self, QFocusEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnFocusInEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_focusinevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_FocusOutEvent(QGraphicsObject* self, QFocusEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperFocusOutEvent(QGraphicsObject* self, QFocusEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnFocusOutEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_focusoutevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_HoverEnterEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->hoverEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::hoverEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperHoverEnterEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnHoverEnterEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_hoverenterevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_HoverEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_HoverMoveEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->hoverMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::hoverMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperHoverMoveEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnHoverMoveEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_hovermoveevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_HoverMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_HoverLeaveEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->hoverLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::hoverLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperHoverLeaveEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnHoverLeaveEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_hoverleaveevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_HoverLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_KeyPressEvent(QGraphicsObject* self, QKeyEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperKeyPressEvent(QGraphicsObject* self, QKeyEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnKeyPressEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_keypressevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_KeyReleaseEvent(QGraphicsObject* self, QKeyEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperKeyReleaseEvent(QGraphicsObject* self, QKeyEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnKeyReleaseEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_keyreleaseevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_MousePressEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperMousePressEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnMousePressEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_mousepressevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_MouseMoveEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperMouseMoveEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnMouseMoveEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_mousemoveevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_MouseReleaseEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperMouseReleaseEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnMouseReleaseEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_mousereleaseevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_MouseDoubleClickEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperMouseDoubleClickEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnMouseDoubleClickEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_mousedoubleclickevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_WheelEvent(QGraphicsObject* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperWheelEvent(QGraphicsObject* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnWheelEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_wheelevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_InputMethodEvent(QGraphicsObject* self, QInputMethodEvent* event) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperInputMethodEvent(QGraphicsObject* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnInputMethodEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_inputmethodevent_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsObject_InputMethodQuery(const QGraphicsObject* self, int query) {
    return new QVariant((self->*&VirtualQGraphicsObject::Base::inputMethodQuery)(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QGraphicsObject_SuperInputMethodQuery(const QGraphicsObject* self, int query) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self)))
        return new QVariant(vqgraphicsobject->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    qFatal("Error: Protected virtual method QGraphicsObject::inputMethodQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnInputMethodQuery(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self)))
        vqgraphicsobject->qgraphicsobject_inputmethodquery_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsObject_ItemChange(QGraphicsObject* self, int change, const QVariant* value) {
    return new QVariant((self->*&VirtualQGraphicsObject::Base::itemChange)(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}

// Base class handler implementation
QVariant* QGraphicsObject_SuperItemChange(QGraphicsObject* self, int change, const QVariant* value) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        return new QVariant(vqgraphicsobject->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    qFatal("Error: Protected virtual method QGraphicsObject::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnItemChange(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_itemchange_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_ItemChange_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsObject_SupportsExtension(const QGraphicsObject* self, int extension) {
    auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self));
    if (vqgraphicsobject) {
        return vqgraphicsobject->supportsExtension(static_cast<VirtualQGraphicsObject::Extension>(extension));
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::supportsExtension called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsObject_SuperSupportsExtension(const QGraphicsObject* self, int extension) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        return vqgraphicsobject->QGraphicsObject::supportsExtension(static_cast<VirtualQGraphicsObject::Extension>(extension));
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::supportsExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnSupportsExtension(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self)))
        vqgraphicsobject->qgraphicsobject_supportsextension_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_SupportsExtension_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsObject_SetExtension(QGraphicsObject* self, int extension, const QVariant* variant) {
    auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self);
    if (vqgraphicsobject) {
        vqgraphicsobject->setExtension(static_cast<VirtualQGraphicsObject::Extension>(extension), *variant);
    } else {
        qFatal("Error: Protected virtual method QGraphicsObject::setExtension called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsObject_SuperSetExtension(QGraphicsObject* self, int extension, const QVariant* variant) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->QGraphicsObject::setExtension(static_cast<VirtualQGraphicsObject::Extension>(extension), *variant);
    } else
        qFatal("Error: Protected virtual method QGraphicsObject::setExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnSetExtension(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self))
        vqgraphicsobject->qgraphicsobject_setextension_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_SetExtension_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsObject_Extension(const QGraphicsObject* self, const QVariant* variant) {
    return new QVariant((self->*&VirtualQGraphicsObject::Base::extension)(*variant));
}

// Base class handler implementation
QVariant* QGraphicsObject_SuperExtension(const QGraphicsObject* self, const QVariant* variant) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self)))
        return new QVariant(vqgraphicsobject->extension(*variant));
    qFatal("Error: Protected virtual method QGraphicsObject::extension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnExtension(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self)))
        vqgraphicsobject->qgraphicsobject_extension_callback = reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_Extension_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsObject_UpdateMicroFocus(QGraphicsObject* self) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->VirtualQGraphicsObject::updateMicroFocus();
    } else
        qFatal("Error: Protected method QGraphicsObject::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGraphicsObject_Sender(const QGraphicsObject* self) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        return vqgraphicsobject->VirtualQGraphicsObject::sender();
    } else
        qFatal("Error: Protected method QGraphicsObject::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsObject_SenderSignalIndex(const QGraphicsObject* self) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        return vqgraphicsobject->VirtualQGraphicsObject::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGraphicsObject::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsObject_Receivers(const QGraphicsObject* self, const char* signal) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        return vqgraphicsobject->VirtualQGraphicsObject::receivers(signal);
    } else
        qFatal("Error: Protected method QGraphicsObject::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsObject_IsSignalConnected(const QGraphicsObject* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        return vqgraphicsobject->VirtualQGraphicsObject::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGraphicsObject::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsObject_AddToIndex(QGraphicsObject* self) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->VirtualQGraphicsObject::addToIndex();
    } else
        qFatal("Error: Protected method QGraphicsObject::addToIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsObject_RemoveFromIndex(QGraphicsObject* self) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->VirtualQGraphicsObject::removeFromIndex();
    } else
        qFatal("Error: Protected method QGraphicsObject::removeFromIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsObject_PrepareGeometryChange(QGraphicsObject* self) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->VirtualQGraphicsObject::prepareGeometryChange();
    } else
        qFatal("Error: Protected method QGraphicsObject::prepareGeometryChange called without a directly constructed type");
}

void QGraphicsObject_Delete(QGraphicsObject* self) {
    delete self;
}

QAbstractGraphicsShapeItem* QAbstractGraphicsShapeItem_new() {
    return new VirtualQAbstractGraphicsShapeItem();
}

QAbstractGraphicsShapeItem* QAbstractGraphicsShapeItem_new2(QGraphicsItem* parent) {
    return new VirtualQAbstractGraphicsShapeItem(parent);
}

QPen* QAbstractGraphicsShapeItem_Pen(const QAbstractGraphicsShapeItem* self) {
    return new QPen(self->pen());
}

void QAbstractGraphicsShapeItem_SetPen(QAbstractGraphicsShapeItem* self, const QPen* pen) {
    self->setPen(*pen);
}

QBrush* QAbstractGraphicsShapeItem_Brush(const QAbstractGraphicsShapeItem* self) {
    return new QBrush(self->brush());
}

void QAbstractGraphicsShapeItem_SetBrush(QAbstractGraphicsShapeItem* self, const QBrush* brush) {
    self->setBrush(*brush);
}

bool QAbstractGraphicsShapeItem_IsObscuredBy(const QAbstractGraphicsShapeItem* self, const QGraphicsItem* item) {
    return self->isObscuredBy(item);
}

QPainterPath* QAbstractGraphicsShapeItem_OpaqueArea(const QAbstractGraphicsShapeItem* self) {
    return new QPainterPath(self->opaqueArea());
}

// Base class handler implementation
bool QAbstractGraphicsShapeItem_SuperIsObscuredBy(const QAbstractGraphicsShapeItem* self, const QGraphicsItem* item) {
    return self->QAbstractGraphicsShapeItem::isObscuredBy(item);
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnIsObscuredBy(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self)))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_isobscuredby_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_IsObscuredBy_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QAbstractGraphicsShapeItem_SuperOpaqueArea(const QAbstractGraphicsShapeItem* self) {
    return new QPainterPath(self->QAbstractGraphicsShapeItem::opaqueArea());
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnOpaqueArea(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self)))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_opaquearea_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_OpaqueArea_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_Advance(QAbstractGraphicsShapeItem* self, int phase) {
    self->advance(static_cast<int>(phase));
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_SuperAdvance(QAbstractGraphicsShapeItem* self, int phase) {
    self->QAbstractGraphicsShapeItem::advance(static_cast<int>(phase));
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnAdvance(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_advance_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_Advance_Callback>(slot);
}

// Derived class handler implementation
QRectF* QAbstractGraphicsShapeItem_BoundingRect(const QAbstractGraphicsShapeItem* self) {
    return new QRectF(self->boundingRect());
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnBoundingRect(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self)))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_boundingrect_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_BoundingRect_Callback>(slot);
}

// Derived class handler implementation
QPainterPath* QAbstractGraphicsShapeItem_Shape(const QAbstractGraphicsShapeItem* self) {
    return new QPainterPath(self->shape());
}

// Base class handler implementation
QPainterPath* QAbstractGraphicsShapeItem_SuperShape(const QAbstractGraphicsShapeItem* self) {
    return new QPainterPath(self->QAbstractGraphicsShapeItem::shape());
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnShape(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self)))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_shape_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_Shape_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractGraphicsShapeItem_Contains(const QAbstractGraphicsShapeItem* self, const QPointF* point) {
    return self->contains(*point);
}

// Base class handler implementation
bool QAbstractGraphicsShapeItem_SuperContains(const QAbstractGraphicsShapeItem* self, const QPointF* point) {
    return self->QAbstractGraphicsShapeItem::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnContains(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self)))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_contains_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_Contains_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractGraphicsShapeItem_CollidesWithItem(const QAbstractGraphicsShapeItem* self, const QGraphicsItem* other, int mode) {
    return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QAbstractGraphicsShapeItem_SuperCollidesWithItem(const QAbstractGraphicsShapeItem* self, const QGraphicsItem* other, int mode) {
    return self->QAbstractGraphicsShapeItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnCollidesWithItem(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self)))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_collideswithitem_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_CollidesWithItem_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractGraphicsShapeItem_CollidesWithPath(const QAbstractGraphicsShapeItem* self, const QPainterPath* path, int mode) {
    return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QAbstractGraphicsShapeItem_SuperCollidesWithPath(const QAbstractGraphicsShapeItem* self, const QPainterPath* path, int mode) {
    return self->QAbstractGraphicsShapeItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnCollidesWithPath(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self)))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_collideswithpath_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_CollidesWithPath_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_Paint(QAbstractGraphicsShapeItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paint(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnPaint(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_paint_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_Paint_Callback>(slot);
}

// Derived class handler implementation
int QAbstractGraphicsShapeItem_Type(const QAbstractGraphicsShapeItem* self) {
    return self->type();
}

// Base class handler implementation
int QAbstractGraphicsShapeItem_SuperType(const QAbstractGraphicsShapeItem* self) {
    return self->QAbstractGraphicsShapeItem::type();
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnType(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self)))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_type_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_Type_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractGraphicsShapeItem_SceneEventFilter(QAbstractGraphicsShapeItem* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        return vqabstractgraphicsshapeitem->sceneEventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::sceneEventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QAbstractGraphicsShapeItem_SuperSceneEventFilter(QAbstractGraphicsShapeItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        return vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::sceneEventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::sceneEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnSceneEventFilter(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_sceneeventfilter_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_SceneEventFilter_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractGraphicsShapeItem_SceneEvent(QAbstractGraphicsShapeItem* self, QEvent* event) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        return vqabstractgraphicsshapeitem->sceneEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::sceneEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QAbstractGraphicsShapeItem_SuperSceneEvent(QAbstractGraphicsShapeItem* self, QEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        return vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::sceneEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::sceneEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnSceneEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_sceneevent_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_SceneEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_ContextMenuEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        vqabstractgraphicsshapeitem->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_SuperContextMenuEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnContextMenuEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_contextmenuevent_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_DragEnterEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        vqabstractgraphicsshapeitem->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_SuperDragEnterEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnDragEnterEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_dragenterevent_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_DragLeaveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        vqabstractgraphicsshapeitem->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_SuperDragLeaveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnDragLeaveEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_dragleaveevent_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_DragMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        vqabstractgraphicsshapeitem->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_SuperDragMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnDragMoveEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_dragmoveevent_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_DropEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        vqabstractgraphicsshapeitem->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_SuperDropEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnDropEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_dropevent_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_FocusInEvent(QAbstractGraphicsShapeItem* self, QFocusEvent* event) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        vqabstractgraphicsshapeitem->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_SuperFocusInEvent(QAbstractGraphicsShapeItem* self, QFocusEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnFocusInEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_focusinevent_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_FocusOutEvent(QAbstractGraphicsShapeItem* self, QFocusEvent* event) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        vqabstractgraphicsshapeitem->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_SuperFocusOutEvent(QAbstractGraphicsShapeItem* self, QFocusEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnFocusOutEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_focusoutevent_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_HoverEnterEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        vqabstractgraphicsshapeitem->hoverEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::hoverEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_SuperHoverEnterEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnHoverEnterEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_hoverenterevent_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_HoverEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_HoverMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        vqabstractgraphicsshapeitem->hoverMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::hoverMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_SuperHoverMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnHoverMoveEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_hovermoveevent_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_HoverMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_HoverLeaveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        vqabstractgraphicsshapeitem->hoverLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::hoverLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_SuperHoverLeaveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnHoverLeaveEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_hoverleaveevent_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_HoverLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_KeyPressEvent(QAbstractGraphicsShapeItem* self, QKeyEvent* event) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        vqabstractgraphicsshapeitem->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_SuperKeyPressEvent(QAbstractGraphicsShapeItem* self, QKeyEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnKeyPressEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_keypressevent_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_KeyReleaseEvent(QAbstractGraphicsShapeItem* self, QKeyEvent* event) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        vqabstractgraphicsshapeitem->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_SuperKeyReleaseEvent(QAbstractGraphicsShapeItem* self, QKeyEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnKeyReleaseEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_keyreleaseevent_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_MousePressEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        vqabstractgraphicsshapeitem->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_SuperMousePressEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnMousePressEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_mousepressevent_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_MouseMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        vqabstractgraphicsshapeitem->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_SuperMouseMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnMouseMoveEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_mousemoveevent_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_MouseReleaseEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        vqabstractgraphicsshapeitem->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_SuperMouseReleaseEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnMouseReleaseEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_mousereleaseevent_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_MouseDoubleClickEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        vqabstractgraphicsshapeitem->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_SuperMouseDoubleClickEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnMouseDoubleClickEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_mousedoubleclickevent_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_WheelEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneWheelEvent* event) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        vqabstractgraphicsshapeitem->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_SuperWheelEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnWheelEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_wheelevent_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_InputMethodEvent(QAbstractGraphicsShapeItem* self, QInputMethodEvent* event) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        vqabstractgraphicsshapeitem->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_SuperInputMethodEvent(QAbstractGraphicsShapeItem* self, QInputMethodEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnInputMethodEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_inputmethodevent_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QAbstractGraphicsShapeItem_InputMethodQuery(const QAbstractGraphicsShapeItem* self, int query) {
    return new QVariant((self->*&VirtualQAbstractGraphicsShapeItem::Base::inputMethodQuery)(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QAbstractGraphicsShapeItem_SuperInputMethodQuery(const QAbstractGraphicsShapeItem* self, int query) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self)))
        return new QVariant(vqabstractgraphicsshapeitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::inputMethodQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnInputMethodQuery(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self)))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_inputmethodquery_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
QVariant* QAbstractGraphicsShapeItem_ItemChange(QAbstractGraphicsShapeItem* self, int change, const QVariant* value) {
    return new QVariant((self->*&VirtualQAbstractGraphicsShapeItem::Base::itemChange)(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}

// Base class handler implementation
QVariant* QAbstractGraphicsShapeItem_SuperItemChange(QAbstractGraphicsShapeItem* self, int change, const QVariant* value) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        return new QVariant(vqabstractgraphicsshapeitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnItemChange(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_itemchange_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_ItemChange_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractGraphicsShapeItem_SupportsExtension(const QAbstractGraphicsShapeItem* self, int extension) {
    auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self));
    if (vqabstractgraphicsshapeitem) {
        return vqabstractgraphicsshapeitem->supportsExtension(static_cast<VirtualQAbstractGraphicsShapeItem::Extension>(extension));
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::supportsExtension called without a directly constructed type");
    }
}

// Base class handler implementation
bool QAbstractGraphicsShapeItem_SuperSupportsExtension(const QAbstractGraphicsShapeItem* self, int extension) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        return vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::supportsExtension(static_cast<VirtualQAbstractGraphicsShapeItem::Extension>(extension));
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::supportsExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnSupportsExtension(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self)))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_supportsextension_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_SupportsExtension_Callback>(slot);
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_SetExtension(QAbstractGraphicsShapeItem* self, int extension, const QVariant* variant) {
    auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self);
    if (vqabstractgraphicsshapeitem) {
        vqabstractgraphicsshapeitem->setExtension(static_cast<VirtualQAbstractGraphicsShapeItem::Extension>(extension), *variant);
    } else {
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::setExtension called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_SuperSetExtension(QAbstractGraphicsShapeItem* self, int extension, const QVariant* variant) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->QAbstractGraphicsShapeItem::setExtension(static_cast<VirtualQAbstractGraphicsShapeItem::Extension>(extension), *variant);
    } else
        qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::setExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnSetExtension(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_setextension_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_SetExtension_Callback>(slot);
}

// Derived class handler implementation
QVariant* QAbstractGraphicsShapeItem_Extension(const QAbstractGraphicsShapeItem* self, const QVariant* variant) {
    return new QVariant((self->*&VirtualQAbstractGraphicsShapeItem::Base::extension)(*variant));
}

// Base class handler implementation
QVariant* QAbstractGraphicsShapeItem_SuperExtension(const QAbstractGraphicsShapeItem* self, const QVariant* variant) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self)))
        return new QVariant(vqabstractgraphicsshapeitem->extension(*variant));
    qFatal("Error: Protected virtual method QAbstractGraphicsShapeItem::extension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnExtension(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self)))
        vqabstractgraphicsshapeitem->qabstractgraphicsshapeitem_extension_callback = reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_Extension_Callback>(slot);
}

// Derived class protected handler implementation
void QAbstractGraphicsShapeItem_UpdateMicroFocus(QAbstractGraphicsShapeItem* self) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->VirtualQAbstractGraphicsShapeItem::updateMicroFocus();
    } else
        qFatal("Error: Protected method QAbstractGraphicsShapeItem::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractGraphicsShapeItem_AddToIndex(QAbstractGraphicsShapeItem* self) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->VirtualQAbstractGraphicsShapeItem::addToIndex();
    } else
        qFatal("Error: Protected method QAbstractGraphicsShapeItem::addToIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractGraphicsShapeItem_RemoveFromIndex(QAbstractGraphicsShapeItem* self) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->VirtualQAbstractGraphicsShapeItem::removeFromIndex();
    } else
        qFatal("Error: Protected method QAbstractGraphicsShapeItem::removeFromIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractGraphicsShapeItem_PrepareGeometryChange(QAbstractGraphicsShapeItem* self) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->VirtualQAbstractGraphicsShapeItem::prepareGeometryChange();
    } else
        qFatal("Error: Protected method QAbstractGraphicsShapeItem::prepareGeometryChange called without a directly constructed type");
}

void QAbstractGraphicsShapeItem_Delete(QAbstractGraphicsShapeItem* self) {
    delete self;
}

QGraphicsPathItem* QGraphicsPathItem_new() {
    return new VirtualQGraphicsPathItem();
}

QGraphicsPathItem* QGraphicsPathItem_new2(const QPainterPath* path) {
    return new VirtualQGraphicsPathItem(*path);
}

QGraphicsPathItem* QGraphicsPathItem_new3(QGraphicsItem* parent) {
    return new VirtualQGraphicsPathItem(parent);
}

QGraphicsPathItem* QGraphicsPathItem_new4(const QPainterPath* path, QGraphicsItem* parent) {
    return new VirtualQGraphicsPathItem(*path, parent);
}

QPainterPath* QGraphicsPathItem_Path(const QGraphicsPathItem* self) {
    return new QPainterPath(self->path());
}

void QGraphicsPathItem_SetPath(QGraphicsPathItem* self, const QPainterPath* path) {
    self->setPath(*path);
}

QRectF* QGraphicsPathItem_BoundingRect(const QGraphicsPathItem* self) {
    return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsPathItem_Shape(const QGraphicsPathItem* self) {
    return new QPainterPath(self->shape());
}

bool QGraphicsPathItem_Contains(const QGraphicsPathItem* self, const QPointF* point) {
    return self->contains(*point);
}

void QGraphicsPathItem_Paint(QGraphicsPathItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paint(painter, option, widget);
}

bool QGraphicsPathItem_IsObscuredBy(const QGraphicsPathItem* self, const QGraphicsItem* item) {
    return self->isObscuredBy(item);
}

QPainterPath* QGraphicsPathItem_OpaqueArea(const QGraphicsPathItem* self) {
    return new QPainterPath(self->opaqueArea());
}

int QGraphicsPathItem_Type(const QGraphicsPathItem* self) {
    return self->type();
}

bool QGraphicsPathItem_SupportsExtension(const QGraphicsPathItem* self, int extension) {
    auto* vqgraphicspathitem = dynamic_cast<const VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        return vqgraphicspathitem->supportsExtension(static_cast<VirtualQGraphicsPathItem::Extension>(extension));
    }
    qFatal("Error: Protected method QGraphicsPathItem::supportsExtension called without a directly constructed type");
}

void QGraphicsPathItem_SetExtension(QGraphicsPathItem* self, int extension, const QVariant* variant) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        vqgraphicspathitem->setExtension(static_cast<VirtualQGraphicsPathItem::Extension>(extension), *variant);
    }
}

QVariant* QGraphicsPathItem_Extension(const QGraphicsPathItem* self, const QVariant* variant) {
    auto* vqgraphicspathitem = dynamic_cast<const VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        return new QVariant(vqgraphicspathitem->extension(*variant));
    }
    qFatal("Error: Protected method QGraphicsPathItem::extension called without a directly constructed type");
}

// Base class handler implementation
QRectF* QGraphicsPathItem_SuperBoundingRect(const QGraphicsPathItem* self) {
    return new QRectF(self->QGraphicsPathItem::boundingRect());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnBoundingRect(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self)))
        vqgraphicspathitem->qgraphicspathitem_boundingrect_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_BoundingRect_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QGraphicsPathItem_SuperShape(const QGraphicsPathItem* self) {
    return new QPainterPath(self->QGraphicsPathItem::shape());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnShape(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self)))
        vqgraphicspathitem->qgraphicspathitem_shape_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_Shape_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsPathItem_SuperContains(const QGraphicsPathItem* self, const QPointF* point) {
    return self->QGraphicsPathItem::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnContains(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self)))
        vqgraphicspathitem->qgraphicspathitem_contains_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_Contains_Callback>(slot);
}

// Base class handler implementation
void QGraphicsPathItem_SuperPaint(QGraphicsPathItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->QGraphicsPathItem::paint(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnPaint(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_paint_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_Paint_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsPathItem_SuperIsObscuredBy(const QGraphicsPathItem* self, const QGraphicsItem* item) {
    return self->QGraphicsPathItem::isObscuredBy(item);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnIsObscuredBy(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self)))
        vqgraphicspathitem->qgraphicspathitem_isobscuredby_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_IsObscuredBy_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QGraphicsPathItem_SuperOpaqueArea(const QGraphicsPathItem* self) {
    return new QPainterPath(self->QGraphicsPathItem::opaqueArea());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnOpaqueArea(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self)))
        vqgraphicspathitem->qgraphicspathitem_opaquearea_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_OpaqueArea_Callback>(slot);
}

// Base class handler implementation
int QGraphicsPathItem_SuperType(const QGraphicsPathItem* self) {
    return self->QGraphicsPathItem::type();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnType(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self)))
        vqgraphicspathitem->qgraphicspathitem_type_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_Type_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsPathItem_SuperSupportsExtension(const QGraphicsPathItem* self, int extension) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        return vqgraphicspathitem->QGraphicsPathItem::supportsExtension(static_cast<VirtualQGraphicsPathItem::Extension>(extension));
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::supportsExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnSupportsExtension(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self)))
        vqgraphicspathitem->qgraphicspathitem_supportsextension_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_SupportsExtension_Callback>(slot);
}

// Base class handler implementation
void QGraphicsPathItem_SuperSetExtension(QGraphicsPathItem* self, int extension, const QVariant* variant) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->QGraphicsPathItem::setExtension(static_cast<VirtualQGraphicsPathItem::Extension>(extension), *variant);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::setExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnSetExtension(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_setextension_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_SetExtension_Callback>(slot);
}

// Base class handler implementation
QVariant* QGraphicsPathItem_SuperExtension(const QGraphicsPathItem* self, const QVariant* variant) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self)))
        return new QVariant(vqgraphicspathitem->QGraphicsPathItem::extension(*variant));
    qFatal("Error: Protected virtual method QGraphicsPathItem::extension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnExtension(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self)))
        vqgraphicspathitem->qgraphicspathitem_extension_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_Extension_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPathItem_Advance(QGraphicsPathItem* self, int phase) {
    self->advance(static_cast<int>(phase));
}

// Base class handler implementation
void QGraphicsPathItem_SuperAdvance(QGraphicsPathItem* self, int phase) {
    self->QGraphicsPathItem::advance(static_cast<int>(phase));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnAdvance(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_advance_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_Advance_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsPathItem_CollidesWithItem(const QGraphicsPathItem* self, const QGraphicsItem* other, int mode) {
    return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsPathItem_SuperCollidesWithItem(const QGraphicsPathItem* self, const QGraphicsItem* other, int mode) {
    return self->QGraphicsPathItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnCollidesWithItem(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self)))
        vqgraphicspathitem->qgraphicspathitem_collideswithitem_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_CollidesWithItem_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsPathItem_CollidesWithPath(const QGraphicsPathItem* self, const QPainterPath* path, int mode) {
    return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsPathItem_SuperCollidesWithPath(const QGraphicsPathItem* self, const QPainterPath* path, int mode) {
    return self->QGraphicsPathItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnCollidesWithPath(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self)))
        vqgraphicspathitem->qgraphicspathitem_collideswithpath_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_CollidesWithPath_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsPathItem_SceneEventFilter(QGraphicsPathItem* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        return vqgraphicspathitem->sceneEventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPathItem::sceneEventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsPathItem_SuperSceneEventFilter(QGraphicsPathItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        return vqgraphicspathitem->QGraphicsPathItem::sceneEventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::sceneEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnSceneEventFilter(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_sceneeventfilter_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_SceneEventFilter_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsPathItem_SceneEvent(QGraphicsPathItem* self, QEvent* event) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        return vqgraphicspathitem->sceneEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPathItem::sceneEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsPathItem_SuperSceneEvent(QGraphicsPathItem* self, QEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        return vqgraphicspathitem->QGraphicsPathItem::sceneEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::sceneEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnSceneEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_sceneevent_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_SceneEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPathItem_ContextMenuEvent(QGraphicsPathItem* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        vqgraphicspathitem->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPathItem::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPathItem_SuperContextMenuEvent(QGraphicsPathItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->QGraphicsPathItem::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnContextMenuEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_contextmenuevent_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPathItem_DragEnterEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        vqgraphicspathitem->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPathItem::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPathItem_SuperDragEnterEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->QGraphicsPathItem::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnDragEnterEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_dragenterevent_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPathItem_DragLeaveEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        vqgraphicspathitem->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPathItem::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPathItem_SuperDragLeaveEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->QGraphicsPathItem::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnDragLeaveEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_dragleaveevent_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPathItem_DragMoveEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        vqgraphicspathitem->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPathItem::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPathItem_SuperDragMoveEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->QGraphicsPathItem::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnDragMoveEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_dragmoveevent_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPathItem_DropEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        vqgraphicspathitem->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPathItem::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPathItem_SuperDropEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->QGraphicsPathItem::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnDropEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_dropevent_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPathItem_FocusInEvent(QGraphicsPathItem* self, QFocusEvent* event) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        vqgraphicspathitem->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPathItem::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPathItem_SuperFocusInEvent(QGraphicsPathItem* self, QFocusEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->QGraphicsPathItem::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnFocusInEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_focusinevent_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPathItem_FocusOutEvent(QGraphicsPathItem* self, QFocusEvent* event) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        vqgraphicspathitem->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPathItem::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPathItem_SuperFocusOutEvent(QGraphicsPathItem* self, QFocusEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->QGraphicsPathItem::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnFocusOutEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_focusoutevent_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPathItem_HoverEnterEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        vqgraphicspathitem->hoverEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPathItem::hoverEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPathItem_SuperHoverEnterEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->QGraphicsPathItem::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnHoverEnterEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_hoverenterevent_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_HoverEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPathItem_HoverMoveEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        vqgraphicspathitem->hoverMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPathItem::hoverMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPathItem_SuperHoverMoveEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->QGraphicsPathItem::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnHoverMoveEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_hovermoveevent_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_HoverMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPathItem_HoverLeaveEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        vqgraphicspathitem->hoverLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPathItem::hoverLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPathItem_SuperHoverLeaveEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->QGraphicsPathItem::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnHoverLeaveEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_hoverleaveevent_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_HoverLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPathItem_KeyPressEvent(QGraphicsPathItem* self, QKeyEvent* event) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        vqgraphicspathitem->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPathItem::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPathItem_SuperKeyPressEvent(QGraphicsPathItem* self, QKeyEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->QGraphicsPathItem::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnKeyPressEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_keypressevent_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPathItem_KeyReleaseEvent(QGraphicsPathItem* self, QKeyEvent* event) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        vqgraphicspathitem->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPathItem::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPathItem_SuperKeyReleaseEvent(QGraphicsPathItem* self, QKeyEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->QGraphicsPathItem::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnKeyReleaseEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_keyreleaseevent_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPathItem_MousePressEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        vqgraphicspathitem->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPathItem::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPathItem_SuperMousePressEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->QGraphicsPathItem::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnMousePressEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_mousepressevent_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPathItem_MouseMoveEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        vqgraphicspathitem->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPathItem::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPathItem_SuperMouseMoveEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->QGraphicsPathItem::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnMouseMoveEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_mousemoveevent_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPathItem_MouseReleaseEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        vqgraphicspathitem->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPathItem::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPathItem_SuperMouseReleaseEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->QGraphicsPathItem::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnMouseReleaseEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_mousereleaseevent_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPathItem_MouseDoubleClickEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        vqgraphicspathitem->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPathItem::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPathItem_SuperMouseDoubleClickEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->QGraphicsPathItem::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnMouseDoubleClickEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_mousedoubleclickevent_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPathItem_WheelEvent(QGraphicsPathItem* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        vqgraphicspathitem->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPathItem::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPathItem_SuperWheelEvent(QGraphicsPathItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->QGraphicsPathItem::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnWheelEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_wheelevent_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPathItem_InputMethodEvent(QGraphicsPathItem* self, QInputMethodEvent* event) {
    auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
    if (vqgraphicspathitem) {
        vqgraphicspathitem->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPathItem::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPathItem_SuperInputMethodEvent(QGraphicsPathItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->QGraphicsPathItem::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPathItem::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnInputMethodEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_inputmethodevent_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsPathItem_InputMethodQuery(const QGraphicsPathItem* self, int query) {
    return new QVariant((self->*&VirtualQGraphicsPathItem::Base::inputMethodQuery)(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QGraphicsPathItem_SuperInputMethodQuery(const QGraphicsPathItem* self, int query) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self)))
        return new QVariant(vqgraphicspathitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    qFatal("Error: Protected virtual method QGraphicsPathItem::inputMethodQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnInputMethodQuery(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self)))
        vqgraphicspathitem->qgraphicspathitem_inputmethodquery_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsPathItem_ItemChange(QGraphicsPathItem* self, int change, const QVariant* value) {
    return new QVariant((self->*&VirtualQGraphicsPathItem::Base::itemChange)(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}

// Base class handler implementation
QVariant* QGraphicsPathItem_SuperItemChange(QGraphicsPathItem* self, int change, const QVariant* value) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        return new QVariant(vqgraphicspathitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    qFatal("Error: Protected virtual method QGraphicsPathItem::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnItemChange(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self))
        vqgraphicspathitem->qgraphicspathitem_itemchange_callback = reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_ItemChange_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsPathItem_UpdateMicroFocus(QGraphicsPathItem* self) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->VirtualQGraphicsPathItem::updateMicroFocus();
    } else
        qFatal("Error: Protected method QGraphicsPathItem::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsPathItem_AddToIndex(QGraphicsPathItem* self) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->VirtualQGraphicsPathItem::addToIndex();
    } else
        qFatal("Error: Protected method QGraphicsPathItem::addToIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsPathItem_RemoveFromIndex(QGraphicsPathItem* self) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->VirtualQGraphicsPathItem::removeFromIndex();
    } else
        qFatal("Error: Protected method QGraphicsPathItem::removeFromIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsPathItem_PrepareGeometryChange(QGraphicsPathItem* self) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->VirtualQGraphicsPathItem::prepareGeometryChange();
    } else
        qFatal("Error: Protected method QGraphicsPathItem::prepareGeometryChange called without a directly constructed type");
}

void QGraphicsPathItem_Delete(QGraphicsPathItem* self) {
    delete self;
}

QGraphicsRectItem* QGraphicsRectItem_new() {
    return new VirtualQGraphicsRectItem();
}

QGraphicsRectItem* QGraphicsRectItem_new2(const QRectF* rect) {
    return new VirtualQGraphicsRectItem(*rect);
}

QGraphicsRectItem* QGraphicsRectItem_new3(double x, double y, double w, double h) {
    return new VirtualQGraphicsRectItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QGraphicsRectItem* QGraphicsRectItem_new4(QGraphicsItem* parent) {
    return new VirtualQGraphicsRectItem(parent);
}

QGraphicsRectItem* QGraphicsRectItem_new5(const QRectF* rect, QGraphicsItem* parent) {
    return new VirtualQGraphicsRectItem(*rect, parent);
}

QGraphicsRectItem* QGraphicsRectItem_new6(double x, double y, double w, double h, QGraphicsItem* parent) {
    return new VirtualQGraphicsRectItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), parent);
}

QRectF* QGraphicsRectItem_Rect(const QGraphicsRectItem* self) {
    return new QRectF(self->rect());
}

void QGraphicsRectItem_SetRect(QGraphicsRectItem* self, const QRectF* rect) {
    self->setRect(*rect);
}

void QGraphicsRectItem_SetRect2(QGraphicsRectItem* self, double x, double y, double w, double h) {
    self->setRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QRectF* QGraphicsRectItem_BoundingRect(const QGraphicsRectItem* self) {
    return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsRectItem_Shape(const QGraphicsRectItem* self) {
    return new QPainterPath(self->shape());
}

bool QGraphicsRectItem_Contains(const QGraphicsRectItem* self, const QPointF* point) {
    return self->contains(*point);
}

void QGraphicsRectItem_Paint(QGraphicsRectItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paint(painter, option, widget);
}

bool QGraphicsRectItem_IsObscuredBy(const QGraphicsRectItem* self, const QGraphicsItem* item) {
    return self->isObscuredBy(item);
}

QPainterPath* QGraphicsRectItem_OpaqueArea(const QGraphicsRectItem* self) {
    return new QPainterPath(self->opaqueArea());
}

int QGraphicsRectItem_Type(const QGraphicsRectItem* self) {
    return self->type();
}

bool QGraphicsRectItem_SupportsExtension(const QGraphicsRectItem* self, int extension) {
    auto* vqgraphicsrectitem = dynamic_cast<const VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        return vqgraphicsrectitem->supportsExtension(static_cast<VirtualQGraphicsRectItem::Extension>(extension));
    }
    qFatal("Error: Protected method QGraphicsRectItem::supportsExtension called without a directly constructed type");
}

void QGraphicsRectItem_SetExtension(QGraphicsRectItem* self, int extension, const QVariant* variant) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        vqgraphicsrectitem->setExtension(static_cast<VirtualQGraphicsRectItem::Extension>(extension), *variant);
    }
}

QVariant* QGraphicsRectItem_Extension(const QGraphicsRectItem* self, const QVariant* variant) {
    auto* vqgraphicsrectitem = dynamic_cast<const VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        return new QVariant(vqgraphicsrectitem->extension(*variant));
    }
    qFatal("Error: Protected method QGraphicsRectItem::extension called without a directly constructed type");
}

// Base class handler implementation
QRectF* QGraphicsRectItem_SuperBoundingRect(const QGraphicsRectItem* self) {
    return new QRectF(self->QGraphicsRectItem::boundingRect());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnBoundingRect(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self)))
        vqgraphicsrectitem->qgraphicsrectitem_boundingrect_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_BoundingRect_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QGraphicsRectItem_SuperShape(const QGraphicsRectItem* self) {
    return new QPainterPath(self->QGraphicsRectItem::shape());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnShape(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self)))
        vqgraphicsrectitem->qgraphicsrectitem_shape_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_Shape_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsRectItem_SuperContains(const QGraphicsRectItem* self, const QPointF* point) {
    return self->QGraphicsRectItem::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnContains(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self)))
        vqgraphicsrectitem->qgraphicsrectitem_contains_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_Contains_Callback>(slot);
}

// Base class handler implementation
void QGraphicsRectItem_SuperPaint(QGraphicsRectItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->QGraphicsRectItem::paint(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnPaint(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_paint_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_Paint_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsRectItem_SuperIsObscuredBy(const QGraphicsRectItem* self, const QGraphicsItem* item) {
    return self->QGraphicsRectItem::isObscuredBy(item);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnIsObscuredBy(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self)))
        vqgraphicsrectitem->qgraphicsrectitem_isobscuredby_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_IsObscuredBy_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QGraphicsRectItem_SuperOpaqueArea(const QGraphicsRectItem* self) {
    return new QPainterPath(self->QGraphicsRectItem::opaqueArea());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnOpaqueArea(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self)))
        vqgraphicsrectitem->qgraphicsrectitem_opaquearea_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_OpaqueArea_Callback>(slot);
}

// Base class handler implementation
int QGraphicsRectItem_SuperType(const QGraphicsRectItem* self) {
    return self->QGraphicsRectItem::type();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnType(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self)))
        vqgraphicsrectitem->qgraphicsrectitem_type_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_Type_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsRectItem_SuperSupportsExtension(const QGraphicsRectItem* self, int extension) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        return vqgraphicsrectitem->QGraphicsRectItem::supportsExtension(static_cast<VirtualQGraphicsRectItem::Extension>(extension));
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::supportsExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnSupportsExtension(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self)))
        vqgraphicsrectitem->qgraphicsrectitem_supportsextension_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_SupportsExtension_Callback>(slot);
}

// Base class handler implementation
void QGraphicsRectItem_SuperSetExtension(QGraphicsRectItem* self, int extension, const QVariant* variant) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->QGraphicsRectItem::setExtension(static_cast<VirtualQGraphicsRectItem::Extension>(extension), *variant);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::setExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnSetExtension(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_setextension_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_SetExtension_Callback>(slot);
}

// Base class handler implementation
QVariant* QGraphicsRectItem_SuperExtension(const QGraphicsRectItem* self, const QVariant* variant) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self)))
        return new QVariant(vqgraphicsrectitem->QGraphicsRectItem::extension(*variant));
    qFatal("Error: Protected virtual method QGraphicsRectItem::extension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnExtension(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self)))
        vqgraphicsrectitem->qgraphicsrectitem_extension_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_Extension_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRectItem_Advance(QGraphicsRectItem* self, int phase) {
    self->advance(static_cast<int>(phase));
}

// Base class handler implementation
void QGraphicsRectItem_SuperAdvance(QGraphicsRectItem* self, int phase) {
    self->QGraphicsRectItem::advance(static_cast<int>(phase));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnAdvance(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_advance_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_Advance_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsRectItem_CollidesWithItem(const QGraphicsRectItem* self, const QGraphicsItem* other, int mode) {
    return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsRectItem_SuperCollidesWithItem(const QGraphicsRectItem* self, const QGraphicsItem* other, int mode) {
    return self->QGraphicsRectItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnCollidesWithItem(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self)))
        vqgraphicsrectitem->qgraphicsrectitem_collideswithitem_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_CollidesWithItem_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsRectItem_CollidesWithPath(const QGraphicsRectItem* self, const QPainterPath* path, int mode) {
    return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsRectItem_SuperCollidesWithPath(const QGraphicsRectItem* self, const QPainterPath* path, int mode) {
    return self->QGraphicsRectItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnCollidesWithPath(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self)))
        vqgraphicsrectitem->qgraphicsrectitem_collideswithpath_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_CollidesWithPath_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsRectItem_SceneEventFilter(QGraphicsRectItem* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        return vqgraphicsrectitem->sceneEventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRectItem::sceneEventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsRectItem_SuperSceneEventFilter(QGraphicsRectItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        return vqgraphicsrectitem->QGraphicsRectItem::sceneEventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::sceneEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnSceneEventFilter(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_sceneeventfilter_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_SceneEventFilter_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsRectItem_SceneEvent(QGraphicsRectItem* self, QEvent* event) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        return vqgraphicsrectitem->sceneEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRectItem::sceneEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsRectItem_SuperSceneEvent(QGraphicsRectItem* self, QEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        return vqgraphicsrectitem->QGraphicsRectItem::sceneEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::sceneEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnSceneEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_sceneevent_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_SceneEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRectItem_ContextMenuEvent(QGraphicsRectItem* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        vqgraphicsrectitem->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRectItem::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRectItem_SuperContextMenuEvent(QGraphicsRectItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->QGraphicsRectItem::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnContextMenuEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_contextmenuevent_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRectItem_DragEnterEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        vqgraphicsrectitem->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRectItem::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRectItem_SuperDragEnterEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->QGraphicsRectItem::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnDragEnterEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_dragenterevent_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRectItem_DragLeaveEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        vqgraphicsrectitem->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRectItem::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRectItem_SuperDragLeaveEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->QGraphicsRectItem::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnDragLeaveEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_dragleaveevent_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRectItem_DragMoveEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        vqgraphicsrectitem->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRectItem::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRectItem_SuperDragMoveEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->QGraphicsRectItem::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnDragMoveEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_dragmoveevent_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRectItem_DropEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        vqgraphicsrectitem->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRectItem::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRectItem_SuperDropEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->QGraphicsRectItem::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnDropEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_dropevent_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRectItem_FocusInEvent(QGraphicsRectItem* self, QFocusEvent* event) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        vqgraphicsrectitem->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRectItem::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRectItem_SuperFocusInEvent(QGraphicsRectItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->QGraphicsRectItem::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnFocusInEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_focusinevent_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRectItem_FocusOutEvent(QGraphicsRectItem* self, QFocusEvent* event) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        vqgraphicsrectitem->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRectItem::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRectItem_SuperFocusOutEvent(QGraphicsRectItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->QGraphicsRectItem::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnFocusOutEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_focusoutevent_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRectItem_HoverEnterEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        vqgraphicsrectitem->hoverEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRectItem::hoverEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRectItem_SuperHoverEnterEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->QGraphicsRectItem::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnHoverEnterEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_hoverenterevent_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_HoverEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRectItem_HoverMoveEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        vqgraphicsrectitem->hoverMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRectItem::hoverMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRectItem_SuperHoverMoveEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->QGraphicsRectItem::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnHoverMoveEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_hovermoveevent_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_HoverMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRectItem_HoverLeaveEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        vqgraphicsrectitem->hoverLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRectItem::hoverLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRectItem_SuperHoverLeaveEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->QGraphicsRectItem::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnHoverLeaveEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_hoverleaveevent_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_HoverLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRectItem_KeyPressEvent(QGraphicsRectItem* self, QKeyEvent* event) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        vqgraphicsrectitem->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRectItem::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRectItem_SuperKeyPressEvent(QGraphicsRectItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->QGraphicsRectItem::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnKeyPressEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_keypressevent_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRectItem_KeyReleaseEvent(QGraphicsRectItem* self, QKeyEvent* event) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        vqgraphicsrectitem->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRectItem::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRectItem_SuperKeyReleaseEvent(QGraphicsRectItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->QGraphicsRectItem::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnKeyReleaseEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_keyreleaseevent_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRectItem_MousePressEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        vqgraphicsrectitem->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRectItem::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRectItem_SuperMousePressEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->QGraphicsRectItem::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnMousePressEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_mousepressevent_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRectItem_MouseMoveEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        vqgraphicsrectitem->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRectItem::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRectItem_SuperMouseMoveEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->QGraphicsRectItem::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnMouseMoveEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_mousemoveevent_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRectItem_MouseReleaseEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        vqgraphicsrectitem->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRectItem::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRectItem_SuperMouseReleaseEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->QGraphicsRectItem::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnMouseReleaseEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_mousereleaseevent_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRectItem_MouseDoubleClickEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        vqgraphicsrectitem->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRectItem::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRectItem_SuperMouseDoubleClickEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->QGraphicsRectItem::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnMouseDoubleClickEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_mousedoubleclickevent_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRectItem_WheelEvent(QGraphicsRectItem* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        vqgraphicsrectitem->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRectItem::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRectItem_SuperWheelEvent(QGraphicsRectItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->QGraphicsRectItem::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnWheelEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_wheelevent_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRectItem_InputMethodEvent(QGraphicsRectItem* self, QInputMethodEvent* event) {
    auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
    if (vqgraphicsrectitem) {
        vqgraphicsrectitem->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRectItem::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRectItem_SuperInputMethodEvent(QGraphicsRectItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->QGraphicsRectItem::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRectItem::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnInputMethodEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_inputmethodevent_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsRectItem_InputMethodQuery(const QGraphicsRectItem* self, int query) {
    return new QVariant((self->*&VirtualQGraphicsRectItem::Base::inputMethodQuery)(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QGraphicsRectItem_SuperInputMethodQuery(const QGraphicsRectItem* self, int query) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self)))
        return new QVariant(vqgraphicsrectitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    qFatal("Error: Protected virtual method QGraphicsRectItem::inputMethodQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnInputMethodQuery(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self)))
        vqgraphicsrectitem->qgraphicsrectitem_inputmethodquery_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsRectItem_ItemChange(QGraphicsRectItem* self, int change, const QVariant* value) {
    return new QVariant((self->*&VirtualQGraphicsRectItem::Base::itemChange)(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}

// Base class handler implementation
QVariant* QGraphicsRectItem_SuperItemChange(QGraphicsRectItem* self, int change, const QVariant* value) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        return new QVariant(vqgraphicsrectitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    qFatal("Error: Protected virtual method QGraphicsRectItem::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnItemChange(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self))
        vqgraphicsrectitem->qgraphicsrectitem_itemchange_callback = reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_ItemChange_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsRectItem_UpdateMicroFocus(QGraphicsRectItem* self) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->VirtualQGraphicsRectItem::updateMicroFocus();
    } else
        qFatal("Error: Protected method QGraphicsRectItem::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsRectItem_AddToIndex(QGraphicsRectItem* self) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->VirtualQGraphicsRectItem::addToIndex();
    } else
        qFatal("Error: Protected method QGraphicsRectItem::addToIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsRectItem_RemoveFromIndex(QGraphicsRectItem* self) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->VirtualQGraphicsRectItem::removeFromIndex();
    } else
        qFatal("Error: Protected method QGraphicsRectItem::removeFromIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsRectItem_PrepareGeometryChange(QGraphicsRectItem* self) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->VirtualQGraphicsRectItem::prepareGeometryChange();
    } else
        qFatal("Error: Protected method QGraphicsRectItem::prepareGeometryChange called without a directly constructed type");
}

void QGraphicsRectItem_Delete(QGraphicsRectItem* self) {
    delete self;
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new() {
    return new VirtualQGraphicsEllipseItem();
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new2(const QRectF* rect) {
    return new VirtualQGraphicsEllipseItem(*rect);
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new3(double x, double y, double w, double h) {
    return new VirtualQGraphicsEllipseItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new4(QGraphicsItem* parent) {
    return new VirtualQGraphicsEllipseItem(parent);
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new5(const QRectF* rect, QGraphicsItem* parent) {
    return new VirtualQGraphicsEllipseItem(*rect, parent);
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new6(double x, double y, double w, double h, QGraphicsItem* parent) {
    return new VirtualQGraphicsEllipseItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), parent);
}

QRectF* QGraphicsEllipseItem_Rect(const QGraphicsEllipseItem* self) {
    return new QRectF(self->rect());
}

void QGraphicsEllipseItem_SetRect(QGraphicsEllipseItem* self, const QRectF* rect) {
    self->setRect(*rect);
}

void QGraphicsEllipseItem_SetRect2(QGraphicsEllipseItem* self, double x, double y, double w, double h) {
    self->setRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

int QGraphicsEllipseItem_StartAngle(const QGraphicsEllipseItem* self) {
    return self->startAngle();
}

void QGraphicsEllipseItem_SetStartAngle(QGraphicsEllipseItem* self, int angle) {
    self->setStartAngle(static_cast<int>(angle));
}

int QGraphicsEllipseItem_SpanAngle(const QGraphicsEllipseItem* self) {
    return self->spanAngle();
}

void QGraphicsEllipseItem_SetSpanAngle(QGraphicsEllipseItem* self, int angle) {
    self->setSpanAngle(static_cast<int>(angle));
}

QRectF* QGraphicsEllipseItem_BoundingRect(const QGraphicsEllipseItem* self) {
    return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsEllipseItem_Shape(const QGraphicsEllipseItem* self) {
    return new QPainterPath(self->shape());
}

bool QGraphicsEllipseItem_Contains(const QGraphicsEllipseItem* self, const QPointF* point) {
    return self->contains(*point);
}

void QGraphicsEllipseItem_Paint(QGraphicsEllipseItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paint(painter, option, widget);
}

bool QGraphicsEllipseItem_IsObscuredBy(const QGraphicsEllipseItem* self, const QGraphicsItem* item) {
    return self->isObscuredBy(item);
}

QPainterPath* QGraphicsEllipseItem_OpaqueArea(const QGraphicsEllipseItem* self) {
    return new QPainterPath(self->opaqueArea());
}

int QGraphicsEllipseItem_Type(const QGraphicsEllipseItem* self) {
    return self->type();
}

bool QGraphicsEllipseItem_SupportsExtension(const QGraphicsEllipseItem* self, int extension) {
    auto* vqgraphicsellipseitem = dynamic_cast<const VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        return vqgraphicsellipseitem->supportsExtension(static_cast<VirtualQGraphicsEllipseItem::Extension>(extension));
    }
    qFatal("Error: Protected method QGraphicsEllipseItem::supportsExtension called without a directly constructed type");
}

void QGraphicsEllipseItem_SetExtension(QGraphicsEllipseItem* self, int extension, const QVariant* variant) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        vqgraphicsellipseitem->setExtension(static_cast<VirtualQGraphicsEllipseItem::Extension>(extension), *variant);
    }
}

QVariant* QGraphicsEllipseItem_Extension(const QGraphicsEllipseItem* self, const QVariant* variant) {
    auto* vqgraphicsellipseitem = dynamic_cast<const VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        return new QVariant(vqgraphicsellipseitem->extension(*variant));
    }
    qFatal("Error: Protected method QGraphicsEllipseItem::extension called without a directly constructed type");
}

// Base class handler implementation
QRectF* QGraphicsEllipseItem_SuperBoundingRect(const QGraphicsEllipseItem* self) {
    return new QRectF(self->QGraphicsEllipseItem::boundingRect());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnBoundingRect(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self)))
        vqgraphicsellipseitem->qgraphicsellipseitem_boundingrect_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_BoundingRect_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QGraphicsEllipseItem_SuperShape(const QGraphicsEllipseItem* self) {
    return new QPainterPath(self->QGraphicsEllipseItem::shape());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnShape(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self)))
        vqgraphicsellipseitem->qgraphicsellipseitem_shape_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_Shape_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsEllipseItem_SuperContains(const QGraphicsEllipseItem* self, const QPointF* point) {
    return self->QGraphicsEllipseItem::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnContains(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self)))
        vqgraphicsellipseitem->qgraphicsellipseitem_contains_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_Contains_Callback>(slot);
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperPaint(QGraphicsEllipseItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->QGraphicsEllipseItem::paint(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnPaint(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_paint_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_Paint_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsEllipseItem_SuperIsObscuredBy(const QGraphicsEllipseItem* self, const QGraphicsItem* item) {
    return self->QGraphicsEllipseItem::isObscuredBy(item);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnIsObscuredBy(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self)))
        vqgraphicsellipseitem->qgraphicsellipseitem_isobscuredby_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_IsObscuredBy_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QGraphicsEllipseItem_SuperOpaqueArea(const QGraphicsEllipseItem* self) {
    return new QPainterPath(self->QGraphicsEllipseItem::opaqueArea());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnOpaqueArea(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self)))
        vqgraphicsellipseitem->qgraphicsellipseitem_opaquearea_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_OpaqueArea_Callback>(slot);
}

// Base class handler implementation
int QGraphicsEllipseItem_SuperType(const QGraphicsEllipseItem* self) {
    return self->QGraphicsEllipseItem::type();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnType(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self)))
        vqgraphicsellipseitem->qgraphicsellipseitem_type_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_Type_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsEllipseItem_SuperSupportsExtension(const QGraphicsEllipseItem* self, int extension) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        return vqgraphicsellipseitem->QGraphicsEllipseItem::supportsExtension(static_cast<VirtualQGraphicsEllipseItem::Extension>(extension));
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::supportsExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnSupportsExtension(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self)))
        vqgraphicsellipseitem->qgraphicsellipseitem_supportsextension_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_SupportsExtension_Callback>(slot);
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperSetExtension(QGraphicsEllipseItem* self, int extension, const QVariant* variant) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->QGraphicsEllipseItem::setExtension(static_cast<VirtualQGraphicsEllipseItem::Extension>(extension), *variant);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::setExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnSetExtension(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_setextension_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_SetExtension_Callback>(slot);
}

// Base class handler implementation
QVariant* QGraphicsEllipseItem_SuperExtension(const QGraphicsEllipseItem* self, const QVariant* variant) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self)))
        return new QVariant(vqgraphicsellipseitem->QGraphicsEllipseItem::extension(*variant));
    qFatal("Error: Protected virtual method QGraphicsEllipseItem::extension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnExtension(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self)))
        vqgraphicsellipseitem->qgraphicsellipseitem_extension_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_Extension_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEllipseItem_Advance(QGraphicsEllipseItem* self, int phase) {
    self->advance(static_cast<int>(phase));
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperAdvance(QGraphicsEllipseItem* self, int phase) {
    self->QGraphicsEllipseItem::advance(static_cast<int>(phase));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnAdvance(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_advance_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_Advance_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsEllipseItem_CollidesWithItem(const QGraphicsEllipseItem* self, const QGraphicsItem* other, int mode) {
    return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsEllipseItem_SuperCollidesWithItem(const QGraphicsEllipseItem* self, const QGraphicsItem* other, int mode) {
    return self->QGraphicsEllipseItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnCollidesWithItem(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self)))
        vqgraphicsellipseitem->qgraphicsellipseitem_collideswithitem_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_CollidesWithItem_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsEllipseItem_CollidesWithPath(const QGraphicsEllipseItem* self, const QPainterPath* path, int mode) {
    return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsEllipseItem_SuperCollidesWithPath(const QGraphicsEllipseItem* self, const QPainterPath* path, int mode) {
    return self->QGraphicsEllipseItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnCollidesWithPath(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self)))
        vqgraphicsellipseitem->qgraphicsellipseitem_collideswithpath_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_CollidesWithPath_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsEllipseItem_SceneEventFilter(QGraphicsEllipseItem* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        return vqgraphicsellipseitem->sceneEventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::sceneEventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsEllipseItem_SuperSceneEventFilter(QGraphicsEllipseItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        return vqgraphicsellipseitem->QGraphicsEllipseItem::sceneEventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::sceneEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnSceneEventFilter(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_sceneeventfilter_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_SceneEventFilter_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsEllipseItem_SceneEvent(QGraphicsEllipseItem* self, QEvent* event) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        return vqgraphicsellipseitem->sceneEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::sceneEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsEllipseItem_SuperSceneEvent(QGraphicsEllipseItem* self, QEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        return vqgraphicsellipseitem->QGraphicsEllipseItem::sceneEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::sceneEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnSceneEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_sceneevent_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_SceneEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEllipseItem_ContextMenuEvent(QGraphicsEllipseItem* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        vqgraphicsellipseitem->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperContextMenuEvent(QGraphicsEllipseItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->QGraphicsEllipseItem::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnContextMenuEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_contextmenuevent_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEllipseItem_DragEnterEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        vqgraphicsellipseitem->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperDragEnterEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->QGraphicsEllipseItem::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnDragEnterEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_dragenterevent_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEllipseItem_DragLeaveEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        vqgraphicsellipseitem->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperDragLeaveEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->QGraphicsEllipseItem::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnDragLeaveEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_dragleaveevent_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEllipseItem_DragMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        vqgraphicsellipseitem->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperDragMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->QGraphicsEllipseItem::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnDragMoveEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_dragmoveevent_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEllipseItem_DropEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        vqgraphicsellipseitem->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperDropEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->QGraphicsEllipseItem::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnDropEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_dropevent_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEllipseItem_FocusInEvent(QGraphicsEllipseItem* self, QFocusEvent* event) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        vqgraphicsellipseitem->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperFocusInEvent(QGraphicsEllipseItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->QGraphicsEllipseItem::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnFocusInEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_focusinevent_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEllipseItem_FocusOutEvent(QGraphicsEllipseItem* self, QFocusEvent* event) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        vqgraphicsellipseitem->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperFocusOutEvent(QGraphicsEllipseItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->QGraphicsEllipseItem::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnFocusOutEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_focusoutevent_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEllipseItem_HoverEnterEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        vqgraphicsellipseitem->hoverEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::hoverEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperHoverEnterEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->QGraphicsEllipseItem::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnHoverEnterEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_hoverenterevent_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_HoverEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEllipseItem_HoverMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        vqgraphicsellipseitem->hoverMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::hoverMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperHoverMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->QGraphicsEllipseItem::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnHoverMoveEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_hovermoveevent_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_HoverMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEllipseItem_HoverLeaveEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        vqgraphicsellipseitem->hoverLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::hoverLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperHoverLeaveEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->QGraphicsEllipseItem::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnHoverLeaveEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_hoverleaveevent_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_HoverLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEllipseItem_KeyPressEvent(QGraphicsEllipseItem* self, QKeyEvent* event) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        vqgraphicsellipseitem->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperKeyPressEvent(QGraphicsEllipseItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->QGraphicsEllipseItem::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnKeyPressEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_keypressevent_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEllipseItem_KeyReleaseEvent(QGraphicsEllipseItem* self, QKeyEvent* event) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        vqgraphicsellipseitem->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperKeyReleaseEvent(QGraphicsEllipseItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->QGraphicsEllipseItem::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnKeyReleaseEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_keyreleaseevent_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEllipseItem_MousePressEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        vqgraphicsellipseitem->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperMousePressEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->QGraphicsEllipseItem::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnMousePressEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_mousepressevent_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEllipseItem_MouseMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        vqgraphicsellipseitem->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperMouseMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->QGraphicsEllipseItem::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnMouseMoveEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_mousemoveevent_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEllipseItem_MouseReleaseEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        vqgraphicsellipseitem->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperMouseReleaseEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->QGraphicsEllipseItem::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnMouseReleaseEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_mousereleaseevent_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEllipseItem_MouseDoubleClickEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        vqgraphicsellipseitem->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperMouseDoubleClickEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->QGraphicsEllipseItem::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnMouseDoubleClickEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_mousedoubleclickevent_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEllipseItem_WheelEvent(QGraphicsEllipseItem* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        vqgraphicsellipseitem->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperWheelEvent(QGraphicsEllipseItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->QGraphicsEllipseItem::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnWheelEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_wheelevent_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsEllipseItem_InputMethodEvent(QGraphicsEllipseItem* self, QInputMethodEvent* event) {
    auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
    if (vqgraphicsellipseitem) {
        vqgraphicsellipseitem->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_SuperInputMethodEvent(QGraphicsEllipseItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->QGraphicsEllipseItem::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsEllipseItem::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnInputMethodEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_inputmethodevent_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsEllipseItem_InputMethodQuery(const QGraphicsEllipseItem* self, int query) {
    return new QVariant((self->*&VirtualQGraphicsEllipseItem::Base::inputMethodQuery)(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QGraphicsEllipseItem_SuperInputMethodQuery(const QGraphicsEllipseItem* self, int query) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self)))
        return new QVariant(vqgraphicsellipseitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    qFatal("Error: Protected virtual method QGraphicsEllipseItem::inputMethodQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnInputMethodQuery(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self)))
        vqgraphicsellipseitem->qgraphicsellipseitem_inputmethodquery_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsEllipseItem_ItemChange(QGraphicsEllipseItem* self, int change, const QVariant* value) {
    return new QVariant((self->*&VirtualQGraphicsEllipseItem::Base::itemChange)(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}

// Base class handler implementation
QVariant* QGraphicsEllipseItem_SuperItemChange(QGraphicsEllipseItem* self, int change, const QVariant* value) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        return new QVariant(vqgraphicsellipseitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    qFatal("Error: Protected virtual method QGraphicsEllipseItem::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnItemChange(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self))
        vqgraphicsellipseitem->qgraphicsellipseitem_itemchange_callback = reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_ItemChange_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsEllipseItem_UpdateMicroFocus(QGraphicsEllipseItem* self) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->VirtualQGraphicsEllipseItem::updateMicroFocus();
    } else
        qFatal("Error: Protected method QGraphicsEllipseItem::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsEllipseItem_AddToIndex(QGraphicsEllipseItem* self) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->VirtualQGraphicsEllipseItem::addToIndex();
    } else
        qFatal("Error: Protected method QGraphicsEllipseItem::addToIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsEllipseItem_RemoveFromIndex(QGraphicsEllipseItem* self) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->VirtualQGraphicsEllipseItem::removeFromIndex();
    } else
        qFatal("Error: Protected method QGraphicsEllipseItem::removeFromIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsEllipseItem_PrepareGeometryChange(QGraphicsEllipseItem* self) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->VirtualQGraphicsEllipseItem::prepareGeometryChange();
    } else
        qFatal("Error: Protected method QGraphicsEllipseItem::prepareGeometryChange called without a directly constructed type");
}

void QGraphicsEllipseItem_Delete(QGraphicsEllipseItem* self) {
    delete self;
}

QGraphicsPolygonItem* QGraphicsPolygonItem_new() {
    return new VirtualQGraphicsPolygonItem();
}

QGraphicsPolygonItem* QGraphicsPolygonItem_new2(const QPolygonF* polygon) {
    return new VirtualQGraphicsPolygonItem(*polygon);
}

QGraphicsPolygonItem* QGraphicsPolygonItem_new3(QGraphicsItem* parent) {
    return new VirtualQGraphicsPolygonItem(parent);
}

QGraphicsPolygonItem* QGraphicsPolygonItem_new4(const QPolygonF* polygon, QGraphicsItem* parent) {
    return new VirtualQGraphicsPolygonItem(*polygon, parent);
}

QPolygonF* QGraphicsPolygonItem_Polygon(const QGraphicsPolygonItem* self) {
    return new QPolygonF(self->polygon());
}

void QGraphicsPolygonItem_SetPolygon(QGraphicsPolygonItem* self, const QPolygonF* polygon) {
    self->setPolygon(*polygon);
}

int QGraphicsPolygonItem_FillRule(const QGraphicsPolygonItem* self) {
    return static_cast<int>(self->fillRule());
}

void QGraphicsPolygonItem_SetFillRule(QGraphicsPolygonItem* self, int rule) {
    self->setFillRule(static_cast<Qt::FillRule>(rule));
}

QRectF* QGraphicsPolygonItem_BoundingRect(const QGraphicsPolygonItem* self) {
    return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsPolygonItem_Shape(const QGraphicsPolygonItem* self) {
    return new QPainterPath(self->shape());
}

bool QGraphicsPolygonItem_Contains(const QGraphicsPolygonItem* self, const QPointF* point) {
    return self->contains(*point);
}

void QGraphicsPolygonItem_Paint(QGraphicsPolygonItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paint(painter, option, widget);
}

bool QGraphicsPolygonItem_IsObscuredBy(const QGraphicsPolygonItem* self, const QGraphicsItem* item) {
    return self->isObscuredBy(item);
}

QPainterPath* QGraphicsPolygonItem_OpaqueArea(const QGraphicsPolygonItem* self) {
    return new QPainterPath(self->opaqueArea());
}

int QGraphicsPolygonItem_Type(const QGraphicsPolygonItem* self) {
    return self->type();
}

bool QGraphicsPolygonItem_SupportsExtension(const QGraphicsPolygonItem* self, int extension) {
    auto* vqgraphicspolygonitem = dynamic_cast<const VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        return vqgraphicspolygonitem->supportsExtension(static_cast<VirtualQGraphicsPolygonItem::Extension>(extension));
    }
    qFatal("Error: Protected method QGraphicsPolygonItem::supportsExtension called without a directly constructed type");
}

void QGraphicsPolygonItem_SetExtension(QGraphicsPolygonItem* self, int extension, const QVariant* variant) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        vqgraphicspolygonitem->setExtension(static_cast<VirtualQGraphicsPolygonItem::Extension>(extension), *variant);
    }
}

QVariant* QGraphicsPolygonItem_Extension(const QGraphicsPolygonItem* self, const QVariant* variant) {
    auto* vqgraphicspolygonitem = dynamic_cast<const VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        return new QVariant(vqgraphicspolygonitem->extension(*variant));
    }
    qFatal("Error: Protected method QGraphicsPolygonItem::extension called without a directly constructed type");
}

// Base class handler implementation
QRectF* QGraphicsPolygonItem_SuperBoundingRect(const QGraphicsPolygonItem* self) {
    return new QRectF(self->QGraphicsPolygonItem::boundingRect());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnBoundingRect(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self)))
        vqgraphicspolygonitem->qgraphicspolygonitem_boundingrect_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_BoundingRect_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QGraphicsPolygonItem_SuperShape(const QGraphicsPolygonItem* self) {
    return new QPainterPath(self->QGraphicsPolygonItem::shape());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnShape(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self)))
        vqgraphicspolygonitem->qgraphicspolygonitem_shape_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_Shape_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsPolygonItem_SuperContains(const QGraphicsPolygonItem* self, const QPointF* point) {
    return self->QGraphicsPolygonItem::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnContains(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self)))
        vqgraphicspolygonitem->qgraphicspolygonitem_contains_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_Contains_Callback>(slot);
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperPaint(QGraphicsPolygonItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->QGraphicsPolygonItem::paint(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnPaint(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_paint_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_Paint_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsPolygonItem_SuperIsObscuredBy(const QGraphicsPolygonItem* self, const QGraphicsItem* item) {
    return self->QGraphicsPolygonItem::isObscuredBy(item);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnIsObscuredBy(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self)))
        vqgraphicspolygonitem->qgraphicspolygonitem_isobscuredby_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_IsObscuredBy_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QGraphicsPolygonItem_SuperOpaqueArea(const QGraphicsPolygonItem* self) {
    return new QPainterPath(self->QGraphicsPolygonItem::opaqueArea());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnOpaqueArea(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self)))
        vqgraphicspolygonitem->qgraphicspolygonitem_opaquearea_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_OpaqueArea_Callback>(slot);
}

// Base class handler implementation
int QGraphicsPolygonItem_SuperType(const QGraphicsPolygonItem* self) {
    return self->QGraphicsPolygonItem::type();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnType(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self)))
        vqgraphicspolygonitem->qgraphicspolygonitem_type_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_Type_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsPolygonItem_SuperSupportsExtension(const QGraphicsPolygonItem* self, int extension) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        return vqgraphicspolygonitem->QGraphicsPolygonItem::supportsExtension(static_cast<VirtualQGraphicsPolygonItem::Extension>(extension));
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::supportsExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnSupportsExtension(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self)))
        vqgraphicspolygonitem->qgraphicspolygonitem_supportsextension_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_SupportsExtension_Callback>(slot);
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperSetExtension(QGraphicsPolygonItem* self, int extension, const QVariant* variant) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->QGraphicsPolygonItem::setExtension(static_cast<VirtualQGraphicsPolygonItem::Extension>(extension), *variant);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::setExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnSetExtension(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_setextension_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_SetExtension_Callback>(slot);
}

// Base class handler implementation
QVariant* QGraphicsPolygonItem_SuperExtension(const QGraphicsPolygonItem* self, const QVariant* variant) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self)))
        return new QVariant(vqgraphicspolygonitem->QGraphicsPolygonItem::extension(*variant));
    qFatal("Error: Protected virtual method QGraphicsPolygonItem::extension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnExtension(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self)))
        vqgraphicspolygonitem->qgraphicspolygonitem_extension_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_Extension_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPolygonItem_Advance(QGraphicsPolygonItem* self, int phase) {
    self->advance(static_cast<int>(phase));
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperAdvance(QGraphicsPolygonItem* self, int phase) {
    self->QGraphicsPolygonItem::advance(static_cast<int>(phase));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnAdvance(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_advance_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_Advance_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsPolygonItem_CollidesWithItem(const QGraphicsPolygonItem* self, const QGraphicsItem* other, int mode) {
    return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsPolygonItem_SuperCollidesWithItem(const QGraphicsPolygonItem* self, const QGraphicsItem* other, int mode) {
    return self->QGraphicsPolygonItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnCollidesWithItem(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self)))
        vqgraphicspolygonitem->qgraphicspolygonitem_collideswithitem_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_CollidesWithItem_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsPolygonItem_CollidesWithPath(const QGraphicsPolygonItem* self, const QPainterPath* path, int mode) {
    return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsPolygonItem_SuperCollidesWithPath(const QGraphicsPolygonItem* self, const QPainterPath* path, int mode) {
    return self->QGraphicsPolygonItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnCollidesWithPath(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self)))
        vqgraphicspolygonitem->qgraphicspolygonitem_collideswithpath_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_CollidesWithPath_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsPolygonItem_SceneEventFilter(QGraphicsPolygonItem* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        return vqgraphicspolygonitem->sceneEventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::sceneEventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsPolygonItem_SuperSceneEventFilter(QGraphicsPolygonItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        return vqgraphicspolygonitem->QGraphicsPolygonItem::sceneEventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::sceneEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnSceneEventFilter(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_sceneeventfilter_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_SceneEventFilter_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsPolygonItem_SceneEvent(QGraphicsPolygonItem* self, QEvent* event) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        return vqgraphicspolygonitem->sceneEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::sceneEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsPolygonItem_SuperSceneEvent(QGraphicsPolygonItem* self, QEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        return vqgraphicspolygonitem->QGraphicsPolygonItem::sceneEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::sceneEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnSceneEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_sceneevent_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_SceneEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPolygonItem_ContextMenuEvent(QGraphicsPolygonItem* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        vqgraphicspolygonitem->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperContextMenuEvent(QGraphicsPolygonItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->QGraphicsPolygonItem::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnContextMenuEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_contextmenuevent_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPolygonItem_DragEnterEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        vqgraphicspolygonitem->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperDragEnterEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->QGraphicsPolygonItem::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnDragEnterEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_dragenterevent_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPolygonItem_DragLeaveEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        vqgraphicspolygonitem->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperDragLeaveEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->QGraphicsPolygonItem::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnDragLeaveEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_dragleaveevent_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPolygonItem_DragMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        vqgraphicspolygonitem->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperDragMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->QGraphicsPolygonItem::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnDragMoveEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_dragmoveevent_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPolygonItem_DropEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        vqgraphicspolygonitem->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperDropEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->QGraphicsPolygonItem::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnDropEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_dropevent_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPolygonItem_FocusInEvent(QGraphicsPolygonItem* self, QFocusEvent* event) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        vqgraphicspolygonitem->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperFocusInEvent(QGraphicsPolygonItem* self, QFocusEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->QGraphicsPolygonItem::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnFocusInEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_focusinevent_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPolygonItem_FocusOutEvent(QGraphicsPolygonItem* self, QFocusEvent* event) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        vqgraphicspolygonitem->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperFocusOutEvent(QGraphicsPolygonItem* self, QFocusEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->QGraphicsPolygonItem::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnFocusOutEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_focusoutevent_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPolygonItem_HoverEnterEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        vqgraphicspolygonitem->hoverEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::hoverEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperHoverEnterEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->QGraphicsPolygonItem::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnHoverEnterEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_hoverenterevent_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_HoverEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPolygonItem_HoverMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        vqgraphicspolygonitem->hoverMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::hoverMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperHoverMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->QGraphicsPolygonItem::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnHoverMoveEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_hovermoveevent_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_HoverMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPolygonItem_HoverLeaveEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        vqgraphicspolygonitem->hoverLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::hoverLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperHoverLeaveEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->QGraphicsPolygonItem::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnHoverLeaveEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_hoverleaveevent_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_HoverLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPolygonItem_KeyPressEvent(QGraphicsPolygonItem* self, QKeyEvent* event) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        vqgraphicspolygonitem->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperKeyPressEvent(QGraphicsPolygonItem* self, QKeyEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->QGraphicsPolygonItem::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnKeyPressEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_keypressevent_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPolygonItem_KeyReleaseEvent(QGraphicsPolygonItem* self, QKeyEvent* event) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        vqgraphicspolygonitem->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperKeyReleaseEvent(QGraphicsPolygonItem* self, QKeyEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->QGraphicsPolygonItem::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnKeyReleaseEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_keyreleaseevent_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPolygonItem_MousePressEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        vqgraphicspolygonitem->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperMousePressEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->QGraphicsPolygonItem::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnMousePressEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_mousepressevent_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPolygonItem_MouseMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        vqgraphicspolygonitem->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperMouseMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->QGraphicsPolygonItem::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnMouseMoveEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_mousemoveevent_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPolygonItem_MouseReleaseEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        vqgraphicspolygonitem->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperMouseReleaseEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->QGraphicsPolygonItem::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnMouseReleaseEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_mousereleaseevent_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPolygonItem_MouseDoubleClickEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        vqgraphicspolygonitem->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperMouseDoubleClickEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->QGraphicsPolygonItem::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnMouseDoubleClickEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_mousedoubleclickevent_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPolygonItem_WheelEvent(QGraphicsPolygonItem* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        vqgraphicspolygonitem->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperWheelEvent(QGraphicsPolygonItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->QGraphicsPolygonItem::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnWheelEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_wheelevent_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPolygonItem_InputMethodEvent(QGraphicsPolygonItem* self, QInputMethodEvent* event) {
    auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
    if (vqgraphicspolygonitem) {
        vqgraphicspolygonitem->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_SuperInputMethodEvent(QGraphicsPolygonItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->QGraphicsPolygonItem::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPolygonItem::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnInputMethodEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_inputmethodevent_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsPolygonItem_InputMethodQuery(const QGraphicsPolygonItem* self, int query) {
    return new QVariant((self->*&VirtualQGraphicsPolygonItem::Base::inputMethodQuery)(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QGraphicsPolygonItem_SuperInputMethodQuery(const QGraphicsPolygonItem* self, int query) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self)))
        return new QVariant(vqgraphicspolygonitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    qFatal("Error: Protected virtual method QGraphicsPolygonItem::inputMethodQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnInputMethodQuery(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self)))
        vqgraphicspolygonitem->qgraphicspolygonitem_inputmethodquery_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsPolygonItem_ItemChange(QGraphicsPolygonItem* self, int change, const QVariant* value) {
    return new QVariant((self->*&VirtualQGraphicsPolygonItem::Base::itemChange)(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}

// Base class handler implementation
QVariant* QGraphicsPolygonItem_SuperItemChange(QGraphicsPolygonItem* self, int change, const QVariant* value) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        return new QVariant(vqgraphicspolygonitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    qFatal("Error: Protected virtual method QGraphicsPolygonItem::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnItemChange(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self))
        vqgraphicspolygonitem->qgraphicspolygonitem_itemchange_callback = reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_ItemChange_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsPolygonItem_UpdateMicroFocus(QGraphicsPolygonItem* self) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->VirtualQGraphicsPolygonItem::updateMicroFocus();
    } else
        qFatal("Error: Protected method QGraphicsPolygonItem::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsPolygonItem_AddToIndex(QGraphicsPolygonItem* self) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->VirtualQGraphicsPolygonItem::addToIndex();
    } else
        qFatal("Error: Protected method QGraphicsPolygonItem::addToIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsPolygonItem_RemoveFromIndex(QGraphicsPolygonItem* self) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->VirtualQGraphicsPolygonItem::removeFromIndex();
    } else
        qFatal("Error: Protected method QGraphicsPolygonItem::removeFromIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsPolygonItem_PrepareGeometryChange(QGraphicsPolygonItem* self) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->VirtualQGraphicsPolygonItem::prepareGeometryChange();
    } else
        qFatal("Error: Protected method QGraphicsPolygonItem::prepareGeometryChange called without a directly constructed type");
}

void QGraphicsPolygonItem_Delete(QGraphicsPolygonItem* self) {
    delete self;
}

QGraphicsLineItem* QGraphicsLineItem_new() {
    return new VirtualQGraphicsLineItem();
}

QGraphicsLineItem* QGraphicsLineItem_new2(const QLineF* line) {
    return new VirtualQGraphicsLineItem(*line);
}

QGraphicsLineItem* QGraphicsLineItem_new3(double x1, double y1, double x2, double y2) {
    return new VirtualQGraphicsLineItem(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

QGraphicsLineItem* QGraphicsLineItem_new4(QGraphicsItem* parent) {
    return new VirtualQGraphicsLineItem(parent);
}

QGraphicsLineItem* QGraphicsLineItem_new5(const QLineF* line, QGraphicsItem* parent) {
    return new VirtualQGraphicsLineItem(*line, parent);
}

QGraphicsLineItem* QGraphicsLineItem_new6(double x1, double y1, double x2, double y2, QGraphicsItem* parent) {
    return new VirtualQGraphicsLineItem(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2), parent);
}

QPen* QGraphicsLineItem_Pen(const QGraphicsLineItem* self) {
    return new QPen(self->pen());
}

void QGraphicsLineItem_SetPen(QGraphicsLineItem* self, const QPen* pen) {
    self->setPen(*pen);
}

QLineF* QGraphicsLineItem_Line(const QGraphicsLineItem* self) {
    return new QLineF(self->line());
}

void QGraphicsLineItem_SetLine(QGraphicsLineItem* self, const QLineF* line) {
    self->setLine(*line);
}

void QGraphicsLineItem_SetLine2(QGraphicsLineItem* self, double x1, double y1, double x2, double y2) {
    self->setLine(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

QRectF* QGraphicsLineItem_BoundingRect(const QGraphicsLineItem* self) {
    return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsLineItem_Shape(const QGraphicsLineItem* self) {
    return new QPainterPath(self->shape());
}

bool QGraphicsLineItem_Contains(const QGraphicsLineItem* self, const QPointF* point) {
    return self->contains(*point);
}

void QGraphicsLineItem_Paint(QGraphicsLineItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paint(painter, option, widget);
}

bool QGraphicsLineItem_IsObscuredBy(const QGraphicsLineItem* self, const QGraphicsItem* item) {
    return self->isObscuredBy(item);
}

QPainterPath* QGraphicsLineItem_OpaqueArea(const QGraphicsLineItem* self) {
    return new QPainterPath(self->opaqueArea());
}

int QGraphicsLineItem_Type(const QGraphicsLineItem* self) {
    return self->type();
}

bool QGraphicsLineItem_SupportsExtension(const QGraphicsLineItem* self, int extension) {
    auto* vqgraphicslineitem = dynamic_cast<const VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        return vqgraphicslineitem->supportsExtension(static_cast<VirtualQGraphicsLineItem::Extension>(extension));
    }
    qFatal("Error: Protected method QGraphicsLineItem::supportsExtension called without a directly constructed type");
}

void QGraphicsLineItem_SetExtension(QGraphicsLineItem* self, int extension, const QVariant* variant) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        vqgraphicslineitem->setExtension(static_cast<VirtualQGraphicsLineItem::Extension>(extension), *variant);
    }
}

QVariant* QGraphicsLineItem_Extension(const QGraphicsLineItem* self, const QVariant* variant) {
    auto* vqgraphicslineitem = dynamic_cast<const VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        return new QVariant(vqgraphicslineitem->extension(*variant));
    }
    qFatal("Error: Protected method QGraphicsLineItem::extension called without a directly constructed type");
}

// Base class handler implementation
QRectF* QGraphicsLineItem_SuperBoundingRect(const QGraphicsLineItem* self) {
    return new QRectF(self->QGraphicsLineItem::boundingRect());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnBoundingRect(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self)))
        vqgraphicslineitem->qgraphicslineitem_boundingrect_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_BoundingRect_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QGraphicsLineItem_SuperShape(const QGraphicsLineItem* self) {
    return new QPainterPath(self->QGraphicsLineItem::shape());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnShape(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self)))
        vqgraphicslineitem->qgraphicslineitem_shape_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_Shape_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsLineItem_SuperContains(const QGraphicsLineItem* self, const QPointF* point) {
    return self->QGraphicsLineItem::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnContains(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self)))
        vqgraphicslineitem->qgraphicslineitem_contains_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_Contains_Callback>(slot);
}

// Base class handler implementation
void QGraphicsLineItem_SuperPaint(QGraphicsLineItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->QGraphicsLineItem::paint(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnPaint(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_paint_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_Paint_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsLineItem_SuperIsObscuredBy(const QGraphicsLineItem* self, const QGraphicsItem* item) {
    return self->QGraphicsLineItem::isObscuredBy(item);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnIsObscuredBy(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self)))
        vqgraphicslineitem->qgraphicslineitem_isobscuredby_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_IsObscuredBy_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QGraphicsLineItem_SuperOpaqueArea(const QGraphicsLineItem* self) {
    return new QPainterPath(self->QGraphicsLineItem::opaqueArea());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnOpaqueArea(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self)))
        vqgraphicslineitem->qgraphicslineitem_opaquearea_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_OpaqueArea_Callback>(slot);
}

// Base class handler implementation
int QGraphicsLineItem_SuperType(const QGraphicsLineItem* self) {
    return self->QGraphicsLineItem::type();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnType(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self)))
        vqgraphicslineitem->qgraphicslineitem_type_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_Type_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsLineItem_SuperSupportsExtension(const QGraphicsLineItem* self, int extension) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        return vqgraphicslineitem->QGraphicsLineItem::supportsExtension(static_cast<VirtualQGraphicsLineItem::Extension>(extension));
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::supportsExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnSupportsExtension(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self)))
        vqgraphicslineitem->qgraphicslineitem_supportsextension_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_SupportsExtension_Callback>(slot);
}

// Base class handler implementation
void QGraphicsLineItem_SuperSetExtension(QGraphicsLineItem* self, int extension, const QVariant* variant) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->QGraphicsLineItem::setExtension(static_cast<VirtualQGraphicsLineItem::Extension>(extension), *variant);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::setExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnSetExtension(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_setextension_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_SetExtension_Callback>(slot);
}

// Base class handler implementation
QVariant* QGraphicsLineItem_SuperExtension(const QGraphicsLineItem* self, const QVariant* variant) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self)))
        return new QVariant(vqgraphicslineitem->QGraphicsLineItem::extension(*variant));
    qFatal("Error: Protected virtual method QGraphicsLineItem::extension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnExtension(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self)))
        vqgraphicslineitem->qgraphicslineitem_extension_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_Extension_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLineItem_Advance(QGraphicsLineItem* self, int phase) {
    self->advance(static_cast<int>(phase));
}

// Base class handler implementation
void QGraphicsLineItem_SuperAdvance(QGraphicsLineItem* self, int phase) {
    self->QGraphicsLineItem::advance(static_cast<int>(phase));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnAdvance(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_advance_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_Advance_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsLineItem_CollidesWithItem(const QGraphicsLineItem* self, const QGraphicsItem* other, int mode) {
    return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsLineItem_SuperCollidesWithItem(const QGraphicsLineItem* self, const QGraphicsItem* other, int mode) {
    return self->QGraphicsLineItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnCollidesWithItem(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self)))
        vqgraphicslineitem->qgraphicslineitem_collideswithitem_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_CollidesWithItem_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsLineItem_CollidesWithPath(const QGraphicsLineItem* self, const QPainterPath* path, int mode) {
    return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsLineItem_SuperCollidesWithPath(const QGraphicsLineItem* self, const QPainterPath* path, int mode) {
    return self->QGraphicsLineItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnCollidesWithPath(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self)))
        vqgraphicslineitem->qgraphicslineitem_collideswithpath_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_CollidesWithPath_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsLineItem_SceneEventFilter(QGraphicsLineItem* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        return vqgraphicslineitem->sceneEventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsLineItem::sceneEventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsLineItem_SuperSceneEventFilter(QGraphicsLineItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        return vqgraphicslineitem->QGraphicsLineItem::sceneEventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::sceneEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnSceneEventFilter(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_sceneeventfilter_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_SceneEventFilter_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsLineItem_SceneEvent(QGraphicsLineItem* self, QEvent* event) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        return vqgraphicslineitem->sceneEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsLineItem::sceneEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsLineItem_SuperSceneEvent(QGraphicsLineItem* self, QEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        return vqgraphicslineitem->QGraphicsLineItem::sceneEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::sceneEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnSceneEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_sceneevent_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_SceneEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLineItem_ContextMenuEvent(QGraphicsLineItem* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        vqgraphicslineitem->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsLineItem::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsLineItem_SuperContextMenuEvent(QGraphicsLineItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->QGraphicsLineItem::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnContextMenuEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_contextmenuevent_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLineItem_DragEnterEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        vqgraphicslineitem->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsLineItem::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsLineItem_SuperDragEnterEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->QGraphicsLineItem::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnDragEnterEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_dragenterevent_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLineItem_DragLeaveEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        vqgraphicslineitem->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsLineItem::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsLineItem_SuperDragLeaveEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->QGraphicsLineItem::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnDragLeaveEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_dragleaveevent_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLineItem_DragMoveEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        vqgraphicslineitem->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsLineItem::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsLineItem_SuperDragMoveEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->QGraphicsLineItem::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnDragMoveEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_dragmoveevent_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLineItem_DropEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        vqgraphicslineitem->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsLineItem::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsLineItem_SuperDropEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->QGraphicsLineItem::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnDropEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_dropevent_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLineItem_FocusInEvent(QGraphicsLineItem* self, QFocusEvent* event) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        vqgraphicslineitem->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsLineItem::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsLineItem_SuperFocusInEvent(QGraphicsLineItem* self, QFocusEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->QGraphicsLineItem::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnFocusInEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_focusinevent_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLineItem_FocusOutEvent(QGraphicsLineItem* self, QFocusEvent* event) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        vqgraphicslineitem->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsLineItem::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsLineItem_SuperFocusOutEvent(QGraphicsLineItem* self, QFocusEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->QGraphicsLineItem::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnFocusOutEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_focusoutevent_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLineItem_HoverEnterEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        vqgraphicslineitem->hoverEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsLineItem::hoverEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsLineItem_SuperHoverEnterEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->QGraphicsLineItem::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnHoverEnterEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_hoverenterevent_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_HoverEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLineItem_HoverMoveEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        vqgraphicslineitem->hoverMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsLineItem::hoverMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsLineItem_SuperHoverMoveEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->QGraphicsLineItem::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnHoverMoveEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_hovermoveevent_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_HoverMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLineItem_HoverLeaveEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        vqgraphicslineitem->hoverLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsLineItem::hoverLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsLineItem_SuperHoverLeaveEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->QGraphicsLineItem::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnHoverLeaveEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_hoverleaveevent_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_HoverLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLineItem_KeyPressEvent(QGraphicsLineItem* self, QKeyEvent* event) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        vqgraphicslineitem->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsLineItem::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsLineItem_SuperKeyPressEvent(QGraphicsLineItem* self, QKeyEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->QGraphicsLineItem::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnKeyPressEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_keypressevent_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLineItem_KeyReleaseEvent(QGraphicsLineItem* self, QKeyEvent* event) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        vqgraphicslineitem->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsLineItem::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsLineItem_SuperKeyReleaseEvent(QGraphicsLineItem* self, QKeyEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->QGraphicsLineItem::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnKeyReleaseEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_keyreleaseevent_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLineItem_MousePressEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        vqgraphicslineitem->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsLineItem::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsLineItem_SuperMousePressEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->QGraphicsLineItem::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnMousePressEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_mousepressevent_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLineItem_MouseMoveEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        vqgraphicslineitem->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsLineItem::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsLineItem_SuperMouseMoveEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->QGraphicsLineItem::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnMouseMoveEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_mousemoveevent_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLineItem_MouseReleaseEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        vqgraphicslineitem->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsLineItem::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsLineItem_SuperMouseReleaseEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->QGraphicsLineItem::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnMouseReleaseEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_mousereleaseevent_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLineItem_MouseDoubleClickEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        vqgraphicslineitem->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsLineItem::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsLineItem_SuperMouseDoubleClickEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->QGraphicsLineItem::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnMouseDoubleClickEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_mousedoubleclickevent_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLineItem_WheelEvent(QGraphicsLineItem* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        vqgraphicslineitem->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsLineItem::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsLineItem_SuperWheelEvent(QGraphicsLineItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->QGraphicsLineItem::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnWheelEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_wheelevent_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLineItem_InputMethodEvent(QGraphicsLineItem* self, QInputMethodEvent* event) {
    auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
    if (vqgraphicslineitem) {
        vqgraphicslineitem->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsLineItem::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsLineItem_SuperInputMethodEvent(QGraphicsLineItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->QGraphicsLineItem::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsLineItem::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnInputMethodEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_inputmethodevent_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsLineItem_InputMethodQuery(const QGraphicsLineItem* self, int query) {
    return new QVariant((self->*&VirtualQGraphicsLineItem::Base::inputMethodQuery)(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QGraphicsLineItem_SuperInputMethodQuery(const QGraphicsLineItem* self, int query) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self)))
        return new QVariant(vqgraphicslineitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    qFatal("Error: Protected virtual method QGraphicsLineItem::inputMethodQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnInputMethodQuery(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self)))
        vqgraphicslineitem->qgraphicslineitem_inputmethodquery_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsLineItem_ItemChange(QGraphicsLineItem* self, int change, const QVariant* value) {
    return new QVariant((self->*&VirtualQGraphicsLineItem::Base::itemChange)(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}

// Base class handler implementation
QVariant* QGraphicsLineItem_SuperItemChange(QGraphicsLineItem* self, int change, const QVariant* value) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        return new QVariant(vqgraphicslineitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    qFatal("Error: Protected virtual method QGraphicsLineItem::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnItemChange(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self))
        vqgraphicslineitem->qgraphicslineitem_itemchange_callback = reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_ItemChange_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsLineItem_UpdateMicroFocus(QGraphicsLineItem* self) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->VirtualQGraphicsLineItem::updateMicroFocus();
    } else
        qFatal("Error: Protected method QGraphicsLineItem::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsLineItem_AddToIndex(QGraphicsLineItem* self) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->VirtualQGraphicsLineItem::addToIndex();
    } else
        qFatal("Error: Protected method QGraphicsLineItem::addToIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsLineItem_RemoveFromIndex(QGraphicsLineItem* self) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->VirtualQGraphicsLineItem::removeFromIndex();
    } else
        qFatal("Error: Protected method QGraphicsLineItem::removeFromIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsLineItem_PrepareGeometryChange(QGraphicsLineItem* self) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->VirtualQGraphicsLineItem::prepareGeometryChange();
    } else
        qFatal("Error: Protected method QGraphicsLineItem::prepareGeometryChange called without a directly constructed type");
}

void QGraphicsLineItem_Delete(QGraphicsLineItem* self) {
    delete self;
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new() {
    return new VirtualQGraphicsPixmapItem();
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new2(const QPixmap* pixmap) {
    return new VirtualQGraphicsPixmapItem(*pixmap);
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new3(QGraphicsItem* parent) {
    return new VirtualQGraphicsPixmapItem(parent);
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new4(const QPixmap* pixmap, QGraphicsItem* parent) {
    return new VirtualQGraphicsPixmapItem(*pixmap, parent);
}

QPixmap* QGraphicsPixmapItem_Pixmap(const QGraphicsPixmapItem* self) {
    return new QPixmap(self->pixmap());
}

void QGraphicsPixmapItem_SetPixmap(QGraphicsPixmapItem* self, const QPixmap* pixmap) {
    self->setPixmap(*pixmap);
}

int QGraphicsPixmapItem_TransformationMode(const QGraphicsPixmapItem* self) {
    return static_cast<int>(self->transformationMode());
}

void QGraphicsPixmapItem_SetTransformationMode(QGraphicsPixmapItem* self, int mode) {
    self->setTransformationMode(static_cast<Qt::TransformationMode>(mode));
}

QPointF* QGraphicsPixmapItem_Offset(const QGraphicsPixmapItem* self) {
    return new QPointF(self->offset());
}

void QGraphicsPixmapItem_SetOffset(QGraphicsPixmapItem* self, const QPointF* offset) {
    self->setOffset(*offset);
}

void QGraphicsPixmapItem_SetOffset2(QGraphicsPixmapItem* self, double x, double y) {
    self->setOffset(static_cast<qreal>(x), static_cast<qreal>(y));
}

QRectF* QGraphicsPixmapItem_BoundingRect(const QGraphicsPixmapItem* self) {
    return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsPixmapItem_Shape(const QGraphicsPixmapItem* self) {
    return new QPainterPath(self->shape());
}

bool QGraphicsPixmapItem_Contains(const QGraphicsPixmapItem* self, const QPointF* point) {
    return self->contains(*point);
}

void QGraphicsPixmapItem_Paint(QGraphicsPixmapItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paint(painter, option, widget);
}

bool QGraphicsPixmapItem_IsObscuredBy(const QGraphicsPixmapItem* self, const QGraphicsItem* item) {
    return self->isObscuredBy(item);
}

QPainterPath* QGraphicsPixmapItem_OpaqueArea(const QGraphicsPixmapItem* self) {
    return new QPainterPath(self->opaqueArea());
}

int QGraphicsPixmapItem_Type(const QGraphicsPixmapItem* self) {
    return self->type();
}

int QGraphicsPixmapItem_ShapeMode(const QGraphicsPixmapItem* self) {
    return static_cast<int>(self->shapeMode());
}

void QGraphicsPixmapItem_SetShapeMode(QGraphicsPixmapItem* self, int mode) {
    self->setShapeMode(static_cast<QGraphicsPixmapItem::ShapeMode>(mode));
}

bool QGraphicsPixmapItem_SupportsExtension(const QGraphicsPixmapItem* self, int extension) {
    auto* vqgraphicspixmapitem = dynamic_cast<const VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        return vqgraphicspixmapitem->supportsExtension(static_cast<VirtualQGraphicsPixmapItem::Extension>(extension));
    }
    qFatal("Error: Protected method QGraphicsPixmapItem::supportsExtension called without a directly constructed type");
}

void QGraphicsPixmapItem_SetExtension(QGraphicsPixmapItem* self, int extension, const QVariant* variant) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        vqgraphicspixmapitem->setExtension(static_cast<VirtualQGraphicsPixmapItem::Extension>(extension), *variant);
    }
}

QVariant* QGraphicsPixmapItem_Extension(const QGraphicsPixmapItem* self, const QVariant* variant) {
    auto* vqgraphicspixmapitem = dynamic_cast<const VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        return new QVariant(vqgraphicspixmapitem->extension(*variant));
    }
    qFatal("Error: Protected method QGraphicsPixmapItem::extension called without a directly constructed type");
}

// Base class handler implementation
QRectF* QGraphicsPixmapItem_SuperBoundingRect(const QGraphicsPixmapItem* self) {
    return new QRectF(self->QGraphicsPixmapItem::boundingRect());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnBoundingRect(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self)))
        vqgraphicspixmapitem->qgraphicspixmapitem_boundingrect_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_BoundingRect_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QGraphicsPixmapItem_SuperShape(const QGraphicsPixmapItem* self) {
    return new QPainterPath(self->QGraphicsPixmapItem::shape());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnShape(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self)))
        vqgraphicspixmapitem->qgraphicspixmapitem_shape_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_Shape_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsPixmapItem_SuperContains(const QGraphicsPixmapItem* self, const QPointF* point) {
    return self->QGraphicsPixmapItem::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnContains(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self)))
        vqgraphicspixmapitem->qgraphicspixmapitem_contains_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_Contains_Callback>(slot);
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperPaint(QGraphicsPixmapItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->QGraphicsPixmapItem::paint(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnPaint(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_paint_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_Paint_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsPixmapItem_SuperIsObscuredBy(const QGraphicsPixmapItem* self, const QGraphicsItem* item) {
    return self->QGraphicsPixmapItem::isObscuredBy(item);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnIsObscuredBy(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self)))
        vqgraphicspixmapitem->qgraphicspixmapitem_isobscuredby_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_IsObscuredBy_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QGraphicsPixmapItem_SuperOpaqueArea(const QGraphicsPixmapItem* self) {
    return new QPainterPath(self->QGraphicsPixmapItem::opaqueArea());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnOpaqueArea(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self)))
        vqgraphicspixmapitem->qgraphicspixmapitem_opaquearea_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_OpaqueArea_Callback>(slot);
}

// Base class handler implementation
int QGraphicsPixmapItem_SuperType(const QGraphicsPixmapItem* self) {
    return self->QGraphicsPixmapItem::type();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnType(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self)))
        vqgraphicspixmapitem->qgraphicspixmapitem_type_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_Type_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsPixmapItem_SuperSupportsExtension(const QGraphicsPixmapItem* self, int extension) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        return vqgraphicspixmapitem->QGraphicsPixmapItem::supportsExtension(static_cast<VirtualQGraphicsPixmapItem::Extension>(extension));
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::supportsExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnSupportsExtension(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self)))
        vqgraphicspixmapitem->qgraphicspixmapitem_supportsextension_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_SupportsExtension_Callback>(slot);
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperSetExtension(QGraphicsPixmapItem* self, int extension, const QVariant* variant) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->QGraphicsPixmapItem::setExtension(static_cast<VirtualQGraphicsPixmapItem::Extension>(extension), *variant);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::setExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnSetExtension(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_setextension_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_SetExtension_Callback>(slot);
}

// Base class handler implementation
QVariant* QGraphicsPixmapItem_SuperExtension(const QGraphicsPixmapItem* self, const QVariant* variant) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self)))
        return new QVariant(vqgraphicspixmapitem->QGraphicsPixmapItem::extension(*variant));
    qFatal("Error: Protected virtual method QGraphicsPixmapItem::extension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnExtension(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self)))
        vqgraphicspixmapitem->qgraphicspixmapitem_extension_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_Extension_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPixmapItem_Advance(QGraphicsPixmapItem* self, int phase) {
    self->advance(static_cast<int>(phase));
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperAdvance(QGraphicsPixmapItem* self, int phase) {
    self->QGraphicsPixmapItem::advance(static_cast<int>(phase));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnAdvance(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_advance_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_Advance_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsPixmapItem_CollidesWithItem(const QGraphicsPixmapItem* self, const QGraphicsItem* other, int mode) {
    return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsPixmapItem_SuperCollidesWithItem(const QGraphicsPixmapItem* self, const QGraphicsItem* other, int mode) {
    return self->QGraphicsPixmapItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnCollidesWithItem(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self)))
        vqgraphicspixmapitem->qgraphicspixmapitem_collideswithitem_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_CollidesWithItem_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsPixmapItem_CollidesWithPath(const QGraphicsPixmapItem* self, const QPainterPath* path, int mode) {
    return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsPixmapItem_SuperCollidesWithPath(const QGraphicsPixmapItem* self, const QPainterPath* path, int mode) {
    return self->QGraphicsPixmapItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnCollidesWithPath(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self)))
        vqgraphicspixmapitem->qgraphicspixmapitem_collideswithpath_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_CollidesWithPath_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsPixmapItem_SceneEventFilter(QGraphicsPixmapItem* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        return vqgraphicspixmapitem->sceneEventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::sceneEventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsPixmapItem_SuperSceneEventFilter(QGraphicsPixmapItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        return vqgraphicspixmapitem->QGraphicsPixmapItem::sceneEventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::sceneEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnSceneEventFilter(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_sceneeventfilter_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_SceneEventFilter_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsPixmapItem_SceneEvent(QGraphicsPixmapItem* self, QEvent* event) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        return vqgraphicspixmapitem->sceneEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::sceneEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsPixmapItem_SuperSceneEvent(QGraphicsPixmapItem* self, QEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        return vqgraphicspixmapitem->QGraphicsPixmapItem::sceneEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::sceneEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnSceneEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_sceneevent_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_SceneEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPixmapItem_ContextMenuEvent(QGraphicsPixmapItem* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        vqgraphicspixmapitem->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperContextMenuEvent(QGraphicsPixmapItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->QGraphicsPixmapItem::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnContextMenuEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_contextmenuevent_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPixmapItem_DragEnterEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        vqgraphicspixmapitem->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperDragEnterEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->QGraphicsPixmapItem::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnDragEnterEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_dragenterevent_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPixmapItem_DragLeaveEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        vqgraphicspixmapitem->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperDragLeaveEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->QGraphicsPixmapItem::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnDragLeaveEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_dragleaveevent_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPixmapItem_DragMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        vqgraphicspixmapitem->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperDragMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->QGraphicsPixmapItem::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnDragMoveEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_dragmoveevent_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPixmapItem_DropEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        vqgraphicspixmapitem->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperDropEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->QGraphicsPixmapItem::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnDropEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_dropevent_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPixmapItem_FocusInEvent(QGraphicsPixmapItem* self, QFocusEvent* event) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        vqgraphicspixmapitem->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperFocusInEvent(QGraphicsPixmapItem* self, QFocusEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->QGraphicsPixmapItem::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnFocusInEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_focusinevent_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPixmapItem_FocusOutEvent(QGraphicsPixmapItem* self, QFocusEvent* event) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        vqgraphicspixmapitem->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperFocusOutEvent(QGraphicsPixmapItem* self, QFocusEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->QGraphicsPixmapItem::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnFocusOutEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_focusoutevent_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPixmapItem_HoverEnterEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        vqgraphicspixmapitem->hoverEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::hoverEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperHoverEnterEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->QGraphicsPixmapItem::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnHoverEnterEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_hoverenterevent_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_HoverEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPixmapItem_HoverMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        vqgraphicspixmapitem->hoverMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::hoverMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperHoverMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->QGraphicsPixmapItem::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnHoverMoveEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_hovermoveevent_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_HoverMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPixmapItem_HoverLeaveEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        vqgraphicspixmapitem->hoverLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::hoverLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperHoverLeaveEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->QGraphicsPixmapItem::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnHoverLeaveEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_hoverleaveevent_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_HoverLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPixmapItem_KeyPressEvent(QGraphicsPixmapItem* self, QKeyEvent* event) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        vqgraphicspixmapitem->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperKeyPressEvent(QGraphicsPixmapItem* self, QKeyEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->QGraphicsPixmapItem::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnKeyPressEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_keypressevent_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPixmapItem_KeyReleaseEvent(QGraphicsPixmapItem* self, QKeyEvent* event) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        vqgraphicspixmapitem->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperKeyReleaseEvent(QGraphicsPixmapItem* self, QKeyEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->QGraphicsPixmapItem::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnKeyReleaseEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_keyreleaseevent_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPixmapItem_MousePressEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        vqgraphicspixmapitem->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperMousePressEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->QGraphicsPixmapItem::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnMousePressEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_mousepressevent_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPixmapItem_MouseMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        vqgraphicspixmapitem->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperMouseMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->QGraphicsPixmapItem::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnMouseMoveEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_mousemoveevent_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPixmapItem_MouseReleaseEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        vqgraphicspixmapitem->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperMouseReleaseEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->QGraphicsPixmapItem::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnMouseReleaseEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_mousereleaseevent_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPixmapItem_MouseDoubleClickEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        vqgraphicspixmapitem->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperMouseDoubleClickEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->QGraphicsPixmapItem::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnMouseDoubleClickEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_mousedoubleclickevent_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPixmapItem_WheelEvent(QGraphicsPixmapItem* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        vqgraphicspixmapitem->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperWheelEvent(QGraphicsPixmapItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->QGraphicsPixmapItem::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnWheelEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_wheelevent_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsPixmapItem_InputMethodEvent(QGraphicsPixmapItem* self, QInputMethodEvent* event) {
    auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
    if (vqgraphicspixmapitem) {
        vqgraphicspixmapitem->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_SuperInputMethodEvent(QGraphicsPixmapItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->QGraphicsPixmapItem::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsPixmapItem::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnInputMethodEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_inputmethodevent_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsPixmapItem_InputMethodQuery(const QGraphicsPixmapItem* self, int query) {
    return new QVariant((self->*&VirtualQGraphicsPixmapItem::Base::inputMethodQuery)(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QGraphicsPixmapItem_SuperInputMethodQuery(const QGraphicsPixmapItem* self, int query) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self)))
        return new QVariant(vqgraphicspixmapitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    qFatal("Error: Protected virtual method QGraphicsPixmapItem::inputMethodQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnInputMethodQuery(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self)))
        vqgraphicspixmapitem->qgraphicspixmapitem_inputmethodquery_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsPixmapItem_ItemChange(QGraphicsPixmapItem* self, int change, const QVariant* value) {
    return new QVariant((self->*&VirtualQGraphicsPixmapItem::Base::itemChange)(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}

// Base class handler implementation
QVariant* QGraphicsPixmapItem_SuperItemChange(QGraphicsPixmapItem* self, int change, const QVariant* value) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        return new QVariant(vqgraphicspixmapitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    qFatal("Error: Protected virtual method QGraphicsPixmapItem::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnItemChange(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self))
        vqgraphicspixmapitem->qgraphicspixmapitem_itemchange_callback = reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_ItemChange_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsPixmapItem_UpdateMicroFocus(QGraphicsPixmapItem* self) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->VirtualQGraphicsPixmapItem::updateMicroFocus();
    } else
        qFatal("Error: Protected method QGraphicsPixmapItem::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsPixmapItem_AddToIndex(QGraphicsPixmapItem* self) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->VirtualQGraphicsPixmapItem::addToIndex();
    } else
        qFatal("Error: Protected method QGraphicsPixmapItem::addToIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsPixmapItem_RemoveFromIndex(QGraphicsPixmapItem* self) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->VirtualQGraphicsPixmapItem::removeFromIndex();
    } else
        qFatal("Error: Protected method QGraphicsPixmapItem::removeFromIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsPixmapItem_PrepareGeometryChange(QGraphicsPixmapItem* self) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->VirtualQGraphicsPixmapItem::prepareGeometryChange();
    } else
        qFatal("Error: Protected method QGraphicsPixmapItem::prepareGeometryChange called without a directly constructed type");
}

void QGraphicsPixmapItem_Delete(QGraphicsPixmapItem* self) {
    delete self;
}

QGraphicsTextItem* QGraphicsTextItem_new() {
    return new VirtualQGraphicsTextItem();
}

QGraphicsTextItem* QGraphicsTextItem_new2(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQGraphicsTextItem(text_QString);
}

QGraphicsTextItem* QGraphicsTextItem_new3(QGraphicsItem* parent) {
    return new VirtualQGraphicsTextItem(parent);
}

QGraphicsTextItem* QGraphicsTextItem_new4(const libqt_string text, QGraphicsItem* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQGraphicsTextItem(text_QString, parent);
}

QMetaObject* QGraphicsTextItem_MetaObject(const QGraphicsTextItem* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsTextItem_Metacast(QGraphicsTextItem* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsTextItem_Metacall(QGraphicsTextItem* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGraphicsTextItem_Tr(const char* s) {
    auto _ret = QGraphicsTextItem::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsTextItem_ToHtml(const QGraphicsTextItem* self) {
    auto _ret = self->toHtml();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGraphicsTextItem_SetHtml(QGraphicsTextItem* self, const libqt_string html) {
    QString html_QString = QString::fromUtf8(html.data, html.len);
    self->setHtml(html_QString);
}

libqt_string QGraphicsTextItem_ToPlainText(const QGraphicsTextItem* self) {
    auto _ret = self->toPlainText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGraphicsTextItem_SetPlainText(QGraphicsTextItem* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setPlainText(text_QString);
}

QFont* QGraphicsTextItem_Font(const QGraphicsTextItem* self) {
    return new QFont(self->font());
}

void QGraphicsTextItem_SetFont(QGraphicsTextItem* self, const QFont* font) {
    self->setFont(*font);
}

void QGraphicsTextItem_SetDefaultTextColor(QGraphicsTextItem* self, const QColor* c) {
    self->setDefaultTextColor(*c);
}

QColor* QGraphicsTextItem_DefaultTextColor(const QGraphicsTextItem* self) {
    return new QColor(self->defaultTextColor());
}

QRectF* QGraphicsTextItem_BoundingRect(const QGraphicsTextItem* self) {
    return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsTextItem_Shape(const QGraphicsTextItem* self) {
    return new QPainterPath(self->shape());
}

bool QGraphicsTextItem_Contains(const QGraphicsTextItem* self, const QPointF* point) {
    return self->contains(*point);
}

void QGraphicsTextItem_Paint(QGraphicsTextItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paint(painter, option, widget);
}

bool QGraphicsTextItem_IsObscuredBy(const QGraphicsTextItem* self, const QGraphicsItem* item) {
    return self->isObscuredBy(item);
}

QPainterPath* QGraphicsTextItem_OpaqueArea(const QGraphicsTextItem* self) {
    return new QPainterPath(self->opaqueArea());
}

int QGraphicsTextItem_Type(const QGraphicsTextItem* self) {
    return self->type();
}

void QGraphicsTextItem_SetTextWidth(QGraphicsTextItem* self, double width) {
    self->setTextWidth(static_cast<qreal>(width));
}

double QGraphicsTextItem_TextWidth(const QGraphicsTextItem* self) {
    return static_cast<double>(self->textWidth());
}

void QGraphicsTextItem_AdjustSize(QGraphicsTextItem* self) {
    self->adjustSize();
}

void QGraphicsTextItem_SetDocument(QGraphicsTextItem* self, QTextDocument* document) {
    self->setDocument(document);
}

QTextDocument* QGraphicsTextItem_Document(const QGraphicsTextItem* self) {
    return self->document();
}

void QGraphicsTextItem_SetTextInteractionFlags(QGraphicsTextItem* self, int flags) {
    self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QGraphicsTextItem_TextInteractionFlags(const QGraphicsTextItem* self) {
    return static_cast<int>(self->textInteractionFlags());
}

void QGraphicsTextItem_SetTabChangesFocus(QGraphicsTextItem* self, bool b) {
    self->setTabChangesFocus(b);
}

bool QGraphicsTextItem_TabChangesFocus(const QGraphicsTextItem* self) {
    return self->tabChangesFocus();
}

void QGraphicsTextItem_SetOpenExternalLinks(QGraphicsTextItem* self, bool open) {
    self->setOpenExternalLinks(open);
}

bool QGraphicsTextItem_OpenExternalLinks(const QGraphicsTextItem* self) {
    return self->openExternalLinks();
}

void QGraphicsTextItem_SetTextCursor(QGraphicsTextItem* self, const QTextCursor* cursor) {
    self->setTextCursor(*cursor);
}

QTextCursor* QGraphicsTextItem_TextCursor(const QGraphicsTextItem* self) {
    return new QTextCursor(self->textCursor());
}

void QGraphicsTextItem_LinkActivated(QGraphicsTextItem* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->linkActivated(param1_QString);
}

void QGraphicsTextItem_Connect_LinkActivated(QGraphicsTextItem* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsTextItem*, const char*) = reinterpret_cast<void (*)(QGraphicsTextItem*, const char*)>(slot);
    QGraphicsTextItem::connect(self,
                               static_cast<void (QGraphicsTextItem::*)(const QString&)>(&QGraphicsTextItem::linkActivated),
                               [self, slotFunc](const QString& param1) {
                                   const auto param1_ret = param1;
                                   // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                   QByteArray param1_b = param1_ret.toUtf8();
                                   auto param1_str_len = param1_b.length();
                                   const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
                                   memcpy((void*)param1_str, param1_b.data(), param1_str_len);
                                   ((char*)param1_str)[param1_str_len] = '\0';
                                   const char* sigval1 = param1_str;
                                   slotFunc(self, sigval1);
                                   libqt_free(param1_str);
                               });
}

void QGraphicsTextItem_LinkHovered(QGraphicsTextItem* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->linkHovered(param1_QString);
}

void QGraphicsTextItem_Connect_LinkHovered(QGraphicsTextItem* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsTextItem*, const char*) = reinterpret_cast<void (*)(QGraphicsTextItem*, const char*)>(slot);
    QGraphicsTextItem::connect(self,
                               static_cast<void (QGraphicsTextItem::*)(const QString&)>(&QGraphicsTextItem::linkHovered),
                               [self, slotFunc](const QString& param1) {
                                   const auto param1_ret = param1;
                                   // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                   QByteArray param1_b = param1_ret.toUtf8();
                                   auto param1_str_len = param1_b.length();
                                   const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
                                   memcpy((void*)param1_str, param1_b.data(), param1_str_len);
                                   ((char*)param1_str)[param1_str_len] = '\0';
                                   const char* sigval1 = param1_str;
                                   slotFunc(self, sigval1);
                                   libqt_free(param1_str);
                               });
}

bool QGraphicsTextItem_SceneEvent(QGraphicsTextItem* self, QEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        return vqgraphicstextitem->sceneEvent(event);
    }
    qFatal("Error: Protected method QGraphicsTextItem::sceneEvent called without a directly constructed type");
}

void QGraphicsTextItem_MousePressEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->mousePressEvent(event);
    }
}

void QGraphicsTextItem_MouseMoveEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->mouseMoveEvent(event);
    }
}

void QGraphicsTextItem_MouseReleaseEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->mouseReleaseEvent(event);
    }
}

void QGraphicsTextItem_MouseDoubleClickEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->mouseDoubleClickEvent(event);
    }
}

void QGraphicsTextItem_ContextMenuEvent(QGraphicsTextItem* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->contextMenuEvent(event);
    }
}

void QGraphicsTextItem_KeyPressEvent(QGraphicsTextItem* self, QKeyEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->keyPressEvent(event);
    }
}

void QGraphicsTextItem_KeyReleaseEvent(QGraphicsTextItem* self, QKeyEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->keyReleaseEvent(event);
    }
}

void QGraphicsTextItem_FocusInEvent(QGraphicsTextItem* self, QFocusEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->focusInEvent(event);
    }
}

void QGraphicsTextItem_FocusOutEvent(QGraphicsTextItem* self, QFocusEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->focusOutEvent(event);
    }
}

void QGraphicsTextItem_DragEnterEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->dragEnterEvent(event);
    }
}

void QGraphicsTextItem_DragLeaveEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->dragLeaveEvent(event);
    }
}

void QGraphicsTextItem_DragMoveEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->dragMoveEvent(event);
    }
}

void QGraphicsTextItem_DropEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->dropEvent(event);
    }
}

void QGraphicsTextItem_InputMethodEvent(QGraphicsTextItem* self, QInputMethodEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->inputMethodEvent(event);
    }
}

void QGraphicsTextItem_HoverEnterEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->hoverEnterEvent(event);
    }
}

void QGraphicsTextItem_HoverMoveEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->hoverMoveEvent(event);
    }
}

void QGraphicsTextItem_HoverLeaveEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->hoverLeaveEvent(event);
    }
}

QVariant* QGraphicsTextItem_InputMethodQuery(const QGraphicsTextItem* self, int query) {
    auto* vqgraphicstextitem = dynamic_cast<const VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        return new QVariant(vqgraphicstextitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    qFatal("Error: Protected method QGraphicsTextItem::inputMethodQuery called without a directly constructed type");
}

bool QGraphicsTextItem_SupportsExtension(const QGraphicsTextItem* self, int extension) {
    auto* vqgraphicstextitem = dynamic_cast<const VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        return vqgraphicstextitem->supportsExtension(static_cast<VirtualQGraphicsTextItem::Extension>(extension));
    }
    qFatal("Error: Protected method QGraphicsTextItem::supportsExtension called without a directly constructed type");
}

void QGraphicsTextItem_SetExtension(QGraphicsTextItem* self, int extension, const QVariant* variant) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->setExtension(static_cast<VirtualQGraphicsTextItem::Extension>(extension), *variant);
    }
}

QVariant* QGraphicsTextItem_Extension(const QGraphicsTextItem* self, const QVariant* variant) {
    auto* vqgraphicstextitem = dynamic_cast<const VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        return new QVariant(vqgraphicstextitem->extension(*variant));
    }
    qFatal("Error: Protected method QGraphicsTextItem::extension called without a directly constructed type");
}

libqt_string QGraphicsTextItem_Tr2(const char* s, const char* c) {
    auto _ret = QGraphicsTextItem::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsTextItem_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGraphicsTextItem::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QGraphicsTextItem_SuperMetaObject(const QGraphicsTextItem* self) {
    return (QMetaObject*)self->QGraphicsTextItem::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnMetaObject(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self)))
        vqgraphicstextitem->qgraphicstextitem_metaobject_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGraphicsTextItem_SuperMetacast(QGraphicsTextItem* self, const char* param1) {
    return self->QGraphicsTextItem::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnMetacast(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_metacast_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGraphicsTextItem_SuperMetacall(QGraphicsTextItem* self, int param1, int param2, void** param3) {
    return self->QGraphicsTextItem::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnMetacall(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_metacall_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Metacall_Callback>(slot);
}

// Base class handler implementation
QRectF* QGraphicsTextItem_SuperBoundingRect(const QGraphicsTextItem* self) {
    return new QRectF(self->QGraphicsTextItem::boundingRect());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnBoundingRect(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self)))
        vqgraphicstextitem->qgraphicstextitem_boundingrect_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_BoundingRect_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QGraphicsTextItem_SuperShape(const QGraphicsTextItem* self) {
    return new QPainterPath(self->QGraphicsTextItem::shape());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnShape(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self)))
        vqgraphicstextitem->qgraphicstextitem_shape_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Shape_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsTextItem_SuperContains(const QGraphicsTextItem* self, const QPointF* point) {
    return self->QGraphicsTextItem::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnContains(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self)))
        vqgraphicstextitem->qgraphicstextitem_contains_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Contains_Callback>(slot);
}

// Base class handler implementation
void QGraphicsTextItem_SuperPaint(QGraphicsTextItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->QGraphicsTextItem::paint(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnPaint(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_paint_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Paint_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsTextItem_SuperIsObscuredBy(const QGraphicsTextItem* self, const QGraphicsItem* item) {
    return self->QGraphicsTextItem::isObscuredBy(item);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnIsObscuredBy(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self)))
        vqgraphicstextitem->qgraphicstextitem_isobscuredby_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_IsObscuredBy_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QGraphicsTextItem_SuperOpaqueArea(const QGraphicsTextItem* self) {
    return new QPainterPath(self->QGraphicsTextItem::opaqueArea());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnOpaqueArea(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self)))
        vqgraphicstextitem->qgraphicstextitem_opaquearea_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_OpaqueArea_Callback>(slot);
}

// Base class handler implementation
int QGraphicsTextItem_SuperType(const QGraphicsTextItem* self) {
    return self->QGraphicsTextItem::type();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnType(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self)))
        vqgraphicstextitem->qgraphicstextitem_type_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Type_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsTextItem_SuperSceneEvent(QGraphicsTextItem* self, QEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        return vqgraphicstextitem->QGraphicsTextItem::sceneEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::sceneEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnSceneEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_sceneevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_SceneEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsTextItem_SuperMousePressEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnMousePressEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_mousepressevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsTextItem_SuperMouseMoveEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnMouseMoveEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_mousemoveevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsTextItem_SuperMouseReleaseEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnMouseReleaseEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_mousereleaseevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsTextItem_SuperMouseDoubleClickEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnMouseDoubleClickEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_mousedoubleclickevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_MouseDoubleClickEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsTextItem_SuperContextMenuEvent(QGraphicsTextItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnContextMenuEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_contextmenuevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsTextItem_SuperKeyPressEvent(QGraphicsTextItem* self, QKeyEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnKeyPressEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_keypressevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsTextItem_SuperKeyReleaseEvent(QGraphicsTextItem* self, QKeyEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnKeyReleaseEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_keyreleaseevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_KeyReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsTextItem_SuperFocusInEvent(QGraphicsTextItem* self, QFocusEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnFocusInEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_focusinevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsTextItem_SuperFocusOutEvent(QGraphicsTextItem* self, QFocusEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnFocusOutEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_focusoutevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsTextItem_SuperDragEnterEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnDragEnterEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_dragenterevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_DragEnterEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsTextItem_SuperDragLeaveEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnDragLeaveEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_dragleaveevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_DragLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsTextItem_SuperDragMoveEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnDragMoveEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_dragmoveevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_DragMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsTextItem_SuperDropEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnDropEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_dropevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_DropEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsTextItem_SuperInputMethodEvent(QGraphicsTextItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnInputMethodEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_inputmethodevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_InputMethodEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsTextItem_SuperHoverEnterEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnHoverEnterEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_hoverenterevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_HoverEnterEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsTextItem_SuperHoverMoveEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnHoverMoveEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_hovermoveevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_HoverMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsTextItem_SuperHoverLeaveEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnHoverLeaveEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_hoverleaveevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_HoverLeaveEvent_Callback>(slot);
}

// Base class handler implementation
QVariant* QGraphicsTextItem_SuperInputMethodQuery(const QGraphicsTextItem* self, int query) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self)))
        return new QVariant(vqgraphicstextitem->QGraphicsTextItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    qFatal("Error: Protected virtual method QGraphicsTextItem::inputMethodQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnInputMethodQuery(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self)))
        vqgraphicstextitem->qgraphicstextitem_inputmethodquery_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_InputMethodQuery_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsTextItem_SuperSupportsExtension(const QGraphicsTextItem* self, int extension) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        return vqgraphicstextitem->QGraphicsTextItem::supportsExtension(static_cast<VirtualQGraphicsTextItem::Extension>(extension));
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::supportsExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnSupportsExtension(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self)))
        vqgraphicstextitem->qgraphicstextitem_supportsextension_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_SupportsExtension_Callback>(slot);
}

// Base class handler implementation
void QGraphicsTextItem_SuperSetExtension(QGraphicsTextItem* self, int extension, const QVariant* variant) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::setExtension(static_cast<VirtualQGraphicsTextItem::Extension>(extension), *variant);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::setExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnSetExtension(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_setextension_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_SetExtension_Callback>(slot);
}

// Base class handler implementation
QVariant* QGraphicsTextItem_SuperExtension(const QGraphicsTextItem* self, const QVariant* variant) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self)))
        return new QVariant(vqgraphicstextitem->QGraphicsTextItem::extension(*variant));
    qFatal("Error: Protected virtual method QGraphicsTextItem::extension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnExtension(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self)))
        vqgraphicstextitem->qgraphicstextitem_extension_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Extension_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsTextItem_Event(QGraphicsTextItem* self, QEvent* ev) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        return vqgraphicstextitem->event(ev);
    } else {
        qFatal("Error: Protected virtual method QGraphicsTextItem::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsTextItem_SuperEvent(QGraphicsTextItem* self, QEvent* ev) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        return vqgraphicstextitem->QGraphicsTextItem::event(ev);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_event_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsTextItem_EventFilter(QGraphicsTextItem* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGraphicsTextItem_SuperEventFilter(QGraphicsTextItem* self, QObject* watched, QEvent* event) {
    return self->QGraphicsTextItem::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnEventFilter(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_eventfilter_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsTextItem_TimerEvent(QGraphicsTextItem* self, QTimerEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsTextItem::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsTextItem_SuperTimerEvent(QGraphicsTextItem* self, QTimerEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnTimerEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_timerevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsTextItem_ChildEvent(QGraphicsTextItem* self, QChildEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsTextItem::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsTextItem_SuperChildEvent(QGraphicsTextItem* self, QChildEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnChildEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_childevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsTextItem_CustomEvent(QGraphicsTextItem* self, QEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsTextItem::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsTextItem_SuperCustomEvent(QGraphicsTextItem* self, QEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnCustomEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_customevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsTextItem_ConnectNotify(QGraphicsTextItem* self, const QMetaMethod* signal) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsTextItem::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsTextItem_SuperConnectNotify(QGraphicsTextItem* self, const QMetaMethod* signal) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnConnectNotify(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_connectnotify_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsTextItem_DisconnectNotify(QGraphicsTextItem* self, const QMetaMethod* signal) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsTextItem::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsTextItem_SuperDisconnectNotify(QGraphicsTextItem* self, const QMetaMethod* signal) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnDisconnectNotify(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_disconnectnotify_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsTextItem_Advance(QGraphicsTextItem* self, int phase) {
    self->advance(static_cast<int>(phase));
}

// Base class handler implementation
void QGraphicsTextItem_SuperAdvance(QGraphicsTextItem* self, int phase) {
    self->QGraphicsTextItem::advance(static_cast<int>(phase));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnAdvance(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_advance_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Advance_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsTextItem_CollidesWithItem(const QGraphicsTextItem* self, const QGraphicsItem* other, int mode) {
    return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsTextItem_SuperCollidesWithItem(const QGraphicsTextItem* self, const QGraphicsItem* other, int mode) {
    return self->QGraphicsTextItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnCollidesWithItem(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self)))
        vqgraphicstextitem->qgraphicstextitem_collideswithitem_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_CollidesWithItem_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsTextItem_CollidesWithPath(const QGraphicsTextItem* self, const QPainterPath* path, int mode) {
    return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsTextItem_SuperCollidesWithPath(const QGraphicsTextItem* self, const QPainterPath* path, int mode) {
    return self->QGraphicsTextItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnCollidesWithPath(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self)))
        vqgraphicstextitem->qgraphicstextitem_collideswithpath_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_CollidesWithPath_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsTextItem_SceneEventFilter(QGraphicsTextItem* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        return vqgraphicstextitem->sceneEventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsTextItem::sceneEventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsTextItem_SuperSceneEventFilter(QGraphicsTextItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        return vqgraphicstextitem->QGraphicsTextItem::sceneEventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::sceneEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnSceneEventFilter(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_sceneeventfilter_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_SceneEventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsTextItem_WheelEvent(QGraphicsTextItem* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
    if (vqgraphicstextitem) {
        vqgraphicstextitem->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsTextItem::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsTextItem_SuperWheelEvent(QGraphicsTextItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->QGraphicsTextItem::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTextItem::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnWheelEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_wheelevent_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsTextItem_ItemChange(QGraphicsTextItem* self, int change, const QVariant* value) {
    return new QVariant((self->*&VirtualQGraphicsTextItem::Base::itemChange)(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}

// Base class handler implementation
QVariant* QGraphicsTextItem_SuperItemChange(QGraphicsTextItem* self, int change, const QVariant* value) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        return new QVariant(vqgraphicstextitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    qFatal("Error: Protected virtual method QGraphicsTextItem::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnItemChange(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self))
        vqgraphicstextitem->qgraphicstextitem_itemchange_callback = reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_ItemChange_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsTextItem_UpdateMicroFocus(QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->VirtualQGraphicsTextItem::updateMicroFocus();
    } else
        qFatal("Error: Protected method QGraphicsTextItem::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGraphicsTextItem_Sender(const QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        return vqgraphicstextitem->VirtualQGraphicsTextItem::sender();
    } else
        qFatal("Error: Protected method QGraphicsTextItem::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsTextItem_SenderSignalIndex(const QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        return vqgraphicstextitem->VirtualQGraphicsTextItem::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGraphicsTextItem::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsTextItem_Receivers(const QGraphicsTextItem* self, const char* signal) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        return vqgraphicstextitem->VirtualQGraphicsTextItem::receivers(signal);
    } else
        qFatal("Error: Protected method QGraphicsTextItem::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsTextItem_IsSignalConnected(const QGraphicsTextItem* self, const QMetaMethod* signal) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        return vqgraphicstextitem->VirtualQGraphicsTextItem::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGraphicsTextItem::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsTextItem_AddToIndex(QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->VirtualQGraphicsTextItem::addToIndex();
    } else
        qFatal("Error: Protected method QGraphicsTextItem::addToIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsTextItem_RemoveFromIndex(QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->VirtualQGraphicsTextItem::removeFromIndex();
    } else
        qFatal("Error: Protected method QGraphicsTextItem::removeFromIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsTextItem_PrepareGeometryChange(QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->VirtualQGraphicsTextItem::prepareGeometryChange();
    } else
        qFatal("Error: Protected method QGraphicsTextItem::prepareGeometryChange called without a directly constructed type");
}

void QGraphicsTextItem_Delete(QGraphicsTextItem* self) {
    delete self;
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new() {
    return new VirtualQGraphicsSimpleTextItem();
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new2(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQGraphicsSimpleTextItem(text_QString);
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new3(QGraphicsItem* parent) {
    return new VirtualQGraphicsSimpleTextItem(parent);
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new4(const libqt_string text, QGraphicsItem* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQGraphicsSimpleTextItem(text_QString, parent);
}

void QGraphicsSimpleTextItem_SetText(QGraphicsSimpleTextItem* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

libqt_string QGraphicsSimpleTextItem_Text(const QGraphicsSimpleTextItem* self) {
    auto _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGraphicsSimpleTextItem_SetFont(QGraphicsSimpleTextItem* self, const QFont* font) {
    self->setFont(*font);
}

QFont* QGraphicsSimpleTextItem_Font(const QGraphicsSimpleTextItem* self) {
    return new QFont(self->font());
}

QRectF* QGraphicsSimpleTextItem_BoundingRect(const QGraphicsSimpleTextItem* self) {
    return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsSimpleTextItem_Shape(const QGraphicsSimpleTextItem* self) {
    return new QPainterPath(self->shape());
}

bool QGraphicsSimpleTextItem_Contains(const QGraphicsSimpleTextItem* self, const QPointF* point) {
    return self->contains(*point);
}

void QGraphicsSimpleTextItem_Paint(QGraphicsSimpleTextItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paint(painter, option, widget);
}

bool QGraphicsSimpleTextItem_IsObscuredBy(const QGraphicsSimpleTextItem* self, const QGraphicsItem* item) {
    return self->isObscuredBy(item);
}

QPainterPath* QGraphicsSimpleTextItem_OpaqueArea(const QGraphicsSimpleTextItem* self) {
    return new QPainterPath(self->opaqueArea());
}

int QGraphicsSimpleTextItem_Type(const QGraphicsSimpleTextItem* self) {
    return self->type();
}

bool QGraphicsSimpleTextItem_SupportsExtension(const QGraphicsSimpleTextItem* self, int extension) {
    auto* vqgraphicssimpletextitem = dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        return vqgraphicssimpletextitem->supportsExtension(static_cast<VirtualQGraphicsSimpleTextItem::Extension>(extension));
    }
    qFatal("Error: Protected method QGraphicsSimpleTextItem::supportsExtension called without a directly constructed type");
}

void QGraphicsSimpleTextItem_SetExtension(QGraphicsSimpleTextItem* self, int extension, const QVariant* variant) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        vqgraphicssimpletextitem->setExtension(static_cast<VirtualQGraphicsSimpleTextItem::Extension>(extension), *variant);
    }
}

QVariant* QGraphicsSimpleTextItem_Extension(const QGraphicsSimpleTextItem* self, const QVariant* variant) {
    auto* vqgraphicssimpletextitem = dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        return new QVariant(vqgraphicssimpletextitem->extension(*variant));
    }
    qFatal("Error: Protected method QGraphicsSimpleTextItem::extension called without a directly constructed type");
}

// Base class handler implementation
QRectF* QGraphicsSimpleTextItem_SuperBoundingRect(const QGraphicsSimpleTextItem* self) {
    return new QRectF(self->QGraphicsSimpleTextItem::boundingRect());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnBoundingRect(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self)))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_boundingrect_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_BoundingRect_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QGraphicsSimpleTextItem_SuperShape(const QGraphicsSimpleTextItem* self) {
    return new QPainterPath(self->QGraphicsSimpleTextItem::shape());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnShape(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self)))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_shape_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_Shape_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsSimpleTextItem_SuperContains(const QGraphicsSimpleTextItem* self, const QPointF* point) {
    return self->QGraphicsSimpleTextItem::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnContains(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self)))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_contains_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_Contains_Callback>(slot);
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperPaint(QGraphicsSimpleTextItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->QGraphicsSimpleTextItem::paint(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnPaint(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_paint_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_Paint_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsSimpleTextItem_SuperIsObscuredBy(const QGraphicsSimpleTextItem* self, const QGraphicsItem* item) {
    return self->QGraphicsSimpleTextItem::isObscuredBy(item);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnIsObscuredBy(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self)))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_isobscuredby_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_IsObscuredBy_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QGraphicsSimpleTextItem_SuperOpaqueArea(const QGraphicsSimpleTextItem* self) {
    return new QPainterPath(self->QGraphicsSimpleTextItem::opaqueArea());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnOpaqueArea(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self)))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_opaquearea_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_OpaqueArea_Callback>(slot);
}

// Base class handler implementation
int QGraphicsSimpleTextItem_SuperType(const QGraphicsSimpleTextItem* self) {
    return self->QGraphicsSimpleTextItem::type();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnType(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self)))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_type_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_Type_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsSimpleTextItem_SuperSupportsExtension(const QGraphicsSimpleTextItem* self, int extension) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        return vqgraphicssimpletextitem->QGraphicsSimpleTextItem::supportsExtension(static_cast<VirtualQGraphicsSimpleTextItem::Extension>(extension));
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::supportsExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnSupportsExtension(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self)))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_supportsextension_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_SupportsExtension_Callback>(slot);
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperSetExtension(QGraphicsSimpleTextItem* self, int extension, const QVariant* variant) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->QGraphicsSimpleTextItem::setExtension(static_cast<VirtualQGraphicsSimpleTextItem::Extension>(extension), *variant);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::setExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnSetExtension(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_setextension_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_SetExtension_Callback>(slot);
}

// Base class handler implementation
QVariant* QGraphicsSimpleTextItem_SuperExtension(const QGraphicsSimpleTextItem* self, const QVariant* variant) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self)))
        return new QVariant(vqgraphicssimpletextitem->QGraphicsSimpleTextItem::extension(*variant));
    qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::extension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnExtension(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self)))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_extension_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_Extension_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_Advance(QGraphicsSimpleTextItem* self, int phase) {
    self->advance(static_cast<int>(phase));
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperAdvance(QGraphicsSimpleTextItem* self, int phase) {
    self->QGraphicsSimpleTextItem::advance(static_cast<int>(phase));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnAdvance(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_advance_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_Advance_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsSimpleTextItem_CollidesWithItem(const QGraphicsSimpleTextItem* self, const QGraphicsItem* other, int mode) {
    return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsSimpleTextItem_SuperCollidesWithItem(const QGraphicsSimpleTextItem* self, const QGraphicsItem* other, int mode) {
    return self->QGraphicsSimpleTextItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnCollidesWithItem(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self)))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_collideswithitem_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_CollidesWithItem_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsSimpleTextItem_CollidesWithPath(const QGraphicsSimpleTextItem* self, const QPainterPath* path, int mode) {
    return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsSimpleTextItem_SuperCollidesWithPath(const QGraphicsSimpleTextItem* self, const QPainterPath* path, int mode) {
    return self->QGraphicsSimpleTextItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnCollidesWithPath(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self)))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_collideswithpath_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_CollidesWithPath_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsSimpleTextItem_SceneEventFilter(QGraphicsSimpleTextItem* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        return vqgraphicssimpletextitem->sceneEventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::sceneEventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsSimpleTextItem_SuperSceneEventFilter(QGraphicsSimpleTextItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        return vqgraphicssimpletextitem->QGraphicsSimpleTextItem::sceneEventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::sceneEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnSceneEventFilter(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_sceneeventfilter_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_SceneEventFilter_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsSimpleTextItem_SceneEvent(QGraphicsSimpleTextItem* self, QEvent* event) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        return vqgraphicssimpletextitem->sceneEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::sceneEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsSimpleTextItem_SuperSceneEvent(QGraphicsSimpleTextItem* self, QEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        return vqgraphicssimpletextitem->QGraphicsSimpleTextItem::sceneEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::sceneEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnSceneEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_sceneevent_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_SceneEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_ContextMenuEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        vqgraphicssimpletextitem->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperContextMenuEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->QGraphicsSimpleTextItem::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnContextMenuEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_contextmenuevent_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_DragEnterEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        vqgraphicssimpletextitem->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperDragEnterEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->QGraphicsSimpleTextItem::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnDragEnterEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_dragenterevent_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_DragLeaveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        vqgraphicssimpletextitem->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperDragLeaveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->QGraphicsSimpleTextItem::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnDragLeaveEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_dragleaveevent_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_DragMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        vqgraphicssimpletextitem->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperDragMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->QGraphicsSimpleTextItem::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnDragMoveEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_dragmoveevent_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_DropEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        vqgraphicssimpletextitem->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperDropEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->QGraphicsSimpleTextItem::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnDropEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_dropevent_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_FocusInEvent(QGraphicsSimpleTextItem* self, QFocusEvent* event) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        vqgraphicssimpletextitem->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperFocusInEvent(QGraphicsSimpleTextItem* self, QFocusEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->QGraphicsSimpleTextItem::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnFocusInEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_focusinevent_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_FocusOutEvent(QGraphicsSimpleTextItem* self, QFocusEvent* event) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        vqgraphicssimpletextitem->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperFocusOutEvent(QGraphicsSimpleTextItem* self, QFocusEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->QGraphicsSimpleTextItem::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnFocusOutEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_focusoutevent_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_HoverEnterEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        vqgraphicssimpletextitem->hoverEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::hoverEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperHoverEnterEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->QGraphicsSimpleTextItem::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnHoverEnterEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_hoverenterevent_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_HoverEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_HoverMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        vqgraphicssimpletextitem->hoverMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::hoverMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperHoverMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->QGraphicsSimpleTextItem::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnHoverMoveEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_hovermoveevent_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_HoverMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_HoverLeaveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        vqgraphicssimpletextitem->hoverLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::hoverLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperHoverLeaveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->QGraphicsSimpleTextItem::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnHoverLeaveEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_hoverleaveevent_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_HoverLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_KeyPressEvent(QGraphicsSimpleTextItem* self, QKeyEvent* event) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        vqgraphicssimpletextitem->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperKeyPressEvent(QGraphicsSimpleTextItem* self, QKeyEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->QGraphicsSimpleTextItem::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnKeyPressEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_keypressevent_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_KeyReleaseEvent(QGraphicsSimpleTextItem* self, QKeyEvent* event) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        vqgraphicssimpletextitem->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperKeyReleaseEvent(QGraphicsSimpleTextItem* self, QKeyEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->QGraphicsSimpleTextItem::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnKeyReleaseEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_keyreleaseevent_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_MousePressEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        vqgraphicssimpletextitem->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperMousePressEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->QGraphicsSimpleTextItem::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnMousePressEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_mousepressevent_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_MouseMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        vqgraphicssimpletextitem->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperMouseMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->QGraphicsSimpleTextItem::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnMouseMoveEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_mousemoveevent_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_MouseReleaseEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        vqgraphicssimpletextitem->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperMouseReleaseEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->QGraphicsSimpleTextItem::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnMouseReleaseEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_mousereleaseevent_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_MouseDoubleClickEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        vqgraphicssimpletextitem->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperMouseDoubleClickEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->QGraphicsSimpleTextItem::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnMouseDoubleClickEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_mousedoubleclickevent_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_WheelEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        vqgraphicssimpletextitem->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperWheelEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->QGraphicsSimpleTextItem::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnWheelEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_wheelevent_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_InputMethodEvent(QGraphicsSimpleTextItem* self, QInputMethodEvent* event) {
    auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
    if (vqgraphicssimpletextitem) {
        vqgraphicssimpletextitem->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_SuperInputMethodEvent(QGraphicsSimpleTextItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->QGraphicsSimpleTextItem::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnInputMethodEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_inputmethodevent_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsSimpleTextItem_InputMethodQuery(const QGraphicsSimpleTextItem* self, int query) {
    return new QVariant((self->*&VirtualQGraphicsSimpleTextItem::Base::inputMethodQuery)(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QGraphicsSimpleTextItem_SuperInputMethodQuery(const QGraphicsSimpleTextItem* self, int query) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self)))
        return new QVariant(vqgraphicssimpletextitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::inputMethodQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnInputMethodQuery(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self)))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_inputmethodquery_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsSimpleTextItem_ItemChange(QGraphicsSimpleTextItem* self, int change, const QVariant* value) {
    return new QVariant((self->*&VirtualQGraphicsSimpleTextItem::Base::itemChange)(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}

// Base class handler implementation
QVariant* QGraphicsSimpleTextItem_SuperItemChange(QGraphicsSimpleTextItem* self, int change, const QVariant* value) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        return new QVariant(vqgraphicssimpletextitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    qFatal("Error: Protected virtual method QGraphicsSimpleTextItem::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnItemChange(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self))
        vqgraphicssimpletextitem->qgraphicssimpletextitem_itemchange_callback = reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_ItemChange_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsSimpleTextItem_UpdateMicroFocus(QGraphicsSimpleTextItem* self) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->VirtualQGraphicsSimpleTextItem::updateMicroFocus();
    } else
        qFatal("Error: Protected method QGraphicsSimpleTextItem::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsSimpleTextItem_AddToIndex(QGraphicsSimpleTextItem* self) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->VirtualQGraphicsSimpleTextItem::addToIndex();
    } else
        qFatal("Error: Protected method QGraphicsSimpleTextItem::addToIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsSimpleTextItem_RemoveFromIndex(QGraphicsSimpleTextItem* self) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->VirtualQGraphicsSimpleTextItem::removeFromIndex();
    } else
        qFatal("Error: Protected method QGraphicsSimpleTextItem::removeFromIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsSimpleTextItem_PrepareGeometryChange(QGraphicsSimpleTextItem* self) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->VirtualQGraphicsSimpleTextItem::prepareGeometryChange();
    } else
        qFatal("Error: Protected method QGraphicsSimpleTextItem::prepareGeometryChange called without a directly constructed type");
}

void QGraphicsSimpleTextItem_Delete(QGraphicsSimpleTextItem* self) {
    delete self;
}

QGraphicsItemGroup* QGraphicsItemGroup_new() {
    return new VirtualQGraphicsItemGroup();
}

QGraphicsItemGroup* QGraphicsItemGroup_new2(QGraphicsItem* parent) {
    return new VirtualQGraphicsItemGroup(parent);
}

void QGraphicsItemGroup_AddToGroup(QGraphicsItemGroup* self, QGraphicsItem* item) {
    self->addToGroup(item);
}

void QGraphicsItemGroup_RemoveFromGroup(QGraphicsItemGroup* self, QGraphicsItem* item) {
    self->removeFromGroup(item);
}

QRectF* QGraphicsItemGroup_BoundingRect(const QGraphicsItemGroup* self) {
    return new QRectF(self->boundingRect());
}

void QGraphicsItemGroup_Paint(QGraphicsItemGroup* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paint(painter, option, widget);
}

bool QGraphicsItemGroup_IsObscuredBy(const QGraphicsItemGroup* self, const QGraphicsItem* item) {
    return self->isObscuredBy(item);
}

QPainterPath* QGraphicsItemGroup_OpaqueArea(const QGraphicsItemGroup* self) {
    return new QPainterPath(self->opaqueArea());
}

int QGraphicsItemGroup_Type(const QGraphicsItemGroup* self) {
    return self->type();
}

// Base class handler implementation
QRectF* QGraphicsItemGroup_SuperBoundingRect(const QGraphicsItemGroup* self) {
    return new QRectF(self->QGraphicsItemGroup::boundingRect());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnBoundingRect(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self)))
        vqgraphicsitemgroup->qgraphicsitemgroup_boundingrect_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_BoundingRect_Callback>(slot);
}

// Base class handler implementation
void QGraphicsItemGroup_SuperPaint(QGraphicsItemGroup* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->QGraphicsItemGroup::paint(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnPaint(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_paint_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_Paint_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsItemGroup_SuperIsObscuredBy(const QGraphicsItemGroup* self, const QGraphicsItem* item) {
    return self->QGraphicsItemGroup::isObscuredBy(item);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnIsObscuredBy(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self)))
        vqgraphicsitemgroup->qgraphicsitemgroup_isobscuredby_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_IsObscuredBy_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QGraphicsItemGroup_SuperOpaqueArea(const QGraphicsItemGroup* self) {
    return new QPainterPath(self->QGraphicsItemGroup::opaqueArea());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnOpaqueArea(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self)))
        vqgraphicsitemgroup->qgraphicsitemgroup_opaquearea_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_OpaqueArea_Callback>(slot);
}

// Base class handler implementation
int QGraphicsItemGroup_SuperType(const QGraphicsItemGroup* self) {
    return self->QGraphicsItemGroup::type();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnType(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self)))
        vqgraphicsitemgroup->qgraphicsitemgroup_type_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_Type_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemGroup_Advance(QGraphicsItemGroup* self, int phase) {
    self->advance(static_cast<int>(phase));
}

// Base class handler implementation
void QGraphicsItemGroup_SuperAdvance(QGraphicsItemGroup* self, int phase) {
    self->QGraphicsItemGroup::advance(static_cast<int>(phase));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnAdvance(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_advance_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_Advance_Callback>(slot);
}

// Derived class handler implementation
QPainterPath* QGraphicsItemGroup_Shape(const QGraphicsItemGroup* self) {
    return new QPainterPath(self->shape());
}

// Base class handler implementation
QPainterPath* QGraphicsItemGroup_SuperShape(const QGraphicsItemGroup* self) {
    return new QPainterPath(self->QGraphicsItemGroup::shape());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnShape(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self)))
        vqgraphicsitemgroup->qgraphicsitemgroup_shape_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_Shape_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsItemGroup_Contains(const QGraphicsItemGroup* self, const QPointF* point) {
    return self->contains(*point);
}

// Base class handler implementation
bool QGraphicsItemGroup_SuperContains(const QGraphicsItemGroup* self, const QPointF* point) {
    return self->QGraphicsItemGroup::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnContains(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self)))
        vqgraphicsitemgroup->qgraphicsitemgroup_contains_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_Contains_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsItemGroup_CollidesWithItem(const QGraphicsItemGroup* self, const QGraphicsItem* other, int mode) {
    return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsItemGroup_SuperCollidesWithItem(const QGraphicsItemGroup* self, const QGraphicsItem* other, int mode) {
    return self->QGraphicsItemGroup::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnCollidesWithItem(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self)))
        vqgraphicsitemgroup->qgraphicsitemgroup_collideswithitem_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_CollidesWithItem_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsItemGroup_CollidesWithPath(const QGraphicsItemGroup* self, const QPainterPath* path, int mode) {
    return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsItemGroup_SuperCollidesWithPath(const QGraphicsItemGroup* self, const QPainterPath* path, int mode) {
    return self->QGraphicsItemGroup::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnCollidesWithPath(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self)))
        vqgraphicsitemgroup->qgraphicsitemgroup_collideswithpath_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_CollidesWithPath_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsItemGroup_SceneEventFilter(QGraphicsItemGroup* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        return vqgraphicsitemgroup->sceneEventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::sceneEventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsItemGroup_SuperSceneEventFilter(QGraphicsItemGroup* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        return vqgraphicsitemgroup->QGraphicsItemGroup::sceneEventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::sceneEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnSceneEventFilter(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_sceneeventfilter_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_SceneEventFilter_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsItemGroup_SceneEvent(QGraphicsItemGroup* self, QEvent* event) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        return vqgraphicsitemgroup->sceneEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::sceneEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsItemGroup_SuperSceneEvent(QGraphicsItemGroup* self, QEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        return vqgraphicsitemgroup->QGraphicsItemGroup::sceneEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::sceneEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnSceneEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_sceneevent_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_SceneEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemGroup_ContextMenuEvent(QGraphicsItemGroup* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        vqgraphicsitemgroup->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemGroup_SuperContextMenuEvent(QGraphicsItemGroup* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->QGraphicsItemGroup::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnContextMenuEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_contextmenuevent_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemGroup_DragEnterEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        vqgraphicsitemgroup->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemGroup_SuperDragEnterEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->QGraphicsItemGroup::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnDragEnterEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_dragenterevent_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemGroup_DragLeaveEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        vqgraphicsitemgroup->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemGroup_SuperDragLeaveEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->QGraphicsItemGroup::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnDragLeaveEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_dragleaveevent_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemGroup_DragMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        vqgraphicsitemgroup->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemGroup_SuperDragMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->QGraphicsItemGroup::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnDragMoveEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_dragmoveevent_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemGroup_DropEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        vqgraphicsitemgroup->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemGroup_SuperDropEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->QGraphicsItemGroup::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnDropEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_dropevent_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemGroup_FocusInEvent(QGraphicsItemGroup* self, QFocusEvent* event) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        vqgraphicsitemgroup->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemGroup_SuperFocusInEvent(QGraphicsItemGroup* self, QFocusEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->QGraphicsItemGroup::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnFocusInEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_focusinevent_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemGroup_FocusOutEvent(QGraphicsItemGroup* self, QFocusEvent* event) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        vqgraphicsitemgroup->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemGroup_SuperFocusOutEvent(QGraphicsItemGroup* self, QFocusEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->QGraphicsItemGroup::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnFocusOutEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_focusoutevent_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemGroup_HoverEnterEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        vqgraphicsitemgroup->hoverEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::hoverEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemGroup_SuperHoverEnterEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->QGraphicsItemGroup::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnHoverEnterEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_hoverenterevent_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_HoverEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemGroup_HoverMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        vqgraphicsitemgroup->hoverMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::hoverMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemGroup_SuperHoverMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->QGraphicsItemGroup::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnHoverMoveEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_hovermoveevent_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_HoverMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemGroup_HoverLeaveEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        vqgraphicsitemgroup->hoverLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::hoverLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemGroup_SuperHoverLeaveEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->QGraphicsItemGroup::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnHoverLeaveEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_hoverleaveevent_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_HoverLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemGroup_KeyPressEvent(QGraphicsItemGroup* self, QKeyEvent* event) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        vqgraphicsitemgroup->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemGroup_SuperKeyPressEvent(QGraphicsItemGroup* self, QKeyEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->QGraphicsItemGroup::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnKeyPressEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_keypressevent_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemGroup_KeyReleaseEvent(QGraphicsItemGroup* self, QKeyEvent* event) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        vqgraphicsitemgroup->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemGroup_SuperKeyReleaseEvent(QGraphicsItemGroup* self, QKeyEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->QGraphicsItemGroup::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnKeyReleaseEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_keyreleaseevent_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemGroup_MousePressEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        vqgraphicsitemgroup->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemGroup_SuperMousePressEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->QGraphicsItemGroup::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnMousePressEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_mousepressevent_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemGroup_MouseMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        vqgraphicsitemgroup->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemGroup_SuperMouseMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->QGraphicsItemGroup::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnMouseMoveEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_mousemoveevent_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemGroup_MouseReleaseEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        vqgraphicsitemgroup->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemGroup_SuperMouseReleaseEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->QGraphicsItemGroup::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnMouseReleaseEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_mousereleaseevent_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemGroup_MouseDoubleClickEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        vqgraphicsitemgroup->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemGroup_SuperMouseDoubleClickEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->QGraphicsItemGroup::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnMouseDoubleClickEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_mousedoubleclickevent_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemGroup_WheelEvent(QGraphicsItemGroup* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        vqgraphicsitemgroup->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemGroup_SuperWheelEvent(QGraphicsItemGroup* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->QGraphicsItemGroup::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnWheelEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_wheelevent_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemGroup_InputMethodEvent(QGraphicsItemGroup* self, QInputMethodEvent* event) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        vqgraphicsitemgroup->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemGroup_SuperInputMethodEvent(QGraphicsItemGroup* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->QGraphicsItemGroup::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnInputMethodEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_inputmethodevent_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsItemGroup_InputMethodQuery(const QGraphicsItemGroup* self, int query) {
    return new QVariant((self->*&VirtualQGraphicsItemGroup::Base::inputMethodQuery)(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QGraphicsItemGroup_SuperInputMethodQuery(const QGraphicsItemGroup* self, int query) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self)))
        return new QVariant(vqgraphicsitemgroup->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    qFatal("Error: Protected virtual method QGraphicsItemGroup::inputMethodQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnInputMethodQuery(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self)))
        vqgraphicsitemgroup->qgraphicsitemgroup_inputmethodquery_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsItemGroup_ItemChange(QGraphicsItemGroup* self, int change, const QVariant* value) {
    return new QVariant((self->*&VirtualQGraphicsItemGroup::Base::itemChange)(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}

// Base class handler implementation
QVariant* QGraphicsItemGroup_SuperItemChange(QGraphicsItemGroup* self, int change, const QVariant* value) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        return new QVariant(vqgraphicsitemgroup->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    qFatal("Error: Protected virtual method QGraphicsItemGroup::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnItemChange(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_itemchange_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_ItemChange_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsItemGroup_SupportsExtension(const QGraphicsItemGroup* self, int extension) {
    auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self));
    if (vqgraphicsitemgroup) {
        return vqgraphicsitemgroup->supportsExtension(static_cast<VirtualQGraphicsItemGroup::Extension>(extension));
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::supportsExtension called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsItemGroup_SuperSupportsExtension(const QGraphicsItemGroup* self, int extension) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        return vqgraphicsitemgroup->QGraphicsItemGroup::supportsExtension(static_cast<VirtualQGraphicsItemGroup::Extension>(extension));
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::supportsExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnSupportsExtension(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self)))
        vqgraphicsitemgroup->qgraphicsitemgroup_supportsextension_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_SupportsExtension_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsItemGroup_SetExtension(QGraphicsItemGroup* self, int extension, const QVariant* variant) {
    auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
    if (vqgraphicsitemgroup) {
        vqgraphicsitemgroup->setExtension(static_cast<VirtualQGraphicsItemGroup::Extension>(extension), *variant);
    } else {
        qFatal("Error: Protected virtual method QGraphicsItemGroup::setExtension called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsItemGroup_SuperSetExtension(QGraphicsItemGroup* self, int extension, const QVariant* variant) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->QGraphicsItemGroup::setExtension(static_cast<VirtualQGraphicsItemGroup::Extension>(extension), *variant);
    } else
        qFatal("Error: Protected virtual method QGraphicsItemGroup::setExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnSetExtension(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self))
        vqgraphicsitemgroup->qgraphicsitemgroup_setextension_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_SetExtension_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsItemGroup_Extension(const QGraphicsItemGroup* self, const QVariant* variant) {
    return new QVariant((self->*&VirtualQGraphicsItemGroup::Base::extension)(*variant));
}

// Base class handler implementation
QVariant* QGraphicsItemGroup_SuperExtension(const QGraphicsItemGroup* self, const QVariant* variant) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self)))
        return new QVariant(vqgraphicsitemgroup->extension(*variant));
    qFatal("Error: Protected virtual method QGraphicsItemGroup::extension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnExtension(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self)))
        vqgraphicsitemgroup->qgraphicsitemgroup_extension_callback = reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_Extension_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsItemGroup_UpdateMicroFocus(QGraphicsItemGroup* self) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->VirtualQGraphicsItemGroup::updateMicroFocus();
    } else
        qFatal("Error: Protected method QGraphicsItemGroup::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsItemGroup_AddToIndex(QGraphicsItemGroup* self) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->VirtualQGraphicsItemGroup::addToIndex();
    } else
        qFatal("Error: Protected method QGraphicsItemGroup::addToIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsItemGroup_RemoveFromIndex(QGraphicsItemGroup* self) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->VirtualQGraphicsItemGroup::removeFromIndex();
    } else
        qFatal("Error: Protected method QGraphicsItemGroup::removeFromIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsItemGroup_PrepareGeometryChange(QGraphicsItemGroup* self) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->VirtualQGraphicsItemGroup::prepareGeometryChange();
    } else
        qFatal("Error: Protected method QGraphicsItemGroup::prepareGeometryChange called without a directly constructed type");
}

void QGraphicsItemGroup_Delete(QGraphicsItemGroup* self) {
    delete self;
}
