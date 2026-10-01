#include <QAction>
#include <QChildEvent>
#include <QCloseEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QGraphicsItem>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QGraphicsObject>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneMoveEvent>
#include <QGraphicsSceneResizeEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsWidget>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QList>
#include <QMarginsF>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPalette>
#include <QPointF>
#include <QRectF>
#include <QShowEvent>
#include <QSizeF>
#include <QString>
#include <QStyle>
#include <QStyleOption>
#include <QStyleOptionGraphicsItem>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qgraphicswidget.h>
#include "libqgraphicswidget.h"
#include "libqgraphicswidget.hxx"

QGraphicsWidget* QGraphicsWidget_new() {
    return new VirtualQGraphicsWidget();
}

QGraphicsWidget* QGraphicsWidget_new2(QGraphicsItem* parent) {
    return new VirtualQGraphicsWidget(parent);
}

QGraphicsWidget* QGraphicsWidget_new3(QGraphicsItem* parent, int wFlags) {
    return new VirtualQGraphicsWidget(parent, static_cast<Qt::WindowFlags>(wFlags));
}

QGraphicsLayoutItem* QGraphicsWidget_AsQGraphicsLayoutItem(const QGraphicsWidget* self) {
    return const_cast<QGraphicsWidget*>(self);
}

QGraphicsWidget* QGraphicsWidget_FromQGraphicsLayoutItem(const QGraphicsLayoutItem* _qgraphicslayoutitem) {
    return dynamic_cast<QGraphicsWidget*>(const_cast<QGraphicsLayoutItem*>(_qgraphicslayoutitem));
}

