#include <KCommandBar>
#define WORKAROUND_INNER_CLASS_DEFINITION_KCommandBar__ActionGroup
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
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
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
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kcommandbar.h>
#include "libkcommandbar.h"
#include "libkcommandbar.hxx"

KCommandBar* KCommandBar_new(QWidget* parent) {
    return new VirtualKCommandBar(parent);
}

QMetaObject* KCommandBar_MetaObject(const KCommandBar* self) {
    return (QMetaObject*)self->metaObject();
}

void* KCommandBar_Metacast(KCommandBar* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KCommandBar_Metacall(KCommandBar* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KCommandBar_Tr(const char* s) {
    auto _ret = KCommandBar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KCommandBar_SetActions(KCommandBar* self, const libqt_list /* of KCommandBar__ActionGroup* */ actions) {
    QList<KCommandBar::ActionGroup> actions_QList;
    actions_QList.reserve(actions.len);
    KCommandBar__ActionGroup** actions_arr = static_cast<KCommandBar__ActionGroup**>(actions.data);
    for (size_t i = 0; i < actions.len; ++i) {
        actions_QList.push_back(*(actions_arr[i]));
    }
    self->setActions(actions_QList);
}

void KCommandBar_Show(KCommandBar* self) {
    self->show();
}

bool KCommandBar_EventFilter(KCommandBar* self, QObject* obj, QEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        return vkcommandbar->eventFilter(obj, event);
    }
    qFatal("Error: Protected method KCommandBar::eventFilter called without a directly constructed type");
}

libqt_string KCommandBar_Tr2(const char* s, const char* c) {
    auto _ret = KCommandBar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCommandBar_Tr3(const char* s, const char* c, int n) {
    auto _ret = KCommandBar::tr(s, c, static_cast<int>(n));
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
QMetaObject* KCommandBar_SuperMetaObject(const KCommandBar* self) {
    return (QMetaObject*)self->KCommandBar::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnMetaObject(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self)))
        vkcommandbar->kcommandbar_metaobject_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KCommandBar_SuperMetacast(KCommandBar* self, const char* param1) {
    return self->KCommandBar::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnMetacast(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_metacast_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_Metacast_Callback>(slot);
}

// Base class handler implementation
int KCommandBar_SuperMetacall(KCommandBar* self, int param1, int param2, void** param3) {
    return self->KCommandBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnMetacall(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_metacall_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KCommandBar_SuperEventFilter(KCommandBar* self, QObject* obj, QEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        return vkcommandbar->KCommandBar::eventFilter(obj, event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnEventFilter(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_eventfilter_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_EventFilter_Callback>(slot);
}

// Derived class handler implementation
QSize* KCommandBar_SizeHint(const KCommandBar* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KCommandBar_SuperSizeHint(const KCommandBar* self) {
    return new QSize(self->KCommandBar::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnSizeHint(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self)))
        vkcommandbar->kcommandbar_sizehint_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_SizeHint_Callback>(slot);
}

// Derived class handler implementation
bool KCommandBar_Event(KCommandBar* self, QEvent* e) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        return vkcommandbar->event(e);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCommandBar_SuperEvent(KCommandBar* self, QEvent* e) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        return vkcommandbar->KCommandBar::event(e);
    } else
        qFatal("Error: Protected virtual method KCommandBar::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_event_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_Event_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_PaintEvent(KCommandBar* self, QPaintEvent* param1) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperPaintEvent(KCommandBar* self, QPaintEvent* param1) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KCommandBar::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnPaintEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_paintevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_ChangeEvent(KCommandBar* self, QEvent* param1) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperChangeEvent(KCommandBar* self, QEvent* param1) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KCommandBar::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnChangeEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_changeevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_InitStyleOption(const KCommandBar* self, QStyleOptionFrame* option) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar) {
        vkcommandbar->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperInitStyleOption(const KCommandBar* self, QStyleOptionFrame* option) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self))) {
        vkcommandbar->KCommandBar::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KCommandBar::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnInitStyleOption(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self)))
        vkcommandbar->kcommandbar_initstyleoption_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KCommandBar_DevType(const KCommandBar* self) {
    return self->devType();
}

// Base class handler implementation
int KCommandBar_SuperDevType(const KCommandBar* self) {
    return self->KCommandBar::devType();
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnDevType(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self)))
        vkcommandbar->kcommandbar_devtype_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_DevType_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_SetVisible(KCommandBar* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KCommandBar_SuperSetVisible(KCommandBar* self, bool visible) {
    self->KCommandBar::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnSetVisible(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_setvisible_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KCommandBar_MinimumSizeHint(const KCommandBar* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KCommandBar_SuperMinimumSizeHint(const KCommandBar* self) {
    return new QSize(self->KCommandBar::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnMinimumSizeHint(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self)))
        vkcommandbar->kcommandbar_minimumsizehint_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KCommandBar_HeightForWidth(const KCommandBar* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KCommandBar_SuperHeightForWidth(const KCommandBar* self, int param1) {
    return self->KCommandBar::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnHeightForWidth(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self)))
        vkcommandbar->kcommandbar_heightforwidth_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KCommandBar_HasHeightForWidth(const KCommandBar* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KCommandBar_SuperHasHeightForWidth(const KCommandBar* self) {
    return self->KCommandBar::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnHasHeightForWidth(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self)))
        vkcommandbar->kcommandbar_hasheightforwidth_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KCommandBar_PaintEngine(const KCommandBar* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KCommandBar_SuperPaintEngine(const KCommandBar* self) {
    return self->KCommandBar::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnPaintEngine(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self)))
        vkcommandbar->kcommandbar_paintengine_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_MousePressEvent(KCommandBar* self, QMouseEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperMousePressEvent(KCommandBar* self, QMouseEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnMousePressEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_mousepressevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_MouseReleaseEvent(KCommandBar* self, QMouseEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperMouseReleaseEvent(KCommandBar* self, QMouseEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnMouseReleaseEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_mousereleaseevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_MouseDoubleClickEvent(KCommandBar* self, QMouseEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperMouseDoubleClickEvent(KCommandBar* self, QMouseEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnMouseDoubleClickEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_mousedoubleclickevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_MouseMoveEvent(KCommandBar* self, QMouseEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperMouseMoveEvent(KCommandBar* self, QMouseEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnMouseMoveEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_mousemoveevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_WheelEvent(KCommandBar* self, QWheelEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperWheelEvent(KCommandBar* self, QWheelEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnWheelEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_wheelevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_KeyPressEvent(KCommandBar* self, QKeyEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperKeyPressEvent(KCommandBar* self, QKeyEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnKeyPressEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_keypressevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_KeyReleaseEvent(KCommandBar* self, QKeyEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperKeyReleaseEvent(KCommandBar* self, QKeyEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnKeyReleaseEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_keyreleaseevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_FocusInEvent(KCommandBar* self, QFocusEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperFocusInEvent(KCommandBar* self, QFocusEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnFocusInEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_focusinevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_FocusOutEvent(KCommandBar* self, QFocusEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperFocusOutEvent(KCommandBar* self, QFocusEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnFocusOutEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_focusoutevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_EnterEvent(KCommandBar* self, QEnterEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperEnterEvent(KCommandBar* self, QEnterEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnEnterEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_enterevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_LeaveEvent(KCommandBar* self, QEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperLeaveEvent(KCommandBar* self, QEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnLeaveEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_leaveevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_MoveEvent(KCommandBar* self, QMoveEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperMoveEvent(KCommandBar* self, QMoveEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnMoveEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_moveevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_ResizeEvent(KCommandBar* self, QResizeEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperResizeEvent(KCommandBar* self, QResizeEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnResizeEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_resizeevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_CloseEvent(KCommandBar* self, QCloseEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperCloseEvent(KCommandBar* self, QCloseEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnCloseEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_closeevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_ContextMenuEvent(KCommandBar* self, QContextMenuEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperContextMenuEvent(KCommandBar* self, QContextMenuEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnContextMenuEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_contextmenuevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_TabletEvent(KCommandBar* self, QTabletEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperTabletEvent(KCommandBar* self, QTabletEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnTabletEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_tabletevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_ActionEvent(KCommandBar* self, QActionEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperActionEvent(KCommandBar* self, QActionEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnActionEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_actionevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_DragEnterEvent(KCommandBar* self, QDragEnterEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperDragEnterEvent(KCommandBar* self, QDragEnterEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnDragEnterEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_dragenterevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_DragMoveEvent(KCommandBar* self, QDragMoveEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperDragMoveEvent(KCommandBar* self, QDragMoveEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnDragMoveEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_dragmoveevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_DragLeaveEvent(KCommandBar* self, QDragLeaveEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperDragLeaveEvent(KCommandBar* self, QDragLeaveEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnDragLeaveEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_dragleaveevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_DropEvent(KCommandBar* self, QDropEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperDropEvent(KCommandBar* self, QDropEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnDropEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_dropevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_ShowEvent(KCommandBar* self, QShowEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperShowEvent(KCommandBar* self, QShowEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnShowEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_showevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_HideEvent(KCommandBar* self, QHideEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperHideEvent(KCommandBar* self, QHideEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnHideEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_hideevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KCommandBar_NativeEvent(KCommandBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        return vkcommandbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KCommandBar::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCommandBar_SuperNativeEvent(KCommandBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        return vkcommandbar->KCommandBar::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KCommandBar::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnNativeEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_nativeevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KCommandBar_Metric(const KCommandBar* self, int param1) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar) {
        return vkcommandbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KCommandBar::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KCommandBar_SuperMetric(const KCommandBar* self, int param1) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self))) {
        return vkcommandbar->KCommandBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KCommandBar::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnMetric(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self)))
        vkcommandbar->kcommandbar_metric_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_Metric_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_InitPainter(const KCommandBar* self, QPainter* painter) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar) {
        vkcommandbar->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperInitPainter(const KCommandBar* self, QPainter* painter) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self))) {
        vkcommandbar->KCommandBar::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KCommandBar::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnInitPainter(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self)))
        vkcommandbar->kcommandbar_initpainter_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KCommandBar_Redirected(const KCommandBar* self, QPoint* offset) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar) {
        return vkcommandbar->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KCommandBar_SuperRedirected(const KCommandBar* self, QPoint* offset) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self))) {
        return vkcommandbar->KCommandBar::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KCommandBar::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnRedirected(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self)))
        vkcommandbar->kcommandbar_redirected_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KCommandBar_SharedPainter(const KCommandBar* self) {
    auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self));
    if (vkcommandbar) {
        return vkcommandbar->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KCommandBar::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KCommandBar_SuperSharedPainter(const KCommandBar* self) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self))) {
        return vkcommandbar->KCommandBar::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KCommandBar::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnSharedPainter(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self)))
        vkcommandbar->kcommandbar_sharedpainter_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_InputMethodEvent(KCommandBar* self, QInputMethodEvent* param1) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperInputMethodEvent(KCommandBar* self, QInputMethodEvent* param1) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KCommandBar::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnInputMethodEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_inputmethodevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KCommandBar_InputMethodQuery(const KCommandBar* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KCommandBar_SuperInputMethodQuery(const KCommandBar* self, int param1) {
    return new QVariant(self->KCommandBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnInputMethodQuery(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self)))
        vkcommandbar->kcommandbar_inputmethodquery_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KCommandBar_FocusNextPrevChild(KCommandBar* self, bool next) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        return vkcommandbar->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCommandBar_SuperFocusNextPrevChild(KCommandBar* self, bool next) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        return vkcommandbar->KCommandBar::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KCommandBar::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnFocusNextPrevChild(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_focusnextprevchild_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_TimerEvent(KCommandBar* self, QTimerEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperTimerEvent(KCommandBar* self, QTimerEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnTimerEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_timerevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_ChildEvent(KCommandBar* self, QChildEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperChildEvent(KCommandBar* self, QChildEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnChildEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_childevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_CustomEvent(KCommandBar* self, QEvent* event) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperCustomEvent(KCommandBar* self, QEvent* event) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KCommandBar::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnCustomEvent(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_customevent_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_ConnectNotify(KCommandBar* self, const QMetaMethod* signal) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperConnectNotify(KCommandBar* self, const QMetaMethod* signal) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCommandBar::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnConnectNotify(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_connectnotify_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KCommandBar_DisconnectNotify(KCommandBar* self, const QMetaMethod* signal) {
    auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self);
    if (vkcommandbar) {
        vkcommandbar->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCommandBar::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCommandBar_SuperDisconnectNotify(KCommandBar* self, const QMetaMethod* signal) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->KCommandBar::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCommandBar::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCommandBar_OnDisconnectNotify(KCommandBar* self, intptr_t slot) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self))
        vkcommandbar->kcommandbar_disconnectnotify_callback = reinterpret_cast<VirtualKCommandBar::KCommandBar_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KCommandBar_DrawFrame(KCommandBar* self, QPainter* param1) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->VirtualKCommandBar::drawFrame(param1);
    } else
        qFatal("Error: Protected method KCommandBar::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void KCommandBar_UpdateMicroFocus(KCommandBar* self) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->VirtualKCommandBar::updateMicroFocus();
    } else
        qFatal("Error: Protected method KCommandBar::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KCommandBar_Create(KCommandBar* self) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->VirtualKCommandBar::create();
    } else
        qFatal("Error: Protected method KCommandBar::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KCommandBar_Destroy(KCommandBar* self) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        vkcommandbar->VirtualKCommandBar::destroy();
    } else
        qFatal("Error: Protected method KCommandBar::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCommandBar_FocusNextChild(KCommandBar* self) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        return vkcommandbar->VirtualKCommandBar::focusNextChild();
    } else
        qFatal("Error: Protected method KCommandBar::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCommandBar_FocusPreviousChild(KCommandBar* self) {
    if (auto* vkcommandbar = dynamic_cast<VirtualKCommandBar*>(self)) {
        return vkcommandbar->VirtualKCommandBar::focusPreviousChild();
    } else
        qFatal("Error: Protected method KCommandBar::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KCommandBar_Sender(const KCommandBar* self) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self))) {
        return vkcommandbar->VirtualKCommandBar::sender();
    } else
        qFatal("Error: Protected method KCommandBar::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KCommandBar_SenderSignalIndex(const KCommandBar* self) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self))) {
        return vkcommandbar->VirtualKCommandBar::senderSignalIndex();
    } else
        qFatal("Error: Protected method KCommandBar::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KCommandBar_Receivers(const KCommandBar* self, const char* signal) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self))) {
        return vkcommandbar->VirtualKCommandBar::receivers(signal);
    } else
        qFatal("Error: Protected method KCommandBar::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCommandBar_IsSignalConnected(const KCommandBar* self, const QMetaMethod* signal) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self))) {
        return vkcommandbar->VirtualKCommandBar::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KCommandBar::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KCommandBar_GetDecodedMetricF(const KCommandBar* self, int metricA, int metricB) {
    if (auto* vkcommandbar = const_cast<VirtualKCommandBar*>(dynamic_cast<const VirtualKCommandBar*>(self))) {
        return vkcommandbar->VirtualKCommandBar::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KCommandBar::getDecodedMetricF called without a directly constructed type");
}

void KCommandBar_Delete(KCommandBar* self) {
    delete self;
}

KCommandBar__ActionGroup* KCommandBar__ActionGroup_new() {
    return new KCommandBar::ActionGroup();
}

KCommandBar__ActionGroup* KCommandBar__ActionGroup_new2(const KCommandBar__ActionGroup* param1) {
    return new KCommandBar::ActionGroup(*param1);
}

libqt_string KCommandBar__ActionGroup_Name(const KCommandBar__ActionGroup* self) {
    auto name_ret = self->name;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray name_b = name_ret.toUtf8();
    libqt_string name_str;
    name_str.len = name_b.length();
    name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
    memcpy((void*)name_str.data, name_b.data(), name_str.len);
    ((char*)name_str.data)[name_str.len] = '\0';
    return name_str;
}

void KCommandBar__ActionGroup_SetName(KCommandBar__ActionGroup* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->name = name_QString;
}

libqt_list /* of QAction* */ KCommandBar__ActionGroup_Actions(const KCommandBar__ActionGroup* self) {
    QList<QAction*> actions_ret = self->actions;
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** actions_arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (actions_ret.size())));
    for (qsizetype i = 0; i < actions_ret.size(); ++i) {
        actions_arr[i] = actions_ret[i];
    }
    libqt_list actions_out;
    actions_out.len = actions_ret.size();
    actions_out.data = static_cast<void*>(actions_arr);
    return actions_out;
}

void KCommandBar__ActionGroup_SetActions(KCommandBar__ActionGroup* self, libqt_list /* of QAction* */ actions) {
    QList<QAction*> actions_QList;
    actions_QList.reserve(actions.len);
    QAction** actions_arr = static_cast<QAction**>(actions.data);
    for (size_t i = 0; i < actions.len; ++i) {
        actions_QList.push_back(actions_arr[i]);
    }
    self->actions = actions_QList;
}

void KCommandBar__ActionGroup_OperatorAssign(KCommandBar__ActionGroup* self, const KCommandBar__ActionGroup* param1) {
    self->operator=(*param1);
}

void KCommandBar__ActionGroup_Delete(KCommandBar__ActionGroup* self) {
    delete self;
}
