#include <KSplitterCollapserButton>
#include <QAbstractButton>
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
#include <QSplitter>
#include <QString>
#include <QStyleOptionToolButton>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QToolButton>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <ksplittercollapserbutton.h>
#include "libksplittercollapserbutton.h"
#include "libksplittercollapserbutton.hxx"

KSplitterCollapserButton* KSplitterCollapserButton_new(QWidget* childWidget, QSplitter* splitter) {
    return new VirtualKSplitterCollapserButton(childWidget, splitter);
}

QMetaObject* KSplitterCollapserButton_MetaObject(const KSplitterCollapserButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSplitterCollapserButton_Metacast(KSplitterCollapserButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSplitterCollapserButton_Metacall(KSplitterCollapserButton* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KSplitterCollapserButton_Tr(const char* s) {
    auto _ret = KSplitterCollapserButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KSplitterCollapserButton_IsWidgetCollapsed(const KSplitterCollapserButton* self) {
    return self->isWidgetCollapsed();
}

QSize* KSplitterCollapserButton_SizeHint(const KSplitterCollapserButton* self) {
    return new QSize(self->sizeHint());
}

void KSplitterCollapserButton_Collapse(KSplitterCollapserButton* self) {
    self->collapse();
}

void KSplitterCollapserButton_Restore(KSplitterCollapserButton* self) {
    self->restore();
}

void KSplitterCollapserButton_SetCollapsed(KSplitterCollapserButton* self, bool collapsed) {
    self->setCollapsed(collapsed);
}

bool KSplitterCollapserButton_EventFilter(KSplitterCollapserButton* self, QObject* param1, QEvent* param2) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        return vksplittercollapserbutton->eventFilter(param1, param2);
    }
    qFatal("Error: Protected method KSplitterCollapserButton::eventFilter called without a directly constructed type");
}

void KSplitterCollapserButton_PaintEvent(KSplitterCollapserButton* self, QPaintEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->paintEvent(param1);
    }
}

void KSplitterCollapserButton_EnterEvent(KSplitterCollapserButton* self, QEnterEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->enterEvent(event);
    }
}

void KSplitterCollapserButton_LeaveEvent(KSplitterCollapserButton* self, QEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->leaveEvent(event);
    }
}

void KSplitterCollapserButton_ShowEvent(KSplitterCollapserButton* self, QShowEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->showEvent(event);
    }
}

