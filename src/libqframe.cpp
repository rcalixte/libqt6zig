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
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qframe.h>
#include "libqframe.h"
#include "libqframe.hxx"

QFrame* QFrame_new(QWidget* parent) {
    return new VirtualQFrame(parent);
}

QFrame* QFrame_new2() {
    return new VirtualQFrame();
}

QFrame* QFrame_new3(QWidget* parent, int f) {
    return new VirtualQFrame(parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QFrame_MetaObject(const QFrame* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFrame_Metacast(QFrame* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFrame_Metacall(QFrame* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QFrame_Tr(const char* s) {
    auto _ret = QFrame::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QFrame_FrameStyle(const QFrame* self) {
    return self->frameStyle();
}

void QFrame_SetFrameStyle(QFrame* self, int frameStyle) {
    self->setFrameStyle(static_cast<int>(frameStyle));
}

int QFrame_FrameWidth(const QFrame* self) {
    return self->frameWidth();
}

QSize* QFrame_SizeHint(const QFrame* self) {
    return new QSize(self->sizeHint());
}

int QFrame_FrameShape(const QFrame* self) {
    return static_cast<int>(self->frameShape());
}

void QFrame_SetFrameShape(QFrame* self, int frameShape) {
    self->setFrameShape(static_cast<QFrame::Shape>(frameShape));
}

int QFrame_FrameShadow(const QFrame* self) {
    return static_cast<int>(self->frameShadow());
}

void QFrame_SetFrameShadow(QFrame* self, int frameShadow) {
    self->setFrameShadow(static_cast<QFrame::Shadow>(frameShadow));
}

int QFrame_LineWidth(const QFrame* self) {
    return self->lineWidth();
}

void QFrame_SetLineWidth(QFrame* self, int lineWidth) {
    self->setLineWidth(static_cast<int>(lineWidth));
}

int QFrame_MidLineWidth(const QFrame* self) {
    return self->midLineWidth();
}

void QFrame_SetMidLineWidth(QFrame* self, int midLineWidth) {
    self->setMidLineWidth(static_cast<int>(midLineWidth));
}

QRect* QFrame_FrameRect(const QFrame* self) {
    return new QRect(self->frameRect());
}

void QFrame_SetFrameRect(QFrame* self, const QRect* frameRect) {
    self->setFrameRect(*frameRect);
}

bool QFrame_Event(QFrame* self, QEvent* e) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        return vqframe->event(e);
    }
    qFatal("Error: Protected method QFrame::event called without a directly constructed type");
}

void QFrame_PaintEvent(QFrame* self, QPaintEvent* param1) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->paintEvent(param1);
    }
}

void QFrame_ChangeEvent(QFrame* self, QEvent* param1) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->changeEvent(param1);
    }
}

void QFrame_InitStyleOption(const QFrame* self, QStyleOptionFrame* option) {
    auto* vqframe = dynamic_cast<const VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->initStyleOption(option);
    }
}

libqt_string QFrame_Tr2(const char* s, const char* c) {
    auto _ret = QFrame::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFrame_Tr3(const char* s, const char* c, int n) {
    auto _ret = QFrame::tr(s, c, static_cast<int>(n));
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
QMetaObject* QFrame_SuperMetaObject(const QFrame* self) {
    return (QMetaObject*)self->QFrame::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnMetaObject(QFrame* self, intptr_t slot) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self)))
        vqframe->qframe_metaobject_callback = reinterpret_cast<VirtualQFrame::QFrame_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QFrame_SuperMetacast(QFrame* self, const char* param1) {
    return self->QFrame::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnMetacast(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_metacast_callback = reinterpret_cast<VirtualQFrame::QFrame_Metacast_Callback>(slot);
}

// Base class handler implementation
int QFrame_SuperMetacall(QFrame* self, int param1, int param2, void** param3) {
    return self->QFrame::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnMetacall(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_metacall_callback = reinterpret_cast<VirtualQFrame::QFrame_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QFrame_SuperSizeHint(const QFrame* self) {
    return new QSize(self->QFrame::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnSizeHint(QFrame* self, intptr_t slot) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self)))
        vqframe->qframe_sizehint_callback = reinterpret_cast<VirtualQFrame::QFrame_SizeHint_Callback>(slot);
}

// Base class handler implementation
bool QFrame_SuperEvent(QFrame* self, QEvent* e) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        return vqframe->QFrame::event(e);
    } else
        qFatal("Error: Protected virtual method QFrame::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_event_callback = reinterpret_cast<VirtualQFrame::QFrame_Event_Callback>(slot);
}

