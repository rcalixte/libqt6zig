#include <KPopupFrame>
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
#include <QString>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kpopupframe.h>
#include "libkpopupframe.h"
#include "libkpopupframe.hxx"

KPopupFrame* KPopupFrame_new(QWidget* parent) {
    return new VirtualKPopupFrame(parent);
}

KPopupFrame* KPopupFrame_new2() {
    return new VirtualKPopupFrame();
}

QMetaObject* KPopupFrame_MetaObject(const KPopupFrame* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPopupFrame_Metacast(KPopupFrame* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPopupFrame_Metacall(KPopupFrame* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KPopupFrame_Tr(const char* s) {
    auto _ret = KPopupFrame::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPopupFrame_KeyPressEvent(KPopupFrame* self, QKeyEvent* e) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->keyPressEvent(e);
    }
}

void KPopupFrame_HideEvent(KPopupFrame* self, QHideEvent* e) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->hideEvent(e);
    }
}

void KPopupFrame_Close(KPopupFrame* self, int r) {
    self->close(static_cast<int>(r));
}

void KPopupFrame_SetMainWidget(KPopupFrame* self, QWidget* m) {
    self->setMainWidget(m);
}

void KPopupFrame_ResizeEvent(KPopupFrame* self, QResizeEvent* resize) {
    self->resizeEvent(resize);
}

void KPopupFrame_Popup(KPopupFrame* self, const QPoint* pos) {
    self->popup(*pos);
}

int KPopupFrame_Exec(KPopupFrame* self, const QPoint* p) {
    return self->exec(*p);
}

int KPopupFrame_Exec2(KPopupFrame* self, int x, int y) {
    return self->exec(static_cast<int>(x), static_cast<int>(y));
}

void KPopupFrame_LeaveModality(KPopupFrame* self) {
    self->leaveModality();
}

