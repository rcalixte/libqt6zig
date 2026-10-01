#include <QAction>
#include <QActionEvent>
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
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionToolBar>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QToolBar>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtoolbar.h>
#include "libqtoolbar.h"
#include "libqtoolbar.hxx"

QToolBar* QToolBar_new(QWidget* parent) {
    return new VirtualQToolBar(parent);
}

QToolBar* QToolBar_new2(const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualQToolBar(title_QString);
}

QToolBar* QToolBar_new3() {
    return new VirtualQToolBar();
}

QToolBar* QToolBar_new4(const libqt_string title, QWidget* parent) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualQToolBar(title_QString, parent);
}

QMetaObject* QToolBar_MetaObject(const QToolBar* self) {
    return (QMetaObject*)self->metaObject();
}

void* QToolBar_Metacast(QToolBar* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QToolBar_Metacall(QToolBar* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QToolBar_Tr(const char* s) {
    auto _ret = QToolBar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QToolBar_SetMovable(QToolBar* self, bool movable) {
    self->setMovable(movable);
}

bool QToolBar_IsMovable(const QToolBar* self) {
    return self->isMovable();
}

void QToolBar_SetAllowedAreas(QToolBar* self, int areas) {
    self->setAllowedAreas(static_cast<Qt::ToolBarAreas>(areas));
}

int QToolBar_AllowedAreas(const QToolBar* self) {
    return static_cast<int>(self->allowedAreas());
}

bool QToolBar_IsAreaAllowed(const QToolBar* self, int area) {
    return self->isAreaAllowed(static_cast<Qt::ToolBarArea>(area));
}

void QToolBar_SetOrientation(QToolBar* self, int orientation) {
    self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QToolBar_Orientation(const QToolBar* self) {
    return static_cast<int>(self->orientation());
}

void QToolBar_Clear(QToolBar* self) {
    self->clear();
}

QAction* QToolBar_AddSeparator(QToolBar* self) {
    return self->addSeparator();
}

QAction* QToolBar_InsertSeparator(QToolBar* self, QAction* before) {
    return self->insertSeparator(before);
}

QAction* QToolBar_AddWidget(QToolBar* self, QWidget* widget) {
    return self->addWidget(widget);
}

QAction* QToolBar_InsertWidget(QToolBar* self, QAction* before, QWidget* widget) {
    return self->insertWidget(before, widget);
}

QRect* QToolBar_ActionGeometry(const QToolBar* self, QAction* action) {
    return new QRect(self->actionGeometry(action));
}

QAction* QToolBar_ActionAt(const QToolBar* self, const QPoint* p) {
    return self->actionAt(*p);
}

QAction* QToolBar_ActionAt2(const QToolBar* self, int x, int y) {
    return self->actionAt(static_cast<int>(x), static_cast<int>(y));
}

QAction* QToolBar_ToggleViewAction(const QToolBar* self) {
    return self->toggleViewAction();
}

QSize* QToolBar_IconSize(const QToolBar* self) {
    return new QSize(self->iconSize());
}

int QToolBar_ToolButtonStyle(const QToolBar* self) {
    return static_cast<int>(self->toolButtonStyle());
}

QWidget* QToolBar_WidgetForAction(const QToolBar* self, QAction* action) {
    return self->widgetForAction(action);
}

bool QToolBar_IsFloatable(const QToolBar* self) {
    return self->isFloatable();
}

void QToolBar_SetFloatable(QToolBar* self, bool floatable) {
    self->setFloatable(floatable);
}

bool QToolBar_IsFloating(const QToolBar* self) {
    return self->isFloating();
}

void QToolBar_SetIconSize(QToolBar* self, const QSize* iconSize) {
    self->setIconSize(*iconSize);
}

void QToolBar_SetToolButtonStyle(QToolBar* self, int toolButtonStyle) {
    self->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

void QToolBar_ActionTriggered(QToolBar* self, QAction* action) {
    self->actionTriggered(action);
}

void QToolBar_Connect_ActionTriggered(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, QAction*) = reinterpret_cast<void (*)(QToolBar*, QAction*)>(slot);
    QToolBar::connect(self,
                      static_cast<void (QToolBar::*)(QAction*)>(&QToolBar::actionTriggered),
                      [self, slotFunc](QAction* action) {
                          QAction* sigval1 = action;
                          slotFunc(self, sigval1);
                      });
}

void QToolBar_MovableChanged(QToolBar* self, bool movable) {
    self->movableChanged(movable);
}

void QToolBar_Connect_MovableChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, bool) = reinterpret_cast<void (*)(QToolBar*, bool)>(slot);
    QToolBar::connect(self,
                      static_cast<void (QToolBar::*)(bool)>(&QToolBar::movableChanged),
                      [self, slotFunc](bool movable) {
                          bool sigval1 = movable;
                          slotFunc(self, sigval1);
                      });
}

void QToolBar_AllowedAreasChanged(QToolBar* self, int allowedAreas) {
    self->allowedAreasChanged(static_cast<Qt::ToolBarAreas>(allowedAreas));
}

void QToolBar_Connect_AllowedAreasChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, int) = reinterpret_cast<void (*)(QToolBar*, int)>(slot);
    QToolBar::connect(self,
                      static_cast<void (QToolBar::*)(Qt::ToolBarAreas)>(&QToolBar::allowedAreasChanged),
                      [self, slotFunc](Qt::ToolBarAreas allowedAreas) {
                          int sigval1 = static_cast<int>(allowedAreas);
                          slotFunc(self, sigval1);
                      });
}

