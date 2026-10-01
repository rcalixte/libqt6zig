#include <KAboutApplicationDialog>
#include <KAboutData>
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
#include <kaboutapplicationdialog.h>
#include "libkaboutapplicationdialog.h"
#include "libkaboutapplicationdialog.hxx"

KAboutApplicationDialog* KAboutApplicationDialog_new(const KAboutData* aboutData, int opts) {
    return new VirtualKAboutApplicationDialog(*aboutData, static_cast<KAboutApplicationDialog::Options>(opts));
}

KAboutApplicationDialog* KAboutApplicationDialog_new2(const KAboutData* aboutData) {
    return new VirtualKAboutApplicationDialog(*aboutData);
}

KAboutApplicationDialog* KAboutApplicationDialog_new3(const KAboutData* aboutData, int opts, QWidget* parent) {
    return new VirtualKAboutApplicationDialog(*aboutData, static_cast<KAboutApplicationDialog::Options>(opts), parent);
}

KAboutApplicationDialog* KAboutApplicationDialog_new4(const KAboutData* aboutData, QWidget* parent) {
    return new VirtualKAboutApplicationDialog(*aboutData, parent);
}

QMetaObject* KAboutApplicationDialog_MetaObject(const KAboutApplicationDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KAboutApplicationDialog_Metacast(KAboutApplicationDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KAboutApplicationDialog_Metacall(KAboutApplicationDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KAboutApplicationDialog_Tr(const char* s) {
    auto _ret = KAboutApplicationDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAboutApplicationDialog_Tr2(const char* s, const char* c) {
    auto _ret = KAboutApplicationDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAboutApplicationDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = KAboutApplicationDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* KAboutApplicationDialog_SuperMetaObject(const KAboutApplicationDialog* self) {
    return (QMetaObject*)self->KAboutApplicationDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnMetaObject(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self)))
        vkaboutapplicationdialog->kaboutapplicationdialog_metaobject_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KAboutApplicationDialog_SuperMetacast(KAboutApplicationDialog* self, const char* param1) {
    return self->KAboutApplicationDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnMetacast(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_metacast_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KAboutApplicationDialog_SuperMetacall(KAboutApplicationDialog* self, int param1, int param2, void** param3) {
    return self->KAboutApplicationDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnMetacall(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_metacall_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Metacall_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_SetVisible(KAboutApplicationDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KAboutApplicationDialog_SuperSetVisible(KAboutApplicationDialog* self, bool visible) {
    self->KAboutApplicationDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnSetVisible(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_setvisible_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KAboutApplicationDialog_SizeHint(const KAboutApplicationDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KAboutApplicationDialog_SuperSizeHint(const KAboutApplicationDialog* self) {
    return new QSize(self->KAboutApplicationDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnSizeHint(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self)))
        vkaboutapplicationdialog->kaboutapplicationdialog_sizehint_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KAboutApplicationDialog_MinimumSizeHint(const KAboutApplicationDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KAboutApplicationDialog_SuperMinimumSizeHint(const KAboutApplicationDialog* self) {
    return new QSize(self->KAboutApplicationDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnMinimumSizeHint(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self)))
        vkaboutapplicationdialog->kaboutapplicationdialog_minimumsizehint_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_Open(KAboutApplicationDialog* self) {
    self->open();
}

// Base class handler implementation
void KAboutApplicationDialog_SuperOpen(KAboutApplicationDialog* self) {
    self->KAboutApplicationDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnOpen(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_open_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KAboutApplicationDialog_Exec(KAboutApplicationDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KAboutApplicationDialog_SuperExec(KAboutApplicationDialog* self) {
    return self->KAboutApplicationDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnExec(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_exec_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_Done(KAboutApplicationDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KAboutApplicationDialog_SuperDone(KAboutApplicationDialog* self, int param1) {
    self->KAboutApplicationDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnDone(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_done_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_Accept(KAboutApplicationDialog* self) {
    self->accept();
}

// Base class handler implementation
void KAboutApplicationDialog_SuperAccept(KAboutApplicationDialog* self) {
    self->KAboutApplicationDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnAccept(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_accept_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_Reject(KAboutApplicationDialog* self) {
    self->reject();
}

// Base class handler implementation
void KAboutApplicationDialog_SuperReject(KAboutApplicationDialog* self) {
    self->KAboutApplicationDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnReject(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_reject_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_KeyPressEvent(KAboutApplicationDialog* self, QKeyEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperKeyPressEvent(KAboutApplicationDialog* self, QKeyEvent* param1) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnKeyPressEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_keypressevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_CloseEvent(KAboutApplicationDialog* self, QCloseEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperCloseEvent(KAboutApplicationDialog* self, QCloseEvent* param1) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnCloseEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_closeevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_ShowEvent(KAboutApplicationDialog* self, QShowEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperShowEvent(KAboutApplicationDialog* self, QShowEvent* param1) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnShowEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_showevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_ResizeEvent(KAboutApplicationDialog* self, QResizeEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperResizeEvent(KAboutApplicationDialog* self, QResizeEvent* param1) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnResizeEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_resizeevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_ContextMenuEvent(KAboutApplicationDialog* self, QContextMenuEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperContextMenuEvent(KAboutApplicationDialog* self, QContextMenuEvent* param1) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnContextMenuEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_contextmenuevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KAboutApplicationDialog_EventFilter(KAboutApplicationDialog* self, QObject* param1, QEvent* param2) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        return vkaboutapplicationdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KAboutApplicationDialog_SuperEventFilter(KAboutApplicationDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        return vkaboutapplicationdialog->KAboutApplicationDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnEventFilter(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_eventfilter_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KAboutApplicationDialog_DevType(const KAboutApplicationDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KAboutApplicationDialog_SuperDevType(const KAboutApplicationDialog* self) {
    return self->KAboutApplicationDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnDevType(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self)))
        vkaboutapplicationdialog->kaboutapplicationdialog_devtype_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KAboutApplicationDialog_HeightForWidth(const KAboutApplicationDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KAboutApplicationDialog_SuperHeightForWidth(const KAboutApplicationDialog* self, int param1) {
    return self->KAboutApplicationDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnHeightForWidth(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self)))
        vkaboutapplicationdialog->kaboutapplicationdialog_heightforwidth_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KAboutApplicationDialog_HasHeightForWidth(const KAboutApplicationDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KAboutApplicationDialog_SuperHasHeightForWidth(const KAboutApplicationDialog* self) {
    return self->KAboutApplicationDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnHasHeightForWidth(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self)))
        vkaboutapplicationdialog->kaboutapplicationdialog_hasheightforwidth_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KAboutApplicationDialog_PaintEngine(const KAboutApplicationDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KAboutApplicationDialog_SuperPaintEngine(const KAboutApplicationDialog* self) {
    return self->KAboutApplicationDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnPaintEngine(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self)))
        vkaboutapplicationdialog->kaboutapplicationdialog_paintengine_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KAboutApplicationDialog_Event(KAboutApplicationDialog* self, QEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        return vkaboutapplicationdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KAboutApplicationDialog_SuperEvent(KAboutApplicationDialog* self, QEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        return vkaboutapplicationdialog->KAboutApplicationDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_event_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_MousePressEvent(KAboutApplicationDialog* self, QMouseEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperMousePressEvent(KAboutApplicationDialog* self, QMouseEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnMousePressEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_mousepressevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_MouseReleaseEvent(KAboutApplicationDialog* self, QMouseEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperMouseReleaseEvent(KAboutApplicationDialog* self, QMouseEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnMouseReleaseEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_mousereleaseevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_MouseDoubleClickEvent(KAboutApplicationDialog* self, QMouseEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperMouseDoubleClickEvent(KAboutApplicationDialog* self, QMouseEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnMouseDoubleClickEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_MouseMoveEvent(KAboutApplicationDialog* self, QMouseEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperMouseMoveEvent(KAboutApplicationDialog* self, QMouseEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnMouseMoveEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_mousemoveevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_WheelEvent(KAboutApplicationDialog* self, QWheelEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperWheelEvent(KAboutApplicationDialog* self, QWheelEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnWheelEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_wheelevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_KeyReleaseEvent(KAboutApplicationDialog* self, QKeyEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperKeyReleaseEvent(KAboutApplicationDialog* self, QKeyEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnKeyReleaseEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_keyreleaseevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_FocusInEvent(KAboutApplicationDialog* self, QFocusEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperFocusInEvent(KAboutApplicationDialog* self, QFocusEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnFocusInEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_focusinevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_FocusOutEvent(KAboutApplicationDialog* self, QFocusEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperFocusOutEvent(KAboutApplicationDialog* self, QFocusEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnFocusOutEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_focusoutevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_EnterEvent(KAboutApplicationDialog* self, QEnterEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperEnterEvent(KAboutApplicationDialog* self, QEnterEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnEnterEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_enterevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_LeaveEvent(KAboutApplicationDialog* self, QEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperLeaveEvent(KAboutApplicationDialog* self, QEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnLeaveEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_leaveevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_PaintEvent(KAboutApplicationDialog* self, QPaintEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperPaintEvent(KAboutApplicationDialog* self, QPaintEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnPaintEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_paintevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_MoveEvent(KAboutApplicationDialog* self, QMoveEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperMoveEvent(KAboutApplicationDialog* self, QMoveEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnMoveEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_moveevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_TabletEvent(KAboutApplicationDialog* self, QTabletEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperTabletEvent(KAboutApplicationDialog* self, QTabletEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnTabletEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_tabletevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_ActionEvent(KAboutApplicationDialog* self, QActionEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperActionEvent(KAboutApplicationDialog* self, QActionEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnActionEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_actionevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_DragEnterEvent(KAboutApplicationDialog* self, QDragEnterEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperDragEnterEvent(KAboutApplicationDialog* self, QDragEnterEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnDragEnterEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_dragenterevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_DragMoveEvent(KAboutApplicationDialog* self, QDragMoveEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperDragMoveEvent(KAboutApplicationDialog* self, QDragMoveEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnDragMoveEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_dragmoveevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_DragLeaveEvent(KAboutApplicationDialog* self, QDragLeaveEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperDragLeaveEvent(KAboutApplicationDialog* self, QDragLeaveEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnDragLeaveEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_dragleaveevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_DropEvent(KAboutApplicationDialog* self, QDropEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperDropEvent(KAboutApplicationDialog* self, QDropEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnDropEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_dropevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_HideEvent(KAboutApplicationDialog* self, QHideEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperHideEvent(KAboutApplicationDialog* self, QHideEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnHideEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_hideevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KAboutApplicationDialog_NativeEvent(KAboutApplicationDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        return vkaboutapplicationdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KAboutApplicationDialog_SuperNativeEvent(KAboutApplicationDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        return vkaboutapplicationdialog->KAboutApplicationDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnNativeEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_nativeevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_ChangeEvent(KAboutApplicationDialog* self, QEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperChangeEvent(KAboutApplicationDialog* self, QEvent* param1) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnChangeEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_changeevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KAboutApplicationDialog_Metric(const KAboutApplicationDialog* self, int param1) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog) {
        return vkaboutapplicationdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KAboutApplicationDialog_SuperMetric(const KAboutApplicationDialog* self, int param1) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self))) {
        return vkaboutapplicationdialog->KAboutApplicationDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnMetric(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self)))
        vkaboutapplicationdialog->kaboutapplicationdialog_metric_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_InitPainter(const KAboutApplicationDialog* self, QPainter* painter) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperInitPainter(const KAboutApplicationDialog* self, QPainter* painter) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self))) {
        vkaboutapplicationdialog->KAboutApplicationDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnInitPainter(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self)))
        vkaboutapplicationdialog->kaboutapplicationdialog_initpainter_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KAboutApplicationDialog_Redirected(const KAboutApplicationDialog* self, QPoint* offset) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog) {
        return vkaboutapplicationdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KAboutApplicationDialog_SuperRedirected(const KAboutApplicationDialog* self, QPoint* offset) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self))) {
        return vkaboutapplicationdialog->KAboutApplicationDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnRedirected(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self)))
        vkaboutapplicationdialog->kaboutapplicationdialog_redirected_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KAboutApplicationDialog_SharedPainter(const KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog) {
        return vkaboutapplicationdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KAboutApplicationDialog_SuperSharedPainter(const KAboutApplicationDialog* self) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self))) {
        return vkaboutapplicationdialog->KAboutApplicationDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnSharedPainter(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self)))
        vkaboutapplicationdialog->kaboutapplicationdialog_sharedpainter_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_InputMethodEvent(KAboutApplicationDialog* self, QInputMethodEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperInputMethodEvent(KAboutApplicationDialog* self, QInputMethodEvent* param1) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnInputMethodEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_inputmethodevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KAboutApplicationDialog_InputMethodQuery(const KAboutApplicationDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KAboutApplicationDialog_SuperInputMethodQuery(const KAboutApplicationDialog* self, int param1) {
    return new QVariant(self->KAboutApplicationDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnInputMethodQuery(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self)))
        vkaboutapplicationdialog->kaboutapplicationdialog_inputmethodquery_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KAboutApplicationDialog_FocusNextPrevChild(KAboutApplicationDialog* self, bool next) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        return vkaboutapplicationdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KAboutApplicationDialog_SuperFocusNextPrevChild(KAboutApplicationDialog* self, bool next) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        return vkaboutapplicationdialog->KAboutApplicationDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnFocusNextPrevChild(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_focusnextprevchild_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_TimerEvent(KAboutApplicationDialog* self, QTimerEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperTimerEvent(KAboutApplicationDialog* self, QTimerEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnTimerEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_timerevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_ChildEvent(KAboutApplicationDialog* self, QChildEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperChildEvent(KAboutApplicationDialog* self, QChildEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnChildEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_childevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_CustomEvent(KAboutApplicationDialog* self, QEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperCustomEvent(KAboutApplicationDialog* self, QEvent* event) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnCustomEvent(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_customevent_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_ConnectNotify(KAboutApplicationDialog* self, const QMetaMethod* signal) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperConnectNotify(KAboutApplicationDialog* self, const QMetaMethod* signal) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnConnectNotify(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_connectnotify_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KAboutApplicationDialog_DisconnectNotify(KAboutApplicationDialog* self, const QMetaMethod* signal) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog) {
        vkaboutapplicationdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KAboutApplicationDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutApplicationDialog_SuperDisconnectNotify(KAboutApplicationDialog* self, const QMetaMethod* signal) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->KAboutApplicationDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KAboutApplicationDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnDisconnectNotify(KAboutApplicationDialog* self, intptr_t slot) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self))
        vkaboutapplicationdialog->kaboutapplicationdialog_disconnectnotify_callback = reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KAboutApplicationDialog_AdjustPosition(KAboutApplicationDialog* self, QWidget* param1) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->VirtualKAboutApplicationDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KAboutApplicationDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KAboutApplicationDialog_UpdateMicroFocus(KAboutApplicationDialog* self) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->VirtualKAboutApplicationDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KAboutApplicationDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KAboutApplicationDialog_Create(KAboutApplicationDialog* self) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->VirtualKAboutApplicationDialog::create();
    } else
        qFatal("Error: Protected method KAboutApplicationDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KAboutApplicationDialog_Destroy(KAboutApplicationDialog* self) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        vkaboutapplicationdialog->VirtualKAboutApplicationDialog::destroy();
    } else
        qFatal("Error: Protected method KAboutApplicationDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KAboutApplicationDialog_FocusNextChild(KAboutApplicationDialog* self) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        return vkaboutapplicationdialog->VirtualKAboutApplicationDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KAboutApplicationDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KAboutApplicationDialog_FocusPreviousChild(KAboutApplicationDialog* self) {
    if (auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self)) {
        return vkaboutapplicationdialog->VirtualKAboutApplicationDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KAboutApplicationDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KAboutApplicationDialog_Sender(const KAboutApplicationDialog* self) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self))) {
        return vkaboutapplicationdialog->VirtualKAboutApplicationDialog::sender();
    } else
        qFatal("Error: Protected method KAboutApplicationDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KAboutApplicationDialog_SenderSignalIndex(const KAboutApplicationDialog* self) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self))) {
        return vkaboutapplicationdialog->VirtualKAboutApplicationDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KAboutApplicationDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KAboutApplicationDialog_Receivers(const KAboutApplicationDialog* self, const char* signal) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self))) {
        return vkaboutapplicationdialog->VirtualKAboutApplicationDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KAboutApplicationDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KAboutApplicationDialog_IsSignalConnected(const KAboutApplicationDialog* self, const QMetaMethod* signal) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self))) {
        return vkaboutapplicationdialog->VirtualKAboutApplicationDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KAboutApplicationDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KAboutApplicationDialog_GetDecodedMetricF(const KAboutApplicationDialog* self, int metricA, int metricB) {
    if (auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self))) {
        return vkaboutapplicationdialog->VirtualKAboutApplicationDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KAboutApplicationDialog::getDecodedMetricF called without a directly constructed type");
}

void KAboutApplicationDialog_Delete(KAboutApplicationDialog* self) {
    delete self;
}