void KPopupFrame_Connect_LeaveModality(KPopupFrame* self, intptr_t slot) {
    void (*slotFunc)(KPopupFrame*) = reinterpret_cast<void (*)(KPopupFrame*)>(slot);
    KPopupFrame::connect(self,
                         static_cast<void (KPopupFrame::*)()>(&KPopupFrame::leaveModality),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

libqt_string KPopupFrame_Tr2(const char* s, const char* c) {
    auto _ret = KPopupFrame::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPopupFrame_Tr3(const char* s, const char* c, int n) {
    auto _ret = KPopupFrame::tr(s, c, static_cast<int>(n));
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
QMetaObject* KPopupFrame_SuperMetaObject(const KPopupFrame* self) {
    return (QMetaObject*)self->KPopupFrame::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnMetaObject(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self)))
        vkpopupframe->kpopupframe_metaobject_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KPopupFrame_SuperMetacast(KPopupFrame* self, const char* param1) {
    return self->KPopupFrame::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnMetacast(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_metacast_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_Metacast_Callback>(slot);
}

// Base class handler implementation
int KPopupFrame_SuperMetacall(KPopupFrame* self, int param1, int param2, void** param3) {
    return self->KPopupFrame::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnMetacall(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_metacall_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_Metacall_Callback>(slot);
}

// Base class handler implementation
void KPopupFrame_SuperKeyPressEvent(KPopupFrame* self, QKeyEvent* e) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnKeyPressEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_keypressevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void KPopupFrame_SuperHideEvent(KPopupFrame* self, QHideEvent* e) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::hideEvent(e);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnHideEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_hideevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_HideEvent_Callback>(slot);
}

// Base class handler implementation
void KPopupFrame_SuperResizeEvent(KPopupFrame* self, QResizeEvent* resize) {
    self->KPopupFrame::resizeEvent(resize);
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnResizeEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_resizeevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* KPopupFrame_SizeHint(const KPopupFrame* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KPopupFrame_SuperSizeHint(const KPopupFrame* self) {
    return new QSize(self->KPopupFrame::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnSizeHint(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self)))
        vkpopupframe->kpopupframe_sizehint_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_SizeHint_Callback>(slot);
}

// Derived class handler implementation
bool KPopupFrame_Event(KPopupFrame* self, QEvent* e) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        return vkpopupframe->event(e);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPopupFrame_SuperEvent(KPopupFrame* self, QEvent* e) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        return vkpopupframe->KPopupFrame::event(e);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_event_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_Event_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_PaintEvent(KPopupFrame* self, QPaintEvent* param1) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperPaintEvent(KPopupFrame* self, QPaintEvent* param1) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnPaintEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_paintevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_ChangeEvent(KPopupFrame* self, QEvent* param1) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperChangeEvent(KPopupFrame* self, QEvent* param1) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnChangeEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_changeevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_InitStyleOption(const KPopupFrame* self, QStyleOptionFrame* option) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe) {
        vkpopupframe->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperInitStyleOption(const KPopupFrame* self, QStyleOptionFrame* option) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self))) {
        vkpopupframe->KPopupFrame::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnInitStyleOption(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self)))
        vkpopupframe->kpopupframe_initstyleoption_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KPopupFrame_DevType(const KPopupFrame* self) {
    return self->devType();
}

// Base class handler implementation
int KPopupFrame_SuperDevType(const KPopupFrame* self) {
    return self->KPopupFrame::devType();
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnDevType(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self)))
        vkpopupframe->kpopupframe_devtype_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_DevType_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_SetVisible(KPopupFrame* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KPopupFrame_SuperSetVisible(KPopupFrame* self, bool visible) {
    self->KPopupFrame::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnSetVisible(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_setvisible_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KPopupFrame_MinimumSizeHint(const KPopupFrame* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KPopupFrame_SuperMinimumSizeHint(const KPopupFrame* self) {
    return new QSize(self->KPopupFrame::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnMinimumSizeHint(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self)))
        vkpopupframe->kpopupframe_minimumsizehint_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KPopupFrame_HeightForWidth(const KPopupFrame* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KPopupFrame_SuperHeightForWidth(const KPopupFrame* self, int param1) {
    return self->KPopupFrame::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnHeightForWidth(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self)))
        vkpopupframe->kpopupframe_heightforwidth_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KPopupFrame_HasHeightForWidth(const KPopupFrame* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KPopupFrame_SuperHasHeightForWidth(const KPopupFrame* self) {
    return self->KPopupFrame::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnHasHeightForWidth(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self)))
        vkpopupframe->kpopupframe_hasheightforwidth_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KPopupFrame_PaintEngine(const KPopupFrame* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KPopupFrame_SuperPaintEngine(const KPopupFrame* self) {
    return self->KPopupFrame::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnPaintEngine(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self)))
        vkpopupframe->kpopupframe_paintengine_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_MousePressEvent(KPopupFrame* self, QMouseEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperMousePressEvent(KPopupFrame* self, QMouseEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnMousePressEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_mousepressevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_MouseReleaseEvent(KPopupFrame* self, QMouseEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperMouseReleaseEvent(KPopupFrame* self, QMouseEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnMouseReleaseEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_mousereleaseevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_MouseDoubleClickEvent(KPopupFrame* self, QMouseEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperMouseDoubleClickEvent(KPopupFrame* self, QMouseEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnMouseDoubleClickEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_mousedoubleclickevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_MouseMoveEvent(KPopupFrame* self, QMouseEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperMouseMoveEvent(KPopupFrame* self, QMouseEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnMouseMoveEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_mousemoveevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_WheelEvent(KPopupFrame* self, QWheelEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperWheelEvent(KPopupFrame* self, QWheelEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnWheelEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_wheelevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_KeyReleaseEvent(KPopupFrame* self, QKeyEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperKeyReleaseEvent(KPopupFrame* self, QKeyEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnKeyReleaseEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_keyreleaseevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_FocusInEvent(KPopupFrame* self, QFocusEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperFocusInEvent(KPopupFrame* self, QFocusEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnFocusInEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_focusinevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_FocusOutEvent(KPopupFrame* self, QFocusEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperFocusOutEvent(KPopupFrame* self, QFocusEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnFocusOutEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_focusoutevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_EnterEvent(KPopupFrame* self, QEnterEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperEnterEvent(KPopupFrame* self, QEnterEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnEnterEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_enterevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_LeaveEvent(KPopupFrame* self, QEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperLeaveEvent(KPopupFrame* self, QEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnLeaveEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_leaveevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_MoveEvent(KPopupFrame* self, QMoveEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperMoveEvent(KPopupFrame* self, QMoveEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnMoveEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_moveevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_CloseEvent(KPopupFrame* self, QCloseEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperCloseEvent(KPopupFrame* self, QCloseEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnCloseEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_closeevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_ContextMenuEvent(KPopupFrame* self, QContextMenuEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperContextMenuEvent(KPopupFrame* self, QContextMenuEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnContextMenuEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_contextmenuevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_TabletEvent(KPopupFrame* self, QTabletEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperTabletEvent(KPopupFrame* self, QTabletEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnTabletEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_tabletevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_ActionEvent(KPopupFrame* self, QActionEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperActionEvent(KPopupFrame* self, QActionEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnActionEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_actionevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_DragEnterEvent(KPopupFrame* self, QDragEnterEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperDragEnterEvent(KPopupFrame* self, QDragEnterEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnDragEnterEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_dragenterevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_DragMoveEvent(KPopupFrame* self, QDragMoveEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperDragMoveEvent(KPopupFrame* self, QDragMoveEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnDragMoveEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_dragmoveevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_DragLeaveEvent(KPopupFrame* self, QDragLeaveEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperDragLeaveEvent(KPopupFrame* self, QDragLeaveEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnDragLeaveEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_dragleaveevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_DropEvent(KPopupFrame* self, QDropEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperDropEvent(KPopupFrame* self, QDropEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnDropEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_dropevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_ShowEvent(KPopupFrame* self, QShowEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperShowEvent(KPopupFrame* self, QShowEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnShowEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_showevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
bool KPopupFrame_NativeEvent(KPopupFrame* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        return vkpopupframe->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPopupFrame_SuperNativeEvent(KPopupFrame* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        return vkpopupframe->KPopupFrame::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KPopupFrame::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnNativeEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_nativeevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KPopupFrame_Metric(const KPopupFrame* self, int param1) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe) {
        return vkpopupframe->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KPopupFrame_SuperMetric(const KPopupFrame* self, int param1) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self))) {
        return vkpopupframe->KPopupFrame::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KPopupFrame::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnMetric(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self)))
        vkpopupframe->kpopupframe_metric_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_Metric_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_InitPainter(const KPopupFrame* self, QPainter* painter) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe) {
        vkpopupframe->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperInitPainter(const KPopupFrame* self, QPainter* painter) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self))) {
        vkpopupframe->KPopupFrame::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnInitPainter(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self)))
        vkpopupframe->kpopupframe_initpainter_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KPopupFrame_Redirected(const KPopupFrame* self, QPoint* offset) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe) {
        return vkpopupframe->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KPopupFrame_SuperRedirected(const KPopupFrame* self, QPoint* offset) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self))) {
        return vkpopupframe->KPopupFrame::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnRedirected(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self)))
        vkpopupframe->kpopupframe_redirected_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KPopupFrame_SharedPainter(const KPopupFrame* self) {
    auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self));
    if (vkpopupframe) {
        return vkpopupframe->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KPopupFrame_SuperSharedPainter(const KPopupFrame* self) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self))) {
        return vkpopupframe->KPopupFrame::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KPopupFrame::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnSharedPainter(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self)))
        vkpopupframe->kpopupframe_sharedpainter_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_InputMethodEvent(KPopupFrame* self, QInputMethodEvent* param1) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperInputMethodEvent(KPopupFrame* self, QInputMethodEvent* param1) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnInputMethodEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_inputmethodevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KPopupFrame_InputMethodQuery(const KPopupFrame* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KPopupFrame_SuperInputMethodQuery(const KPopupFrame* self, int param1) {
    return new QVariant(self->KPopupFrame::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnInputMethodQuery(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self)))
        vkpopupframe->kpopupframe_inputmethodquery_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KPopupFrame_FocusNextPrevChild(KPopupFrame* self, bool next) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        return vkpopupframe->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPopupFrame_SuperFocusNextPrevChild(KPopupFrame* self, bool next) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        return vkpopupframe->KPopupFrame::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnFocusNextPrevChild(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_focusnextprevchild_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KPopupFrame_EventFilter(KPopupFrame* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KPopupFrame_SuperEventFilter(KPopupFrame* self, QObject* watched, QEvent* event) {
    return self->KPopupFrame::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnEventFilter(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_eventfilter_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_TimerEvent(KPopupFrame* self, QTimerEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperTimerEvent(KPopupFrame* self, QTimerEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnTimerEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_timerevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_ChildEvent(KPopupFrame* self, QChildEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperChildEvent(KPopupFrame* self, QChildEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnChildEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_childevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_CustomEvent(KPopupFrame* self, QEvent* event) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperCustomEvent(KPopupFrame* self, QEvent* event) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnCustomEvent(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_customevent_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_ConnectNotify(KPopupFrame* self, const QMetaMethod* signal) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperConnectNotify(KPopupFrame* self, const QMetaMethod* signal) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnConnectNotify(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_connectnotify_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KPopupFrame_DisconnectNotify(KPopupFrame* self, const QMetaMethod* signal) {
    auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self);
    if (vkpopupframe) {
        vkpopupframe->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPopupFrame::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPopupFrame_SuperDisconnectNotify(KPopupFrame* self, const QMetaMethod* signal) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->KPopupFrame::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPopupFrame::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPopupFrame_OnDisconnectNotify(KPopupFrame* self, intptr_t slot) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self))
        vkpopupframe->kpopupframe_disconnectnotify_callback = reinterpret_cast<VirtualKPopupFrame::KPopupFrame_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KPopupFrame_DrawFrame(KPopupFrame* self, QPainter* param1) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->VirtualKPopupFrame::drawFrame(param1);
    } else
        qFatal("Error: Protected method KPopupFrame::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void KPopupFrame_UpdateMicroFocus(KPopupFrame* self) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->VirtualKPopupFrame::updateMicroFocus();
    } else
        qFatal("Error: Protected method KPopupFrame::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KPopupFrame_Create(KPopupFrame* self) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->VirtualKPopupFrame::create();
    } else
        qFatal("Error: Protected method KPopupFrame::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KPopupFrame_Destroy(KPopupFrame* self) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        vkpopupframe->VirtualKPopupFrame::destroy();
    } else
        qFatal("Error: Protected method KPopupFrame::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPopupFrame_FocusNextChild(KPopupFrame* self) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        return vkpopupframe->VirtualKPopupFrame::focusNextChild();
    } else
        qFatal("Error: Protected method KPopupFrame::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPopupFrame_FocusPreviousChild(KPopupFrame* self) {
    if (auto* vkpopupframe = dynamic_cast<VirtualKPopupFrame*>(self)) {
        return vkpopupframe->VirtualKPopupFrame::focusPreviousChild();
    } else
        qFatal("Error: Protected method KPopupFrame::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KPopupFrame_Sender(const KPopupFrame* self) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self))) {
        return vkpopupframe->VirtualKPopupFrame::sender();
    } else
        qFatal("Error: Protected method KPopupFrame::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KPopupFrame_SenderSignalIndex(const KPopupFrame* self) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self))) {
        return vkpopupframe->VirtualKPopupFrame::senderSignalIndex();
    } else
        qFatal("Error: Protected method KPopupFrame::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KPopupFrame_Receivers(const KPopupFrame* self, const char* signal) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self))) {
        return vkpopupframe->VirtualKPopupFrame::receivers(signal);
    } else
        qFatal("Error: Protected method KPopupFrame::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPopupFrame_IsSignalConnected(const KPopupFrame* self, const QMetaMethod* signal) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self))) {
        return vkpopupframe->VirtualKPopupFrame::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KPopupFrame::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KPopupFrame_GetDecodedMetricF(const KPopupFrame* self, int metricA, int metricB) {
    if (auto* vkpopupframe = const_cast<VirtualKPopupFrame*>(dynamic_cast<const VirtualKPopupFrame*>(self))) {
        return vkpopupframe->VirtualKPopupFrame::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KPopupFrame::getDecodedMetricF called without a directly constructed type");
}

void KPopupFrame_Delete(KPopupFrame* self) {
    delete self;
}