void QToolBar_OrientationChanged(QToolBar* self, int orientation) {
    self->orientationChanged(static_cast<Qt::Orientation>(orientation));
}

void QToolBar_Connect_OrientationChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, int) = reinterpret_cast<void (*)(QToolBar*, int)>(slot);
    QToolBar::connect(self,
                      static_cast<void (QToolBar::*)(Qt::Orientation)>(&QToolBar::orientationChanged),
                      [self, slotFunc](Qt::Orientation orientation) {
                          int sigval1 = static_cast<int>(orientation);
                          slotFunc(self, sigval1);
                      });
}

void QToolBar_IconSizeChanged(QToolBar* self, const QSize* iconSize) {
    self->iconSizeChanged(*iconSize);
}

void QToolBar_Connect_IconSizeChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, QSize*) = reinterpret_cast<void (*)(QToolBar*, QSize*)>(slot);
    QToolBar::connect(self,
                      static_cast<void (QToolBar::*)(const QSize&)>(&QToolBar::iconSizeChanged),
                      [self, slotFunc](const QSize& iconSize) {
                          const QSize& iconSize_ret = iconSize;
                          // Cast returned reference into pointer
                          QSize* sigval1 = const_cast<QSize*>(&iconSize_ret);
                          slotFunc(self, sigval1);
                      });
}

void QToolBar_ToolButtonStyleChanged(QToolBar* self, int toolButtonStyle) {
    self->toolButtonStyleChanged(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

void QToolBar_Connect_ToolButtonStyleChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, int) = reinterpret_cast<void (*)(QToolBar*, int)>(slot);
    QToolBar::connect(self,
                      static_cast<void (QToolBar::*)(Qt::ToolButtonStyle)>(&QToolBar::toolButtonStyleChanged),
                      [self, slotFunc](Qt::ToolButtonStyle toolButtonStyle) {
                          int sigval1 = static_cast<int>(toolButtonStyle);
                          slotFunc(self, sigval1);
                      });
}

void QToolBar_TopLevelChanged(QToolBar* self, bool topLevel) {
    self->topLevelChanged(topLevel);
}

