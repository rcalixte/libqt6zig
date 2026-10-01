#include <KAboutPluginDialog>
#include <KPluginMetaData>
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
#include <kaboutplugindialog.h>
#include "libkaboutplugindialog.h"
#include "libkaboutplugindialog.hxx"

KAboutPluginDialog* KAboutPluginDialog_new(const KPluginMetaData* pluginMetaData, int options) {
    return new VirtualKAboutPluginDialog(*pluginMetaData, static_cast<KAboutPluginDialog::Options>(options));
}

KAboutPluginDialog* KAboutPluginDialog_new2(const KPluginMetaData* pluginMetaData) {
    return new VirtualKAboutPluginDialog(*pluginMetaData);
}

KAboutPluginDialog* KAboutPluginDialog_new3(const KPluginMetaData* pluginMetaData, int options, QWidget* parent) {
    return new VirtualKAboutPluginDialog(*pluginMetaData, static_cast<KAboutPluginDialog::Options>(options), parent);
}

KAboutPluginDialog* KAboutPluginDialog_new4(const KPluginMetaData* pluginMetaData, QWidget* parent) {
    return new VirtualKAboutPluginDialog(*pluginMetaData, parent);
}

QMetaObject* KAboutPluginDialog_MetaObject(const KAboutPluginDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KAboutPluginDialog_Metacast(KAboutPluginDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KAboutPluginDialog_Metacall(KAboutPluginDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KAboutPluginDialog_Tr(const char* s) {
    auto _ret = KAboutPluginDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAboutPluginDialog_Tr2(const char* s, const char* c) {
    auto _ret = KAboutPluginDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAboutPluginDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = KAboutPluginDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* KAboutPluginDialog_SuperMetaObject(const KAboutPluginDialog* self) {
    return (QMetaObject*)self->KAboutPluginDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnMetaObject(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self)))
        vkaboutplugindialog->kaboutplugindialog_metaobject_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KAboutPluginDialog_SuperMetacast(KAboutPluginDialog* self, const char* param1) {
    return self->KAboutPluginDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnMetacast(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_metacast_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KAboutPluginDialog_SuperMetacall(KAboutPluginDialog* self, int param1, int param2, void** param3) {
    return self->KAboutPluginDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnMetacall(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_metacall_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Metacall_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_SetVisible(KAboutPluginDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KAboutPluginDialog_SuperSetVisible(KAboutPluginDialog* self, bool visible) {
    self->KAboutPluginDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnSetVisible(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_setvisible_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KAboutPluginDialog_SizeHint(const KAboutPluginDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KAboutPluginDialog_SuperSizeHint(const KAboutPluginDialog* self) {
    return new QSize(self->KAboutPluginDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnSizeHint(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self)))
        vkaboutplugindialog->kaboutplugindialog_sizehint_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KAboutPluginDialog_MinimumSizeHint(const KAboutPluginDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KAboutPluginDialog_SuperMinimumSizeHint(const KAboutPluginDialog* self) {
    return new QSize(self->KAboutPluginDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnMinimumSizeHint(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self)))
        vkaboutplugindialog->kaboutplugindialog_minimumsizehint_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_Open(KAboutPluginDialog* self) {
    self->open();
}

// Base class handler implementation
void KAboutPluginDialog_SuperOpen(KAboutPluginDialog* self) {
    self->KAboutPluginDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnOpen(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_open_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KAboutPluginDialog_Exec(KAboutPluginDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KAboutPluginDialog_SuperExec(KAboutPluginDialog* self) {
    return self->KAboutPluginDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnExec(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_exec_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_Done(KAboutPluginDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KAboutPluginDialog_SuperDone(KAboutPluginDialog* self, int param1) {
    self->KAboutPluginDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnDone(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_done_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_Accept(KAboutPluginDialog* self) {
    self->accept();
}

// Base class handler implementation
void KAboutPluginDialog_SuperAccept(KAboutPluginDialog* self) {
    self->KAboutPluginDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnAccept(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_accept_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_Reject(KAboutPluginDialog* self) {
    self->reject();
}

// Base class handler implementation
void KAboutPluginDialog_SuperReject(KAboutPluginDialog* self) {
    self->KAboutPluginDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnReject(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_reject_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_KeyPressEvent(KAboutPluginDialog* self, QKeyEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperKeyPressEvent(KAboutPluginDialog* self, QKeyEvent* param1) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnKeyPressEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_keypressevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_CloseEvent(KAboutPluginDialog* self, QCloseEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperCloseEvent(KAboutPluginDialog* self, QCloseEvent* param1) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnCloseEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_closeevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_ShowEvent(KAboutPluginDialog* self, QShowEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperShowEvent(KAboutPluginDialog* self, QShowEvent* param1) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnShowEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_showevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_ResizeEvent(KAboutPluginDialog* self, QResizeEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperResizeEvent(KAboutPluginDialog* self, QResizeEvent* param1) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnResizeEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_resizeevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_ContextMenuEvent(KAboutPluginDialog* self, QContextMenuEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperContextMenuEvent(KAboutPluginDialog* self, QContextMenuEvent* param1) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnContextMenuEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_contextmenuevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KAboutPluginDialog_EventFilter(KAboutPluginDialog* self, QObject* param1, QEvent* param2) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        return vkaboutplugindialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KAboutPluginDialog_SuperEventFilter(KAboutPluginDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        return vkaboutplugindialog->KAboutPluginDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnEventFilter(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_eventfilter_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KAboutPluginDialog_DevType(const KAboutPluginDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KAboutPluginDialog_SuperDevType(const KAboutPluginDialog* self) {
    return self->KAboutPluginDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnDevType(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self)))
        vkaboutplugindialog->kaboutplugindialog_devtype_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KAboutPluginDialog_HeightForWidth(const KAboutPluginDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KAboutPluginDialog_SuperHeightForWidth(const KAboutPluginDialog* self, int param1) {
    return self->KAboutPluginDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnHeightForWidth(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self)))
        vkaboutplugindialog->kaboutplugindialog_heightforwidth_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KAboutPluginDialog_HasHeightForWidth(const KAboutPluginDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KAboutPluginDialog_SuperHasHeightForWidth(const KAboutPluginDialog* self) {
    return self->KAboutPluginDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnHasHeightForWidth(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self)))
        vkaboutplugindialog->kaboutplugindialog_hasheightforwidth_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KAboutPluginDialog_PaintEngine(const KAboutPluginDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KAboutPluginDialog_SuperPaintEngine(const KAboutPluginDialog* self) {
    return self->KAboutPluginDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnPaintEngine(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self)))
        vkaboutplugindialog->kaboutplugindialog_paintengine_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KAboutPluginDialog_Event(KAboutPluginDialog* self, QEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        return vkaboutplugindialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KAboutPluginDialog_SuperEvent(KAboutPluginDialog* self, QEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        return vkaboutplugindialog->KAboutPluginDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_event_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_MousePressEvent(KAboutPluginDialog* self, QMouseEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperMousePressEvent(KAboutPluginDialog* self, QMouseEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnMousePressEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_mousepressevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_MouseReleaseEvent(KAboutPluginDialog* self, QMouseEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperMouseReleaseEvent(KAboutPluginDialog* self, QMouseEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnMouseReleaseEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_mousereleaseevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_MouseDoubleClickEvent(KAboutPluginDialog* self, QMouseEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperMouseDoubleClickEvent(KAboutPluginDialog* self, QMouseEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnMouseDoubleClickEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_MouseMoveEvent(KAboutPluginDialog* self, QMouseEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperMouseMoveEvent(KAboutPluginDialog* self, QMouseEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnMouseMoveEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_mousemoveevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_WheelEvent(KAboutPluginDialog* self, QWheelEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperWheelEvent(KAboutPluginDialog* self, QWheelEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnWheelEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_wheelevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_KeyReleaseEvent(KAboutPluginDialog* self, QKeyEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperKeyReleaseEvent(KAboutPluginDialog* self, QKeyEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnKeyReleaseEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_keyreleaseevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_FocusInEvent(KAboutPluginDialog* self, QFocusEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperFocusInEvent(KAboutPluginDialog* self, QFocusEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnFocusInEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_focusinevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_FocusOutEvent(KAboutPluginDialog* self, QFocusEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperFocusOutEvent(KAboutPluginDialog* self, QFocusEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnFocusOutEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_focusoutevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_EnterEvent(KAboutPluginDialog* self, QEnterEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperEnterEvent(KAboutPluginDialog* self, QEnterEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnEnterEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_enterevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_LeaveEvent(KAboutPluginDialog* self, QEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperLeaveEvent(KAboutPluginDialog* self, QEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnLeaveEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_leaveevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_PaintEvent(KAboutPluginDialog* self, QPaintEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperPaintEvent(KAboutPluginDialog* self, QPaintEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnPaintEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_paintevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_MoveEvent(KAboutPluginDialog* self, QMoveEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperMoveEvent(KAboutPluginDialog* self, QMoveEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnMoveEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_moveevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_TabletEvent(KAboutPluginDialog* self, QTabletEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperTabletEvent(KAboutPluginDialog* self, QTabletEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnTabletEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_tabletevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_ActionEvent(KAboutPluginDialog* self, QActionEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperActionEvent(KAboutPluginDialog* self, QActionEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnActionEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_actionevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_DragEnterEvent(KAboutPluginDialog* self, QDragEnterEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperDragEnterEvent(KAboutPluginDialog* self, QDragEnterEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnDragEnterEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_dragenterevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_DragMoveEvent(KAboutPluginDialog* self, QDragMoveEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperDragMoveEvent(KAboutPluginDialog* self, QDragMoveEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnDragMoveEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_dragmoveevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_DragLeaveEvent(KAboutPluginDialog* self, QDragLeaveEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperDragLeaveEvent(KAboutPluginDialog* self, QDragLeaveEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnDragLeaveEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_dragleaveevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_DropEvent(KAboutPluginDialog* self, QDropEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperDropEvent(KAboutPluginDialog* self, QDropEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnDropEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_dropevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_HideEvent(KAboutPluginDialog* self, QHideEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperHideEvent(KAboutPluginDialog* self, QHideEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnHideEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_hideevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KAboutPluginDialog_NativeEvent(KAboutPluginDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        return vkaboutplugindialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KAboutPluginDialog_SuperNativeEvent(KAboutPluginDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        return vkaboutplugindialog->KAboutPluginDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnNativeEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_nativeevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_ChangeEvent(KAboutPluginDialog* self, QEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperChangeEvent(KAboutPluginDialog* self, QEvent* param1) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnChangeEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_changeevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KAboutPluginDialog_Metric(const KAboutPluginDialog* self, int param1) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog) {
        return vkaboutplugindialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KAboutPluginDialog_SuperMetric(const KAboutPluginDialog* self, int param1) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self))) {
        return vkaboutplugindialog->KAboutPluginDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnMetric(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self)))
        vkaboutplugindialog->kaboutplugindialog_metric_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_InitPainter(const KAboutPluginDialog* self, QPainter* painter) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog) {
        vkaboutplugindialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperInitPainter(const KAboutPluginDialog* self, QPainter* painter) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self))) {
        vkaboutplugindialog->KAboutPluginDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnInitPainter(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self)))
        vkaboutplugindialog->kaboutplugindialog_initpainter_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KAboutPluginDialog_Redirected(const KAboutPluginDialog* self, QPoint* offset) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog) {
        return vkaboutplugindialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KAboutPluginDialog_SuperRedirected(const KAboutPluginDialog* self, QPoint* offset) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self))) {
        return vkaboutplugindialog->KAboutPluginDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnRedirected(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self)))
        vkaboutplugindialog->kaboutplugindialog_redirected_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KAboutPluginDialog_SharedPainter(const KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog) {
        return vkaboutplugindialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KAboutPluginDialog_SuperSharedPainter(const KAboutPluginDialog* self) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self))) {
        return vkaboutplugindialog->KAboutPluginDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnSharedPainter(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self)))
        vkaboutplugindialog->kaboutplugindialog_sharedpainter_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_InputMethodEvent(KAboutPluginDialog* self, QInputMethodEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperInputMethodEvent(KAboutPluginDialog* self, QInputMethodEvent* param1) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnInputMethodEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_inputmethodevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KAboutPluginDialog_InputMethodQuery(const KAboutPluginDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KAboutPluginDialog_SuperInputMethodQuery(const KAboutPluginDialog* self, int param1) {
    return new QVariant(self->KAboutPluginDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnInputMethodQuery(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self)))
        vkaboutplugindialog->kaboutplugindialog_inputmethodquery_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KAboutPluginDialog_FocusNextPrevChild(KAboutPluginDialog* self, bool next) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        return vkaboutplugindialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KAboutPluginDialog_SuperFocusNextPrevChild(KAboutPluginDialog* self, bool next) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        return vkaboutplugindialog->KAboutPluginDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnFocusNextPrevChild(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_focusnextprevchild_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_TimerEvent(KAboutPluginDialog* self, QTimerEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperTimerEvent(KAboutPluginDialog* self, QTimerEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnTimerEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_timerevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_ChildEvent(KAboutPluginDialog* self, QChildEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperChildEvent(KAboutPluginDialog* self, QChildEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnChildEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_childevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_CustomEvent(KAboutPluginDialog* self, QEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperCustomEvent(KAboutPluginDialog* self, QEvent* event) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnCustomEvent(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_customevent_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_ConnectNotify(KAboutPluginDialog* self, const QMetaMethod* signal) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperConnectNotify(KAboutPluginDialog* self, const QMetaMethod* signal) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnConnectNotify(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_connectnotify_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KAboutPluginDialog_DisconnectNotify(KAboutPluginDialog* self, const QMetaMethod* signal) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog) {
        vkaboutplugindialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KAboutPluginDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KAboutPluginDialog_SuperDisconnectNotify(KAboutPluginDialog* self, const QMetaMethod* signal) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->KAboutPluginDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KAboutPluginDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnDisconnectNotify(KAboutPluginDialog* self, intptr_t slot) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self))
        vkaboutplugindialog->kaboutplugindialog_disconnectnotify_callback = reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KAboutPluginDialog_AdjustPosition(KAboutPluginDialog* self, QWidget* param1) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->VirtualKAboutPluginDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KAboutPluginDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KAboutPluginDialog_UpdateMicroFocus(KAboutPluginDialog* self) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->VirtualKAboutPluginDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KAboutPluginDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KAboutPluginDialog_Create(KAboutPluginDialog* self) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->VirtualKAboutPluginDialog::create();
    } else
        qFatal("Error: Protected method KAboutPluginDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KAboutPluginDialog_Destroy(KAboutPluginDialog* self) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        vkaboutplugindialog->VirtualKAboutPluginDialog::destroy();
    } else
        qFatal("Error: Protected method KAboutPluginDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KAboutPluginDialog_FocusNextChild(KAboutPluginDialog* self) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        return vkaboutplugindialog->VirtualKAboutPluginDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KAboutPluginDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KAboutPluginDialog_FocusPreviousChild(KAboutPluginDialog* self) {
    if (auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self)) {
        return vkaboutplugindialog->VirtualKAboutPluginDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KAboutPluginDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KAboutPluginDialog_Sender(const KAboutPluginDialog* self) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self))) {
        return vkaboutplugindialog->VirtualKAboutPluginDialog::sender();
    } else
        qFatal("Error: Protected method KAboutPluginDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KAboutPluginDialog_SenderSignalIndex(const KAboutPluginDialog* self) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self))) {
        return vkaboutplugindialog->VirtualKAboutPluginDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KAboutPluginDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KAboutPluginDialog_Receivers(const KAboutPluginDialog* self, const char* signal) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self))) {
        return vkaboutplugindialog->VirtualKAboutPluginDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KAboutPluginDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KAboutPluginDialog_IsSignalConnected(const KAboutPluginDialog* self, const QMetaMethod* signal) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self))) {
        return vkaboutplugindialog->VirtualKAboutPluginDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KAboutPluginDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KAboutPluginDialog_GetDecodedMetricF(const KAboutPluginDialog* self, int metricA, int metricB) {
    if (auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self))) {
        return vkaboutplugindialog->VirtualKAboutPluginDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KAboutPluginDialog::getDecodedMetricF called without a directly constructed type");
}

void KAboutPluginDialog_Delete(KAboutPluginDialog* self) {
    delete self;
}
