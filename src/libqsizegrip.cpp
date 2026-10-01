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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QSizeGrip>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qsizegrip.h>
#include "libqsizegrip.h"
#include "libqsizegrip.hxx"

QSizeGrip* QSizeGrip_new(QWidget* parent) {
    return new VirtualQSizeGrip(parent);
}

QMetaObject* QSizeGrip_MetaObject(const QSizeGrip* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSizeGrip_Metacast(QSizeGrip* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSizeGrip_Metacall(QSizeGrip* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSizeGrip_Tr(const char* s) {
    auto _ret = QSizeGrip::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QSizeGrip_SizeHint(const QSizeGrip* self) {
    return new QSize(self->sizeHint());
}

void QSizeGrip_SetVisible(QSizeGrip* self, bool visible) {
    self->setVisible(visible);
}

void QSizeGrip_PaintEvent(QSizeGrip* self, QPaintEvent* param1) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->paintEvent(param1);
    }
}

void QSizeGrip_MousePressEvent(QSizeGrip* self, QMouseEvent* param1) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->mousePressEvent(param1);
    }
}

void QSizeGrip_MouseMoveEvent(QSizeGrip* self, QMouseEvent* param1) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->mouseMoveEvent(param1);
    }
}

void QSizeGrip_MouseReleaseEvent(QSizeGrip* self, QMouseEvent* mouseEvent) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->mouseReleaseEvent(mouseEvent);
    }
}

void QSizeGrip_MoveEvent(QSizeGrip* self, QMoveEvent* moveEvent) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->moveEvent(moveEvent);
    }
}

void QSizeGrip_ShowEvent(QSizeGrip* self, QShowEvent* showEvent) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->showEvent(showEvent);
    }
}

void QSizeGrip_HideEvent(QSizeGrip* self, QHideEvent* hideEvent) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->hideEvent(hideEvent);
    }
}

bool QSizeGrip_EventFilter(QSizeGrip* self, QObject* param1, QEvent* param2) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        return vqsizegrip->eventFilter(param1, param2);
    }
    qFatal("Error: Protected method QSizeGrip::eventFilter called without a directly constructed type");
}

bool QSizeGrip_Event(QSizeGrip* self, QEvent* param1) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        return vqsizegrip->event(param1);
    }
    qFatal("Error: Protected method QSizeGrip::event called without a directly constructed type");
}

libqt_string QSizeGrip_Tr2(const char* s, const char* c) {
    auto _ret = QSizeGrip::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSizeGrip_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSizeGrip::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSizeGrip_SuperMetaObject(const QSizeGrip* self) {
    return (QMetaObject*)self->QSizeGrip::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMetaObject(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self)))
        vqsizegrip->qsizegrip_metaobject_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSizeGrip_SuperMetacast(QSizeGrip* self, const char* param1) {
    return self->QSizeGrip::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMetacast(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_metacast_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSizeGrip_SuperMetacall(QSizeGrip* self, int param1, int param2, void** param3) {
    return self->QSizeGrip::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMetacall(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_metacall_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QSizeGrip_SuperSizeHint(const QSizeGrip* self) {
    return new QSize(self->QSizeGrip::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnSizeHint(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self)))
        vqsizegrip->qsizegrip_sizehint_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_SizeHint_Callback>(slot);
}

// Base class handler implementation
void QSizeGrip_SuperSetVisible(QSizeGrip* self, bool visible) {
    self->QSizeGrip::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnSetVisible(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_setvisible_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_SetVisible_Callback>(slot);
}

// Base class handler implementation
void QSizeGrip_SuperPaintEvent(QSizeGrip* self, QPaintEvent* param1) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnPaintEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_paintevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QSizeGrip_SuperMousePressEvent(QSizeGrip* self, QMouseEvent* param1) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMousePressEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_mousepressevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QSizeGrip_SuperMouseMoveEvent(QSizeGrip* self, QMouseEvent* param1) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMouseMoveEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_mousemoveevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QSizeGrip_SuperMouseReleaseEvent(QSizeGrip* self, QMouseEvent* mouseEvent) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::mouseReleaseEvent(mouseEvent);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMouseReleaseEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_mousereleaseevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QSizeGrip_SuperMoveEvent(QSizeGrip* self, QMoveEvent* moveEvent) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::moveEvent(moveEvent);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMoveEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_moveevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MoveEvent_Callback>(slot);
}

// Base class handler implementation
void QSizeGrip_SuperShowEvent(QSizeGrip* self, QShowEvent* showEvent) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::showEvent(showEvent);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnShowEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_showevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void QSizeGrip_SuperHideEvent(QSizeGrip* self, QHideEvent* hideEvent) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::hideEvent(hideEvent);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnHideEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_hideevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_HideEvent_Callback>(slot);
}

// Base class handler implementation
bool QSizeGrip_SuperEventFilter(QSizeGrip* self, QObject* param1, QEvent* param2) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        return vqsizegrip->QSizeGrip::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnEventFilter(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_eventfilter_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_EventFilter_Callback>(slot);
}

// Base class handler implementation
bool QSizeGrip_SuperEvent(QSizeGrip* self, QEvent* param1) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        return vqsizegrip->QSizeGrip::event(param1);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_event_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Event_Callback>(slot);
}

// Derived class handler implementation
int QSizeGrip_DevType(const QSizeGrip* self) {
    return self->devType();
}

// Base class handler implementation
int QSizeGrip_SuperDevType(const QSizeGrip* self) {
    return self->QSizeGrip::devType();
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnDevType(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self)))
        vqsizegrip->qsizegrip_devtype_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_DevType_Callback>(slot);
}