libqt_string KSplitterCollapserButton_Tr2(const char* s, const char* c) {
    auto _ret = KSplitterCollapserButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSplitterCollapserButton_Tr3(const char* s, const char* c, int n) {
    auto _ret = KSplitterCollapserButton::tr(s, c, static_cast<int>(n));
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
QMetaObject* KSplitterCollapserButton_SuperMetaObject(const KSplitterCollapserButton* self) {
    return (QMetaObject*)self->KSplitterCollapserButton::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnMetaObject(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self)))
        vksplittercollapserbutton->ksplittercollapserbutton_metaobject_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KSplitterCollapserButton_SuperMetacast(KSplitterCollapserButton* self, const char* param1) {
    return self->KSplitterCollapserButton::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnMetacast(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_metacast_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_Metacast_Callback>(slot);
}

// Base class handler implementation
int KSplitterCollapserButton_SuperMetacall(KSplitterCollapserButton* self, int param1, int param2, void** param3) {
    return self->KSplitterCollapserButton::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnMetacall(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_metacall_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KSplitterCollapserButton_SuperSizeHint(const KSplitterCollapserButton* self) {
    return new QSize(self->KSplitterCollapserButton::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnSizeHint(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self)))
        vksplittercollapserbutton->ksplittercollapserbutton_sizehint_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_SizeHint_Callback>(slot);
}

// Base class handler implementation
bool KSplitterCollapserButton_SuperEventFilter(KSplitterCollapserButton* self, QObject* param1, QEvent* param2) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        return vksplittercollapserbutton->KSplitterCollapserButton::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnEventFilter(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_eventfilter_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_EventFilter_Callback>(slot);
}

// Base class handler implementation
void KSplitterCollapserButton_SuperPaintEvent(KSplitterCollapserButton* self, QPaintEvent* param1) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnPaintEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_paintevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void KSplitterCollapserButton_SuperEnterEvent(KSplitterCollapserButton* self, QEnterEvent* event) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnEnterEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_enterevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_EnterEvent_Callback>(slot);
}

// Base class handler implementation
void KSplitterCollapserButton_SuperLeaveEvent(KSplitterCollapserButton* self, QEvent* event) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnLeaveEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_leaveevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_LeaveEvent_Callback>(slot);
}

// Base class handler implementation
void KSplitterCollapserButton_SuperShowEvent(KSplitterCollapserButton* self, QShowEvent* event) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnShowEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_showevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* KSplitterCollapserButton_MinimumSizeHint(const KSplitterCollapserButton* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KSplitterCollapserButton_SuperMinimumSizeHint(const KSplitterCollapserButton* self) {
    return new QSize(self->KSplitterCollapserButton::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnMinimumSizeHint(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self)))
        vksplittercollapserbutton->ksplittercollapserbutton_minimumsizehint_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
bool KSplitterCollapserButton_Event(KSplitterCollapserButton* self, QEvent* e) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        return vksplittercollapserbutton->event(e);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KSplitterCollapserButton_SuperEvent(KSplitterCollapserButton* self, QEvent* e) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        return vksplittercollapserbutton->KSplitterCollapserButton::event(e);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_event_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_Event_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_MousePressEvent(KSplitterCollapserButton* self, QMouseEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->mousePressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperMousePressEvent(KSplitterCollapserButton* self, QMouseEvent* param1) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnMousePressEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_mousepressevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_MouseReleaseEvent(KSplitterCollapserButton* self, QMouseEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->mouseReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperMouseReleaseEvent(KSplitterCollapserButton* self, QMouseEvent* param1) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnMouseReleaseEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_mousereleaseevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_ActionEvent(KSplitterCollapserButton* self, QActionEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->actionEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperActionEvent(KSplitterCollapserButton* self, QActionEvent* param1) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::actionEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnActionEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_actionevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_TimerEvent(KSplitterCollapserButton* self, QTimerEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->timerEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperTimerEvent(KSplitterCollapserButton* self, QTimerEvent* param1) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnTimerEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_timerevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_ChangeEvent(KSplitterCollapserButton* self, QEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperChangeEvent(KSplitterCollapserButton* self, QEvent* param1) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnChangeEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_changeevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
bool KSplitterCollapserButton_HitButton(const KSplitterCollapserButton* self, const QPoint* pos) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton) {
        return vksplittercollapserbutton->hitButton(*pos);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::hitButton called without a directly constructed type");
    }
}

// Base class handler implementation
bool KSplitterCollapserButton_SuperHitButton(const KSplitterCollapserButton* self, const QPoint* pos) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self))) {
        return vksplittercollapserbutton->KSplitterCollapserButton::hitButton(*pos);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::hitButton called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnHitButton(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self)))
        vksplittercollapserbutton->ksplittercollapserbutton_hitbutton_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_HitButton_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_CheckStateSet(KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->checkStateSet();
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::checkStateSet called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperCheckStateSet(KSplitterCollapserButton* self) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::checkStateSet();
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::checkStateSet called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnCheckStateSet(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_checkstateset_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_CheckStateSet_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_NextCheckState(KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->nextCheckState();
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::nextCheckState called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperNextCheckState(KSplitterCollapserButton* self) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::nextCheckState();
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::nextCheckState called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnNextCheckState(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_nextcheckstate_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_NextCheckState_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_InitStyleOption(const KSplitterCollapserButton* self, QStyleOptionToolButton* option) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperInitStyleOption(const KSplitterCollapserButton* self, QStyleOptionToolButton* option) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self))) {
        vksplittercollapserbutton->KSplitterCollapserButton::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnInitStyleOption(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self)))
        vksplittercollapserbutton->ksplittercollapserbutton_initstyleoption_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_KeyPressEvent(KSplitterCollapserButton* self, QKeyEvent* e) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->keyPressEvent(e);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperKeyPressEvent(KSplitterCollapserButton* self, QKeyEvent* e) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnKeyPressEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_keypressevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_KeyReleaseEvent(KSplitterCollapserButton* self, QKeyEvent* e) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperKeyReleaseEvent(KSplitterCollapserButton* self, QKeyEvent* e) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnKeyReleaseEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_keyreleaseevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_MouseMoveEvent(KSplitterCollapserButton* self, QMouseEvent* e) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->mouseMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperMouseMoveEvent(KSplitterCollapserButton* self, QMouseEvent* e) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnMouseMoveEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_mousemoveevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_FocusInEvent(KSplitterCollapserButton* self, QFocusEvent* e) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperFocusInEvent(KSplitterCollapserButton* self, QFocusEvent* e) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnFocusInEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_focusinevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_FocusOutEvent(KSplitterCollapserButton* self, QFocusEvent* e) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperFocusOutEvent(KSplitterCollapserButton* self, QFocusEvent* e) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnFocusOutEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_focusoutevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
int KSplitterCollapserButton_DevType(const KSplitterCollapserButton* self) {
    return self->devType();
}

// Base class handler implementation
int KSplitterCollapserButton_SuperDevType(const KSplitterCollapserButton* self) {
    return self->KSplitterCollapserButton::devType();
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnDevType(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self)))
        vksplittercollapserbutton->ksplittercollapserbutton_devtype_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_DevType_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_SetVisible(KSplitterCollapserButton* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KSplitterCollapserButton_SuperSetVisible(KSplitterCollapserButton* self, bool visible) {
    self->KSplitterCollapserButton::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnSetVisible(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_setvisible_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KSplitterCollapserButton_HeightForWidth(const KSplitterCollapserButton* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KSplitterCollapserButton_SuperHeightForWidth(const KSplitterCollapserButton* self, int param1) {
    return self->KSplitterCollapserButton::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnHeightForWidth(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self)))
        vksplittercollapserbutton->ksplittercollapserbutton_heightforwidth_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KSplitterCollapserButton_HasHeightForWidth(const KSplitterCollapserButton* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KSplitterCollapserButton_SuperHasHeightForWidth(const KSplitterCollapserButton* self) {
    return self->KSplitterCollapserButton::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnHasHeightForWidth(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self)))
        vksplittercollapserbutton->ksplittercollapserbutton_hasheightforwidth_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KSplitterCollapserButton_PaintEngine(const KSplitterCollapserButton* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KSplitterCollapserButton_SuperPaintEngine(const KSplitterCollapserButton* self) {
    return self->KSplitterCollapserButton::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnPaintEngine(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self)))
        vksplittercollapserbutton->ksplittercollapserbutton_paintengine_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_MouseDoubleClickEvent(KSplitterCollapserButton* self, QMouseEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperMouseDoubleClickEvent(KSplitterCollapserButton* self, QMouseEvent* event) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnMouseDoubleClickEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_mousedoubleclickevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_WheelEvent(KSplitterCollapserButton* self, QWheelEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperWheelEvent(KSplitterCollapserButton* self, QWheelEvent* event) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnWheelEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_wheelevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_MoveEvent(KSplitterCollapserButton* self, QMoveEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperMoveEvent(KSplitterCollapserButton* self, QMoveEvent* event) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnMoveEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_moveevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_ResizeEvent(KSplitterCollapserButton* self, QResizeEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperResizeEvent(KSplitterCollapserButton* self, QResizeEvent* event) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnResizeEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_resizeevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_CloseEvent(KSplitterCollapserButton* self, QCloseEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperCloseEvent(KSplitterCollapserButton* self, QCloseEvent* event) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnCloseEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_closeevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_ContextMenuEvent(KSplitterCollapserButton* self, QContextMenuEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperContextMenuEvent(KSplitterCollapserButton* self, QContextMenuEvent* event) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnContextMenuEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_contextmenuevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_TabletEvent(KSplitterCollapserButton* self, QTabletEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperTabletEvent(KSplitterCollapserButton* self, QTabletEvent* event) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnTabletEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_tabletevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_DragEnterEvent(KSplitterCollapserButton* self, QDragEnterEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperDragEnterEvent(KSplitterCollapserButton* self, QDragEnterEvent* event) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnDragEnterEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_dragenterevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_DragMoveEvent(KSplitterCollapserButton* self, QDragMoveEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperDragMoveEvent(KSplitterCollapserButton* self, QDragMoveEvent* event) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnDragMoveEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_dragmoveevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_DragLeaveEvent(KSplitterCollapserButton* self, QDragLeaveEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperDragLeaveEvent(KSplitterCollapserButton* self, QDragLeaveEvent* event) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnDragLeaveEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_dragleaveevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_DropEvent(KSplitterCollapserButton* self, QDropEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperDropEvent(KSplitterCollapserButton* self, QDropEvent* event) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnDropEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_dropevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_HideEvent(KSplitterCollapserButton* self, QHideEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperHideEvent(KSplitterCollapserButton* self, QHideEvent* event) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnHideEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_hideevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KSplitterCollapserButton_NativeEvent(KSplitterCollapserButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        return vksplittercollapserbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KSplitterCollapserButton_SuperNativeEvent(KSplitterCollapserButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        return vksplittercollapserbutton->KSplitterCollapserButton::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnNativeEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_nativeevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KSplitterCollapserButton_Metric(const KSplitterCollapserButton* self, int param1) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton) {
        return vksplittercollapserbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KSplitterCollapserButton_SuperMetric(const KSplitterCollapserButton* self, int param1) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self))) {
        return vksplittercollapserbutton->KSplitterCollapserButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnMetric(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self)))
        vksplittercollapserbutton->ksplittercollapserbutton_metric_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_Metric_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_InitPainter(const KSplitterCollapserButton* self, QPainter* painter) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperInitPainter(const KSplitterCollapserButton* self, QPainter* painter) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self))) {
        vksplittercollapserbutton->KSplitterCollapserButton::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnInitPainter(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self)))
        vksplittercollapserbutton->ksplittercollapserbutton_initpainter_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KSplitterCollapserButton_Redirected(const KSplitterCollapserButton* self, QPoint* offset) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton) {
        return vksplittercollapserbutton->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KSplitterCollapserButton_SuperRedirected(const KSplitterCollapserButton* self, QPoint* offset) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self))) {
        return vksplittercollapserbutton->KSplitterCollapserButton::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnRedirected(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self)))
        vksplittercollapserbutton->ksplittercollapserbutton_redirected_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KSplitterCollapserButton_SharedPainter(const KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton) {
        return vksplittercollapserbutton->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KSplitterCollapserButton_SuperSharedPainter(const KSplitterCollapserButton* self) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self))) {
        return vksplittercollapserbutton->KSplitterCollapserButton::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnSharedPainter(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self)))
        vksplittercollapserbutton->ksplittercollapserbutton_sharedpainter_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_InputMethodEvent(KSplitterCollapserButton* self, QInputMethodEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperInputMethodEvent(KSplitterCollapserButton* self, QInputMethodEvent* param1) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnInputMethodEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_inputmethodevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KSplitterCollapserButton_InputMethodQuery(const KSplitterCollapserButton* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KSplitterCollapserButton_SuperInputMethodQuery(const KSplitterCollapserButton* self, int param1) {
    return new QVariant(self->KSplitterCollapserButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnInputMethodQuery(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self)))
        vksplittercollapserbutton->ksplittercollapserbutton_inputmethodquery_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KSplitterCollapserButton_FocusNextPrevChild(KSplitterCollapserButton* self, bool next) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        return vksplittercollapserbutton->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KSplitterCollapserButton_SuperFocusNextPrevChild(KSplitterCollapserButton* self, bool next) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        return vksplittercollapserbutton->KSplitterCollapserButton::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnFocusNextPrevChild(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_focusnextprevchild_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_ChildEvent(KSplitterCollapserButton* self, QChildEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperChildEvent(KSplitterCollapserButton* self, QChildEvent* event) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnChildEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_childevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_CustomEvent(KSplitterCollapserButton* self, QEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperCustomEvent(KSplitterCollapserButton* self, QEvent* event) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnCustomEvent(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_customevent_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_ConnectNotify(KSplitterCollapserButton* self, const QMetaMethod* signal) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperConnectNotify(KSplitterCollapserButton* self, const QMetaMethod* signal) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnConnectNotify(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_connectnotify_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KSplitterCollapserButton_DisconnectNotify(KSplitterCollapserButton* self, const QMetaMethod* signal) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton) {
        vksplittercollapserbutton->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSplitterCollapserButton::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSplitterCollapserButton_SuperDisconnectNotify(KSplitterCollapserButton* self, const QMetaMethod* signal) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->KSplitterCollapserButton::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSplitterCollapserButton::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnDisconnectNotify(KSplitterCollapserButton* self, intptr_t slot) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self))
        vksplittercollapserbutton->ksplittercollapserbutton_disconnectnotify_callback = reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KSplitterCollapserButton_UpdateMicroFocus(KSplitterCollapserButton* self) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->VirtualKSplitterCollapserButton::updateMicroFocus();
    } else
        qFatal("Error: Protected method KSplitterCollapserButton::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KSplitterCollapserButton_Create(KSplitterCollapserButton* self) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->VirtualKSplitterCollapserButton::create();
    } else
        qFatal("Error: Protected method KSplitterCollapserButton::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KSplitterCollapserButton_Destroy(KSplitterCollapserButton* self) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        vksplittercollapserbutton->VirtualKSplitterCollapserButton::destroy();
    } else
        qFatal("Error: Protected method KSplitterCollapserButton::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSplitterCollapserButton_FocusNextChild(KSplitterCollapserButton* self) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        return vksplittercollapserbutton->VirtualKSplitterCollapserButton::focusNextChild();
    } else
        qFatal("Error: Protected method KSplitterCollapserButton::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSplitterCollapserButton_FocusPreviousChild(KSplitterCollapserButton* self) {
    if (auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self)) {
        return vksplittercollapserbutton->VirtualKSplitterCollapserButton::focusPreviousChild();
    } else
        qFatal("Error: Protected method KSplitterCollapserButton::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KSplitterCollapserButton_Sender(const KSplitterCollapserButton* self) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self))) {
        return vksplittercollapserbutton->VirtualKSplitterCollapserButton::sender();
    } else
        qFatal("Error: Protected method KSplitterCollapserButton::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KSplitterCollapserButton_SenderSignalIndex(const KSplitterCollapserButton* self) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self))) {
        return vksplittercollapserbutton->VirtualKSplitterCollapserButton::senderSignalIndex();
    } else
        qFatal("Error: Protected method KSplitterCollapserButton::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KSplitterCollapserButton_Receivers(const KSplitterCollapserButton* self, const char* signal) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self))) {
        return vksplittercollapserbutton->VirtualKSplitterCollapserButton::receivers(signal);
    } else
        qFatal("Error: Protected method KSplitterCollapserButton::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSplitterCollapserButton_IsSignalConnected(const KSplitterCollapserButton* self, const QMetaMethod* signal) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self))) {
        return vksplittercollapserbutton->VirtualKSplitterCollapserButton::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KSplitterCollapserButton::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KSplitterCollapserButton_GetDecodedMetricF(const KSplitterCollapserButton* self, int metricA, int metricB) {
    if (auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self))) {
        return vksplittercollapserbutton->VirtualKSplitterCollapserButton::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KSplitterCollapserButton::getDecodedMetricF called without a directly constructed type");
}

void KSplitterCollapserButton_Delete(KSplitterCollapserButton* self) {
    delete self;
}
