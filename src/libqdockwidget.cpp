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
#include <QByteArray>
#include <cstring>
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
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDockWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDockWidget_OnMetacall(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_Metacall_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDockWidget_QBaseMetacall(QDockWidget* self, int param1, int param2, void** param3) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_Metacall_IsBase(true);
        return vqdockwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDockWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDockWidget_Tr(const char* s) {
    QString _ret = QDockWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
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
    QDockWidget::connect(self, &QDockWidget::featuresChanged, [self, slotFunc](QDockWidget::DockWidgetFeatures features) {
        int sigval1 = static_cast<int>(features);
        slotFunc(self, sigval1);
    });
}

void QDockWidget_TopLevelChanged(QDockWidget* self, bool topLevel) {
    self->topLevelChanged(topLevel);
}

void QDockWidget_Connect_TopLevelChanged(QDockWidget* self, intptr_t slot) {
    void (*slotFunc)(QDockWidget*, bool) = reinterpret_cast<void (*)(QDockWidget*, bool)>(slot);
    QDockWidget::connect(self, &QDockWidget::topLevelChanged, [self, slotFunc](bool topLevel) {
        bool sigval1 = topLevel;
        slotFunc(self, sigval1);
    });
}

void QDockWidget_AllowedAreasChanged(QDockWidget* self, int allowedAreas) {
    self->allowedAreasChanged(static_cast<Qt::DockWidgetAreas>(allowedAreas));
}

void QDockWidget_Connect_AllowedAreasChanged(QDockWidget* self, intptr_t slot) {
    void (*slotFunc)(QDockWidget*, int) = reinterpret_cast<void (*)(QDockWidget*, int)>(slot);
    QDockWidget::connect(self, &QDockWidget::allowedAreasChanged, [self, slotFunc](Qt::DockWidgetAreas allowedAreas) {
        int sigval1 = static_cast<int>(allowedAreas);
        slotFunc(self, sigval1);
    });
}

void QDockWidget_VisibilityChanged(QDockWidget* self, bool visible) {
    self->visibilityChanged(visible);
}

void QDockWidget_Connect_VisibilityChanged(QDockWidget* self, intptr_t slot) {
    void (*slotFunc)(QDockWidget*, bool) = reinterpret_cast<void (*)(QDockWidget*, bool)>(slot);
    QDockWidget::connect(self, &QDockWidget::visibilityChanged, [self, slotFunc](bool visible) {
        bool sigval1 = visible;
        slotFunc(self, sigval1);
    });
}

void QDockWidget_DockLocationChanged(QDockWidget* self, int area) {
    self->dockLocationChanged(static_cast<Qt::DockWidgetArea>(area));
}

void QDockWidget_Connect_DockLocationChanged(QDockWidget* self, intptr_t slot) {
    void (*slotFunc)(QDockWidget*, int) = reinterpret_cast<void (*)(QDockWidget*, int)>(slot);
    QDockWidget::connect(self, &QDockWidget::dockLocationChanged, [self, slotFunc](Qt::DockWidgetArea area) {
        int sigval1 = static_cast<int>(area);
        slotFunc(self, sigval1);
    });
}

libqt_string QDockWidget_Tr2(const char* s, const char* c) {
    QString _ret = QDockWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDockWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDockWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QDockWidget_ChangeEvent(QDockWidget* self, QEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->changeEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->changeEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseChangeEvent(QDockWidget* self, QEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_ChangeEvent_IsBase(true);
        vqdockwidget->changeEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnChangeEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_CloseEvent(QDockWidget* self, QCloseEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->closeEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseCloseEvent(QDockWidget* self, QCloseEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_CloseEvent_IsBase(true);
        vqdockwidget->closeEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnCloseEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_CloseEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_PaintEvent(QDockWidget* self, QPaintEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->paintEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBasePaintEvent(QDockWidget* self, QPaintEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_PaintEvent_IsBase(true);
        vqdockwidget->paintEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnPaintEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_PaintEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDockWidget_Event(QDockWidget* self, QEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return vqdockwidget->event(event);
    } else {
        return ((VirtualQDockWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool QDockWidget_QBaseEvent(QDockWidget* self, QEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_Event_IsBase(true);
        return vqdockwidget->event(event);
    } else {
        return ((VirtualQDockWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_Event_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_InitStyleOption(const QDockWidget* self, QStyleOptionDockWidget* option) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->initStyleOption(option);
    } else {
        ((VirtualQDockWidget*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QDockWidget_QBaseInitStyleOption(const QDockWidget* self, QStyleOptionDockWidget* option) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_InitStyleOption_IsBase(true);
        vqdockwidget->initStyleOption(option);
    } else {
        ((VirtualQDockWidget*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnInitStyleOption(const QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_InitStyleOption_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QDockWidget_DevType(const QDockWidget* self) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return vqdockwidget->devType();
    } else {
        return self->QDockWidget::devType();
    }
}

// Base class handler implementation
int QDockWidget_QBaseDevType(const QDockWidget* self) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_DevType_IsBase(true);
        return vqdockwidget->devType();
    } else {
        return self->QDockWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnDevType(const QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_DevType_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_SetVisible(QDockWidget* self, bool visible) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setVisible(visible);
    } else {
        self->QDockWidget::setVisible(visible);
    }
}

// Base class handler implementation
void QDockWidget_QBaseSetVisible(QDockWidget* self, bool visible) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_SetVisible_IsBase(true);
        vqdockwidget->setVisible(visible);
    } else {
        self->QDockWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnSetVisible(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_SetVisible_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDockWidget_SizeHint(const QDockWidget* self) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return new QSize(vqdockwidget->sizeHint());
    } else {
        return new QSize(((VirtualQDockWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QDockWidget_QBaseSizeHint(const QDockWidget* self) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_SizeHint_IsBase(true);
        return new QSize(vqdockwidget->sizeHint());
    } else {
        return new QSize(((VirtualQDockWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnSizeHint(const QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_SizeHint_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDockWidget_MinimumSizeHint(const QDockWidget* self) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return new QSize(vqdockwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDockWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QDockWidget_QBaseMinimumSizeHint(const QDockWidget* self) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vqdockwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDockWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMinimumSizeHint(const QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QDockWidget_HeightForWidth(const QDockWidget* self, int param1) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return vqdockwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDockWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QDockWidget_QBaseHeightForWidth(const QDockWidget* self, int param1) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_HeightForWidth_IsBase(true);
        return vqdockwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDockWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnHeightForWidth(const QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDockWidget_HasHeightForWidth(const QDockWidget* self) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return vqdockwidget->hasHeightForWidth();
    } else {
        return self->QDockWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QDockWidget_QBaseHasHeightForWidth(const QDockWidget* self) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_HasHeightForWidth_IsBase(true);
        return vqdockwidget->hasHeightForWidth();
    } else {
        return self->QDockWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnHasHeightForWidth(const QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QDockWidget_PaintEngine(const QDockWidget* self) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return vqdockwidget->paintEngine();
    } else {
        return self->QDockWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QDockWidget_QBasePaintEngine(const QDockWidget* self) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_PaintEngine_IsBase(true);
        return vqdockwidget->paintEngine();
    } else {
        return self->QDockWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnPaintEngine(const QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_PaintEngine_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_MousePressEvent(QDockWidget* self, QMouseEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->mousePressEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseMousePressEvent(QDockWidget* self, QMouseEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_MousePressEvent_IsBase(true);
        vqdockwidget->mousePressEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMousePressEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_MouseReleaseEvent(QDockWidget* self, QMouseEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseMouseReleaseEvent(QDockWidget* self, QMouseEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_MouseReleaseEvent_IsBase(true);
        vqdockwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMouseReleaseEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_MouseDoubleClickEvent(QDockWidget* self, QMouseEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseMouseDoubleClickEvent(QDockWidget* self, QMouseEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_MouseDoubleClickEvent_IsBase(true);
        vqdockwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMouseDoubleClickEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_MouseMoveEvent(QDockWidget* self, QMouseEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->mouseMoveEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseMouseMoveEvent(QDockWidget* self, QMouseEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_MouseMoveEvent_IsBase(true);
        vqdockwidget->mouseMoveEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMouseMoveEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_WheelEvent(QDockWidget* self, QWheelEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->wheelEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseWheelEvent(QDockWidget* self, QWheelEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_WheelEvent_IsBase(true);
        vqdockwidget->wheelEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnWheelEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_WheelEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_KeyPressEvent(QDockWidget* self, QKeyEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->keyPressEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseKeyPressEvent(QDockWidget* self, QKeyEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_KeyPressEvent_IsBase(true);
        vqdockwidget->keyPressEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnKeyPressEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_KeyReleaseEvent(QDockWidget* self, QKeyEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->keyReleaseEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseKeyReleaseEvent(QDockWidget* self, QKeyEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_KeyReleaseEvent_IsBase(true);
        vqdockwidget->keyReleaseEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnKeyReleaseEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_FocusInEvent(QDockWidget* self, QFocusEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->focusInEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseFocusInEvent(QDockWidget* self, QFocusEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_FocusInEvent_IsBase(true);
        vqdockwidget->focusInEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnFocusInEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_FocusOutEvent(QDockWidget* self, QFocusEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->focusOutEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseFocusOutEvent(QDockWidget* self, QFocusEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_FocusOutEvent_IsBase(true);
        vqdockwidget->focusOutEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnFocusOutEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_EnterEvent(QDockWidget* self, QEnterEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->enterEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseEnterEvent(QDockWidget* self, QEnterEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_EnterEvent_IsBase(true);
        vqdockwidget->enterEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnEnterEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_EnterEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_LeaveEvent(QDockWidget* self, QEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->leaveEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseLeaveEvent(QDockWidget* self, QEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_LeaveEvent_IsBase(true);
        vqdockwidget->leaveEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnLeaveEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_MoveEvent(QDockWidget* self, QMoveEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->moveEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseMoveEvent(QDockWidget* self, QMoveEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_MoveEvent_IsBase(true);
        vqdockwidget->moveEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMoveEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_MoveEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_ResizeEvent(QDockWidget* self, QResizeEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->resizeEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseResizeEvent(QDockWidget* self, QResizeEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_ResizeEvent_IsBase(true);
        vqdockwidget->resizeEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnResizeEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_ContextMenuEvent(QDockWidget* self, QContextMenuEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->contextMenuEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseContextMenuEvent(QDockWidget* self, QContextMenuEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_ContextMenuEvent_IsBase(true);
        vqdockwidget->contextMenuEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnContextMenuEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_TabletEvent(QDockWidget* self, QTabletEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->tabletEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseTabletEvent(QDockWidget* self, QTabletEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_TabletEvent_IsBase(true);
        vqdockwidget->tabletEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnTabletEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_TabletEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_ActionEvent(QDockWidget* self, QActionEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->actionEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseActionEvent(QDockWidget* self, QActionEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_ActionEvent_IsBase(true);
        vqdockwidget->actionEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnActionEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_ActionEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_DragEnterEvent(QDockWidget* self, QDragEnterEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->dragEnterEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseDragEnterEvent(QDockWidget* self, QDragEnterEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_DragEnterEvent_IsBase(true);
        vqdockwidget->dragEnterEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnDragEnterEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_DragMoveEvent(QDockWidget* self, QDragMoveEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->dragMoveEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseDragMoveEvent(QDockWidget* self, QDragMoveEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_DragMoveEvent_IsBase(true);
        vqdockwidget->dragMoveEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnDragMoveEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_DragLeaveEvent(QDockWidget* self, QDragLeaveEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->dragLeaveEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseDragLeaveEvent(QDockWidget* self, QDragLeaveEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_DragLeaveEvent_IsBase(true);
        vqdockwidget->dragLeaveEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnDragLeaveEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_DropEvent(QDockWidget* self, QDropEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->dropEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseDropEvent(QDockWidget* self, QDropEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_DropEvent_IsBase(true);
        vqdockwidget->dropEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnDropEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_DropEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_ShowEvent(QDockWidget* self, QShowEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->showEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseShowEvent(QDockWidget* self, QShowEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_ShowEvent_IsBase(true);
        vqdockwidget->showEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnShowEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_ShowEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_HideEvent(QDockWidget* self, QHideEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->hideEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseHideEvent(QDockWidget* self, QHideEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_HideEvent_IsBase(true);
        vqdockwidget->hideEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnHideEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_HideEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDockWidget_NativeEvent(QDockWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return vqdockwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDockWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QDockWidget_QBaseNativeEvent(QDockWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_NativeEvent_IsBase(true);
        return vqdockwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDockWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnNativeEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_NativeEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDockWidget_Metric(const QDockWidget* self, int param1) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return vqdockwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDockWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QDockWidget_QBaseMetric(const QDockWidget* self, int param1) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_Metric_IsBase(true);
        return vqdockwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDockWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMetric(const QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_Metric_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_InitPainter(const QDockWidget* self, QPainter* painter) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->initPainter(painter);
    } else {
        ((VirtualQDockWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QDockWidget_QBaseInitPainter(const QDockWidget* self, QPainter* painter) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_InitPainter_IsBase(true);
        vqdockwidget->initPainter(painter);
    } else {
        ((VirtualQDockWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnInitPainter(const QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_InitPainter_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QDockWidget_Redirected(const QDockWidget* self, QPoint* offset) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return vqdockwidget->redirected(offset);
    } else {
        return ((VirtualQDockWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QDockWidget_QBaseRedirected(const QDockWidget* self, QPoint* offset) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_Redirected_IsBase(true);
        return vqdockwidget->redirected(offset);
    } else {
        return ((VirtualQDockWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnRedirected(const QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_Redirected_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QDockWidget_SharedPainter(const QDockWidget* self) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return vqdockwidget->sharedPainter();
    } else {
        return ((VirtualQDockWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QDockWidget_QBaseSharedPainter(const QDockWidget* self) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_SharedPainter_IsBase(true);
        return vqdockwidget->sharedPainter();
    } else {
        return ((VirtualQDockWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnSharedPainter(const QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_SharedPainter_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_InputMethodEvent(QDockWidget* self, QInputMethodEvent* param1) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->inputMethodEvent(param1);
    } else {
        ((VirtualQDockWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QDockWidget_QBaseInputMethodEvent(QDockWidget* self, QInputMethodEvent* param1) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_InputMethodEvent_IsBase(true);
        vqdockwidget->inputMethodEvent(param1);
    } else {
        ((VirtualQDockWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnInputMethodEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QDockWidget_InputMethodQuery(const QDockWidget* self, int param1) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return new QVariant(vqdockwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDockWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QDockWidget_QBaseInputMethodQuery(const QDockWidget* self, int param1) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqdockwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDockWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnInputMethodQuery(const QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDockWidget_FocusNextPrevChild(QDockWidget* self, bool next) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return vqdockwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQDockWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QDockWidget_QBaseFocusNextPrevChild(QDockWidget* self, bool next) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_FocusNextPrevChild_IsBase(true);
        return vqdockwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQDockWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnFocusNextPrevChild(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDockWidget_EventFilter(QDockWidget* self, QObject* watched, QEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return vqdockwidget->eventFilter(watched, event);
    } else {
        return self->QDockWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDockWidget_QBaseEventFilter(QDockWidget* self, QObject* watched, QEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_EventFilter_IsBase(true);
        return vqdockwidget->eventFilter(watched, event);
    } else {
        return self->QDockWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnEventFilter(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_EventFilter_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_TimerEvent(QDockWidget* self, QTimerEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->timerEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseTimerEvent(QDockWidget* self, QTimerEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_TimerEvent_IsBase(true);
        vqdockwidget->timerEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnTimerEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_TimerEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_ChildEvent(QDockWidget* self, QChildEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->childEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseChildEvent(QDockWidget* self, QChildEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_ChildEvent_IsBase(true);
        vqdockwidget->childEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnChildEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_ChildEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_CustomEvent(QDockWidget* self, QEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->customEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseCustomEvent(QDockWidget* self, QEvent* event) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_CustomEvent_IsBase(true);
        vqdockwidget->customEvent(event);
    } else {
        ((VirtualQDockWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnCustomEvent(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_CustomEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_ConnectNotify(QDockWidget* self, const QMetaMethod* signal) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->connectNotify(*signal);
    } else {
        ((VirtualQDockWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDockWidget_QBaseConnectNotify(QDockWidget* self, const QMetaMethod* signal) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_ConnectNotify_IsBase(true);
        vqdockwidget->connectNotify(*signal);
    } else {
        ((VirtualQDockWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnConnectNotify(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_DisconnectNotify(QDockWidget* self, const QMetaMethod* signal) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->disconnectNotify(*signal);
    } else {
        ((VirtualQDockWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDockWidget_QBaseDisconnectNotify(QDockWidget* self, const QMetaMethod* signal) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_DisconnectNotify_IsBase(true);
        vqdockwidget->disconnectNotify(*signal);
    } else {
        ((VirtualQDockWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnDisconnectNotify(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_UpdateMicroFocus(QDockWidget* self) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->updateMicroFocus();
    } else {
        ((VirtualQDockWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QDockWidget_QBaseUpdateMicroFocus(QDockWidget* self) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_UpdateMicroFocus_IsBase(true);
        vqdockwidget->updateMicroFocus();
    } else {
        ((VirtualQDockWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnUpdateMicroFocus(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_Create(QDockWidget* self) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->create();
    } else {
        ((VirtualQDockWidget*)self)->create();
    }
}

// Base class handler implementation
void QDockWidget_QBaseCreate(QDockWidget* self) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_Create_IsBase(true);
        vqdockwidget->create();
    } else {
        ((VirtualQDockWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnCreate(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_Create_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_Destroy(QDockWidget* self) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->destroy();
    } else {
        ((VirtualQDockWidget*)self)->destroy();
    }
}

// Base class handler implementation
void QDockWidget_QBaseDestroy(QDockWidget* self) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_Destroy_IsBase(true);
        vqdockwidget->destroy();
    } else {
        ((VirtualQDockWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnDestroy(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_Destroy_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDockWidget_FocusNextChild(QDockWidget* self) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return vqdockwidget->focusNextChild();
    } else {
        return ((VirtualQDockWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QDockWidget_QBaseFocusNextChild(QDockWidget* self) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_FocusNextChild_IsBase(true);
        return vqdockwidget->focusNextChild();
    } else {
        return ((VirtualQDockWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnFocusNextChild(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDockWidget_FocusPreviousChild(QDockWidget* self) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return vqdockwidget->focusPreviousChild();
    } else {
        return ((VirtualQDockWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QDockWidget_QBaseFocusPreviousChild(QDockWidget* self) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_FocusPreviousChild_IsBase(true);
        return vqdockwidget->focusPreviousChild();
    } else {
        return ((VirtualQDockWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnFocusPreviousChild(QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self);
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDockWidget_Sender(const QDockWidget* self) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return vqdockwidget->sender();
    } else {
        return ((VirtualQDockWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDockWidget_QBaseSender(const QDockWidget* self) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_Sender_IsBase(true);
        return vqdockwidget->sender();
    } else {
        return ((VirtualQDockWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnSender(const QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_Sender_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDockWidget_SenderSignalIndex(const QDockWidget* self) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return vqdockwidget->senderSignalIndex();
    } else {
        return ((VirtualQDockWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDockWidget_QBaseSenderSignalIndex(const QDockWidget* self) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_SenderSignalIndex_IsBase(true);
        return vqdockwidget->senderSignalIndex();
    } else {
        return ((VirtualQDockWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnSenderSignalIndex(const QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDockWidget_Receivers(const QDockWidget* self, const char* signal) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return vqdockwidget->receivers(signal);
    } else {
        return ((VirtualQDockWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDockWidget_QBaseReceivers(const QDockWidget* self, const char* signal) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_Receivers_IsBase(true);
        return vqdockwidget->receivers(signal);
    } else {
        return ((VirtualQDockWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnReceivers(const QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_Receivers_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDockWidget_IsSignalConnected(const QDockWidget* self, const QMetaMethod* signal) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return vqdockwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQDockWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDockWidget_QBaseIsSignalConnected(const QDockWidget* self, const QMetaMethod* signal) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_IsSignalConnected_IsBase(true);
        return vqdockwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQDockWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnIsSignalConnected(const QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QDockWidget_GetDecodedMetricF(const QDockWidget* self, int metricA, int metricB) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        return vqdockwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDockWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QDockWidget_QBaseGetDecodedMetricF(const QDockWidget* self, int metricA, int metricB) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_GetDecodedMetricF_IsBase(true);
        return vqdockwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDockWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnGetDecodedMetricF(const QDockWidget* self, intptr_t slot) {
    auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self));
    if (vqdockwidget && vqdockwidget->isVirtualQDockWidget) {
        vqdockwidget->setQDockWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void QDockWidget_Delete(QDockWidget* self) {
    delete self;
}