void QToolBar_Connect_TopLevelChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, bool) = reinterpret_cast<void (*)(QToolBar*, bool)>(slot);
    QToolBar::connect(self,
                      static_cast<void (QToolBar::*)(bool)>(&QToolBar::topLevelChanged),
                      [self, slotFunc](bool topLevel) {
                          bool sigval1 = topLevel;
                          slotFunc(self, sigval1);
                      });
}

void QToolBar_VisibilityChanged(QToolBar* self, bool visible) {
    self->visibilityChanged(visible);
}

void QToolBar_Connect_VisibilityChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, bool) = reinterpret_cast<void (*)(QToolBar*, bool)>(slot);
    QToolBar::connect(self,
                      static_cast<void (QToolBar::*)(bool)>(&QToolBar::visibilityChanged),
                      [self, slotFunc](bool visible) {
                          bool sigval1 = visible;
                          slotFunc(self, sigval1);
                      });
}

void QToolBar_ActionEvent(QToolBar* self, QActionEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->actionEvent(event);
    }
}

void QToolBar_ChangeEvent(QToolBar* self, QEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->changeEvent(event);
    }
}

void QToolBar_PaintEvent(QToolBar* self, QPaintEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->paintEvent(event);
    }
}

bool QToolBar_Event(QToolBar* self, QEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        return vqtoolbar->event(event);
    }
    qFatal("Error: Protected method QToolBar::event called without a directly constructed type");
}

void QToolBar_InitStyleOption(const QToolBar* self, QStyleOptionToolBar* option) {
    auto* vqtoolbar = dynamic_cast<const VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->initStyleOption(option);
    }
}