// Base class handler implementation
void QFrame_SuperPaintEvent(QFrame* self, QPaintEvent* param1) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QFrame::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnPaintEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_paintevent_callback = reinterpret_cast<VirtualQFrame::QFrame_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QFrame_SuperChangeEvent(QFrame* self, QEvent* param1) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QFrame::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnChangeEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_changeevent_callback = reinterpret_cast<VirtualQFrame::QFrame_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QFrame_SuperInitStyleOption(const QFrame* self, QStyleOptionFrame* option) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self))) {
        vqframe->QFrame::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QFrame::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnInitStyleOption(QFrame* self, intptr_t slot) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self)))
        vqframe->qframe_initstyleoption_callback = reinterpret_cast<VirtualQFrame::QFrame_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QFrame_DevType(const QFrame* self) {
    return self->devType();
}

// Base class handler implementation
int QFrame_SuperDevType(const QFrame* self) {
    return self->QFrame::devType();
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnDevType(QFrame* self, intptr_t slot) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self)))
        vqframe->qframe_devtype_callback = reinterpret_cast<VirtualQFrame::QFrame_DevType_Callback>(slot);
}

// Derived class handler implementation
void QFrame_SetVisible(QFrame* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QFrame_SuperSetVisible(QFrame* self, bool visible) {
    self->QFrame::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnSetVisible(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_setvisible_callback = reinterpret_cast<VirtualQFrame::QFrame_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QFrame_MinimumSizeHint(const QFrame* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QFrame_SuperMinimumSizeHint(const QFrame* self) {
    return new QSize(self->QFrame::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnMinimumSizeHint(QFrame* self, intptr_t slot) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self)))
        vqframe->qframe_minimumsizehint_callback = reinterpret_cast<VirtualQFrame::QFrame_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QFrame_HeightForWidth(const QFrame* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QFrame_SuperHeightForWidth(const QFrame* self, int param1) {
    return self->QFrame::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnHeightForWidth(QFrame* self, intptr_t slot) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self)))
        vqframe->qframe_heightforwidth_callback = reinterpret_cast<VirtualQFrame::QFrame_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QFrame_HasHeightForWidth(const QFrame* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QFrame_SuperHasHeightForWidth(const QFrame* self) {
    return self->QFrame::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnHasHeightForWidth(QFrame* self, intptr_t slot) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self)))
        vqframe->qframe_hasheightforwidth_callback = reinterpret_cast<VirtualQFrame::QFrame_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QFrame_PaintEngine(const QFrame* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QFrame_SuperPaintEngine(const QFrame* self) {
    return self->QFrame::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnPaintEngine(QFrame* self, intptr_t slot) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self)))
        vqframe->qframe_paintengine_callback = reinterpret_cast<VirtualQFrame::QFrame_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QFrame_MousePressEvent(QFrame* self, QMouseEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperMousePressEvent(QFrame* self, QMouseEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnMousePressEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_mousepressevent_callback = reinterpret_cast<VirtualQFrame::QFrame_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_MouseReleaseEvent(QFrame* self, QMouseEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperMouseReleaseEvent(QFrame* self, QMouseEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnMouseReleaseEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_mousereleaseevent_callback = reinterpret_cast<VirtualQFrame::QFrame_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_MouseDoubleClickEvent(QFrame* self, QMouseEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperMouseDoubleClickEvent(QFrame* self, QMouseEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnMouseDoubleClickEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_mousedoubleclickevent_callback = reinterpret_cast<VirtualQFrame::QFrame_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_MouseMoveEvent(QFrame* self, QMouseEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperMouseMoveEvent(QFrame* self, QMouseEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnMouseMoveEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_mousemoveevent_callback = reinterpret_cast<VirtualQFrame::QFrame_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_WheelEvent(QFrame* self, QWheelEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperWheelEvent(QFrame* self, QWheelEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnWheelEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_wheelevent_callback = reinterpret_cast<VirtualQFrame::QFrame_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_KeyPressEvent(QFrame* self, QKeyEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperKeyPressEvent(QFrame* self, QKeyEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnKeyPressEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_keypressevent_callback = reinterpret_cast<VirtualQFrame::QFrame_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_KeyReleaseEvent(QFrame* self, QKeyEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperKeyReleaseEvent(QFrame* self, QKeyEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnKeyReleaseEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_keyreleaseevent_callback = reinterpret_cast<VirtualQFrame::QFrame_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_FocusInEvent(QFrame* self, QFocusEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperFocusInEvent(QFrame* self, QFocusEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnFocusInEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_focusinevent_callback = reinterpret_cast<VirtualQFrame::QFrame_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_FocusOutEvent(QFrame* self, QFocusEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperFocusOutEvent(QFrame* self, QFocusEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnFocusOutEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_focusoutevent_callback = reinterpret_cast<VirtualQFrame::QFrame_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_EnterEvent(QFrame* self, QEnterEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperEnterEvent(QFrame* self, QEnterEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnEnterEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_enterevent_callback = reinterpret_cast<VirtualQFrame::QFrame_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_LeaveEvent(QFrame* self, QEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperLeaveEvent(QFrame* self, QEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnLeaveEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_leaveevent_callback = reinterpret_cast<VirtualQFrame::QFrame_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_MoveEvent(QFrame* self, QMoveEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperMoveEvent(QFrame* self, QMoveEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnMoveEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_moveevent_callback = reinterpret_cast<VirtualQFrame::QFrame_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_ResizeEvent(QFrame* self, QResizeEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperResizeEvent(QFrame* self, QResizeEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnResizeEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_resizeevent_callback = reinterpret_cast<VirtualQFrame::QFrame_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_CloseEvent(QFrame* self, QCloseEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperCloseEvent(QFrame* self, QCloseEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnCloseEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_closeevent_callback = reinterpret_cast<VirtualQFrame::QFrame_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_ContextMenuEvent(QFrame* self, QContextMenuEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperContextMenuEvent(QFrame* self, QContextMenuEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnContextMenuEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_contextmenuevent_callback = reinterpret_cast<VirtualQFrame::QFrame_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_TabletEvent(QFrame* self, QTabletEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperTabletEvent(QFrame* self, QTabletEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnTabletEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_tabletevent_callback = reinterpret_cast<VirtualQFrame::QFrame_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_ActionEvent(QFrame* self, QActionEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperActionEvent(QFrame* self, QActionEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnActionEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_actionevent_callback = reinterpret_cast<VirtualQFrame::QFrame_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_DragEnterEvent(QFrame* self, QDragEnterEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperDragEnterEvent(QFrame* self, QDragEnterEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnDragEnterEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_dragenterevent_callback = reinterpret_cast<VirtualQFrame::QFrame_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_DragMoveEvent(QFrame* self, QDragMoveEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperDragMoveEvent(QFrame* self, QDragMoveEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnDragMoveEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_dragmoveevent_callback = reinterpret_cast<VirtualQFrame::QFrame_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_DragLeaveEvent(QFrame* self, QDragLeaveEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperDragLeaveEvent(QFrame* self, QDragLeaveEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnDragLeaveEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_dragleaveevent_callback = reinterpret_cast<VirtualQFrame::QFrame_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_DropEvent(QFrame* self, QDropEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperDropEvent(QFrame* self, QDropEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnDropEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_dropevent_callback = reinterpret_cast<VirtualQFrame::QFrame_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_ShowEvent(QFrame* self, QShowEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperShowEvent(QFrame* self, QShowEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnShowEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_showevent_callback = reinterpret_cast<VirtualQFrame::QFrame_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_HideEvent(QFrame* self, QHideEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperHideEvent(QFrame* self, QHideEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnHideEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_hideevent_callback = reinterpret_cast<VirtualQFrame::QFrame_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QFrame_NativeEvent(QFrame* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        return vqframe->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QFrame::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QFrame_SuperNativeEvent(QFrame* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        return vqframe->QFrame::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QFrame::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnNativeEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_nativeevent_callback = reinterpret_cast<VirtualQFrame::QFrame_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QFrame_Metric(const QFrame* self, int param1) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe) {
        return vqframe->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QFrame::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QFrame_SuperMetric(const QFrame* self, int param1) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self))) {
        return vqframe->QFrame::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QFrame::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnMetric(QFrame* self, intptr_t slot) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self)))
        vqframe->qframe_metric_callback = reinterpret_cast<VirtualQFrame::QFrame_Metric_Callback>(slot);
}

// Derived class handler implementation
void QFrame_InitPainter(const QFrame* self, QPainter* painter) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe) {
        vqframe->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QFrame::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperInitPainter(const QFrame* self, QPainter* painter) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self))) {
        vqframe->QFrame::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QFrame::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnInitPainter(QFrame* self, intptr_t slot) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self)))
        vqframe->qframe_initpainter_callback = reinterpret_cast<VirtualQFrame::QFrame_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QFrame_Redirected(const QFrame* self, QPoint* offset) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe) {
        return vqframe->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QFrame::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QFrame_SuperRedirected(const QFrame* self, QPoint* offset) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self))) {
        return vqframe->QFrame::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QFrame::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnRedirected(QFrame* self, intptr_t slot) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self)))
        vqframe->qframe_redirected_callback = reinterpret_cast<VirtualQFrame::QFrame_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QFrame_SharedPainter(const QFrame* self) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe) {
        return vqframe->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QFrame::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QFrame_SuperSharedPainter(const QFrame* self) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self))) {
        return vqframe->QFrame::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QFrame::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnSharedPainter(QFrame* self, intptr_t slot) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self)))
        vqframe->qframe_sharedpainter_callback = reinterpret_cast<VirtualQFrame::QFrame_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QFrame_InputMethodEvent(QFrame* self, QInputMethodEvent* param1) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QFrame::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperInputMethodEvent(QFrame* self, QInputMethodEvent* param1) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QFrame::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnInputMethodEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_inputmethodevent_callback = reinterpret_cast<VirtualQFrame::QFrame_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QFrame_InputMethodQuery(const QFrame* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QFrame_SuperInputMethodQuery(const QFrame* self, int param1) {
    return new QVariant(self->QFrame::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnInputMethodQuery(QFrame* self, intptr_t slot) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self)))
        vqframe->qframe_inputmethodquery_callback = reinterpret_cast<VirtualQFrame::QFrame_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QFrame_FocusNextPrevChild(QFrame* self, bool next) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        return vqframe->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QFrame::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QFrame_SuperFocusNextPrevChild(QFrame* self, bool next) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        return vqframe->QFrame::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QFrame::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnFocusNextPrevChild(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_focusnextprevchild_callback = reinterpret_cast<VirtualQFrame::QFrame_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QFrame_EventFilter(QFrame* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QFrame_SuperEventFilter(QFrame* self, QObject* watched, QEvent* event) {
    return self->QFrame::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnEventFilter(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_eventfilter_callback = reinterpret_cast<VirtualQFrame::QFrame_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QFrame_TimerEvent(QFrame* self, QTimerEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperTimerEvent(QFrame* self, QTimerEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnTimerEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_timerevent_callback = reinterpret_cast<VirtualQFrame::QFrame_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_ChildEvent(QFrame* self, QChildEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperChildEvent(QFrame* self, QChildEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnChildEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_childevent_callback = reinterpret_cast<VirtualQFrame::QFrame_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_CustomEvent(QFrame* self, QEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFrame::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperCustomEvent(QFrame* self, QEvent* event) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QFrame::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnCustomEvent(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_customevent_callback = reinterpret_cast<VirtualQFrame::QFrame_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QFrame_ConnectNotify(QFrame* self, const QMetaMethod* signal) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFrame::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperConnectNotify(QFrame* self, const QMetaMethod* signal) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFrame::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnConnectNotify(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_connectnotify_callback = reinterpret_cast<VirtualQFrame::QFrame_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QFrame_DisconnectNotify(QFrame* self, const QMetaMethod* signal) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe) {
        vqframe->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFrame::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFrame_SuperDisconnectNotify(QFrame* self, const QMetaMethod* signal) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->QFrame::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFrame::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnDisconnectNotify(QFrame* self, intptr_t slot) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self))
        vqframe->qframe_disconnectnotify_callback = reinterpret_cast<VirtualQFrame::QFrame_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QFrame_DrawFrame(QFrame* self, QPainter* param1) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->VirtualQFrame::drawFrame(param1);
    } else
        qFatal("Error: Protected method QFrame::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QFrame_UpdateMicroFocus(QFrame* self) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->VirtualQFrame::updateMicroFocus();
    } else
        qFatal("Error: Protected method QFrame::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QFrame_Create(QFrame* self) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->VirtualQFrame::create();
    } else
        qFatal("Error: Protected method QFrame::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QFrame_Destroy(QFrame* self) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        vqframe->VirtualQFrame::destroy();
    } else
        qFatal("Error: Protected method QFrame::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFrame_FocusNextChild(QFrame* self) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        return vqframe->VirtualQFrame::focusNextChild();
    } else
        qFatal("Error: Protected method QFrame::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFrame_FocusPreviousChild(QFrame* self) {
    if (auto* vqframe = dynamic_cast<VirtualQFrame*>(self)) {
        return vqframe->VirtualQFrame::focusPreviousChild();
    } else
        qFatal("Error: Protected method QFrame::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QFrame_Sender(const QFrame* self) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self))) {
        return vqframe->VirtualQFrame::sender();
    } else
        qFatal("Error: Protected method QFrame::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QFrame_SenderSignalIndex(const QFrame* self) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self))) {
        return vqframe->VirtualQFrame::senderSignalIndex();
    } else
        qFatal("Error: Protected method QFrame::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QFrame_Receivers(const QFrame* self, const char* signal) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self))) {
        return vqframe->VirtualQFrame::receivers(signal);
    } else
        qFatal("Error: Protected method QFrame::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFrame_IsSignalConnected(const QFrame* self, const QMetaMethod* signal) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self))) {
        return vqframe->VirtualQFrame::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QFrame::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QFrame_GetDecodedMetricF(const QFrame* self, int metricA, int metricB) {
    if (auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self))) {
        return vqframe->VirtualQFrame::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QFrame::getDecodedMetricF called without a directly constructed type");
}

void QFrame_Delete(QFrame* self) {
    delete self;
}
