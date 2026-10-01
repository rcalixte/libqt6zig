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
#include <QFocusFrame>
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
#include <QStyleOption>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qfocusframe.h>
#include "libqfocusframe.h"
#include "libqfocusframe.hxx"

QFocusFrame* QFocusFrame_new(QWidget* parent) {
    return new VirtualQFocusFrame(parent);
}

QFocusFrame* QFocusFrame_new2() {
    return new VirtualQFocusFrame();
}

QMetaObject* QFocusFrame_MetaObject(const QFocusFrame* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFocusFrame_Metacast(QFocusFrame* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFocusFrame_Metacall(QFocusFrame* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QFocusFrame_Tr(const char* s) {
    auto _ret = QFocusFrame::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFocusFrame_SetWidget(QFocusFrame* self, QWidget* widget) {
    self->setWidget(widget);
}

QWidget* QFocusFrame_Widget(const QFocusFrame* self) {
    return self->widget();
}

bool QFocusFrame_Event(QFocusFrame* self, QEvent* e) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        return vqfocusframe->event(e);
    }
    qFatal("Error: Protected method QFocusFrame::event called without a directly constructed type");
}

bool QFocusFrame_EventFilter(QFocusFrame* self, QObject* param1, QEvent* param2) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        return vqfocusframe->eventFilter(param1, param2);
    }
    qFatal("Error: Protected method QFocusFrame::eventFilter called without a directly constructed type");
}

void QFocusFrame_PaintEvent(QFocusFrame* self, QPaintEvent* param1) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->paintEvent(param1);
    }
}

void QFocusFrame_InitStyleOption(const QFocusFrame* self, QStyleOption* option) {
    auto* vqfocusframe = dynamic_cast<const VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->initStyleOption(option);
    }
}

