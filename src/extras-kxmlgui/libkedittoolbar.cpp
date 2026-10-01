#include <KActionCollection>
#include <KEditToolBar>
#include <KXMLGUIFactory>
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
#include <kedittoolbar.h>
#include "libkedittoolbar.h"
#include "libkedittoolbar.hxx"

KEditToolBar* KEditToolBar_new(KActionCollection* collection) {
    return new VirtualKEditToolBar(collection);
}

KEditToolBar* KEditToolBar_new2(KXMLGUIFactory* factory) {
    return new VirtualKEditToolBar(factory);
}

KEditToolBar* KEditToolBar_new3(KActionCollection* collection, QWidget* parent) {
    return new VirtualKEditToolBar(collection, parent);
}

KEditToolBar* KEditToolBar_new4(KXMLGUIFactory* factory, QWidget* parent) {
    return new VirtualKEditToolBar(factory, parent);
}

QMetaObject* KEditToolBar_MetaObject(const KEditToolBar* self) {
    return (QMetaObject*)self->metaObject();
}

void* KEditToolBar_Metacast(KEditToolBar* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KEditToolBar_Metacall(KEditToolBar* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KEditToolBar_Tr(const char* s) {
    auto _ret = KEditToolBar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KEditToolBar_SetDefaultToolBar(KEditToolBar* self, const libqt_string toolBarName) {
    QString toolBarName_QString = QString::fromUtf8(toolBarName.data, toolBarName.len);
    self->setDefaultToolBar(toolBarName_QString);
}

void KEditToolBar_SetResourceFile(KEditToolBar* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    self->setResourceFile(file_QString);
}

void KEditToolBar_SetGlobalDefaultToolBar(const libqt_string toolBarName) {
    QString toolBarName_QString = QString::fromUtf8(toolBarName.data, toolBarName.len);
    KEditToolBar::setGlobalDefaultToolBar(toolBarName_QString);
}

void KEditToolBar_NewToolBarConfig(KEditToolBar* self) {
    self->newToolBarConfig();
}

void KEditToolBar_Connect_NewToolBarConfig(KEditToolBar* self, intptr_t slot) {
    void (*slotFunc)(KEditToolBar*) = reinterpret_cast<void (*)(KEditToolBar*)>(slot);
    KEditToolBar::connect(self,
                          static_cast<void (KEditToolBar::*)()>(&KEditToolBar::newToolBarConfig),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void KEditToolBar_ShowEvent(KEditToolBar* self, QShowEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->showEvent(event);
    }
}

void KEditToolBar_HideEvent(KEditToolBar* self, QHideEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->hideEvent(event);
    }
}

libqt_string KEditToolBar_Tr2(const char* s, const char* c) {
    auto _ret = KEditToolBar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEditToolBar_Tr3(const char* s, const char* c, int n) {
    auto _ret = KEditToolBar::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KEditToolBar_SetResourceFile2(KEditToolBar* self, const libqt_string file, bool global) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    self->setResourceFile(file_QString, global);
}

// Base class handler implementation
QMetaObject* KEditToolBar_SuperMetaObject(const KEditToolBar* self) {
    return (QMetaObject*)self->KEditToolBar::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnMetaObject(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self)))
        vkedittoolbar->kedittoolbar_metaobject_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KEditToolBar_SuperMetacast(KEditToolBar* self, const char* param1) {
    return self->KEditToolBar::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnMetacast(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_metacast_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Metacast_Callback>(slot);
}

// Base class handler implementation
int KEditToolBar_SuperMetacall(KEditToolBar* self, int param1, int param2, void** param3) {
    return self->KEditToolBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnMetacall(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_metacall_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Metacall_Callback>(slot);
}

// Base class handler implementation
void KEditToolBar_SuperShowEvent(KEditToolBar* self, QShowEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnShowEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_showevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void KEditToolBar_SuperHideEvent(KEditToolBar* self, QHideEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnHideEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_hideevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_SetVisible(KEditToolBar* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KEditToolBar_SuperSetVisible(KEditToolBar* self, bool visible) {
    self->KEditToolBar::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnSetVisible(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_setvisible_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KEditToolBar_SizeHint(const KEditToolBar* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KEditToolBar_SuperSizeHint(const KEditToolBar* self) {
    return new QSize(self->KEditToolBar::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnSizeHint(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self)))
        vkedittoolbar->kedittoolbar_sizehint_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KEditToolBar_MinimumSizeHint(const KEditToolBar* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KEditToolBar_SuperMinimumSizeHint(const KEditToolBar* self) {
    return new QSize(self->KEditToolBar::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnMinimumSizeHint(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self)))
        vkedittoolbar->kedittoolbar_minimumsizehint_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_Open(KEditToolBar* self) {
    self->open();
}

// Base class handler implementation
void KEditToolBar_SuperOpen(KEditToolBar* self) {
    self->KEditToolBar::open();
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnOpen(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_open_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Open_Callback>(slot);
}

// Derived class handler implementation
int KEditToolBar_Exec(KEditToolBar* self) {
    return self->exec();
}

// Base class handler implementation
int KEditToolBar_SuperExec(KEditToolBar* self) {
    return self->KEditToolBar::exec();
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnExec(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_exec_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Exec_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_Done(KEditToolBar* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KEditToolBar_SuperDone(KEditToolBar* self, int param1) {
    self->KEditToolBar::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnDone(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_done_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Done_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_Accept(KEditToolBar* self) {
    self->accept();
}

// Base class handler implementation
void KEditToolBar_SuperAccept(KEditToolBar* self) {
    self->KEditToolBar::accept();
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnAccept(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_accept_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Accept_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_Reject(KEditToolBar* self) {
    self->reject();
}

// Base class handler implementation
void KEditToolBar_SuperReject(KEditToolBar* self) {
    self->KEditToolBar::reject();
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnReject(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_reject_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Reject_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_KeyPressEvent(KEditToolBar* self, QKeyEvent* param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperKeyPressEvent(KEditToolBar* self, QKeyEvent* param1) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnKeyPressEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_keypressevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_CloseEvent(KEditToolBar* self, QCloseEvent* param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperCloseEvent(KEditToolBar* self, QCloseEvent* param1) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnCloseEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_closeevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_ResizeEvent(KEditToolBar* self, QResizeEvent* param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperResizeEvent(KEditToolBar* self, QResizeEvent* param1) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnResizeEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_resizeevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_ContextMenuEvent(KEditToolBar* self, QContextMenuEvent* param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperContextMenuEvent(KEditToolBar* self, QContextMenuEvent* param1) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnContextMenuEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_contextmenuevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KEditToolBar_EventFilter(KEditToolBar* self, QObject* param1, QEvent* param2) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        return vkedittoolbar->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KEditToolBar_SuperEventFilter(KEditToolBar* self, QObject* param1, QEvent* param2) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        return vkedittoolbar->KEditToolBar::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnEventFilter(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_eventfilter_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KEditToolBar_DevType(const KEditToolBar* self) {
    return self->devType();
}

// Base class handler implementation
int KEditToolBar_SuperDevType(const KEditToolBar* self) {
    return self->KEditToolBar::devType();
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnDevType(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self)))
        vkedittoolbar->kedittoolbar_devtype_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_DevType_Callback>(slot);
}

// Derived class handler implementation
int KEditToolBar_HeightForWidth(const KEditToolBar* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KEditToolBar_SuperHeightForWidth(const KEditToolBar* self, int param1) {
    return self->KEditToolBar::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnHeightForWidth(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self)))
        vkedittoolbar->kedittoolbar_heightforwidth_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KEditToolBar_HasHeightForWidth(const KEditToolBar* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KEditToolBar_SuperHasHeightForWidth(const KEditToolBar* self) {
    return self->KEditToolBar::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnHasHeightForWidth(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self)))
        vkedittoolbar->kedittoolbar_hasheightforwidth_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KEditToolBar_PaintEngine(const KEditToolBar* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KEditToolBar_SuperPaintEngine(const KEditToolBar* self) {
    return self->KEditToolBar::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnPaintEngine(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self)))
        vkedittoolbar->kedittoolbar_paintengine_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KEditToolBar_Event(KEditToolBar* self, QEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        return vkedittoolbar->event(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KEditToolBar_SuperEvent(KEditToolBar* self, QEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        return vkedittoolbar->KEditToolBar::event(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_event_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Event_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_MousePressEvent(KEditToolBar* self, QMouseEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperMousePressEvent(KEditToolBar* self, QMouseEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnMousePressEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_mousepressevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_MouseReleaseEvent(KEditToolBar* self, QMouseEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperMouseReleaseEvent(KEditToolBar* self, QMouseEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnMouseReleaseEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_mousereleaseevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_MouseDoubleClickEvent(KEditToolBar* self, QMouseEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperMouseDoubleClickEvent(KEditToolBar* self, QMouseEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnMouseDoubleClickEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_mousedoubleclickevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_MouseMoveEvent(KEditToolBar* self, QMouseEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperMouseMoveEvent(KEditToolBar* self, QMouseEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnMouseMoveEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_mousemoveevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_WheelEvent(KEditToolBar* self, QWheelEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperWheelEvent(KEditToolBar* self, QWheelEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnWheelEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_wheelevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_KeyReleaseEvent(KEditToolBar* self, QKeyEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperKeyReleaseEvent(KEditToolBar* self, QKeyEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnKeyReleaseEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_keyreleaseevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_FocusInEvent(KEditToolBar* self, QFocusEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperFocusInEvent(KEditToolBar* self, QFocusEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnFocusInEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_focusinevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_FocusOutEvent(KEditToolBar* self, QFocusEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperFocusOutEvent(KEditToolBar* self, QFocusEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnFocusOutEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_focusoutevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_EnterEvent(KEditToolBar* self, QEnterEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperEnterEvent(KEditToolBar* self, QEnterEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnEnterEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_enterevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_LeaveEvent(KEditToolBar* self, QEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperLeaveEvent(KEditToolBar* self, QEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnLeaveEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_leaveevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_PaintEvent(KEditToolBar* self, QPaintEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperPaintEvent(KEditToolBar* self, QPaintEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnPaintEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_paintevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_MoveEvent(KEditToolBar* self, QMoveEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperMoveEvent(KEditToolBar* self, QMoveEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnMoveEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_moveevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_TabletEvent(KEditToolBar* self, QTabletEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperTabletEvent(KEditToolBar* self, QTabletEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnTabletEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_tabletevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_ActionEvent(KEditToolBar* self, QActionEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperActionEvent(KEditToolBar* self, QActionEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnActionEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_actionevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_DragEnterEvent(KEditToolBar* self, QDragEnterEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperDragEnterEvent(KEditToolBar* self, QDragEnterEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnDragEnterEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_dragenterevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_DragMoveEvent(KEditToolBar* self, QDragMoveEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperDragMoveEvent(KEditToolBar* self, QDragMoveEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnDragMoveEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_dragmoveevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_DragLeaveEvent(KEditToolBar* self, QDragLeaveEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperDragLeaveEvent(KEditToolBar* self, QDragLeaveEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnDragLeaveEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_dragleaveevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_DropEvent(KEditToolBar* self, QDropEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperDropEvent(KEditToolBar* self, QDropEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnDropEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_dropevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool KEditToolBar_NativeEvent(KEditToolBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        return vkedittoolbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KEditToolBar_SuperNativeEvent(KEditToolBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        return vkedittoolbar->KEditToolBar::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KEditToolBar::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnNativeEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_nativeevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_ChangeEvent(KEditToolBar* self, QEvent* param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperChangeEvent(KEditToolBar* self, QEvent* param1) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnChangeEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_changeevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KEditToolBar_Metric(const KEditToolBar* self, int param1) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar) {
        return vkedittoolbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KEditToolBar_SuperMetric(const KEditToolBar* self, int param1) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self))) {
        return vkedittoolbar->KEditToolBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KEditToolBar::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnMetric(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self)))
        vkedittoolbar->kedittoolbar_metric_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Metric_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_InitPainter(const KEditToolBar* self, QPainter* painter) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar) {
        vkedittoolbar->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperInitPainter(const KEditToolBar* self, QPainter* painter) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self))) {
        vkedittoolbar->KEditToolBar::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnInitPainter(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self)))
        vkedittoolbar->kedittoolbar_initpainter_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KEditToolBar_Redirected(const KEditToolBar* self, QPoint* offset) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar) {
        return vkedittoolbar->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KEditToolBar_SuperRedirected(const KEditToolBar* self, QPoint* offset) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self))) {
        return vkedittoolbar->KEditToolBar::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnRedirected(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self)))
        vkedittoolbar->kedittoolbar_redirected_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KEditToolBar_SharedPainter(const KEditToolBar* self) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar) {
        return vkedittoolbar->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KEditToolBar_SuperSharedPainter(const KEditToolBar* self) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self))) {
        return vkedittoolbar->KEditToolBar::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KEditToolBar::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnSharedPainter(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self)))
        vkedittoolbar->kedittoolbar_sharedpainter_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_InputMethodEvent(KEditToolBar* self, QInputMethodEvent* param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperInputMethodEvent(KEditToolBar* self, QInputMethodEvent* param1) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnInputMethodEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_inputmethodevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KEditToolBar_InputMethodQuery(const KEditToolBar* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KEditToolBar_SuperInputMethodQuery(const KEditToolBar* self, int param1) {
    return new QVariant(self->KEditToolBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnInputMethodQuery(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self)))
        vkedittoolbar->kedittoolbar_inputmethodquery_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KEditToolBar_FocusNextPrevChild(KEditToolBar* self, bool next) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        return vkedittoolbar->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KEditToolBar_SuperFocusNextPrevChild(KEditToolBar* self, bool next) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        return vkedittoolbar->KEditToolBar::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnFocusNextPrevChild(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_focusnextprevchild_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_TimerEvent(KEditToolBar* self, QTimerEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperTimerEvent(KEditToolBar* self, QTimerEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnTimerEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_timerevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_ChildEvent(KEditToolBar* self, QChildEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperChildEvent(KEditToolBar* self, QChildEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnChildEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_childevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_CustomEvent(KEditToolBar* self, QEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperCustomEvent(KEditToolBar* self, QEvent* event) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnCustomEvent(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_customevent_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_ConnectNotify(KEditToolBar* self, const QMetaMethod* signal) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperConnectNotify(KEditToolBar* self, const QMetaMethod* signal) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnConnectNotify(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_connectnotify_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KEditToolBar_DisconnectNotify(KEditToolBar* self, const QMetaMethod* signal) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar) {
        vkedittoolbar->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KEditToolBar::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditToolBar_SuperDisconnectNotify(KEditToolBar* self, const QMetaMethod* signal) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->KEditToolBar::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KEditToolBar::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnDisconnectNotify(KEditToolBar* self, intptr_t slot) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self))
        vkedittoolbar->kedittoolbar_disconnectnotify_callback = reinterpret_cast<VirtualKEditToolBar::KEditToolBar_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KEditToolBar_AdjustPosition(KEditToolBar* self, QWidget* param1) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->VirtualKEditToolBar::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KEditToolBar::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KEditToolBar_UpdateMicroFocus(KEditToolBar* self) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->VirtualKEditToolBar::updateMicroFocus();
    } else
        qFatal("Error: Protected method KEditToolBar::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KEditToolBar_Create(KEditToolBar* self) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->VirtualKEditToolBar::create();
    } else
        qFatal("Error: Protected method KEditToolBar::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KEditToolBar_Destroy(KEditToolBar* self) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        vkedittoolbar->VirtualKEditToolBar::destroy();
    } else
        qFatal("Error: Protected method KEditToolBar::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KEditToolBar_FocusNextChild(KEditToolBar* self) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        return vkedittoolbar->VirtualKEditToolBar::focusNextChild();
    } else
        qFatal("Error: Protected method KEditToolBar::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KEditToolBar_FocusPreviousChild(KEditToolBar* self) {
    if (auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self)) {
        return vkedittoolbar->VirtualKEditToolBar::focusPreviousChild();
    } else
        qFatal("Error: Protected method KEditToolBar::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KEditToolBar_Sender(const KEditToolBar* self) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self))) {
        return vkedittoolbar->VirtualKEditToolBar::sender();
    } else
        qFatal("Error: Protected method KEditToolBar::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KEditToolBar_SenderSignalIndex(const KEditToolBar* self) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self))) {
        return vkedittoolbar->VirtualKEditToolBar::senderSignalIndex();
    } else
        qFatal("Error: Protected method KEditToolBar::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KEditToolBar_Receivers(const KEditToolBar* self, const char* signal) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self))) {
        return vkedittoolbar->VirtualKEditToolBar::receivers(signal);
    } else
        qFatal("Error: Protected method KEditToolBar::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KEditToolBar_IsSignalConnected(const KEditToolBar* self, const QMetaMethod* signal) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self))) {
        return vkedittoolbar->VirtualKEditToolBar::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KEditToolBar::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KEditToolBar_GetDecodedMetricF(const KEditToolBar* self, int metricA, int metricB) {
    if (auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self))) {
        return vkedittoolbar->VirtualKEditToolBar::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KEditToolBar::getDecodedMetricF called without a directly constructed type");
}

void KEditToolBar_Delete(KEditToolBar* self) {
    delete self;
}