QMetaObject* QGraphicsWidget_MetaObject(const QGraphicsWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsWidget_Metacast(QGraphicsWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsWidget_Metacall(QGraphicsWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGraphicsWidget_Tr(const char* s) {
    auto _ret = QGraphicsWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QGraphicsLayout* QGraphicsWidget_Layout(const QGraphicsWidget* self) {
    return self->layout();
}

void QGraphicsWidget_SetLayout(QGraphicsWidget* self, QGraphicsLayout* layout) {
    self->setLayout(layout);
}

void QGraphicsWidget_AdjustSize(QGraphicsWidget* self) {
    self->adjustSize();
}

int QGraphicsWidget_LayoutDirection(const QGraphicsWidget* self) {
    return static_cast<int>(self->layoutDirection());
}

void QGraphicsWidget_SetLayoutDirection(QGraphicsWidget* self, int direction) {
    self->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

void QGraphicsWidget_UnsetLayoutDirection(QGraphicsWidget* self) {
    self->unsetLayoutDirection();
}

QStyle* QGraphicsWidget_Style(const QGraphicsWidget* self) {
    return self->style();
}

void QGraphicsWidget_SetStyle(QGraphicsWidget* self, QStyle* style) {
    self->setStyle(style);
}

QFont* QGraphicsWidget_Font(const QGraphicsWidget* self) {
    return new QFont(self->font());
}

void QGraphicsWidget_SetFont(QGraphicsWidget* self, const QFont* font) {
    self->setFont(*font);
}

QPalette* QGraphicsWidget_Palette(const QGraphicsWidget* self) {
    return new QPalette(self->palette());
}

void QGraphicsWidget_SetPalette(QGraphicsWidget* self, const QPalette* palette) {
    self->setPalette(*palette);
}

bool QGraphicsWidget_AutoFillBackground(const QGraphicsWidget* self) {
    return self->autoFillBackground();
}

void QGraphicsWidget_SetAutoFillBackground(QGraphicsWidget* self, bool enabled) {
    self->setAutoFillBackground(enabled);
}

void QGraphicsWidget_Resize(QGraphicsWidget* self, const QSizeF* size) {
    self->resize(*size);
}

void QGraphicsWidget_Resize2(QGraphicsWidget* self, double w, double h) {
    self->resize(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QGraphicsWidget_Size(const QGraphicsWidget* self) {
    return new QSizeF(self->size());
}

void QGraphicsWidget_SetGeometry(QGraphicsWidget* self, const QRectF* rect) {
    self->setGeometry(*rect);
}

void QGraphicsWidget_SetGeometry2(QGraphicsWidget* self, double x, double y, double w, double h) {
    self->setGeometry(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QRectF* QGraphicsWidget_Rect(const QGraphicsWidget* self) {
    return new QRectF(self->rect());
}

void QGraphicsWidget_SetContentsMargins(QGraphicsWidget* self, double left, double top, double right, double bottom) {
    self->setContentsMargins(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

void QGraphicsWidget_SetContentsMargins2(QGraphicsWidget* self, QMarginsF* margins) {
    self->setContentsMargins(*margins);
}

void QGraphicsWidget_GetContentsMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom) {
    self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

void QGraphicsWidget_SetWindowFrameMargins(QGraphicsWidget* self, double left, double top, double right, double bottom) {
    self->setWindowFrameMargins(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

void QGraphicsWidget_SetWindowFrameMargins2(QGraphicsWidget* self, QMarginsF* margins) {
    self->setWindowFrameMargins(*margins);
}

void QGraphicsWidget_GetWindowFrameMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom) {
    self->getWindowFrameMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

void QGraphicsWidget_UnsetWindowFrameMargins(QGraphicsWidget* self) {
    self->unsetWindowFrameMargins();
}

QRectF* QGraphicsWidget_WindowFrameGeometry(const QGraphicsWidget* self) {
    return new QRectF(self->windowFrameGeometry());
}

QRectF* QGraphicsWidget_WindowFrameRect(const QGraphicsWidget* self) {
    return new QRectF(self->windowFrameRect());
}

int QGraphicsWidget_WindowFlags(const QGraphicsWidget* self) {
    return static_cast<int>(self->windowFlags());
}

int QGraphicsWidget_WindowType(const QGraphicsWidget* self) {
    return static_cast<int>(self->windowType());
}

void QGraphicsWidget_SetWindowFlags(QGraphicsWidget* self, int wFlags) {
    self->setWindowFlags(static_cast<Qt::WindowFlags>(wFlags));
}

bool QGraphicsWidget_IsActiveWindow(const QGraphicsWidget* self) {
    return self->isActiveWindow();
}

void QGraphicsWidget_SetWindowTitle(QGraphicsWidget* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setWindowTitle(title_QString);
}

libqt_string QGraphicsWidget_WindowTitle(const QGraphicsWidget* self) {
    auto _ret = self->windowTitle();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QGraphicsWidget_FocusPolicy(const QGraphicsWidget* self) {
    return static_cast<int>(self->focusPolicy());
}

void QGraphicsWidget_SetFocusPolicy(QGraphicsWidget* self, int policy) {
    self->setFocusPolicy(static_cast<Qt::FocusPolicy>(policy));
}

void QGraphicsWidget_SetTabOrder(QGraphicsWidget* first, QGraphicsWidget* second) {
    QGraphicsWidget::setTabOrder(first, second);
}

QGraphicsWidget* QGraphicsWidget_FocusWidget(const QGraphicsWidget* self) {
    return self->focusWidget();
}

int QGraphicsWidget_GrabShortcut(QGraphicsWidget* self, const QKeySequence* sequence) {
    return self->grabShortcut(*sequence);
}

void QGraphicsWidget_ReleaseShortcut(QGraphicsWidget* self, int id) {
    self->releaseShortcut(static_cast<int>(id));
}

void QGraphicsWidget_SetShortcutEnabled(QGraphicsWidget* self, int id) {
    self->setShortcutEnabled(static_cast<int>(id));
}

void QGraphicsWidget_SetShortcutAutoRepeat(QGraphicsWidget* self, int id) {
    self->setShortcutAutoRepeat(static_cast<int>(id));
}

void QGraphicsWidget_AddAction(QGraphicsWidget* self, QAction* action) {
    self->addAction(action);
}

void QGraphicsWidget_AddActions(QGraphicsWidget* self, const libqt_list /* of QAction* */ actions) {
    QList<QAction*> actions_QList;
    actions_QList.reserve(actions.len);
    QAction** actions_arr = static_cast<QAction**>(actions.data);
    for (size_t i = 0; i < actions.len; ++i) {
        actions_QList.push_back(actions_arr[i]);
    }
    self->addActions(actions_QList);
}

void QGraphicsWidget_InsertActions(QGraphicsWidget* self, QAction* before, const libqt_list /* of QAction* */ actions) {
    QList<QAction*> actions_QList;
    actions_QList.reserve(actions.len);
    QAction** actions_arr = static_cast<QAction**>(actions.data);
    for (size_t i = 0; i < actions.len; ++i) {
        actions_QList.push_back(actions_arr[i]);
    }
    self->insertActions(before, actions_QList);
}

void QGraphicsWidget_InsertAction(QGraphicsWidget* self, QAction* before, QAction* action) {
    self->insertAction(before, action);
}

void QGraphicsWidget_RemoveAction(QGraphicsWidget* self, QAction* action) {
    self->removeAction(action);
}

libqt_list /* of QAction* */ QGraphicsWidget_Actions(const QGraphicsWidget* self) {
    QList<QAction*> _ret = self->actions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGraphicsWidget_SetAttribute(QGraphicsWidget* self, int attribute) {
    self->setAttribute(static_cast<Qt::WidgetAttribute>(attribute));
}

bool QGraphicsWidget_TestAttribute(const QGraphicsWidget* self, int attribute) {
    return self->testAttribute(static_cast<Qt::WidgetAttribute>(attribute));
}

int QGraphicsWidget_Type(const QGraphicsWidget* self) {
    return self->type();
}

void QGraphicsWidget_Paint(QGraphicsWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paint(painter, option, widget);
}

void QGraphicsWidget_PaintWindowFrame(QGraphicsWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paintWindowFrame(painter, option, widget);
}

QRectF* QGraphicsWidget_BoundingRect(const QGraphicsWidget* self) {
    return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsWidget_Shape(const QGraphicsWidget* self) {
    return new QPainterPath(self->shape());
}

void QGraphicsWidget_GeometryChanged(QGraphicsWidget* self) {
    self->geometryChanged();
}

void QGraphicsWidget_Connect_GeometryChanged(QGraphicsWidget* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsWidget*) = reinterpret_cast<void (*)(QGraphicsWidget*)>(slot);
    QGraphicsWidget::connect(self,
                             static_cast<void (QGraphicsWidget::*)()>(&QGraphicsWidget::geometryChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QGraphicsWidget_LayoutChanged(QGraphicsWidget* self) {
    self->layoutChanged();
}

void QGraphicsWidget_Connect_LayoutChanged(QGraphicsWidget* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsWidget*) = reinterpret_cast<void (*)(QGraphicsWidget*)>(slot);
    QGraphicsWidget::connect(self,
                             static_cast<void (QGraphicsWidget::*)()>(&QGraphicsWidget::layoutChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

bool QGraphicsWidget_Close(QGraphicsWidget* self) {
    return self->close();
}

void QGraphicsWidget_InitStyleOption(const QGraphicsWidget* self, QStyleOption* option) {
    auto* vqgraphicswidget = dynamic_cast<const VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->initStyleOption(option);
    }
}

QSizeF* QGraphicsWidget_SizeHint(const QGraphicsWidget* self, int which, const QSizeF* constraint) {
    auto* vqgraphicswidget = dynamic_cast<const VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        return new QSizeF(vqgraphicswidget->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    qFatal("Error: Protected method QGraphicsWidget::sizeHint called without a directly constructed type");
}

void QGraphicsWidget_UpdateGeometry(QGraphicsWidget* self) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->updateGeometry();
    }
}

QVariant* QGraphicsWidget_ItemChange(QGraphicsWidget* self, int change, const QVariant* value) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        return new QVariant(vqgraphicswidget->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    qFatal("Error: Protected method QGraphicsWidget::itemChange called without a directly constructed type");
}

QVariant* QGraphicsWidget_PropertyChange(QGraphicsWidget* self, const libqt_string propertyName, const QVariant* value) {
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        return new QVariant(vqgraphicswidget->propertyChange(propertyName_QString, *value));
    }
    qFatal("Error: Protected method QGraphicsWidget::propertyChange called without a directly constructed type");
}

bool QGraphicsWidget_SceneEvent(QGraphicsWidget* self, QEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        return vqgraphicswidget->sceneEvent(event);
    }
    qFatal("Error: Protected method QGraphicsWidget::sceneEvent called without a directly constructed type");
}

bool QGraphicsWidget_WindowFrameEvent(QGraphicsWidget* self, QEvent* e) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        return vqgraphicswidget->windowFrameEvent(e);
    }
    qFatal("Error: Protected method QGraphicsWidget::windowFrameEvent called without a directly constructed type");
}

int QGraphicsWidget_WindowFrameSectionAt(const QGraphicsWidget* self, const QPointF* pos) {
    auto* vqgraphicswidget = dynamic_cast<const VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        return static_cast<int>(vqgraphicswidget->windowFrameSectionAt(*pos));
    }
    qFatal("Error: Protected method QGraphicsWidget::windowFrameSectionAt called without a directly constructed type");
}

bool QGraphicsWidget_Event(QGraphicsWidget* self, QEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        return vqgraphicswidget->event(event);
    }
    qFatal("Error: Protected method QGraphicsWidget::event called without a directly constructed type");
}

void QGraphicsWidget_ChangeEvent(QGraphicsWidget* self, QEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->changeEvent(event);
    }
}

void QGraphicsWidget_CloseEvent(QGraphicsWidget* self, QCloseEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->closeEvent(event);
    }
}

void QGraphicsWidget_FocusInEvent(QGraphicsWidget* self, QFocusEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->focusInEvent(event);
    }
}

bool QGraphicsWidget_FocusNextPrevChild(QGraphicsWidget* self, bool next) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        return vqgraphicswidget->focusNextPrevChild(next);
    }
    qFatal("Error: Protected method QGraphicsWidget::focusNextPrevChild called without a directly constructed type");
}

void QGraphicsWidget_FocusOutEvent(QGraphicsWidget* self, QFocusEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->focusOutEvent(event);
    }
}

void QGraphicsWidget_HideEvent(QGraphicsWidget* self, QHideEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->hideEvent(event);
    }
}

void QGraphicsWidget_MoveEvent(QGraphicsWidget* self, QGraphicsSceneMoveEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->moveEvent(event);
    }
}

void QGraphicsWidget_PolishEvent(QGraphicsWidget* self) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->polishEvent();
    }
}

void QGraphicsWidget_ResizeEvent(QGraphicsWidget* self, QGraphicsSceneResizeEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->resizeEvent(event);
    }
}

void QGraphicsWidget_ShowEvent(QGraphicsWidget* self, QShowEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->showEvent(event);
    }
}

