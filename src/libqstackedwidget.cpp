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
#include <QFrame>
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
#include <QStackedWidget>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qstackedwidget.h>
#include "libqstackedwidget.h"
#include "libqstackedwidget.hxx"

QStackedWidget* QStackedWidget_new(QWidget* parent) {
    return new VirtualQStackedWidget(parent);
}

QStackedWidget* QStackedWidget_new2() {
    return new VirtualQStackedWidget();
}

QMetaObject* QStackedWidget_MetaObject(const QStackedWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QStackedWidget_Metacast(QStackedWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QStackedWidget_Metacall(QStackedWidget* self, int param1, int param2, void** param3) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQStackedWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QStackedWidget_Tr(const char* s) {
    QString _ret = QStackedWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QStackedWidget_AddWidget(QStackedWidget* self, QWidget* w) {
    return self->addWidget(w);
}

int QStackedWidget_InsertWidget(QStackedWidget* self, int index, QWidget* w) {
    return self->insertWidget(static_cast<int>(index), w);
}

void QStackedWidget_RemoveWidget(QStackedWidget* self, QWidget* w) {
    self->removeWidget(w);
}

QWidget* QStackedWidget_CurrentWidget(const QStackedWidget* self) {
    return self->currentWidget();
}

int QStackedWidget_CurrentIndex(const QStackedWidget* self) {
    return self->currentIndex();
}

int QStackedWidget_IndexOf(const QStackedWidget* self, const QWidget* param1) {
    return self->indexOf(param1);
}

QWidget* QStackedWidget_Widget(const QStackedWidget* self, int param1) {
    return self->widget(static_cast<int>(param1));
}

int QStackedWidget_Count(const QStackedWidget* self) {
    return self->count();
}

void QStackedWidget_SetCurrentIndex(QStackedWidget* self, int index) {
    self->setCurrentIndex(static_cast<int>(index));
}

void QStackedWidget_SetCurrentWidget(QStackedWidget* self, QWidget* w) {
    self->setCurrentWidget(w);
}

void QStackedWidget_CurrentChanged(QStackedWidget* self, int param1) {
    self->currentChanged(static_cast<int>(param1));
}

void QStackedWidget_Connect_CurrentChanged(QStackedWidget* self, intptr_t slot) {
    void (*slotFunc)(QStackedWidget*, int) = reinterpret_cast<void (*)(QStackedWidget*, int)>(slot);
    QStackedWidget::connect(self, &QStackedWidget::currentChanged, [self, slotFunc](int param1) {
        int sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QStackedWidget_WidgetRemoved(QStackedWidget* self, int index) {
    self->widgetRemoved(static_cast<int>(index));
}

void QStackedWidget_Connect_WidgetRemoved(QStackedWidget* self, intptr_t slot) {
    void (*slotFunc)(QStackedWidget*, int) = reinterpret_cast<void (*)(QStackedWidget*, int)>(slot);
    QStackedWidget::connect(self, &QStackedWidget::widgetRemoved, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

bool QStackedWidget_Event(QStackedWidget* self, QEvent* e) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return vqstackedwidget->event(e);
    }
    return {};
}

libqt_string QStackedWidget_Tr2(const char* s, const char* c) {
    QString _ret = QStackedWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStackedWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QStackedWidget::tr(s, c, static_cast<int>(n));
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
int QStackedWidget_QBaseMetacall(QStackedWidget* self, int param1, int param2, void** param3) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_Metacall_IsBase(true);
        return vqstackedwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QStackedWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMetacall(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_Metacall_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool QStackedWidget_QBaseEvent(QStackedWidget* self, QEvent* e) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_Event_IsBase(true);
        return vqstackedwidget->event(e);
    } else {
        return ((VirtualQStackedWidget*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_Event_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QStackedWidget_SizeHint(const QStackedWidget* self) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return new QSize(vqstackedwidget->sizeHint());
    } else {
        return new QSize(((VirtualQStackedWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QStackedWidget_QBaseSizeHint(const QStackedWidget* self) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_SizeHint_IsBase(true);
        return new QSize(vqstackedwidget->sizeHint());
    } else {
        return new QSize(((VirtualQStackedWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnSizeHint(const QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_SizeHint_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_PaintEvent(QStackedWidget* self, QPaintEvent* param1) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->paintEvent(param1);
    } else {
        ((VirtualQStackedWidget*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void QStackedWidget_QBasePaintEvent(QStackedWidget* self, QPaintEvent* param1) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_PaintEvent_IsBase(true);
        vqstackedwidget->paintEvent(param1);
    } else {
        ((VirtualQStackedWidget*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnPaintEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_PaintEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_ChangeEvent(QStackedWidget* self, QEvent* param1) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->changeEvent(param1);
    } else {
        ((VirtualQStackedWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseChangeEvent(QStackedWidget* self, QEvent* param1) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_ChangeEvent_IsBase(true);
        vqstackedwidget->changeEvent(param1);
    } else {
        ((VirtualQStackedWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnChangeEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_InitStyleOption(const QStackedWidget* self, QStyleOptionFrame* option) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->initStyleOption(option);
    } else {
        ((VirtualQStackedWidget*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseInitStyleOption(const QStackedWidget* self, QStyleOptionFrame* option) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_InitStyleOption_IsBase(true);
        vqstackedwidget->initStyleOption(option);
    } else {
        ((VirtualQStackedWidget*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnInitStyleOption(const QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_InitStyleOption_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QStackedWidget_DevType(const QStackedWidget* self) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return vqstackedwidget->devType();
    } else {
        return self->QStackedWidget::devType();
    }
}

// Base class handler implementation
int QStackedWidget_QBaseDevType(const QStackedWidget* self) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_DevType_IsBase(true);
        return vqstackedwidget->devType();
    } else {
        return self->QStackedWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDevType(const QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_DevType_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_SetVisible(QStackedWidget* self, bool visible) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setVisible(visible);
    } else {
        self->QStackedWidget::setVisible(visible);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseSetVisible(QStackedWidget* self, bool visible) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_SetVisible_IsBase(true);
        vqstackedwidget->setVisible(visible);
    } else {
        self->QStackedWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnSetVisible(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_SetVisible_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QStackedWidget_MinimumSizeHint(const QStackedWidget* self) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return new QSize(vqstackedwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQStackedWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QStackedWidget_QBaseMinimumSizeHint(const QStackedWidget* self) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vqstackedwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQStackedWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMinimumSizeHint(const QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QStackedWidget_HeightForWidth(const QStackedWidget* self, int param1) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return vqstackedwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QStackedWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QStackedWidget_QBaseHeightForWidth(const QStackedWidget* self, int param1) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_HeightForWidth_IsBase(true);
        return vqstackedwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QStackedWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnHeightForWidth(const QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedWidget_HasHeightForWidth(const QStackedWidget* self) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return vqstackedwidget->hasHeightForWidth();
    } else {
        return self->QStackedWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QStackedWidget_QBaseHasHeightForWidth(const QStackedWidget* self) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_HasHeightForWidth_IsBase(true);
        return vqstackedwidget->hasHeightForWidth();
    } else {
        return self->QStackedWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnHasHeightForWidth(const QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QStackedWidget_PaintEngine(const QStackedWidget* self) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return vqstackedwidget->paintEngine();
    } else {
        return self->QStackedWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QStackedWidget_QBasePaintEngine(const QStackedWidget* self) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_PaintEngine_IsBase(true);
        return vqstackedwidget->paintEngine();
    } else {
        return self->QStackedWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnPaintEngine(const QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_PaintEngine_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_MousePressEvent(QStackedWidget* self, QMouseEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->mousePressEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseMousePressEvent(QStackedWidget* self, QMouseEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_MousePressEvent_IsBase(true);
        vqstackedwidget->mousePressEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMousePressEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_MouseReleaseEvent(QStackedWidget* self, QMouseEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseMouseReleaseEvent(QStackedWidget* self, QMouseEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_MouseReleaseEvent_IsBase(true);
        vqstackedwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMouseReleaseEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_MouseDoubleClickEvent(QStackedWidget* self, QMouseEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseMouseDoubleClickEvent(QStackedWidget* self, QMouseEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_MouseDoubleClickEvent_IsBase(true);
        vqstackedwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMouseDoubleClickEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_MouseMoveEvent(QStackedWidget* self, QMouseEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->mouseMoveEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseMouseMoveEvent(QStackedWidget* self, QMouseEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_MouseMoveEvent_IsBase(true);
        vqstackedwidget->mouseMoveEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMouseMoveEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_WheelEvent(QStackedWidget* self, QWheelEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->wheelEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseWheelEvent(QStackedWidget* self, QWheelEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_WheelEvent_IsBase(true);
        vqstackedwidget->wheelEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnWheelEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_WheelEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_KeyPressEvent(QStackedWidget* self, QKeyEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->keyPressEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseKeyPressEvent(QStackedWidget* self, QKeyEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_KeyPressEvent_IsBase(true);
        vqstackedwidget->keyPressEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnKeyPressEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_KeyReleaseEvent(QStackedWidget* self, QKeyEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->keyReleaseEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseKeyReleaseEvent(QStackedWidget* self, QKeyEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_KeyReleaseEvent_IsBase(true);
        vqstackedwidget->keyReleaseEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnKeyReleaseEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_FocusInEvent(QStackedWidget* self, QFocusEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->focusInEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseFocusInEvent(QStackedWidget* self, QFocusEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_FocusInEvent_IsBase(true);
        vqstackedwidget->focusInEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnFocusInEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_FocusOutEvent(QStackedWidget* self, QFocusEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->focusOutEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseFocusOutEvent(QStackedWidget* self, QFocusEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_FocusOutEvent_IsBase(true);
        vqstackedwidget->focusOutEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnFocusOutEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_EnterEvent(QStackedWidget* self, QEnterEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->enterEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseEnterEvent(QStackedWidget* self, QEnterEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_EnterEvent_IsBase(true);
        vqstackedwidget->enterEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnEnterEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_EnterEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_LeaveEvent(QStackedWidget* self, QEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->leaveEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseLeaveEvent(QStackedWidget* self, QEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_LeaveEvent_IsBase(true);
        vqstackedwidget->leaveEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnLeaveEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_MoveEvent(QStackedWidget* self, QMoveEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->moveEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseMoveEvent(QStackedWidget* self, QMoveEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_MoveEvent_IsBase(true);
        vqstackedwidget->moveEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMoveEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_MoveEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_ResizeEvent(QStackedWidget* self, QResizeEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->resizeEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseResizeEvent(QStackedWidget* self, QResizeEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_ResizeEvent_IsBase(true);
        vqstackedwidget->resizeEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnResizeEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_CloseEvent(QStackedWidget* self, QCloseEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->closeEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseCloseEvent(QStackedWidget* self, QCloseEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_CloseEvent_IsBase(true);
        vqstackedwidget->closeEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnCloseEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_CloseEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_ContextMenuEvent(QStackedWidget* self, QContextMenuEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->contextMenuEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseContextMenuEvent(QStackedWidget* self, QContextMenuEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_ContextMenuEvent_IsBase(true);
        vqstackedwidget->contextMenuEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnContextMenuEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_TabletEvent(QStackedWidget* self, QTabletEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->tabletEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseTabletEvent(QStackedWidget* self, QTabletEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_TabletEvent_IsBase(true);
        vqstackedwidget->tabletEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnTabletEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_TabletEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_ActionEvent(QStackedWidget* self, QActionEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->actionEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseActionEvent(QStackedWidget* self, QActionEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_ActionEvent_IsBase(true);
        vqstackedwidget->actionEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnActionEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_ActionEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_DragEnterEvent(QStackedWidget* self, QDragEnterEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->dragEnterEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseDragEnterEvent(QStackedWidget* self, QDragEnterEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_DragEnterEvent_IsBase(true);
        vqstackedwidget->dragEnterEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDragEnterEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_DragMoveEvent(QStackedWidget* self, QDragMoveEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->dragMoveEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseDragMoveEvent(QStackedWidget* self, QDragMoveEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_DragMoveEvent_IsBase(true);
        vqstackedwidget->dragMoveEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDragMoveEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_DragLeaveEvent(QStackedWidget* self, QDragLeaveEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->dragLeaveEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseDragLeaveEvent(QStackedWidget* self, QDragLeaveEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_DragLeaveEvent_IsBase(true);
        vqstackedwidget->dragLeaveEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDragLeaveEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_DropEvent(QStackedWidget* self, QDropEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->dropEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseDropEvent(QStackedWidget* self, QDropEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_DropEvent_IsBase(true);
        vqstackedwidget->dropEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDropEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_DropEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_ShowEvent(QStackedWidget* self, QShowEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->showEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseShowEvent(QStackedWidget* self, QShowEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_ShowEvent_IsBase(true);
        vqstackedwidget->showEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnShowEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_ShowEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_HideEvent(QStackedWidget* self, QHideEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->hideEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseHideEvent(QStackedWidget* self, QHideEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_HideEvent_IsBase(true);
        vqstackedwidget->hideEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnHideEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_HideEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedWidget_NativeEvent(QStackedWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return vqstackedwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQStackedWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QStackedWidget_QBaseNativeEvent(QStackedWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_NativeEvent_IsBase(true);
        return vqstackedwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQStackedWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnNativeEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_NativeEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QStackedWidget_Metric(const QStackedWidget* self, int param1) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return vqstackedwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQStackedWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QStackedWidget_QBaseMetric(const QStackedWidget* self, int param1) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_Metric_IsBase(true);
        return vqstackedwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQStackedWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMetric(const QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_Metric_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_InitPainter(const QStackedWidget* self, QPainter* painter) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->initPainter(painter);
    } else {
        ((VirtualQStackedWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseInitPainter(const QStackedWidget* self, QPainter* painter) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_InitPainter_IsBase(true);
        vqstackedwidget->initPainter(painter);
    } else {
        ((VirtualQStackedWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnInitPainter(const QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_InitPainter_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QStackedWidget_Redirected(const QStackedWidget* self, QPoint* offset) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return vqstackedwidget->redirected(offset);
    } else {
        return ((VirtualQStackedWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QStackedWidget_QBaseRedirected(const QStackedWidget* self, QPoint* offset) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_Redirected_IsBase(true);
        return vqstackedwidget->redirected(offset);
    } else {
        return ((VirtualQStackedWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnRedirected(const QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_Redirected_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QStackedWidget_SharedPainter(const QStackedWidget* self) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return vqstackedwidget->sharedPainter();
    } else {
        return ((VirtualQStackedWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QStackedWidget_QBaseSharedPainter(const QStackedWidget* self) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_SharedPainter_IsBase(true);
        return vqstackedwidget->sharedPainter();
    } else {
        return ((VirtualQStackedWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnSharedPainter(const QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_SharedPainter_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_InputMethodEvent(QStackedWidget* self, QInputMethodEvent* param1) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->inputMethodEvent(param1);
    } else {
        ((VirtualQStackedWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseInputMethodEvent(QStackedWidget* self, QInputMethodEvent* param1) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_InputMethodEvent_IsBase(true);
        vqstackedwidget->inputMethodEvent(param1);
    } else {
        ((VirtualQStackedWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnInputMethodEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QStackedWidget_InputMethodQuery(const QStackedWidget* self, int param1) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return new QVariant(vqstackedwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQStackedWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QStackedWidget_QBaseInputMethodQuery(const QStackedWidget* self, int param1) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqstackedwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQStackedWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnInputMethodQuery(const QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedWidget_FocusNextPrevChild(QStackedWidget* self, bool next) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return vqstackedwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQStackedWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QStackedWidget_QBaseFocusNextPrevChild(QStackedWidget* self, bool next) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_FocusNextPrevChild_IsBase(true);
        return vqstackedwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQStackedWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnFocusNextPrevChild(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedWidget_EventFilter(QStackedWidget* self, QObject* watched, QEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return vqstackedwidget->eventFilter(watched, event);
    } else {
        return self->QStackedWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QStackedWidget_QBaseEventFilter(QStackedWidget* self, QObject* watched, QEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_EventFilter_IsBase(true);
        return vqstackedwidget->eventFilter(watched, event);
    } else {
        return self->QStackedWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnEventFilter(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_EventFilter_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_TimerEvent(QStackedWidget* self, QTimerEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->timerEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseTimerEvent(QStackedWidget* self, QTimerEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_TimerEvent_IsBase(true);
        vqstackedwidget->timerEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnTimerEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_TimerEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_ChildEvent(QStackedWidget* self, QChildEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->childEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseChildEvent(QStackedWidget* self, QChildEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_ChildEvent_IsBase(true);
        vqstackedwidget->childEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnChildEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_ChildEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_CustomEvent(QStackedWidget* self, QEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->customEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseCustomEvent(QStackedWidget* self, QEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_CustomEvent_IsBase(true);
        vqstackedwidget->customEvent(event);
    } else {
        ((VirtualQStackedWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnCustomEvent(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_CustomEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_ConnectNotify(QStackedWidget* self, const QMetaMethod* signal) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->connectNotify(*signal);
    } else {
        ((VirtualQStackedWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseConnectNotify(QStackedWidget* self, const QMetaMethod* signal) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_ConnectNotify_IsBase(true);
        vqstackedwidget->connectNotify(*signal);
    } else {
        ((VirtualQStackedWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnConnectNotify(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_DisconnectNotify(QStackedWidget* self, const QMetaMethod* signal) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->disconnectNotify(*signal);
    } else {
        ((VirtualQStackedWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseDisconnectNotify(QStackedWidget* self, const QMetaMethod* signal) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_DisconnectNotify_IsBase(true);
        vqstackedwidget->disconnectNotify(*signal);
    } else {
        ((VirtualQStackedWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDisconnectNotify(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_DrawFrame(QStackedWidget* self, QPainter* param1) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->drawFrame(param1);
    } else {
        ((VirtualQStackedWidget*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseDrawFrame(QStackedWidget* self, QPainter* param1) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_DrawFrame_IsBase(true);
        vqstackedwidget->drawFrame(param1);
    } else {
        ((VirtualQStackedWidget*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDrawFrame(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_DrawFrame_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_UpdateMicroFocus(QStackedWidget* self) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->updateMicroFocus();
    } else {
        ((VirtualQStackedWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QStackedWidget_QBaseUpdateMicroFocus(QStackedWidget* self) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_UpdateMicroFocus_IsBase(true);
        vqstackedwidget->updateMicroFocus();
    } else {
        ((VirtualQStackedWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnUpdateMicroFocus(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_Create(QStackedWidget* self) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->create();
    } else {
        ((VirtualQStackedWidget*)self)->create();
    }
}

// Base class handler implementation
void QStackedWidget_QBaseCreate(QStackedWidget* self) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_Create_IsBase(true);
        vqstackedwidget->create();
    } else {
        ((VirtualQStackedWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnCreate(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_Create_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_Destroy(QStackedWidget* self) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->destroy();
    } else {
        ((VirtualQStackedWidget*)self)->destroy();
    }
}

// Base class handler implementation
void QStackedWidget_QBaseDestroy(QStackedWidget* self) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_Destroy_IsBase(true);
        vqstackedwidget->destroy();
    } else {
        ((VirtualQStackedWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDestroy(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_Destroy_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedWidget_FocusNextChild(QStackedWidget* self) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return vqstackedwidget->focusNextChild();
    } else {
        return ((VirtualQStackedWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QStackedWidget_QBaseFocusNextChild(QStackedWidget* self) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_FocusNextChild_IsBase(true);
        return vqstackedwidget->focusNextChild();
    } else {
        return ((VirtualQStackedWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnFocusNextChild(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedWidget_FocusPreviousChild(QStackedWidget* self) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return vqstackedwidget->focusPreviousChild();
    } else {
        return ((VirtualQStackedWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QStackedWidget_QBaseFocusPreviousChild(QStackedWidget* self) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_FocusPreviousChild_IsBase(true);
        return vqstackedwidget->focusPreviousChild();
    } else {
        return ((VirtualQStackedWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnFocusPreviousChild(QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QStackedWidget_Sender(const QStackedWidget* self) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return vqstackedwidget->sender();
    } else {
        return ((VirtualQStackedWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* QStackedWidget_QBaseSender(const QStackedWidget* self) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_Sender_IsBase(true);
        return vqstackedwidget->sender();
    } else {
        return ((VirtualQStackedWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnSender(const QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_Sender_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QStackedWidget_SenderSignalIndex(const QStackedWidget* self) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return vqstackedwidget->senderSignalIndex();
    } else {
        return ((VirtualQStackedWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QStackedWidget_QBaseSenderSignalIndex(const QStackedWidget* self) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_SenderSignalIndex_IsBase(true);
        return vqstackedwidget->senderSignalIndex();
    } else {
        return ((VirtualQStackedWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnSenderSignalIndex(const QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QStackedWidget_Receivers(const QStackedWidget* self, const char* signal) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return vqstackedwidget->receivers(signal);
    } else {
        return ((VirtualQStackedWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QStackedWidget_QBaseReceivers(const QStackedWidget* self, const char* signal) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_Receivers_IsBase(true);
        return vqstackedwidget->receivers(signal);
    } else {
        return ((VirtualQStackedWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnReceivers(const QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_Receivers_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedWidget_IsSignalConnected(const QStackedWidget* self, const QMetaMethod* signal) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return vqstackedwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQStackedWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QStackedWidget_QBaseIsSignalConnected(const QStackedWidget* self, const QMetaMethod* signal) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_IsSignalConnected_IsBase(true);
        return vqstackedwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQStackedWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnIsSignalConnected(const QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QStackedWidget_GetDecodedMetricF(const QStackedWidget* self, int metricA, int metricB) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        return vqstackedwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQStackedWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QStackedWidget_QBaseGetDecodedMetricF(const QStackedWidget* self, int metricA, int metricB) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_GetDecodedMetricF_IsBase(true);
        return vqstackedwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQStackedWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnGetDecodedMetricF(const QStackedWidget* self, intptr_t slot) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
        vqstackedwidget->setQStackedWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void QStackedWidget_Delete(QStackedWidget* self) {
    delete self;
}