libqt_string QToolBar_Tr2(const char* s, const char* c) {
    auto _ret = QToolBar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QToolBar_Tr3(const char* s, const char* c, int n) {
    auto _ret = QToolBar::tr(s, c, static_cast<int>(n));
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
QMetaObject* QToolBar_SuperMetaObject(const QToolBar* self) {
    return (QMetaObject*)self->QToolBar::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnMetaObject(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self)))
        vqtoolbar->qtoolbar_metaobject_callback = reinterpret_cast<VirtualQToolBar::QToolBar_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QToolBar_SuperMetacast(QToolBar* self, const char* param1) {
    return self->QToolBar::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnMetacast(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_metacast_callback = reinterpret_cast<VirtualQToolBar::QToolBar_Metacast_Callback>(slot);
}

// Base class handler implementation
int QToolBar_SuperMetacall(QToolBar* self, int param1, int param2, void** param3) {
    return self->QToolBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnMetacall(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_metacall_callback = reinterpret_cast<VirtualQToolBar::QToolBar_Metacall_Callback>(slot);
}

// Base class handler implementation
void QToolBar_SuperActionEvent(QToolBar* self, QActionEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnActionEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_actionevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_ActionEvent_Callback>(slot);
}

// Base class handler implementation
void QToolBar_SuperChangeEvent(QToolBar* self, QEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnChangeEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_changeevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QToolBar_SuperPaintEvent(QToolBar* self, QPaintEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnPaintEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_paintevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_PaintEvent_Callback>(slot);
}

// Base class handler implementation
bool QToolBar_SuperEvent(QToolBar* self, QEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        return vqtoolbar->QToolBar::event(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_event_callback = reinterpret_cast<VirtualQToolBar::QToolBar_Event_Callback>(slot);
}

// Base class handler implementation
void QToolBar_SuperInitStyleOption(const QToolBar* self, QStyleOptionToolBar* option) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->QToolBar::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QToolBar::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnInitStyleOption(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self)))
        vqtoolbar->qtoolbar_initstyleoption_callback = reinterpret_cast<VirtualQToolBar::QToolBar_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QToolBar_DevType(const QToolBar* self) {
    return self->devType();
}

// Base class handler implementation
int QToolBar_SuperDevType(const QToolBar* self) {
    return self->QToolBar::devType();
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnDevType(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self)))
        vqtoolbar->qtoolbar_devtype_callback = reinterpret_cast<VirtualQToolBar::QToolBar_DevType_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_SetVisible(QToolBar* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QToolBar_SuperSetVisible(QToolBar* self, bool visible) {
    self->QToolBar::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnSetVisible(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_setvisible_callback = reinterpret_cast<VirtualQToolBar::QToolBar_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QToolBar_SizeHint(const QToolBar* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QToolBar_SuperSizeHint(const QToolBar* self) {
    return new QSize(self->QToolBar::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnSizeHint(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self)))
        vqtoolbar->qtoolbar_sizehint_callback = reinterpret_cast<VirtualQToolBar::QToolBar_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QToolBar_MinimumSizeHint(const QToolBar* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QToolBar_SuperMinimumSizeHint(const QToolBar* self) {
    return new QSize(self->QToolBar::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnMinimumSizeHint(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self)))
        vqtoolbar->qtoolbar_minimumsizehint_callback = reinterpret_cast<VirtualQToolBar::QToolBar_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QToolBar_HeightForWidth(const QToolBar* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QToolBar_SuperHeightForWidth(const QToolBar* self, int param1) {
    return self->QToolBar::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnHeightForWidth(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self)))
        vqtoolbar->qtoolbar_heightforwidth_callback = reinterpret_cast<VirtualQToolBar::QToolBar_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QToolBar_HasHeightForWidth(const QToolBar* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QToolBar_SuperHasHeightForWidth(const QToolBar* self) {
    return self->QToolBar::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnHasHeightForWidth(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self)))
        vqtoolbar->qtoolbar_hasheightforwidth_callback = reinterpret_cast<VirtualQToolBar::QToolBar_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QToolBar_PaintEngine(const QToolBar* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QToolBar_SuperPaintEngine(const QToolBar* self) {
    return self->QToolBar::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnPaintEngine(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self)))
        vqtoolbar->qtoolbar_paintengine_callback = reinterpret_cast<VirtualQToolBar::QToolBar_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_MousePressEvent(QToolBar* self, QMouseEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperMousePressEvent(QToolBar* self, QMouseEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnMousePressEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_mousepressevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_MouseReleaseEvent(QToolBar* self, QMouseEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperMouseReleaseEvent(QToolBar* self, QMouseEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnMouseReleaseEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_mousereleaseevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_MouseDoubleClickEvent(QToolBar* self, QMouseEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperMouseDoubleClickEvent(QToolBar* self, QMouseEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnMouseDoubleClickEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_mousedoubleclickevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_MouseMoveEvent(QToolBar* self, QMouseEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperMouseMoveEvent(QToolBar* self, QMouseEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnMouseMoveEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_mousemoveevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_WheelEvent(QToolBar* self, QWheelEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperWheelEvent(QToolBar* self, QWheelEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnWheelEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_wheelevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_KeyPressEvent(QToolBar* self, QKeyEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperKeyPressEvent(QToolBar* self, QKeyEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnKeyPressEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_keypressevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_KeyReleaseEvent(QToolBar* self, QKeyEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperKeyReleaseEvent(QToolBar* self, QKeyEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnKeyReleaseEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_keyreleaseevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_FocusInEvent(QToolBar* self, QFocusEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperFocusInEvent(QToolBar* self, QFocusEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnFocusInEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_focusinevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_FocusOutEvent(QToolBar* self, QFocusEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperFocusOutEvent(QToolBar* self, QFocusEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnFocusOutEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_focusoutevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_EnterEvent(QToolBar* self, QEnterEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperEnterEvent(QToolBar* self, QEnterEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnEnterEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_enterevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_LeaveEvent(QToolBar* self, QEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperLeaveEvent(QToolBar* self, QEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnLeaveEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_leaveevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_MoveEvent(QToolBar* self, QMoveEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperMoveEvent(QToolBar* self, QMoveEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnMoveEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_moveevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_ResizeEvent(QToolBar* self, QResizeEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperResizeEvent(QToolBar* self, QResizeEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnResizeEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_resizeevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_CloseEvent(QToolBar* self, QCloseEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperCloseEvent(QToolBar* self, QCloseEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnCloseEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_closeevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_ContextMenuEvent(QToolBar* self, QContextMenuEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperContextMenuEvent(QToolBar* self, QContextMenuEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnContextMenuEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_contextmenuevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_TabletEvent(QToolBar* self, QTabletEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperTabletEvent(QToolBar* self, QTabletEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnTabletEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_tabletevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_DragEnterEvent(QToolBar* self, QDragEnterEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperDragEnterEvent(QToolBar* self, QDragEnterEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnDragEnterEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_dragenterevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_DragMoveEvent(QToolBar* self, QDragMoveEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperDragMoveEvent(QToolBar* self, QDragMoveEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnDragMoveEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_dragmoveevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_DragLeaveEvent(QToolBar* self, QDragLeaveEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperDragLeaveEvent(QToolBar* self, QDragLeaveEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnDragLeaveEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_dragleaveevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_DropEvent(QToolBar* self, QDropEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperDropEvent(QToolBar* self, QDropEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnDropEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_dropevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_ShowEvent(QToolBar* self, QShowEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperShowEvent(QToolBar* self, QShowEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnShowEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_showevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_HideEvent(QToolBar* self, QHideEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperHideEvent(QToolBar* self, QHideEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnHideEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_hideevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QToolBar_NativeEvent(QToolBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        return vqtoolbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QToolBar::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QToolBar_SuperNativeEvent(QToolBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        return vqtoolbar->QToolBar::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QToolBar::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnNativeEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_nativeevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QToolBar_Metric(const QToolBar* self, int param1) {
    auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self));
    if (vqtoolbar) {
        return vqtoolbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QToolBar::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QToolBar_SuperMetric(const QToolBar* self, int param1) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return vqtoolbar->QToolBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QToolBar::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnMetric(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self)))
        vqtoolbar->qtoolbar_metric_callback = reinterpret_cast<VirtualQToolBar::QToolBar_Metric_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_InitPainter(const QToolBar* self, QPainter* painter) {
    auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self));
    if (vqtoolbar) {
        vqtoolbar->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QToolBar::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperInitPainter(const QToolBar* self, QPainter* painter) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->QToolBar::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QToolBar::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnInitPainter(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self)))
        vqtoolbar->qtoolbar_initpainter_callback = reinterpret_cast<VirtualQToolBar::QToolBar_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QToolBar_Redirected(const QToolBar* self, QPoint* offset) {
    auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self));
    if (vqtoolbar) {
        return vqtoolbar->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QToolBar::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QToolBar_SuperRedirected(const QToolBar* self, QPoint* offset) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return vqtoolbar->QToolBar::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QToolBar::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnRedirected(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self)))
        vqtoolbar->qtoolbar_redirected_callback = reinterpret_cast<VirtualQToolBar::QToolBar_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QToolBar_SharedPainter(const QToolBar* self) {
    auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self));
    if (vqtoolbar) {
        return vqtoolbar->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QToolBar::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QToolBar_SuperSharedPainter(const QToolBar* self) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return vqtoolbar->QToolBar::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QToolBar::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnSharedPainter(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self)))
        vqtoolbar->qtoolbar_sharedpainter_callback = reinterpret_cast<VirtualQToolBar::QToolBar_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_InputMethodEvent(QToolBar* self, QInputMethodEvent* param1) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QToolBar::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperInputMethodEvent(QToolBar* self, QInputMethodEvent* param1) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QToolBar::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnInputMethodEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_inputmethodevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QToolBar_InputMethodQuery(const QToolBar* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QToolBar_SuperInputMethodQuery(const QToolBar* self, int param1) {
    return new QVariant(self->QToolBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnInputMethodQuery(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self)))
        vqtoolbar->qtoolbar_inputmethodquery_callback = reinterpret_cast<VirtualQToolBar::QToolBar_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QToolBar_FocusNextPrevChild(QToolBar* self, bool next) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        return vqtoolbar->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QToolBar::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QToolBar_SuperFocusNextPrevChild(QToolBar* self, bool next) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        return vqtoolbar->QToolBar::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QToolBar::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnFocusNextPrevChild(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_focusnextprevchild_callback = reinterpret_cast<VirtualQToolBar::QToolBar_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QToolBar_EventFilter(QToolBar* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QToolBar_SuperEventFilter(QToolBar* self, QObject* watched, QEvent* event) {
    return self->QToolBar::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnEventFilter(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_eventfilter_callback = reinterpret_cast<VirtualQToolBar::QToolBar_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_TimerEvent(QToolBar* self, QTimerEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperTimerEvent(QToolBar* self, QTimerEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnTimerEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_timerevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_ChildEvent(QToolBar* self, QChildEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperChildEvent(QToolBar* self, QChildEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnChildEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_childevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_CustomEvent(QToolBar* self, QEvent* event) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolBar::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperCustomEvent(QToolBar* self, QEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolBar::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnCustomEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_customevent_callback = reinterpret_cast<VirtualQToolBar::QToolBar_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_ConnectNotify(QToolBar* self, const QMetaMethod* signal) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QToolBar::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperConnectNotify(QToolBar* self, const QMetaMethod* signal) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QToolBar::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnConnectNotify(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_connectnotify_callback = reinterpret_cast<VirtualQToolBar::QToolBar_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QToolBar_DisconnectNotify(QToolBar* self, const QMetaMethod* signal) {
    auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self);
    if (vqtoolbar) {
        vqtoolbar->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QToolBar::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolBar_SuperDisconnectNotify(QToolBar* self, const QMetaMethod* signal) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->QToolBar::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QToolBar::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnDisconnectNotify(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self))
        vqtoolbar->qtoolbar_disconnectnotify_callback = reinterpret_cast<VirtualQToolBar::QToolBar_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QToolBar_UpdateMicroFocus(QToolBar* self) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->VirtualQToolBar::updateMicroFocus();
    } else
        qFatal("Error: Protected method QToolBar::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QToolBar_Create(QToolBar* self) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->VirtualQToolBar::create();
    } else
        qFatal("Error: Protected method QToolBar::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QToolBar_Destroy(QToolBar* self) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->VirtualQToolBar::destroy();
    } else
        qFatal("Error: Protected method QToolBar::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QToolBar_FocusNextChild(QToolBar* self) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        return vqtoolbar->VirtualQToolBar::focusNextChild();
    } else
        qFatal("Error: Protected method QToolBar::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QToolBar_FocusPreviousChild(QToolBar* self) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        return vqtoolbar->VirtualQToolBar::focusPreviousChild();
    } else
        qFatal("Error: Protected method QToolBar::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QToolBar_Sender(const QToolBar* self) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return vqtoolbar->VirtualQToolBar::sender();
    } else
        qFatal("Error: Protected method QToolBar::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QToolBar_SenderSignalIndex(const QToolBar* self) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return vqtoolbar->VirtualQToolBar::senderSignalIndex();
    } else
        qFatal("Error: Protected method QToolBar::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QToolBar_Receivers(const QToolBar* self, const char* signal) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return vqtoolbar->VirtualQToolBar::receivers(signal);
    } else
        qFatal("Error: Protected method QToolBar::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QToolBar_IsSignalConnected(const QToolBar* self, const QMetaMethod* signal) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return vqtoolbar->VirtualQToolBar::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QToolBar::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QToolBar_GetDecodedMetricF(const QToolBar* self, int metricA, int metricB) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return vqtoolbar->VirtualQToolBar::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QToolBar::getDecodedMetricF called without a directly constructed type");
}

void QToolBar_Delete(QToolBar* self) {
    delete self;
}
