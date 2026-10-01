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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QStackedWidget_Tr(const char* s) {
    auto _ret = QStackedWidget::tr(s);
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
    QStackedWidget::connect(self,
                            static_cast<void (QStackedWidget::*)(int)>(&QStackedWidget::currentChanged),
                            [self, slotFunc](int param1) {
                                int sigval1 = param1;
                                slotFunc(self, sigval1);
                            });
}

void QStackedWidget_WidgetRemoved(QStackedWidget* self, int index) {
    self->widgetRemoved(static_cast<int>(index));
}

void QStackedWidget_Connect_WidgetRemoved(QStackedWidget* self, intptr_t slot) {
    void (*slotFunc)(QStackedWidget*, int) = reinterpret_cast<void (*)(QStackedWidget*, int)>(slot);
    QStackedWidget::connect(self,
                            static_cast<void (QStackedWidget::*)(int)>(&QStackedWidget::widgetRemoved),
                            [self, slotFunc](int index) {
                                int sigval1 = index;
                                slotFunc(self, sigval1);
                            });
}

bool QStackedWidget_Event(QStackedWidget* self, QEvent* e) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        return vqstackedwidget->event(e);
    }
    qFatal("Error: Protected method QStackedWidget::event called without a directly constructed type");
}

libqt_string QStackedWidget_Tr2(const char* s, const char* c) {
    auto _ret = QStackedWidget::tr(s, c);
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
    auto _ret = QStackedWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* QStackedWidget_SuperMetaObject(const QStackedWidget* self) {
    return (QMetaObject*)self->QStackedWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMetaObject(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self)))
        vqstackedwidget->qstackedwidget_metaobject_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QStackedWidget_SuperMetacast(QStackedWidget* self, const char* param1) {
    return self->QStackedWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMetacast(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_metacast_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int QStackedWidget_SuperMetacall(QStackedWidget* self, int param1, int param2, void** param3) {
    return self->QStackedWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMetacall(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_metacall_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QStackedWidget_SuperEvent(QStackedWidget* self, QEvent* e) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        return vqstackedwidget->QStackedWidget::event(e);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_event_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Event_Callback>(slot);
}

// Derived class handler implementation
QSize* QStackedWidget_SizeHint(const QStackedWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QStackedWidget_SuperSizeHint(const QStackedWidget* self) {
    return new QSize(self->QStackedWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnSizeHint(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self)))
        vqstackedwidget->qstackedwidget_sizehint_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_PaintEvent(QStackedWidget* self, QPaintEvent* param1) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperPaintEvent(QStackedWidget* self, QPaintEvent* param1) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnPaintEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_paintevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_ChangeEvent(QStackedWidget* self, QEvent* param1) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperChangeEvent(QStackedWidget* self, QEvent* param1) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnChangeEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_changeevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_InitStyleOption(const QStackedWidget* self, QStyleOptionFrame* option) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget) {
        vqstackedwidget->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperInitStyleOption(const QStackedWidget* self, QStyleOptionFrame* option) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->QStackedWidget::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnInitStyleOption(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self)))
        vqstackedwidget->qstackedwidget_initstyleoption_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QStackedWidget_DevType(const QStackedWidget* self) {
    return self->devType();
}

// Base class handler implementation
int QStackedWidget_SuperDevType(const QStackedWidget* self) {
    return self->QStackedWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDevType(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self)))
        vqstackedwidget->qstackedwidget_devtype_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_SetVisible(QStackedWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QStackedWidget_SuperSetVisible(QStackedWidget* self, bool visible) {
    self->QStackedWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnSetVisible(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_setvisible_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QStackedWidget_MinimumSizeHint(const QStackedWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QStackedWidget_SuperMinimumSizeHint(const QStackedWidget* self) {
    return new QSize(self->QStackedWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMinimumSizeHint(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self)))
        vqstackedwidget->qstackedwidget_minimumsizehint_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QStackedWidget_HeightForWidth(const QStackedWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QStackedWidget_SuperHeightForWidth(const QStackedWidget* self, int param1) {
    return self->QStackedWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnHeightForWidth(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self)))
        vqstackedwidget->qstackedwidget_heightforwidth_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QStackedWidget_HasHeightForWidth(const QStackedWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QStackedWidget_SuperHasHeightForWidth(const QStackedWidget* self) {
    return self->QStackedWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnHasHeightForWidth(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self)))
        vqstackedwidget->qstackedwidget_hasheightforwidth_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QStackedWidget_PaintEngine(const QStackedWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QStackedWidget_SuperPaintEngine(const QStackedWidget* self) {
    return self->QStackedWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnPaintEngine(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self)))
        vqstackedwidget->qstackedwidget_paintengine_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_MousePressEvent(QStackedWidget* self, QMouseEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperMousePressEvent(QStackedWidget* self, QMouseEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMousePressEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_mousepressevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_MouseReleaseEvent(QStackedWidget* self, QMouseEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperMouseReleaseEvent(QStackedWidget* self, QMouseEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMouseReleaseEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_mousereleaseevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_MouseDoubleClickEvent(QStackedWidget* self, QMouseEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperMouseDoubleClickEvent(QStackedWidget* self, QMouseEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMouseDoubleClickEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_MouseMoveEvent(QStackedWidget* self, QMouseEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperMouseMoveEvent(QStackedWidget* self, QMouseEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMouseMoveEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_mousemoveevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_WheelEvent(QStackedWidget* self, QWheelEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperWheelEvent(QStackedWidget* self, QWheelEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnWheelEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_wheelevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_KeyPressEvent(QStackedWidget* self, QKeyEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperKeyPressEvent(QStackedWidget* self, QKeyEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnKeyPressEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_keypressevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_KeyReleaseEvent(QStackedWidget* self, QKeyEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperKeyReleaseEvent(QStackedWidget* self, QKeyEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnKeyReleaseEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_keyreleaseevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_FocusInEvent(QStackedWidget* self, QFocusEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperFocusInEvent(QStackedWidget* self, QFocusEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnFocusInEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_focusinevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_FocusOutEvent(QStackedWidget* self, QFocusEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperFocusOutEvent(QStackedWidget* self, QFocusEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnFocusOutEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_focusoutevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_EnterEvent(QStackedWidget* self, QEnterEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperEnterEvent(QStackedWidget* self, QEnterEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnEnterEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_enterevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_LeaveEvent(QStackedWidget* self, QEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperLeaveEvent(QStackedWidget* self, QEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnLeaveEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_leaveevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_MoveEvent(QStackedWidget* self, QMoveEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperMoveEvent(QStackedWidget* self, QMoveEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMoveEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_moveevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_ResizeEvent(QStackedWidget* self, QResizeEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperResizeEvent(QStackedWidget* self, QResizeEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnResizeEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_resizeevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_CloseEvent(QStackedWidget* self, QCloseEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperCloseEvent(QStackedWidget* self, QCloseEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnCloseEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_closeevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_ContextMenuEvent(QStackedWidget* self, QContextMenuEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperContextMenuEvent(QStackedWidget* self, QContextMenuEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnContextMenuEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_contextmenuevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_TabletEvent(QStackedWidget* self, QTabletEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperTabletEvent(QStackedWidget* self, QTabletEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnTabletEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_tabletevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_ActionEvent(QStackedWidget* self, QActionEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperActionEvent(QStackedWidget* self, QActionEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnActionEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_actionevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_DragEnterEvent(QStackedWidget* self, QDragEnterEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperDragEnterEvent(QStackedWidget* self, QDragEnterEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDragEnterEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_dragenterevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_DragMoveEvent(QStackedWidget* self, QDragMoveEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperDragMoveEvent(QStackedWidget* self, QDragMoveEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDragMoveEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_dragmoveevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_DragLeaveEvent(QStackedWidget* self, QDragLeaveEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperDragLeaveEvent(QStackedWidget* self, QDragLeaveEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDragLeaveEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_dragleaveevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_DropEvent(QStackedWidget* self, QDropEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperDropEvent(QStackedWidget* self, QDropEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDropEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_dropevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_ShowEvent(QStackedWidget* self, QShowEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperShowEvent(QStackedWidget* self, QShowEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnShowEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_showevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_HideEvent(QStackedWidget* self, QHideEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperHideEvent(QStackedWidget* self, QHideEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnHideEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_hideevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QStackedWidget_NativeEvent(QStackedWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        return vqstackedwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QStackedWidget_SuperNativeEvent(QStackedWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        return vqstackedwidget->QStackedWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QStackedWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnNativeEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_nativeevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QStackedWidget_Metric(const QStackedWidget* self, int param1) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget) {
        return vqstackedwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QStackedWidget_SuperMetric(const QStackedWidget* self, int param1) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return vqstackedwidget->QStackedWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QStackedWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMetric(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self)))
        vqstackedwidget->qstackedwidget_metric_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_InitPainter(const QStackedWidget* self, QPainter* painter) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget) {
        vqstackedwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperInitPainter(const QStackedWidget* self, QPainter* painter) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->QStackedWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnInitPainter(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self)))
        vqstackedwidget->qstackedwidget_initpainter_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QStackedWidget_Redirected(const QStackedWidget* self, QPoint* offset) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget) {
        return vqstackedwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QStackedWidget_SuperRedirected(const QStackedWidget* self, QPoint* offset) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return vqstackedwidget->QStackedWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnRedirected(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self)))
        vqstackedwidget->qstackedwidget_redirected_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QStackedWidget_SharedPainter(const QStackedWidget* self) {
    auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self));
    if (vqstackedwidget) {
        return vqstackedwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QStackedWidget_SuperSharedPainter(const QStackedWidget* self) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return vqstackedwidget->QStackedWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QStackedWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnSharedPainter(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self)))
        vqstackedwidget->qstackedwidget_sharedpainter_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_InputMethodEvent(QStackedWidget* self, QInputMethodEvent* param1) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperInputMethodEvent(QStackedWidget* self, QInputMethodEvent* param1) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnInputMethodEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_inputmethodevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QStackedWidget_InputMethodQuery(const QStackedWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QStackedWidget_SuperInputMethodQuery(const QStackedWidget* self, int param1) {
    return new QVariant(self->QStackedWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnInputMethodQuery(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self)))
        vqstackedwidget->qstackedwidget_inputmethodquery_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QStackedWidget_FocusNextPrevChild(QStackedWidget* self, bool next) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        return vqstackedwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QStackedWidget_SuperFocusNextPrevChild(QStackedWidget* self, bool next) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        return vqstackedwidget->QStackedWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnFocusNextPrevChild(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_focusnextprevchild_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QStackedWidget_EventFilter(QStackedWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QStackedWidget_SuperEventFilter(QStackedWidget* self, QObject* watched, QEvent* event) {
    return self->QStackedWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnEventFilter(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_eventfilter_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_TimerEvent(QStackedWidget* self, QTimerEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperTimerEvent(QStackedWidget* self, QTimerEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnTimerEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_timerevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_ChildEvent(QStackedWidget* self, QChildEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperChildEvent(QStackedWidget* self, QChildEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnChildEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_childevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_CustomEvent(QStackedWidget* self, QEvent* event) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperCustomEvent(QStackedWidget* self, QEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnCustomEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_customevent_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_ConnectNotify(QStackedWidget* self, const QMetaMethod* signal) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperConnectNotify(QStackedWidget* self, const QMetaMethod* signal) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnConnectNotify(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_connectnotify_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QStackedWidget_DisconnectNotify(QStackedWidget* self, const QMetaMethod* signal) {
    auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
    if (vqstackedwidget) {
        vqstackedwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QStackedWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedWidget_SuperDisconnectNotify(QStackedWidget* self, const QMetaMethod* signal) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->QStackedWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QStackedWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDisconnectNotify(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self))
        vqstackedwidget->qstackedwidget_disconnectnotify_callback = reinterpret_cast<VirtualQStackedWidget::QStackedWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QStackedWidget_DrawFrame(QStackedWidget* self, QPainter* param1) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->VirtualQStackedWidget::drawFrame(param1);
    } else
        qFatal("Error: Protected method QStackedWidget::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QStackedWidget_UpdateMicroFocus(QStackedWidget* self) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->VirtualQStackedWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method QStackedWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QStackedWidget_Create(QStackedWidget* self) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->VirtualQStackedWidget::create();
    } else
        qFatal("Error: Protected method QStackedWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QStackedWidget_Destroy(QStackedWidget* self) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->VirtualQStackedWidget::destroy();
    } else
        qFatal("Error: Protected method QStackedWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStackedWidget_FocusNextChild(QStackedWidget* self) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        return vqstackedwidget->VirtualQStackedWidget::focusNextChild();
    } else
        qFatal("Error: Protected method QStackedWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStackedWidget_FocusPreviousChild(QStackedWidget* self) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        return vqstackedwidget->VirtualQStackedWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method QStackedWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QStackedWidget_Sender(const QStackedWidget* self) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return vqstackedwidget->VirtualQStackedWidget::sender();
    } else
        qFatal("Error: Protected method QStackedWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QStackedWidget_SenderSignalIndex(const QStackedWidget* self) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return vqstackedwidget->VirtualQStackedWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method QStackedWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QStackedWidget_Receivers(const QStackedWidget* self, const char* signal) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return vqstackedwidget->VirtualQStackedWidget::receivers(signal);
    } else
        qFatal("Error: Protected method QStackedWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStackedWidget_IsSignalConnected(const QStackedWidget* self, const QMetaMethod* signal) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return vqstackedwidget->VirtualQStackedWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QStackedWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QStackedWidget_GetDecodedMetricF(const QStackedWidget* self, int metricA, int metricB) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return vqstackedwidget->VirtualQStackedWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QStackedWidget::getDecodedMetricF called without a directly constructed type");
}

void QStackedWidget_Delete(QStackedWidget* self) {
    delete self;
}
