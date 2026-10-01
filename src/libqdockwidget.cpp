#include <QAction>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDockWidget>
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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionDockWidget>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qdockwidget.h>
#include "libqdockwidget.h"
#include "libqdockwidget.hxx"

QDockWidget* QDockWidget_new(QWidget* parent) {
    return new VirtualQDockWidget(parent);
}

QDockWidget* QDockWidget_new2(const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualQDockWidget(title_QString);
}

QDockWidget* QDockWidget_new3() {
    return new VirtualQDockWidget();
}

QDockWidget* QDockWidget_new4(const libqt_string title, QWidget* parent) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualQDockWidget(title_QString, parent);
}

QDockWidget* QDockWidget_new5(const libqt_string title, QWidget* parent, int flags) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualQDockWidget(title_QString, parent, static_cast<Qt::WindowFlags>(flags));
}

QDockWidget* QDockWidget_new6(QWidget* parent, int flags) {
    return new VirtualQDockWidget(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QDockWidget_MetaObject(const QDockWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDockWidget_Metacast(QDockWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDockWidget_Metacall(QDockWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDockWidget_Tr(const char* s) {
    auto _ret = QDockWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QWidget* QDockWidget_Widget(const QDockWidget* self) {
    return self->widget();
}

void QDockWidget_SetWidget(QDockWidget* self, QWidget* widget) {
    self->setWidget(widget);
}

void QDockWidget_SetFeatures(QDockWidget* self, int features) {
    self->setFeatures(static_cast<QDockWidget::DockWidgetFeatures>(features));
}

int QDockWidget_Features(const QDockWidget* self) {
    return static_cast<int>(self->features());
}

void QDockWidget_SetFloating(QDockWidget* self, bool floating) {
    self->setFloating(floating);
}

bool QDockWidget_IsFloating(const QDockWidget* self) {
    return self->isFloating();
}

void QDockWidget_SetAllowedAreas(QDockWidget* self, int areas) {
    self->setAllowedAreas(static_cast<Qt::DockWidgetAreas>(areas));
}

int QDockWidget_AllowedAreas(const QDockWidget* self) {
    return static_cast<int>(self->allowedAreas());
}

void QDockWidget_SetTitleBarWidget(QDockWidget* self, QWidget* widget) {
    self->setTitleBarWidget(widget);
}

QWidget* QDockWidget_TitleBarWidget(const QDockWidget* self) {
    return self->titleBarWidget();
}

bool QDockWidget_IsAreaAllowed(const QDockWidget* self, int area) {
    return self->isAreaAllowed(static_cast<Qt::DockWidgetArea>(area));
}

QAction* QDockWidget_ToggleViewAction(const QDockWidget* self) {
    return self->toggleViewAction();
}

void QDockWidget_FeaturesChanged(QDockWidget* self, int features) {
    self->featuresChanged(static_cast<QDockWidget::DockWidgetFeatures>(features));
}

void QDockWidget_Connect_FeaturesChanged(QDockWidget* self, intptr_t slot) {
    void (*slotFunc)(QDockWidget*, int) = reinterpret_cast<void (*)(QDockWidget*, int)>(slot);
    QDockWidget::connect(self,
                         static_cast<void (QDockWidget::*)(QDockWidget::DockWidgetFeatures)>(&QDockWidget::featuresChanged),
                         [self, slotFunc](QDockWidget::DockWidgetFeatures features) {
                             int sigval1 = static_cast<int>(features);
                             slotFunc(self, sigval1);
                         });
}

void QDockWidget_TopLevelChanged(QDockWidget* self, bool topLevel) {
    self->topLevelChanged(topLevel);
}

void QDockWidget_Connect_TopLevelChanged(QDockWidget* self, intptr_t slot) {
    void (*slotFunc)(QDockWidget*, bool) = reinterpret_cast<void (*)(QDockWidget*, bool)>(slot);
    QDockWidget::connect(self,
                         static_cast<void (QDockWidget::*)(bool)>(&QDockWidget::topLevelChanged),
                         [self, slotFunc](bool topLevel) {
                             bool sigval1 = topLevel;
                             slotFunc(self, sigval1);
                         });
}

void QDockWidget_AllowedAreasChanged(QDockWidget* self, int allowedAreas) {
    self->allowedAreasChanged(static_cast<Qt::DockWidgetAreas>(allowedAreas));
}

void QDockWidget_Connect_AllowedAreasChanged(QDockWidget* self, intptr_t slot) {
    void (*slotFunc)(QDockWidget*, int) = reinterpret_cast<void (*)(QDockWidget*, int)>(slot);
    QDockWidget::connect(self,
                         static_cast<void (QDockWidget::*)(Qt::DockWidgetAreas)>(&QDockWidget::allowedAreasChanged),
                         [self, slotFunc](Qt::DockWidgetAreas allowedAreas) {
                             int sigval1 = static_cast<int>(allowedAreas);
                             slotFunc(self, sigval1);
                         });
}

void QDockWidget_VisibilityChanged(QDockWidget* self, bool visible) {
    self->visibilityChanged(visible);
}

void QDockWidget_Connect_VisibilityChanged(QDockWidget* self, intptr_t slot) {
    void (*slotFunc)(QDockWidget*, bool) = reinterpret_cast<void (*)(QDockWidget*, bool)>(slot);
    QDockWidget::connect(self,
                         static_cast<void (QDockWidget::*)(bool)>(&QDockWidget::visibilityChanged),
                         [self, slotFunc](bool visible) {
                             bool sigval1 = visible;
                             slotFunc(self, sigval1);
                         });
}

void QDockWidget_DockLocationChanged(QDockWidget* self, int area) {
    self->dockLocationChanged(static_cast<Qt::DockWidgetArea>(area));
}

void QDockWidget_Connect_DockLocationChanged(QDockWidget* self, intptr_t slot) {
    void (*slotFunc)(QDockWidget*, int) = reinterpret_cast<void (*)(QDockWidget*, int)>(slot);
    QDockWidget::connect(self,
                         static_cast<void (QDockWidget::*)(Qt::DockWidgetArea)>(&QDockWidget::dockLocationChanged),
                         [self, slotFunc](Qt::DockWidgetArea area) {
                             int sigval1 = static_cast<int>(area);
                             slotFunc(self, sigval1);
                         });
}

void QDockWidget_ChangeEvent(QDockWidget* self, QEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->changeEvent(event);
    }
}

void QDockWidget_CloseEvent(QDockWidget* self, QCloseEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->closeEvent(event);
    }
}

void QDockWidget_PaintEvent(QDockWidget* self, QPaintEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->paintEvent(event);
    }
}

bool QDockWidget_Event(QDockWidget* self, QEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        return vqdockwidget->event(event);
    }
    qFatal("Error: Protected method QDockWidget::event called without a directly constructed type");
}

void QDockWidget_InitStyleOption(const QDockWidget* self, QStyleOptionDockWidget* option) {
    auto* vqdockwidget = dynamic_cast<const VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->initStyleOption(option);
    }
}

libqt_string QDockWidget_Tr2(const char* s, const char* c) {
    auto _ret = QDockWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDockWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDockWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDockWidget_SuperMetaObject(const QDockWidget* self) {
    return (QMetaObject*)self->QDockWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMetaObject(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self)))
        vqdockwidget->qdockwidget_metaobject_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDockWidget_SuperMetacast(QDockWidget* self, const char* param1) {
    return self->QDockWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMetacast(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_metacast_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDockWidget_SuperMetacall(QDockWidget* self, int param1, int param2, void** param3) {
    return self->QDockWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMetacall(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_metacall_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
void QDockWidget_SuperChangeEvent(QDockWidget* self, QEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnChangeEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_changeevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QDockWidget_SuperCloseEvent(QDockWidget* self, QCloseEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnCloseEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_closeevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_CloseEvent_Callback>(slot);
}

// Base class handler implementation
void QDockWidget_SuperPaintEvent(QDockWidget* self, QPaintEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnPaintEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_paintevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_PaintEvent_Callback>(slot);
}

// Base class handler implementation
bool QDockWidget_SuperEvent(QDockWidget* self, QEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        return vqdockwidget->QDockWidget::event(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_event_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_Event_Callback>(slot);
}

// Base class handler implementation
void QDockWidget_SuperInitStyleOption(const QDockWidget* self, QStyleOptionDockWidget* option) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->QDockWidget::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QDockWidget::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnInitStyleOption(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self)))
        vqdockwidget->qdockwidget_initstyleoption_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QDockWidget_DevType(const QDockWidget* self) {
    return self->devType();
}

// Base class handler implementation
int QDockWidget_SuperDevType(const QDockWidget* self) {
    return self->QDockWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnDevType(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self)))
        vqdockwidget->qdockwidget_devtype_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_SetVisible(QDockWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QDockWidget_SuperSetVisible(QDockWidget* self, bool visible) {
    self->QDockWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnSetVisible(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_setvisible_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QDockWidget_SizeHint(const QDockWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QDockWidget_SuperSizeHint(const QDockWidget* self) {
    return new QSize(self->QDockWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnSizeHint(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self)))
        vqdockwidget->qdockwidget_sizehint_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QDockWidget_MinimumSizeHint(const QDockWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QDockWidget_SuperMinimumSizeHint(const QDockWidget* self) {
    return new QSize(self->QDockWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMinimumSizeHint(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self)))
        vqdockwidget->qdockwidget_minimumsizehint_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QDockWidget_HeightForWidth(const QDockWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QDockWidget_SuperHeightForWidth(const QDockWidget* self, int param1) {
    return self->QDockWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnHeightForWidth(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self)))
        vqdockwidget->qdockwidget_heightforwidth_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QDockWidget_HasHeightForWidth(const QDockWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QDockWidget_SuperHasHeightForWidth(const QDockWidget* self) {
    return self->QDockWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnHasHeightForWidth(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self)))
        vqdockwidget->qdockwidget_hasheightforwidth_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QDockWidget_PaintEngine(const QDockWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QDockWidget_SuperPaintEngine(const QDockWidget* self) {
    return self->QDockWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnPaintEngine(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self)))
        vqdockwidget->qdockwidget_paintengine_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_MousePressEvent(QDockWidget* self, QMouseEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperMousePressEvent(QDockWidget* self, QMouseEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMousePressEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_mousepressevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_MouseReleaseEvent(QDockWidget* self, QMouseEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperMouseReleaseEvent(QDockWidget* self, QMouseEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMouseReleaseEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_mousereleaseevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_MouseDoubleClickEvent(QDockWidget* self, QMouseEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperMouseDoubleClickEvent(QDockWidget* self, QMouseEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMouseDoubleClickEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_MouseMoveEvent(QDockWidget* self, QMouseEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperMouseMoveEvent(QDockWidget* self, QMouseEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMouseMoveEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_mousemoveevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_WheelEvent(QDockWidget* self, QWheelEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperWheelEvent(QDockWidget* self, QWheelEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnWheelEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_wheelevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_KeyPressEvent(QDockWidget* self, QKeyEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperKeyPressEvent(QDockWidget* self, QKeyEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnKeyPressEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_keypressevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_KeyReleaseEvent(QDockWidget* self, QKeyEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperKeyReleaseEvent(QDockWidget* self, QKeyEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnKeyReleaseEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_keyreleaseevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_FocusInEvent(QDockWidget* self, QFocusEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperFocusInEvent(QDockWidget* self, QFocusEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnFocusInEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_focusinevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_FocusOutEvent(QDockWidget* self, QFocusEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperFocusOutEvent(QDockWidget* self, QFocusEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnFocusOutEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_focusoutevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_EnterEvent(QDockWidget* self, QEnterEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperEnterEvent(QDockWidget* self, QEnterEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnEnterEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_enterevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_LeaveEvent(QDockWidget* self, QEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperLeaveEvent(QDockWidget* self, QEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnLeaveEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_leaveevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_MoveEvent(QDockWidget* self, QMoveEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperMoveEvent(QDockWidget* self, QMoveEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMoveEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_moveevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_ResizeEvent(QDockWidget* self, QResizeEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperResizeEvent(QDockWidget* self, QResizeEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnResizeEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_resizeevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_ContextMenuEvent(QDockWidget* self, QContextMenuEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperContextMenuEvent(QDockWidget* self, QContextMenuEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnContextMenuEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_contextmenuevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_TabletEvent(QDockWidget* self, QTabletEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperTabletEvent(QDockWidget* self, QTabletEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnTabletEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_tabletevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_ActionEvent(QDockWidget* self, QActionEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperActionEvent(QDockWidget* self, QActionEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnActionEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_actionevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_DragEnterEvent(QDockWidget* self, QDragEnterEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperDragEnterEvent(QDockWidget* self, QDragEnterEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnDragEnterEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_dragenterevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_DragMoveEvent(QDockWidget* self, QDragMoveEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperDragMoveEvent(QDockWidget* self, QDragMoveEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnDragMoveEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_dragmoveevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_DragLeaveEvent(QDockWidget* self, QDragLeaveEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperDragLeaveEvent(QDockWidget* self, QDragLeaveEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnDragLeaveEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_dragleaveevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_DropEvent(QDockWidget* self, QDropEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperDropEvent(QDockWidget* self, QDropEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnDropEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_dropevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_ShowEvent(QDockWidget* self, QShowEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperShowEvent(QDockWidget* self, QShowEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnShowEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_showevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_HideEvent(QDockWidget* self, QHideEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperHideEvent(QDockWidget* self, QHideEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnHideEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_hideevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QDockWidget_NativeEvent(QDockWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        return vqdockwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QDockWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDockWidget_SuperNativeEvent(QDockWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        return vqdockwidget->QDockWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QDockWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnNativeEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_nativeevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QDockWidget_Metric(const QDockWidget* self, int param1) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget) {
        return vqdockwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QDockWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QDockWidget_SuperMetric(const QDockWidget* self, int param1) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return vqdockwidget->QDockWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QDockWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMetric(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self)))
        vqdockwidget->qdockwidget_metric_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_InitPainter(const QDockWidget* self, QPainter* painter) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget) {
        vqdockwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperInitPainter(const QDockWidget* self, QPainter* painter) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->QDockWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QDockWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnInitPainter(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self)))
        vqdockwidget->qdockwidget_initpainter_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QDockWidget_Redirected(const QDockWidget* self, QPoint* offset) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget) {
        return vqdockwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QDockWidget_SuperRedirected(const QDockWidget* self, QPoint* offset) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return vqdockwidget->QDockWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QDockWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnRedirected(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self)))
        vqdockwidget->qdockwidget_redirected_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QDockWidget_SharedPainter(const QDockWidget* self) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget) {
        return vqdockwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QDockWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QDockWidget_SuperSharedPainter(const QDockWidget* self) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return vqdockwidget->QDockWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QDockWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnSharedPainter(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self)))
        vqdockwidget->qdockwidget_sharedpainter_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_InputMethodEvent(QDockWidget* self, QInputMethodEvent* param1) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperInputMethodEvent(QDockWidget* self, QInputMethodEvent* param1) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDockWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnInputMethodEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_inputmethodevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QDockWidget_InputMethodQuery(const QDockWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QDockWidget_SuperInputMethodQuery(const QDockWidget* self, int param1) {
    return new QVariant(self->QDockWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnInputMethodQuery(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self)))
        vqdockwidget->qdockwidget_inputmethodquery_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QDockWidget_FocusNextPrevChild(QDockWidget* self, bool next) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        return vqdockwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDockWidget_SuperFocusNextPrevChild(QDockWidget* self, bool next) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        return vqdockwidget->QDockWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QDockWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnFocusNextPrevChild(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_focusnextprevchild_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QDockWidget_EventFilter(QDockWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDockWidget_SuperEventFilter(QDockWidget* self, QObject* watched, QEvent* event) {
    return self->QDockWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnEventFilter(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_eventfilter_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_TimerEvent(QDockWidget* self, QTimerEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperTimerEvent(QDockWidget* self, QTimerEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnTimerEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_timerevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_ChildEvent(QDockWidget* self, QChildEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperChildEvent(QDockWidget* self, QChildEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnChildEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_childevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_CustomEvent(QDockWidget* self, QEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperCustomEvent(QDockWidget* self, QEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDockWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnCustomEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_customevent_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_ConnectNotify(QDockWidget* self, const QMetaMethod* signal) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperConnectNotify(QDockWidget* self, const QMetaMethod* signal) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDockWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnConnectNotify(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_connectnotify_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDockWidget_DisconnectNotify(QDockWidget* self, const QMetaMethod* signal) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget) {
        vqdockwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDockWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDockWidget_SuperDisconnectNotify(QDockWidget* self, const QMetaMethod* signal) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->QDockWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDockWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnDisconnectNotify(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self))
        vqdockwidget->qdockwidget_disconnectnotify_callback = reinterpret_cast<VirtualQDockWidget::QDockWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QDockWidget_UpdateMicroFocus(QDockWidget* self) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->VirtualQDockWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method QDockWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QDockWidget_Create(QDockWidget* self) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->VirtualQDockWidget::create();
    } else
        qFatal("Error: Protected method QDockWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QDockWidget_Destroy(QDockWidget* self) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->VirtualQDockWidget::destroy();
    } else
        qFatal("Error: Protected method QDockWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDockWidget_FocusNextChild(QDockWidget* self) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        return vqdockwidget->VirtualQDockWidget::focusNextChild();
    } else
        qFatal("Error: Protected method QDockWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDockWidget_FocusPreviousChild(QDockWidget* self) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        return vqdockwidget->VirtualQDockWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method QDockWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QDockWidget_Sender(const QDockWidget* self) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return vqdockwidget->VirtualQDockWidget::sender();
    } else
        qFatal("Error: Protected method QDockWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDockWidget_SenderSignalIndex(const QDockWidget* self) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return vqdockwidget->VirtualQDockWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDockWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDockWidget_Receivers(const QDockWidget* self, const char* signal) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return vqdockwidget->VirtualQDockWidget::receivers(signal);
    } else
        qFatal("Error: Protected method QDockWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDockWidget_IsSignalConnected(const QDockWidget* self, const QMetaMethod* signal) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return vqdockwidget->VirtualQDockWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDockWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QDockWidget_GetDecodedMetricF(const QDockWidget* self, int metricA, int metricB) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return vqdockwidget->VirtualQDockWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QDockWidget::getDecodedMetricF called without a directly constructed type");
}

void QDockWidget_Delete(QDockWidget* self) {
    delete self;
}