void QGraphicsWidget_HoverMoveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->hoverMoveEvent(event);
    }
}

void QGraphicsWidget_HoverLeaveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->hoverLeaveEvent(event);
    }
}

void QGraphicsWidget_GrabMouseEvent(QGraphicsWidget* self, QEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->grabMouseEvent(event);
    }
}

void QGraphicsWidget_UngrabMouseEvent(QGraphicsWidget* self, QEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->ungrabMouseEvent(event);
    }
}

void QGraphicsWidget_GrabKeyboardEvent(QGraphicsWidget* self, QEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->grabKeyboardEvent(event);
    }
}

void QGraphicsWidget_UngrabKeyboardEvent(QGraphicsWidget* self, QEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->ungrabKeyboardEvent(event);
    }
}

libqt_string QGraphicsWidget_Tr2(const char* s, const char* c) {
    auto _ret = QGraphicsWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGraphicsWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QGraphicsWidget_GrabShortcut2(QGraphicsWidget* self, const QKeySequence* sequence, int context) {
    return self->grabShortcut(*sequence, static_cast<Qt::ShortcutContext>(context));
}

void QGraphicsWidget_SetShortcutEnabled2(QGraphicsWidget* self, int id, bool enabled) {
    self->setShortcutEnabled(static_cast<int>(id), enabled);
}

void QGraphicsWidget_SetShortcutAutoRepeat2(QGraphicsWidget* self, int id, bool enabled) {
    self->setShortcutAutoRepeat(static_cast<int>(id), enabled);
}

void QGraphicsWidget_SetAttribute2(QGraphicsWidget* self, int attribute, bool on) {
    self->setAttribute(static_cast<Qt::WidgetAttribute>(attribute), on);
}

// Base class handler implementation
QMetaObject* QGraphicsWidget_SuperMetaObject(const QGraphicsWidget* self) {
    return (QMetaObject*)self->QGraphicsWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnMetaObject(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self)))
        vqgraphicswidget->qgraphicswidget_metaobject_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGraphicsWidget_SuperMetacast(QGraphicsWidget* self, const char* param1) {
    return self->QGraphicsWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnMetacast(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_metacast_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGraphicsWidget_SuperMetacall(QGraphicsWidget* self, int param1, int param2, void** param3) {
    return self->QGraphicsWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnMetacall(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_metacall_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperSetGeometry(QGraphicsWidget* self, const QRectF* rect) {
    self->QGraphicsWidget::setGeometry(*rect);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnSetGeometry(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_setgeometry_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_SetGeometry_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperGetContentsMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom) {
    self->QGraphicsWidget::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnGetContentsMargins(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self)))
        vqgraphicswidget->qgraphicswidget_getcontentsmargins_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_GetContentsMargins_Callback>(slot);
}

// Base class handler implementation
int QGraphicsWidget_SuperType(const QGraphicsWidget* self) {
    return self->QGraphicsWidget::type();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnType(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self)))
        vqgraphicswidget->qgraphicswidget_type_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Type_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperPaint(QGraphicsWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->QGraphicsWidget::paint(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnPaint(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_paint_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Paint_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperPaintWindowFrame(QGraphicsWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->QGraphicsWidget::paintWindowFrame(painter, option, widget);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnPaintWindowFrame(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_paintwindowframe_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_PaintWindowFrame_Callback>(slot);
}

// Base class handler implementation
QRectF* QGraphicsWidget_SuperBoundingRect(const QGraphicsWidget* self) {
    return new QRectF(self->QGraphicsWidget::boundingRect());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnBoundingRect(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self)))
        vqgraphicswidget->qgraphicswidget_boundingrect_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_BoundingRect_Callback>(slot);
}

// Base class handler implementation
QPainterPath* QGraphicsWidget_SuperShape(const QGraphicsWidget* self) {
    return new QPainterPath(self->QGraphicsWidget::shape());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnShape(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self)))
        vqgraphicswidget->qgraphicswidget_shape_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Shape_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperInitStyleOption(const QGraphicsWidget* self, QStyleOption* option) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->QGraphicsWidget::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnInitStyleOption(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self)))
        vqgraphicswidget->qgraphicswidget_initstyleoption_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_InitStyleOption_Callback>(slot);
}

