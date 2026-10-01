#include <KAboutData>
#include <KBugReport>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
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
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kbugreport.h>
#include "libkbugreport.h"
#include "libkbugreport.hxx"

KBugReport* KBugReport_new(const KAboutData* aboutData) {
    return new VirtualKBugReport(*aboutData);
}

KBugReport* KBugReport_new2(const KAboutData* aboutData, QWidget* parent) {
    return new VirtualKBugReport(*aboutData, parent);
}

QMetaObject* KBugReport_MetaObject(const KBugReport* self) {
    return (QMetaObject*)self->metaObject();
}

void* KBugReport_Metacast(KBugReport* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KBugReport_Metacall(KBugReport* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KBugReport_Tr(const char* s) {
    auto _ret = KBugReport::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KBugReport_Accept(KBugReport* self) {
    self->accept();
}

libqt_string KBugReport_Tr2(const char* s, const char* c) {
    auto _ret = KBugReport::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KBugReport_Tr3(const char* s, const char* c, int n) {
    auto _ret = KBugReport::tr(s, c, static_cast<int>(n));
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
QMetaObject* KBugReport_SuperMetaObject(const KBugReport* self) {
    return (QMetaObject*)self->KBugReport::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnMetaObject(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self)))
        vkbugreport->kbugreport_metaobject_callback = reinterpret_cast<VirtualKBugReport::KBugReport_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KBugReport_SuperMetacast(KBugReport* self, const char* param1) {
    return self->KBugReport::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnMetacast(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_metacast_callback = reinterpret_cast<VirtualKBugReport::KBugReport_Metacast_Callback>(slot);
}

// Base class handler implementation
int KBugReport_SuperMetacall(KBugReport* self, int param1, int param2, void** param3) {
    return self->KBugReport::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnMetacall(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_metacall_callback = reinterpret_cast<VirtualKBugReport::KBugReport_Metacall_Callback>(slot);
}

// Base class handler implementation
void KBugReport_SuperAccept(KBugReport* self) {
    self->KBugReport::accept();
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnAccept(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_accept_callback = reinterpret_cast<VirtualKBugReport::KBugReport_Accept_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_SetVisible(KBugReport* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KBugReport_SuperSetVisible(KBugReport* self, bool visible) {
    self->KBugReport::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnSetVisible(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_setvisible_callback = reinterpret_cast<VirtualKBugReport::KBugReport_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KBugReport_SizeHint(const KBugReport* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KBugReport_SuperSizeHint(const KBugReport* self) {
    return new QSize(self->KBugReport::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnSizeHint(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self)))
        vkbugreport->kbugreport_sizehint_callback = reinterpret_cast<VirtualKBugReport::KBugReport_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KBugReport_MinimumSizeHint(const KBugReport* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KBugReport_SuperMinimumSizeHint(const KBugReport* self) {
    return new QSize(self->KBugReport::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnMinimumSizeHint(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self)))
        vkbugreport->kbugreport_minimumsizehint_callback = reinterpret_cast<VirtualKBugReport::KBugReport_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_Open(KBugReport* self) {
    self->open();
}

// Base class handler implementation
void KBugReport_SuperOpen(KBugReport* self) {
    self->KBugReport::open();
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnOpen(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_open_callback = reinterpret_cast<VirtualKBugReport::KBugReport_Open_Callback>(slot);
}

// Derived class handler implementation
int KBugReport_Exec(KBugReport* self) {
    return self->exec();
}

// Base class handler implementation
int KBugReport_SuperExec(KBugReport* self) {
    return self->KBugReport::exec();
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnExec(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_exec_callback = reinterpret_cast<VirtualKBugReport::KBugReport_Exec_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_Done(KBugReport* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KBugReport_SuperDone(KBugReport* self, int param1) {
    self->KBugReport::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnDone(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_done_callback = reinterpret_cast<VirtualKBugReport::KBugReport_Done_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_Reject(KBugReport* self) {
    self->reject();
}

// Base class handler implementation
void KBugReport_SuperReject(KBugReport* self) {
    self->KBugReport::reject();
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnReject(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_reject_callback = reinterpret_cast<VirtualKBugReport::KBugReport_Reject_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_KeyPressEvent(KBugReport* self, QKeyEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBugReport::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperKeyPressEvent(KBugReport* self, QKeyEvent* param1) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBugReport::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnKeyPressEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_keypressevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_CloseEvent(KBugReport* self, QCloseEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBugReport::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperCloseEvent(KBugReport* self, QCloseEvent* param1) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBugReport::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnCloseEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_closeevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_ShowEvent(KBugReport* self, QShowEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBugReport::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperShowEvent(KBugReport* self, QShowEvent* param1) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBugReport::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnShowEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_showevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_ResizeEvent(KBugReport* self, QResizeEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBugReport::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperResizeEvent(KBugReport* self, QResizeEvent* param1) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBugReport::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnResizeEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_resizeevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_ContextMenuEvent(KBugReport* self, QContextMenuEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBugReport::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperContextMenuEvent(KBugReport* self, QContextMenuEvent* param1) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBugReport::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnContextMenuEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_contextmenuevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KBugReport_EventFilter(KBugReport* self, QObject* param1, QEvent* param2) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        return vkbugreport->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KBugReport::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KBugReport_SuperEventFilter(KBugReport* self, QObject* param1, QEvent* param2) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        return vkbugreport->KBugReport::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KBugReport::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnEventFilter(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_eventfilter_callback = reinterpret_cast<VirtualKBugReport::KBugReport_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KBugReport_DevType(const KBugReport* self) {
    return self->devType();
}

// Base class handler implementation
int KBugReport_SuperDevType(const KBugReport* self) {
    return self->KBugReport::devType();
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnDevType(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self)))
        vkbugreport->kbugreport_devtype_callback = reinterpret_cast<VirtualKBugReport::KBugReport_DevType_Callback>(slot);
}

// Derived class handler implementation
int KBugReport_HeightForWidth(const KBugReport* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KBugReport_SuperHeightForWidth(const KBugReport* self, int param1) {
    return self->KBugReport::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnHeightForWidth(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self)))
        vkbugreport->kbugreport_heightforwidth_callback = reinterpret_cast<VirtualKBugReport::KBugReport_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KBugReport_HasHeightForWidth(const KBugReport* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KBugReport_SuperHasHeightForWidth(const KBugReport* self) {
    return self->KBugReport::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnHasHeightForWidth(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self)))
        vkbugreport->kbugreport_hasheightforwidth_callback = reinterpret_cast<VirtualKBugReport::KBugReport_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KBugReport_PaintEngine(const KBugReport* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KBugReport_SuperPaintEngine(const KBugReport* self) {
    return self->KBugReport::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnPaintEngine(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self)))
        vkbugreport->kbugreport_paintengine_callback = reinterpret_cast<VirtualKBugReport::KBugReport_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KBugReport_Event(KBugReport* self, QEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        return vkbugreport->event(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KBugReport_SuperEvent(KBugReport* self, QEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        return vkbugreport->KBugReport::event(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_event_callback = reinterpret_cast<VirtualKBugReport::KBugReport_Event_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_MousePressEvent(KBugReport* self, QMouseEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperMousePressEvent(KBugReport* self, QMouseEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnMousePressEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_mousepressevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_MouseReleaseEvent(KBugReport* self, QMouseEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperMouseReleaseEvent(KBugReport* self, QMouseEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnMouseReleaseEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_mousereleaseevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_MouseDoubleClickEvent(KBugReport* self, QMouseEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperMouseDoubleClickEvent(KBugReport* self, QMouseEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnMouseDoubleClickEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_mousedoubleclickevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_MouseMoveEvent(KBugReport* self, QMouseEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperMouseMoveEvent(KBugReport* self, QMouseEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnMouseMoveEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_mousemoveevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_WheelEvent(KBugReport* self, QWheelEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperWheelEvent(KBugReport* self, QWheelEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnWheelEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_wheelevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_KeyReleaseEvent(KBugReport* self, QKeyEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperKeyReleaseEvent(KBugReport* self, QKeyEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnKeyReleaseEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_keyreleaseevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_FocusInEvent(KBugReport* self, QFocusEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperFocusInEvent(KBugReport* self, QFocusEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnFocusInEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_focusinevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_FocusOutEvent(KBugReport* self, QFocusEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperFocusOutEvent(KBugReport* self, QFocusEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnFocusOutEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_focusoutevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_EnterEvent(KBugReport* self, QEnterEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperEnterEvent(KBugReport* self, QEnterEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnEnterEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_enterevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_LeaveEvent(KBugReport* self, QEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperLeaveEvent(KBugReport* self, QEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnLeaveEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_leaveevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_PaintEvent(KBugReport* self, QPaintEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperPaintEvent(KBugReport* self, QPaintEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnPaintEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_paintevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_MoveEvent(KBugReport* self, QMoveEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperMoveEvent(KBugReport* self, QMoveEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnMoveEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_moveevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_TabletEvent(KBugReport* self, QTabletEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperTabletEvent(KBugReport* self, QTabletEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnTabletEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_tabletevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_ActionEvent(KBugReport* self, QActionEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperActionEvent(KBugReport* self, QActionEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnActionEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_actionevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_DragEnterEvent(KBugReport* self, QDragEnterEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperDragEnterEvent(KBugReport* self, QDragEnterEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnDragEnterEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_dragenterevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_DragMoveEvent(KBugReport* self, QDragMoveEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperDragMoveEvent(KBugReport* self, QDragMoveEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnDragMoveEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_dragmoveevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_DragLeaveEvent(KBugReport* self, QDragLeaveEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperDragLeaveEvent(KBugReport* self, QDragLeaveEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnDragLeaveEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_dragleaveevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_DropEvent(KBugReport* self, QDropEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperDropEvent(KBugReport* self, QDropEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnDropEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_dropevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_HideEvent(KBugReport* self, QHideEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperHideEvent(KBugReport* self, QHideEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnHideEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_hideevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KBugReport_NativeEvent(KBugReport* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        return vkbugreport->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KBugReport::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KBugReport_SuperNativeEvent(KBugReport* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        return vkbugreport->KBugReport::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KBugReport::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnNativeEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_nativeevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_ChangeEvent(KBugReport* self, QEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBugReport::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperChangeEvent(KBugReport* self, QEvent* param1) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBugReport::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnChangeEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_changeevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KBugReport_Metric(const KBugReport* self, int param1) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport) {
        return vkbugreport->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KBugReport::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KBugReport_SuperMetric(const KBugReport* self, int param1) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self))) {
        return vkbugreport->KBugReport::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KBugReport::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnMetric(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self)))
        vkbugreport->kbugreport_metric_callback = reinterpret_cast<VirtualKBugReport::KBugReport_Metric_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_InitPainter(const KBugReport* self, QPainter* painter) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport) {
        vkbugreport->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KBugReport::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperInitPainter(const KBugReport* self, QPainter* painter) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self))) {
        vkbugreport->KBugReport::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KBugReport::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnInitPainter(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self)))
        vkbugreport->kbugreport_initpainter_callback = reinterpret_cast<VirtualKBugReport::KBugReport_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KBugReport_Redirected(const KBugReport* self, QPoint* offset) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport) {
        return vkbugreport->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KBugReport::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KBugReport_SuperRedirected(const KBugReport* self, QPoint* offset) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self))) {
        return vkbugreport->KBugReport::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KBugReport::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnRedirected(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self)))
        vkbugreport->kbugreport_redirected_callback = reinterpret_cast<VirtualKBugReport::KBugReport_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KBugReport_SharedPainter(const KBugReport* self) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport) {
        return vkbugreport->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KBugReport::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KBugReport_SuperSharedPainter(const KBugReport* self) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self))) {
        return vkbugreport->KBugReport::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KBugReport::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnSharedPainter(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self)))
        vkbugreport->kbugreport_sharedpainter_callback = reinterpret_cast<VirtualKBugReport::KBugReport_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_InputMethodEvent(KBugReport* self, QInputMethodEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBugReport::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperInputMethodEvent(KBugReport* self, QInputMethodEvent* param1) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBugReport::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnInputMethodEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_inputmethodevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KBugReport_InputMethodQuery(const KBugReport* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KBugReport_SuperInputMethodQuery(const KBugReport* self, int param1) {
    return new QVariant(self->KBugReport::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnInputMethodQuery(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self)))
        vkbugreport->kbugreport_inputmethodquery_callback = reinterpret_cast<VirtualKBugReport::KBugReport_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KBugReport_FocusNextPrevChild(KBugReport* self, bool next) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        return vkbugreport->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KBugReport::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KBugReport_SuperFocusNextPrevChild(KBugReport* self, bool next) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        return vkbugreport->KBugReport::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KBugReport::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnFocusNextPrevChild(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_focusnextprevchild_callback = reinterpret_cast<VirtualKBugReport::KBugReport_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_TimerEvent(KBugReport* self, QTimerEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperTimerEvent(KBugReport* self, QTimerEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnTimerEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_timerevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_ChildEvent(KBugReport* self, QChildEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperChildEvent(KBugReport* self, QChildEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnChildEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_childevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_CustomEvent(KBugReport* self, QEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBugReport::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperCustomEvent(KBugReport* self, QEvent* event) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KBugReport::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnCustomEvent(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_customevent_callback = reinterpret_cast<VirtualKBugReport::KBugReport_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_ConnectNotify(KBugReport* self, const QMetaMethod* signal) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KBugReport::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperConnectNotify(KBugReport* self, const QMetaMethod* signal) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KBugReport::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnConnectNotify(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_connectnotify_callback = reinterpret_cast<VirtualKBugReport::KBugReport_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KBugReport_DisconnectNotify(KBugReport* self, const QMetaMethod* signal) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport) {
        vkbugreport->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KBugReport::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KBugReport_SuperDisconnectNotify(KBugReport* self, const QMetaMethod* signal) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->KBugReport::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KBugReport::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnDisconnectNotify(KBugReport* self, intptr_t slot) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self))
        vkbugreport->kbugreport_disconnectnotify_callback = reinterpret_cast<VirtualKBugReport::KBugReport_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
bool KBugReport_SendBugReport(KBugReport* self) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        return vkbugreport->VirtualKBugReport::sendBugReport();
    } else
        qFatal("Error: Protected method KBugReport::sendBugReport called without a directly constructed type");
}

// Derived class protected handler implementation
void KBugReport_AdjustPosition(KBugReport* self, QWidget* param1) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->VirtualKBugReport::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KBugReport::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KBugReport_UpdateMicroFocus(KBugReport* self) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->VirtualKBugReport::updateMicroFocus();
    } else
        qFatal("Error: Protected method KBugReport::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KBugReport_Create(KBugReport* self) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->VirtualKBugReport::create();
    } else
        qFatal("Error: Protected method KBugReport::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KBugReport_Destroy(KBugReport* self) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        vkbugreport->VirtualKBugReport::destroy();
    } else
        qFatal("Error: Protected method KBugReport::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KBugReport_FocusNextChild(KBugReport* self) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        return vkbugreport->VirtualKBugReport::focusNextChild();
    } else
        qFatal("Error: Protected method KBugReport::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KBugReport_FocusPreviousChild(KBugReport* self) {
    if (auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self)) {
        return vkbugreport->VirtualKBugReport::focusPreviousChild();
    } else
        qFatal("Error: Protected method KBugReport::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KBugReport_Sender(const KBugReport* self) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self))) {
        return vkbugreport->VirtualKBugReport::sender();
    } else
        qFatal("Error: Protected method KBugReport::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KBugReport_SenderSignalIndex(const KBugReport* self) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self))) {
        return vkbugreport->VirtualKBugReport::senderSignalIndex();
    } else
        qFatal("Error: Protected method KBugReport::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KBugReport_Receivers(const KBugReport* self, const char* signal) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self))) {
        return vkbugreport->VirtualKBugReport::receivers(signal);
    } else
        qFatal("Error: Protected method KBugReport::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KBugReport_IsSignalConnected(const KBugReport* self, const QMetaMethod* signal) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self))) {
        return vkbugreport->VirtualKBugReport::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KBugReport::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KBugReport_GetDecodedMetricF(const KBugReport* self, int metricA, int metricB) {
    if (auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self))) {
        return vkbugreport->VirtualKBugReport::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KBugReport::getDecodedMetricF called without a directly constructed type");
}

void KBugReport_Delete(KBugReport* self) {
    delete self;
}