libqt_string QFocusFrame_Tr2(const char* s, const char* c) {
    auto _ret = QFocusFrame::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFocusFrame_Tr3(const char* s, const char* c, int n) {
    auto _ret = QFocusFrame::tr(s, c, static_cast<int>(n));
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
QMetaObject* QFocusFrame_SuperMetaObject(const QFocusFrame* self) {
    return (QMetaObject*)self->QFocusFrame::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMetaObject(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self)))
        vqfocusframe->qfocusframe_metaobject_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QFocusFrame_SuperMetacast(QFocusFrame* self, const char* param1) {
    return self->QFocusFrame::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMetacast(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_metacast_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Metacast_Callback>(slot);
}

// Base class handler implementation
int QFocusFrame_SuperMetacall(QFocusFrame* self, int param1, int param2, void** param3) {
    return self->QFocusFrame::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMetacall(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_metacall_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QFocusFrame_SuperEvent(QFocusFrame* self, QEvent* e) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        return vqfocusframe->QFocusFrame::event(e);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_event_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Event_Callback>(slot);
}

// Base class handler implementation
bool QFocusFrame_SuperEventFilter(QFocusFrame* self, QObject* param1, QEvent* param2) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        return vqfocusframe->QFocusFrame::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnEventFilter(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_eventfilter_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_EventFilter_Callback>(slot);
}

// Base class handler implementation
void QFocusFrame_SuperPaintEvent(QFocusFrame* self, QPaintEvent* param1) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnPaintEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_paintevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QFocusFrame_SuperInitStyleOption(const QFocusFrame* self, QStyleOption* option) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->QFocusFrame::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnInitStyleOption(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self)))
        vqfocusframe->qfocusframe_initstyleoption_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QFocusFrame_DevType(const QFocusFrame* self) {
    return self->devType();
}

// Base class handler implementation
int QFocusFrame_SuperDevType(const QFocusFrame* self) {
    return self->QFocusFrame::devType();
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnDevType(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self)))
        vqfocusframe->qfocusframe_devtype_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_DevType_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_SetVisible(QFocusFrame* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QFocusFrame_SuperSetVisible(QFocusFrame* self, bool visible) {
    self->QFocusFrame::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnSetVisible(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_setvisible_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QFocusFrame_SizeHint(const QFocusFrame* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QFocusFrame_SuperSizeHint(const QFocusFrame* self) {
    return new QSize(self->QFocusFrame::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnSizeHint(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self)))
        vqfocusframe->qfocusframe_sizehint_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QFocusFrame_MinimumSizeHint(const QFocusFrame* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QFocusFrame_SuperMinimumSizeHint(const QFocusFrame* self) {
    return new QSize(self->QFocusFrame::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMinimumSizeHint(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self)))
        vqfocusframe->qfocusframe_minimumsizehint_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QFocusFrame_HeightForWidth(const QFocusFrame* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QFocusFrame_SuperHeightForWidth(const QFocusFrame* self, int param1) {
    return self->QFocusFrame::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnHeightForWidth(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self)))
        vqfocusframe->qfocusframe_heightforwidth_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QFocusFrame_HasHeightForWidth(const QFocusFrame* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QFocusFrame_SuperHasHeightForWidth(const QFocusFrame* self) {
    return self->QFocusFrame::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnHasHeightForWidth(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self)))
        vqfocusframe->qfocusframe_hasheightforwidth_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QFocusFrame_PaintEngine(const QFocusFrame* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QFocusFrame_SuperPaintEngine(const QFocusFrame* self) {
    return self->QFocusFrame::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnPaintEngine(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self)))
        vqfocusframe->qfocusframe_paintengine_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_MousePressEvent(QFocusFrame* self, QMouseEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperMousePressEvent(QFocusFrame* self, QMouseEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMousePressEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_mousepressevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_MouseReleaseEvent(QFocusFrame* self, QMouseEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperMouseReleaseEvent(QFocusFrame* self, QMouseEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMouseReleaseEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_mousereleaseevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_MouseDoubleClickEvent(QFocusFrame* self, QMouseEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperMouseDoubleClickEvent(QFocusFrame* self, QMouseEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMouseDoubleClickEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_mousedoubleclickevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_MouseMoveEvent(QFocusFrame* self, QMouseEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperMouseMoveEvent(QFocusFrame* self, QMouseEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMouseMoveEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_mousemoveevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_WheelEvent(QFocusFrame* self, QWheelEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperWheelEvent(QFocusFrame* self, QWheelEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnWheelEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_wheelevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_KeyPressEvent(QFocusFrame* self, QKeyEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperKeyPressEvent(QFocusFrame* self, QKeyEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnKeyPressEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_keypressevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_KeyReleaseEvent(QFocusFrame* self, QKeyEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperKeyReleaseEvent(QFocusFrame* self, QKeyEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnKeyReleaseEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_keyreleaseevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_FocusInEvent(QFocusFrame* self, QFocusEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperFocusInEvent(QFocusFrame* self, QFocusEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnFocusInEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_focusinevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_FocusOutEvent(QFocusFrame* self, QFocusEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperFocusOutEvent(QFocusFrame* self, QFocusEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnFocusOutEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_focusoutevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_EnterEvent(QFocusFrame* self, QEnterEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperEnterEvent(QFocusFrame* self, QEnterEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnEnterEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_enterevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_LeaveEvent(QFocusFrame* self, QEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperLeaveEvent(QFocusFrame* self, QEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnLeaveEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_leaveevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_MoveEvent(QFocusFrame* self, QMoveEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperMoveEvent(QFocusFrame* self, QMoveEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMoveEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_moveevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_ResizeEvent(QFocusFrame* self, QResizeEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperResizeEvent(QFocusFrame* self, QResizeEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnResizeEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_resizeevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_CloseEvent(QFocusFrame* self, QCloseEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperCloseEvent(QFocusFrame* self, QCloseEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnCloseEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_closeevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_ContextMenuEvent(QFocusFrame* self, QContextMenuEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperContextMenuEvent(QFocusFrame* self, QContextMenuEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnContextMenuEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_contextmenuevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_TabletEvent(QFocusFrame* self, QTabletEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperTabletEvent(QFocusFrame* self, QTabletEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnTabletEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_tabletevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_ActionEvent(QFocusFrame* self, QActionEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperActionEvent(QFocusFrame* self, QActionEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnActionEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_actionevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_DragEnterEvent(QFocusFrame* self, QDragEnterEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperDragEnterEvent(QFocusFrame* self, QDragEnterEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnDragEnterEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_dragenterevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_DragMoveEvent(QFocusFrame* self, QDragMoveEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperDragMoveEvent(QFocusFrame* self, QDragMoveEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnDragMoveEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_dragmoveevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_DragLeaveEvent(QFocusFrame* self, QDragLeaveEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperDragLeaveEvent(QFocusFrame* self, QDragLeaveEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnDragLeaveEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_dragleaveevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_DropEvent(QFocusFrame* self, QDropEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperDropEvent(QFocusFrame* self, QDropEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnDropEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_dropevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_ShowEvent(QFocusFrame* self, QShowEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperShowEvent(QFocusFrame* self, QShowEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnShowEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_showevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_HideEvent(QFocusFrame* self, QHideEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperHideEvent(QFocusFrame* self, QHideEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnHideEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_hideevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QFocusFrame_NativeEvent(QFocusFrame* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        return vqfocusframe->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QFocusFrame_SuperNativeEvent(QFocusFrame* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        return vqfocusframe->QFocusFrame::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QFocusFrame::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnNativeEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_nativeevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_ChangeEvent(QFocusFrame* self, QEvent* param1) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperChangeEvent(QFocusFrame* self, QEvent* param1) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnChangeEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_changeevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QFocusFrame_Metric(const QFocusFrame* self, int param1) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe) {
        return vqfocusframe->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QFocusFrame_SuperMetric(const QFocusFrame* self, int param1) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return vqfocusframe->QFocusFrame::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QFocusFrame::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMetric(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self)))
        vqfocusframe->qfocusframe_metric_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Metric_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_InitPainter(const QFocusFrame* self, QPainter* painter) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe) {
        vqfocusframe->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperInitPainter(const QFocusFrame* self, QPainter* painter) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->QFocusFrame::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnInitPainter(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self)))
        vqfocusframe->qfocusframe_initpainter_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QFocusFrame_Redirected(const QFocusFrame* self, QPoint* offset) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe) {
        return vqfocusframe->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QFocusFrame_SuperRedirected(const QFocusFrame* self, QPoint* offset) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return vqfocusframe->QFocusFrame::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnRedirected(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self)))
        vqfocusframe->qfocusframe_redirected_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QFocusFrame_SharedPainter(const QFocusFrame* self) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe) {
        return vqfocusframe->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QFocusFrame_SuperSharedPainter(const QFocusFrame* self) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return vqfocusframe->QFocusFrame::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QFocusFrame::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnSharedPainter(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self)))
        vqfocusframe->qfocusframe_sharedpainter_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_InputMethodEvent(QFocusFrame* self, QInputMethodEvent* param1) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperInputMethodEvent(QFocusFrame* self, QInputMethodEvent* param1) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnInputMethodEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_inputmethodevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QFocusFrame_InputMethodQuery(const QFocusFrame* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QFocusFrame_SuperInputMethodQuery(const QFocusFrame* self, int param1) {
    return new QVariant(self->QFocusFrame::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnInputMethodQuery(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self)))
        vqfocusframe->qfocusframe_inputmethodquery_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QFocusFrame_FocusNextPrevChild(QFocusFrame* self, bool next) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        return vqfocusframe->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QFocusFrame_SuperFocusNextPrevChild(QFocusFrame* self, bool next) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        return vqfocusframe->QFocusFrame::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnFocusNextPrevChild(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_focusnextprevchild_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_TimerEvent(QFocusFrame* self, QTimerEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperTimerEvent(QFocusFrame* self, QTimerEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnTimerEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_timerevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_ChildEvent(QFocusFrame* self, QChildEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperChildEvent(QFocusFrame* self, QChildEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnChildEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_childevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_CustomEvent(QFocusFrame* self, QEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperCustomEvent(QFocusFrame* self, QEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnCustomEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_customevent_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_ConnectNotify(QFocusFrame* self, const QMetaMethod* signal) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperConnectNotify(QFocusFrame* self, const QMetaMethod* signal) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnConnectNotify(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_connectnotify_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QFocusFrame_DisconnectNotify(QFocusFrame* self, const QMetaMethod* signal) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe) {
        vqfocusframe->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFocusFrame::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFocusFrame_SuperDisconnectNotify(QFocusFrame* self, const QMetaMethod* signal) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->QFocusFrame::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFocusFrame::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnDisconnectNotify(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self))
        vqfocusframe->qfocusframe_disconnectnotify_callback = reinterpret_cast<VirtualQFocusFrame::QFocusFrame_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QFocusFrame_UpdateMicroFocus(QFocusFrame* self) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->VirtualQFocusFrame::updateMicroFocus();
    } else
        qFatal("Error: Protected method QFocusFrame::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QFocusFrame_Create(QFocusFrame* self) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->VirtualQFocusFrame::create();
    } else
        qFatal("Error: Protected method QFocusFrame::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QFocusFrame_Destroy(QFocusFrame* self) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->VirtualQFocusFrame::destroy();
    } else
        qFatal("Error: Protected method QFocusFrame::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFocusFrame_FocusNextChild(QFocusFrame* self) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        return vqfocusframe->VirtualQFocusFrame::focusNextChild();
    } else
        qFatal("Error: Protected method QFocusFrame::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFocusFrame_FocusPreviousChild(QFocusFrame* self) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        return vqfocusframe->VirtualQFocusFrame::focusPreviousChild();
    } else
        qFatal("Error: Protected method QFocusFrame::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QFocusFrame_Sender(const QFocusFrame* self) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return vqfocusframe->VirtualQFocusFrame::sender();
    } else
        qFatal("Error: Protected method QFocusFrame::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QFocusFrame_SenderSignalIndex(const QFocusFrame* self) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return vqfocusframe->VirtualQFocusFrame::senderSignalIndex();
    } else
        qFatal("Error: Protected method QFocusFrame::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QFocusFrame_Receivers(const QFocusFrame* self, const char* signal) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return vqfocusframe->VirtualQFocusFrame::receivers(signal);
    } else
        qFatal("Error: Protected method QFocusFrame::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFocusFrame_IsSignalConnected(const QFocusFrame* self, const QMetaMethod* signal) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return vqfocusframe->VirtualQFocusFrame::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QFocusFrame::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QFocusFrame_GetDecodedMetricF(const QFocusFrame* self, int metricA, int metricB) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return vqfocusframe->VirtualQFocusFrame::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QFocusFrame::getDecodedMetricF called without a directly constructed type");
}

void QFocusFrame_Delete(QFocusFrame* self) {
    delete self;
}