// Base class handler implementation
QSizeF* QGraphicsWidget_SuperSizeHint(const QGraphicsWidget* self, int which, const QSizeF* constraint) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self)))
        return new QSizeF(vqgraphicswidget->QGraphicsWidget::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    qFatal("Error: Protected virtual method QGraphicsWidget::sizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnSizeHint(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self)))
        vqgraphicswidget->qgraphicswidget_sizehint_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_SizeHint_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperUpdateGeometry(QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::updateGeometry();
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::updateGeometry called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnUpdateGeometry(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_updategeometry_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_UpdateGeometry_Callback>(slot);
}

// Base class handler implementation
QVariant* QGraphicsWidget_SuperItemChange(QGraphicsWidget* self, int change, const QVariant* value) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        return new QVariant(vqgraphicswidget->QGraphicsWidget::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    qFatal("Error: Protected virtual method QGraphicsWidget::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnItemChange(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_itemchange_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_ItemChange_Callback>(slot);
}

// Base class handler implementation
QVariant* QGraphicsWidget_SuperPropertyChange(QGraphicsWidget* self, const libqt_string propertyName, const QVariant* value) {
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        return new QVariant(vqgraphicswidget->propertyChange(propertyName_QString, *value));
    qFatal("Error: Protected virtual method QGraphicsWidget::propertyChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnPropertyChange(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_propertychange_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_PropertyChange_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsWidget_SuperSceneEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        return vqgraphicswidget->QGraphicsWidget::sceneEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::sceneEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnSceneEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_sceneevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_SceneEvent_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsWidget_SuperWindowFrameEvent(QGraphicsWidget* self, QEvent* e) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        return vqgraphicswidget->QGraphicsWidget::windowFrameEvent(e);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::windowFrameEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnWindowFrameEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_windowframeevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_WindowFrameEvent_Callback>(slot);
}

// Base class handler implementation
int QGraphicsWidget_SuperWindowFrameSectionAt(const QGraphicsWidget* self, const QPointF* pos) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return static_cast<int>(vqgraphicswidget->QGraphicsWidget::windowFrameSectionAt(*pos));
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::windowFrameSectionAt called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnWindowFrameSectionAt(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self)))
        vqgraphicswidget->qgraphicswidget_windowframesectionat_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_WindowFrameSectionAt_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsWidget_SuperEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        return vqgraphicswidget->QGraphicsWidget::event(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_event_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Event_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperChangeEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnChangeEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_changeevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperCloseEvent(QGraphicsWidget* self, QCloseEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnCloseEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_closeevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_CloseEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperFocusInEvent(QGraphicsWidget* self, QFocusEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnFocusInEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_focusinevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
bool QGraphicsWidget_SuperFocusNextPrevChild(QGraphicsWidget* self, bool next) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        return vqgraphicswidget->QGraphicsWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnFocusNextPrevChild(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_focusnextprevchild_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_FocusNextPrevChild_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperFocusOutEvent(QGraphicsWidget* self, QFocusEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnFocusOutEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_focusoutevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperHideEvent(QGraphicsWidget* self, QHideEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnHideEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_hideevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_HideEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperMoveEvent(QGraphicsWidget* self, QGraphicsSceneMoveEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnMoveEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_moveevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_MoveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperPolishEvent(QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::polishEvent();
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::polishEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnPolishEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_polishevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_PolishEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperResizeEvent(QGraphicsWidget* self, QGraphicsSceneResizeEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnResizeEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_resizeevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperShowEvent(QGraphicsWidget* self, QShowEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnShowEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_showevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperHoverMoveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnHoverMoveEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_hovermoveevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_HoverMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperHoverLeaveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnHoverLeaveEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_hoverleaveevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_HoverLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperGrabMouseEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::grabMouseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::grabMouseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnGrabMouseEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_grabmouseevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_GrabMouseEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperUngrabMouseEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::ungrabMouseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::ungrabMouseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnUngrabMouseEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_ungrabmouseevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_UngrabMouseEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperGrabKeyboardEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::grabKeyboardEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::grabKeyboardEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnGrabKeyboardEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_grabkeyboardevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_GrabKeyboardEvent_Callback>(slot);
}

// Base class handler implementation
void QGraphicsWidget_SuperUngrabKeyboardEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::ungrabKeyboardEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::ungrabKeyboardEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnUngrabKeyboardEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_ungrabkeyboardevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_UngrabKeyboardEvent_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsWidget_EventFilter(QGraphicsWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGraphicsWidget_SuperEventFilter(QGraphicsWidget* self, QObject* watched, QEvent* event) {
    return self->QGraphicsWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnEventFilter(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_eventfilter_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_TimerEvent(QGraphicsWidget* self, QTimerEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsWidget_SuperTimerEvent(QGraphicsWidget* self, QTimerEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnTimerEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_timerevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_ChildEvent(QGraphicsWidget* self, QChildEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsWidget_SuperChildEvent(QGraphicsWidget* self, QChildEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnChildEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_childevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_CustomEvent(QGraphicsWidget* self, QEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsWidget_SuperCustomEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnCustomEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_customevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_ConnectNotify(QGraphicsWidget* self, const QMetaMethod* signal) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsWidget_SuperConnectNotify(QGraphicsWidget* self, const QMetaMethod* signal) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnConnectNotify(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_connectnotify_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_DisconnectNotify(QGraphicsWidget* self, const QMetaMethod* signal) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsWidget_SuperDisconnectNotify(QGraphicsWidget* self, const QMetaMethod* signal) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnDisconnectNotify(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_disconnectnotify_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_Advance(QGraphicsWidget* self, int phase) {
    self->advance(static_cast<int>(phase));
}

// Base class handler implementation
void QGraphicsWidget_SuperAdvance(QGraphicsWidget* self, int phase) {
    self->QGraphicsWidget::advance(static_cast<int>(phase));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnAdvance(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_advance_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Advance_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsWidget_Contains(const QGraphicsWidget* self, const QPointF* point) {
    return self->contains(*point);
}

// Base class handler implementation
bool QGraphicsWidget_SuperContains(const QGraphicsWidget* self, const QPointF* point) {
    return self->QGraphicsWidget::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnContains(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self)))
        vqgraphicswidget->qgraphicswidget_contains_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Contains_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsWidget_CollidesWithItem(const QGraphicsWidget* self, const QGraphicsItem* other, int mode) {
    return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsWidget_SuperCollidesWithItem(const QGraphicsWidget* self, const QGraphicsItem* other, int mode) {
    return self->QGraphicsWidget::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnCollidesWithItem(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self)))
        vqgraphicswidget->qgraphicswidget_collideswithitem_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_CollidesWithItem_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsWidget_CollidesWithPath(const QGraphicsWidget* self, const QPainterPath* path, int mode) {
    return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Base class handler implementation
bool QGraphicsWidget_SuperCollidesWithPath(const QGraphicsWidget* self, const QPainterPath* path, int mode) {
    return self->QGraphicsWidget::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnCollidesWithPath(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self)))
        vqgraphicswidget->qgraphicswidget_collideswithpath_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_CollidesWithPath_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsWidget_IsObscuredBy(const QGraphicsWidget* self, const QGraphicsItem* item) {
    return self->isObscuredBy(item);
}

// Base class handler implementation
bool QGraphicsWidget_SuperIsObscuredBy(const QGraphicsWidget* self, const QGraphicsItem* item) {
    return self->QGraphicsWidget::isObscuredBy(item);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnIsObscuredBy(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self)))
        vqgraphicswidget->qgraphicswidget_isobscuredby_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_IsObscuredBy_Callback>(slot);
}

// Derived class handler implementation
QPainterPath* QGraphicsWidget_OpaqueArea(const QGraphicsWidget* self) {
    return new QPainterPath(self->opaqueArea());
}

// Base class handler implementation
QPainterPath* QGraphicsWidget_SuperOpaqueArea(const QGraphicsWidget* self) {
    return new QPainterPath(self->QGraphicsWidget::opaqueArea());
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnOpaqueArea(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self)))
        vqgraphicswidget->qgraphicswidget_opaquearea_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_OpaqueArea_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsWidget_SceneEventFilter(QGraphicsWidget* self, QGraphicsItem* watched, QEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        return vqgraphicswidget->sceneEventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::sceneEventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsWidget_SuperSceneEventFilter(QGraphicsWidget* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        return vqgraphicswidget->QGraphicsWidget::sceneEventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::sceneEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnSceneEventFilter(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_sceneeventfilter_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_SceneEventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_ContextMenuEvent(QGraphicsWidget* self, QGraphicsSceneContextMenuEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsWidget_SuperContextMenuEvent(QGraphicsWidget* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnContextMenuEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_contextmenuevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_DragEnterEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsWidget_SuperDragEnterEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnDragEnterEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_dragenterevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_DragLeaveEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsWidget_SuperDragLeaveEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnDragLeaveEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_dragleaveevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_DragMoveEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsWidget_SuperDragMoveEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnDragMoveEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_dragmoveevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_DropEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsWidget_SuperDropEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnDropEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_dropevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_HoverEnterEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->hoverEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::hoverEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsWidget_SuperHoverEnterEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnHoverEnterEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_hoverenterevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_HoverEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_KeyPressEvent(QGraphicsWidget* self, QKeyEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsWidget_SuperKeyPressEvent(QGraphicsWidget* self, QKeyEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnKeyPressEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_keypressevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_KeyReleaseEvent(QGraphicsWidget* self, QKeyEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsWidget_SuperKeyReleaseEvent(QGraphicsWidget* self, QKeyEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnKeyReleaseEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_keyreleaseevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_MousePressEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsWidget_SuperMousePressEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnMousePressEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_mousepressevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_MouseMoveEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsWidget_SuperMouseMoveEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnMouseMoveEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_mousemoveevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_MouseReleaseEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsWidget_SuperMouseReleaseEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnMouseReleaseEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_mousereleaseevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_MouseDoubleClickEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsWidget_SuperMouseDoubleClickEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnMouseDoubleClickEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_WheelEvent(QGraphicsWidget* self, QGraphicsSceneWheelEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsWidget_SuperWheelEvent(QGraphicsWidget* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnWheelEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_wheelevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_InputMethodEvent(QGraphicsWidget* self, QInputMethodEvent* event) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsWidget_SuperInputMethodEvent(QGraphicsWidget* self, QInputMethodEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnInputMethodEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_inputmethodevent_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsWidget_InputMethodQuery(const QGraphicsWidget* self, int query) {
    return new QVariant((self->*&VirtualQGraphicsWidget::Base::inputMethodQuery)(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QGraphicsWidget_SuperInputMethodQuery(const QGraphicsWidget* self, int query) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self)))
        return new QVariant(vqgraphicswidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    qFatal("Error: Protected virtual method QGraphicsWidget::inputMethodQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnInputMethodQuery(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self)))
        vqgraphicswidget->qgraphicswidget_inputmethodquery_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsWidget_SupportsExtension(const QGraphicsWidget* self, int extension) {
    auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self));
    if (vqgraphicswidget) {
        return vqgraphicswidget->supportsExtension(static_cast<VirtualQGraphicsWidget::Extension>(extension));
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::supportsExtension called without a directly constructed type");
    }
}

// Base class handler implementation
bool QGraphicsWidget_SuperSupportsExtension(const QGraphicsWidget* self, int extension) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return vqgraphicswidget->QGraphicsWidget::supportsExtension(static_cast<VirtualQGraphicsWidget::Extension>(extension));
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::supportsExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnSupportsExtension(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self)))
        vqgraphicswidget->qgraphicswidget_supportsextension_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_SupportsExtension_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsWidget_SetExtension(QGraphicsWidget* self, int extension, const QVariant* variant) {
    auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
    if (vqgraphicswidget) {
        vqgraphicswidget->setExtension(static_cast<VirtualQGraphicsWidget::Extension>(extension), *variant);
    } else {
        qFatal("Error: Protected virtual method QGraphicsWidget::setExtension called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsWidget_SuperSetExtension(QGraphicsWidget* self, int extension, const QVariant* variant) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->QGraphicsWidget::setExtension(static_cast<VirtualQGraphicsWidget::Extension>(extension), *variant);
    } else
        qFatal("Error: Protected virtual method QGraphicsWidget::setExtension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnSetExtension(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self))
        vqgraphicswidget->qgraphicswidget_setextension_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_SetExtension_Callback>(slot);
}

// Derived class handler implementation
QVariant* QGraphicsWidget_Extension(const QGraphicsWidget* self, const QVariant* variant) {
    return new QVariant((self->*&VirtualQGraphicsWidget::Base::extension)(*variant));
}

// Base class handler implementation
QVariant* QGraphicsWidget_SuperExtension(const QGraphicsWidget* self, const QVariant* variant) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self)))
        return new QVariant(vqgraphicswidget->extension(*variant));
    qFatal("Error: Protected virtual method QGraphicsWidget::extension called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnExtension(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self)))
        vqgraphicswidget->qgraphicswidget_extension_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Extension_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsWidget_IsEmpty(const QGraphicsWidget* self) {
    return self->isEmpty();
}

// Base class handler implementation
bool QGraphicsWidget_SuperIsEmpty(const QGraphicsWidget* self) {
    return self->QGraphicsWidget::isEmpty();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnIsEmpty(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self)))
        vqgraphicswidget->qgraphicswidget_isempty_callback = reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_IsEmpty_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsWidget_UpdateMicroFocus(QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->VirtualQGraphicsWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method QGraphicsWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGraphicsWidget_Sender(const QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return vqgraphicswidget->VirtualQGraphicsWidget::sender();
    } else
        qFatal("Error: Protected method QGraphicsWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsWidget_SenderSignalIndex(const QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return vqgraphicswidget->VirtualQGraphicsWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGraphicsWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsWidget_Receivers(const QGraphicsWidget* self, const char* signal) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return vqgraphicswidget->VirtualQGraphicsWidget::receivers(signal);
    } else
        qFatal("Error: Protected method QGraphicsWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsWidget_IsSignalConnected(const QGraphicsWidget* self, const QMetaMethod* signal) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return vqgraphicswidget->VirtualQGraphicsWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGraphicsWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsWidget_AddToIndex(QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->VirtualQGraphicsWidget::addToIndex();
    } else
        qFatal("Error: Protected method QGraphicsWidget::addToIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsWidget_RemoveFromIndex(QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->VirtualQGraphicsWidget::removeFromIndex();
    } else
        qFatal("Error: Protected method QGraphicsWidget::removeFromIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsWidget_PrepareGeometryChange(QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->VirtualQGraphicsWidget::prepareGeometryChange();
    } else
        qFatal("Error: Protected method QGraphicsWidget::prepareGeometryChange called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsWidget_SetGraphicsItem(QGraphicsWidget* self, QGraphicsItem* item) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->VirtualQGraphicsWidget::setGraphicsItem(item);
    } else
        qFatal("Error: Protected method QGraphicsWidget::setGraphicsItem called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsWidget_SetOwnedByLayout(QGraphicsWidget* self, bool ownedByLayout) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->VirtualQGraphicsWidget::setOwnedByLayout(ownedByLayout);
    } else
        qFatal("Error: Protected method QGraphicsWidget::setOwnedByLayout called without a directly constructed type");
}

void QGraphicsWidget_Delete(QGraphicsWidget* self) {
    delete self;
}