// Derived class handler implementation
QSize* QSizeGrip_MinimumSizeHint(const QSizeGrip* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QSizeGrip_SuperMinimumSizeHint(const QSizeGrip* self) {
    return new QSize(self->QSizeGrip::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMinimumSizeHint(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self)))
        vqsizegrip->qsizegrip_minimumsizehint_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QSizeGrip_HeightForWidth(const QSizeGrip* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QSizeGrip_SuperHeightForWidth(const QSizeGrip* self, int param1) {
    return self->QSizeGrip::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnHeightForWidth(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self)))
        vqsizegrip->qsizegrip_heightforwidth_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QSizeGrip_HasHeightForWidth(const QSizeGrip* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QSizeGrip_SuperHasHeightForWidth(const QSizeGrip* self) {
    return self->QSizeGrip::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnHasHeightForWidth(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self)))
        vqsizegrip->qsizegrip_hasheightforwidth_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QSizeGrip_PaintEngine(const QSizeGrip* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QSizeGrip_SuperPaintEngine(const QSizeGrip* self) {
    return self->QSizeGrip::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnPaintEngine(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self)))
        vqsizegrip->qsizegrip_paintengine_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_MouseDoubleClickEvent(QSizeGrip* self, QMouseEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperMouseDoubleClickEvent(QSizeGrip* self, QMouseEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMouseDoubleClickEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_mousedoubleclickevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_WheelEvent(QSizeGrip* self, QWheelEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperWheelEvent(QSizeGrip* self, QWheelEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnWheelEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_wheelevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_KeyPressEvent(QSizeGrip* self, QKeyEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperKeyPressEvent(QSizeGrip* self, QKeyEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnKeyPressEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_keypressevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_KeyReleaseEvent(QSizeGrip* self, QKeyEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperKeyReleaseEvent(QSizeGrip* self, QKeyEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnKeyReleaseEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_keyreleaseevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_FocusInEvent(QSizeGrip* self, QFocusEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperFocusInEvent(QSizeGrip* self, QFocusEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnFocusInEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_focusinevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_FocusOutEvent(QSizeGrip* self, QFocusEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperFocusOutEvent(QSizeGrip* self, QFocusEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnFocusOutEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_focusoutevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_EnterEvent(QSizeGrip* self, QEnterEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperEnterEvent(QSizeGrip* self, QEnterEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnEnterEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_enterevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_LeaveEvent(QSizeGrip* self, QEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperLeaveEvent(QSizeGrip* self, QEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnLeaveEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_leaveevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_ResizeEvent(QSizeGrip* self, QResizeEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperResizeEvent(QSizeGrip* self, QResizeEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnResizeEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_resizeevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_CloseEvent(QSizeGrip* self, QCloseEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperCloseEvent(QSizeGrip* self, QCloseEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnCloseEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_closeevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_ContextMenuEvent(QSizeGrip* self, QContextMenuEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperContextMenuEvent(QSizeGrip* self, QContextMenuEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnContextMenuEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_contextmenuevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_TabletEvent(QSizeGrip* self, QTabletEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperTabletEvent(QSizeGrip* self, QTabletEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnTabletEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_tabletevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_ActionEvent(QSizeGrip* self, QActionEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperActionEvent(QSizeGrip* self, QActionEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnActionEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_actionevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_DragEnterEvent(QSizeGrip* self, QDragEnterEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperDragEnterEvent(QSizeGrip* self, QDragEnterEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnDragEnterEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_dragenterevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_DragMoveEvent(QSizeGrip* self, QDragMoveEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperDragMoveEvent(QSizeGrip* self, QDragMoveEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnDragMoveEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_dragmoveevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_DragLeaveEvent(QSizeGrip* self, QDragLeaveEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperDragLeaveEvent(QSizeGrip* self, QDragLeaveEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnDragLeaveEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_dragleaveevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_DropEvent(QSizeGrip* self, QDropEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperDropEvent(QSizeGrip* self, QDropEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnDropEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_dropevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool QSizeGrip_NativeEvent(QSizeGrip* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        return vqsizegrip->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QSizeGrip_SuperNativeEvent(QSizeGrip* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        return vqsizegrip->QSizeGrip::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QSizeGrip::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnNativeEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_nativeevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_ChangeEvent(QSizeGrip* self, QEvent* param1) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperChangeEvent(QSizeGrip* self, QEvent* param1) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnChangeEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_changeevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QSizeGrip_Metric(const QSizeGrip* self, int param1) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip) {
        return vqsizegrip->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QSizeGrip_SuperMetric(const QSizeGrip* self, int param1) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return vqsizegrip->QSizeGrip::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QSizeGrip::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMetric(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self)))
        vqsizegrip->qsizegrip_metric_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Metric_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_InitPainter(const QSizeGrip* self, QPainter* painter) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip) {
        vqsizegrip->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperInitPainter(const QSizeGrip* self, QPainter* painter) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->QSizeGrip::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnInitPainter(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self)))
        vqsizegrip->qsizegrip_initpainter_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QSizeGrip_Redirected(const QSizeGrip* self, QPoint* offset) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip) {
        return vqsizegrip->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QSizeGrip_SuperRedirected(const QSizeGrip* self, QPoint* offset) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return vqsizegrip->QSizeGrip::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnRedirected(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self)))
        vqsizegrip->qsizegrip_redirected_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QSizeGrip_SharedPainter(const QSizeGrip* self) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip) {
        return vqsizegrip->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QSizeGrip_SuperSharedPainter(const QSizeGrip* self) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return vqsizegrip->QSizeGrip::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QSizeGrip::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnSharedPainter(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self)))
        vqsizegrip->qsizegrip_sharedpainter_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_InputMethodEvent(QSizeGrip* self, QInputMethodEvent* param1) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperInputMethodEvent(QSizeGrip* self, QInputMethodEvent* param1) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnInputMethodEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_inputmethodevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QSizeGrip_InputMethodQuery(const QSizeGrip* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QSizeGrip_SuperInputMethodQuery(const QSizeGrip* self, int param1) {
    return new QVariant(self->QSizeGrip::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnInputMethodQuery(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self)))
        vqsizegrip->qsizegrip_inputmethodquery_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QSizeGrip_FocusNextPrevChild(QSizeGrip* self, bool next) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        return vqsizegrip->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QSizeGrip_SuperFocusNextPrevChild(QSizeGrip* self, bool next) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        return vqsizegrip->QSizeGrip::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnFocusNextPrevChild(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_focusnextprevchild_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_TimerEvent(QSizeGrip* self, QTimerEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperTimerEvent(QSizeGrip* self, QTimerEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnTimerEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_timerevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_ChildEvent(QSizeGrip* self, QChildEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperChildEvent(QSizeGrip* self, QChildEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnChildEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_childevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_CustomEvent(QSizeGrip* self, QEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperCustomEvent(QSizeGrip* self, QEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnCustomEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_customevent_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_ConnectNotify(QSizeGrip* self, const QMetaMethod* signal) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperConnectNotify(QSizeGrip* self, const QMetaMethod* signal) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnConnectNotify(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_connectnotify_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSizeGrip_DisconnectNotify(QSizeGrip* self, const QMetaMethod* signal) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip) {
        vqsizegrip->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSizeGrip::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSizeGrip_SuperDisconnectNotify(QSizeGrip* self, const QMetaMethod* signal) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->QSizeGrip::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSizeGrip::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnDisconnectNotify(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self))
        vqsizegrip->qsizegrip_disconnectnotify_callback = reinterpret_cast<VirtualQSizeGrip::QSizeGrip_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QSizeGrip_UpdateMicroFocus(QSizeGrip* self) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->VirtualQSizeGrip::updateMicroFocus();
    } else
        qFatal("Error: Protected method QSizeGrip::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QSizeGrip_Create(QSizeGrip* self) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->VirtualQSizeGrip::create();
    } else
        qFatal("Error: Protected method QSizeGrip::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QSizeGrip_Destroy(QSizeGrip* self) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->VirtualQSizeGrip::destroy();
    } else
        qFatal("Error: Protected method QSizeGrip::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSizeGrip_FocusNextChild(QSizeGrip* self) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        return vqsizegrip->VirtualQSizeGrip::focusNextChild();
    } else
        qFatal("Error: Protected method QSizeGrip::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSizeGrip_FocusPreviousChild(QSizeGrip* self) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        return vqsizegrip->VirtualQSizeGrip::focusPreviousChild();
    } else
        qFatal("Error: Protected method QSizeGrip::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QSizeGrip_Sender(const QSizeGrip* self) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return vqsizegrip->VirtualQSizeGrip::sender();
    } else
        qFatal("Error: Protected method QSizeGrip::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSizeGrip_SenderSignalIndex(const QSizeGrip* self) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return vqsizegrip->VirtualQSizeGrip::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSizeGrip::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSizeGrip_Receivers(const QSizeGrip* self, const char* signal) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return vqsizegrip->VirtualQSizeGrip::receivers(signal);
    } else
        qFatal("Error: Protected method QSizeGrip::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSizeGrip_IsSignalConnected(const QSizeGrip* self, const QMetaMethod* signal) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return vqsizegrip->VirtualQSizeGrip::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSizeGrip::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QSizeGrip_GetDecodedMetricF(const QSizeGrip* self, int metricA, int metricB) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return vqsizegrip->VirtualQSizeGrip::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QSizeGrip::getDecodedMetricF called without a directly constructed type");
}

void QSizeGrip_Delete(QSizeGrip* self) {
    delete self;
}
