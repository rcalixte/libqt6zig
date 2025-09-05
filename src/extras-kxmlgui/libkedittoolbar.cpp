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
#include <QByteArray>
#include <cstring>
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
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKEditToolBar*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KEditToolBar_Tr(const char* s) {
    QString _ret = KEditToolBar::tr(s);
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
    KEditToolBar::connect(self, &KEditToolBar::newToolBarConfig, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KEditToolBar_ShowEvent(KEditToolBar* self, QShowEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->showEvent(event);
    }
}

void KEditToolBar_HideEvent(KEditToolBar* self, QHideEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->hideEvent(event);
    }
}

libqt_string KEditToolBar_Tr2(const char* s, const char* c) {
    QString _ret = KEditToolBar::tr(s, c);
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
    QString _ret = KEditToolBar::tr(s, c, static_cast<int>(n));
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
int KEditToolBar_QBaseMetacall(KEditToolBar* self, int param1, int param2, void** param3) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Metacall_IsBase(true);
        return vkedittoolbar->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KEditToolBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnMetacall(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Metacall_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KEditToolBar_QBaseShowEvent(KEditToolBar* self, QShowEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_ShowEvent_IsBase(true);
        vkedittoolbar->showEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnShowEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_ShowEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_ShowEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KEditToolBar_QBaseHideEvent(KEditToolBar* self, QHideEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_HideEvent_IsBase(true);
        vkedittoolbar->hideEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnHideEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_HideEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_SetVisible(KEditToolBar* self, bool visible) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setVisible(visible);
    } else {
        self->KEditToolBar::setVisible(visible);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseSetVisible(KEditToolBar* self, bool visible) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_SetVisible_IsBase(true);
        vkedittoolbar->setVisible(visible);
    } else {
        self->KEditToolBar::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnSetVisible(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_SetVisible_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KEditToolBar_SizeHint(const KEditToolBar* self) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return new QSize(vkedittoolbar->sizeHint());
    } else {
        return new QSize(((VirtualKEditToolBar*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KEditToolBar_QBaseSizeHint(const KEditToolBar* self) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_SizeHint_IsBase(true);
        return new QSize(vkedittoolbar->sizeHint());
    } else {
        return new QSize(((VirtualKEditToolBar*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnSizeHint(const KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_SizeHint_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KEditToolBar_MinimumSizeHint(const KEditToolBar* self) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return new QSize(vkedittoolbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualKEditToolBar*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KEditToolBar_QBaseMinimumSizeHint(const KEditToolBar* self) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_MinimumSizeHint_IsBase(true);
        return new QSize(vkedittoolbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualKEditToolBar*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnMinimumSizeHint(const KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_MinimumSizeHint_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_Open(KEditToolBar* self) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->open();
    } else {
        self->KEditToolBar::open();
    }
}

// Base class handler implementation
void KEditToolBar_QBaseOpen(KEditToolBar* self) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Open_IsBase(true);
        vkedittoolbar->open();
    } else {
        self->KEditToolBar::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnOpen(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Open_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KEditToolBar_Exec(KEditToolBar* self) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return vkedittoolbar->exec();
    } else {
        return self->KEditToolBar::exec();
    }
}

// Base class handler implementation
int KEditToolBar_QBaseExec(KEditToolBar* self) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Exec_IsBase(true);
        return vkedittoolbar->exec();
    } else {
        return self->KEditToolBar::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnExec(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Exec_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_Done(KEditToolBar* self, int param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->done(static_cast<int>(param1));
    } else {
        self->KEditToolBar::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KEditToolBar_QBaseDone(KEditToolBar* self, int param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Done_IsBase(true);
        vkedittoolbar->done(static_cast<int>(param1));
    } else {
        self->KEditToolBar::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnDone(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Done_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_Accept(KEditToolBar* self) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->accept();
    } else {
        self->KEditToolBar::accept();
    }
}

// Base class handler implementation
void KEditToolBar_QBaseAccept(KEditToolBar* self) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Accept_IsBase(true);
        vkedittoolbar->accept();
    } else {
        self->KEditToolBar::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnAccept(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Accept_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_Reject(KEditToolBar* self) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->reject();
    } else {
        self->KEditToolBar::reject();
    }
}

// Base class handler implementation
void KEditToolBar_QBaseReject(KEditToolBar* self) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Reject_IsBase(true);
        vkedittoolbar->reject();
    } else {
        self->KEditToolBar::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnReject(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Reject_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_KeyPressEvent(KEditToolBar* self, QKeyEvent* param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->keyPressEvent(param1);
    } else {
        ((VirtualKEditToolBar*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseKeyPressEvent(KEditToolBar* self, QKeyEvent* param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_KeyPressEvent_IsBase(true);
        vkedittoolbar->keyPressEvent(param1);
    } else {
        ((VirtualKEditToolBar*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnKeyPressEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_KeyPressEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_CloseEvent(KEditToolBar* self, QCloseEvent* param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->closeEvent(param1);
    } else {
        ((VirtualKEditToolBar*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseCloseEvent(KEditToolBar* self, QCloseEvent* param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_CloseEvent_IsBase(true);
        vkedittoolbar->closeEvent(param1);
    } else {
        ((VirtualKEditToolBar*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnCloseEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_CloseEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_ResizeEvent(KEditToolBar* self, QResizeEvent* param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->resizeEvent(param1);
    } else {
        ((VirtualKEditToolBar*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseResizeEvent(KEditToolBar* self, QResizeEvent* param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_ResizeEvent_IsBase(true);
        vkedittoolbar->resizeEvent(param1);
    } else {
        ((VirtualKEditToolBar*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnResizeEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_ResizeEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_ContextMenuEvent(KEditToolBar* self, QContextMenuEvent* param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->contextMenuEvent(param1);
    } else {
        ((VirtualKEditToolBar*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseContextMenuEvent(KEditToolBar* self, QContextMenuEvent* param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_ContextMenuEvent_IsBase(true);
        vkedittoolbar->contextMenuEvent(param1);
    } else {
        ((VirtualKEditToolBar*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnContextMenuEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_ContextMenuEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEditToolBar_EventFilter(KEditToolBar* self, QObject* param1, QEvent* param2) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return vkedittoolbar->eventFilter(param1, param2);
    } else {
        return ((VirtualKEditToolBar*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KEditToolBar_QBaseEventFilter(KEditToolBar* self, QObject* param1, QEvent* param2) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_EventFilter_IsBase(true);
        return vkedittoolbar->eventFilter(param1, param2);
    } else {
        return ((VirtualKEditToolBar*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnEventFilter(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_EventFilter_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KEditToolBar_DevType(const KEditToolBar* self) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return vkedittoolbar->devType();
    } else {
        return self->KEditToolBar::devType();
    }
}

// Base class handler implementation
int KEditToolBar_QBaseDevType(const KEditToolBar* self) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_DevType_IsBase(true);
        return vkedittoolbar->devType();
    } else {
        return self->KEditToolBar::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnDevType(const KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_DevType_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KEditToolBar_HeightForWidth(const KEditToolBar* self, int param1) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return vkedittoolbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KEditToolBar::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KEditToolBar_QBaseHeightForWidth(const KEditToolBar* self, int param1) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_HeightForWidth_IsBase(true);
        return vkedittoolbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KEditToolBar::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnHeightForWidth(const KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_HeightForWidth_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEditToolBar_HasHeightForWidth(const KEditToolBar* self) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return vkedittoolbar->hasHeightForWidth();
    } else {
        return self->KEditToolBar::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KEditToolBar_QBaseHasHeightForWidth(const KEditToolBar* self) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_HasHeightForWidth_IsBase(true);
        return vkedittoolbar->hasHeightForWidth();
    } else {
        return self->KEditToolBar::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnHasHeightForWidth(const KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_HasHeightForWidth_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KEditToolBar_PaintEngine(const KEditToolBar* self) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return vkedittoolbar->paintEngine();
    } else {
        return self->KEditToolBar::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KEditToolBar_QBasePaintEngine(const KEditToolBar* self) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_PaintEngine_IsBase(true);
        return vkedittoolbar->paintEngine();
    } else {
        return self->KEditToolBar::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnPaintEngine(const KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_PaintEngine_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEditToolBar_Event(KEditToolBar* self, QEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return vkedittoolbar->event(event);
    } else {
        return ((VirtualKEditToolBar*)self)->event(event);
    }
}

// Base class handler implementation
bool KEditToolBar_QBaseEvent(KEditToolBar* self, QEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Event_IsBase(true);
        return vkedittoolbar->event(event);
    } else {
        return ((VirtualKEditToolBar*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Event_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_MousePressEvent(KEditToolBar* self, QMouseEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->mousePressEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseMousePressEvent(KEditToolBar* self, QMouseEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_MousePressEvent_IsBase(true);
        vkedittoolbar->mousePressEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnMousePressEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_MousePressEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_MouseReleaseEvent(KEditToolBar* self, QMouseEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->mouseReleaseEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseMouseReleaseEvent(KEditToolBar* self, QMouseEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_MouseReleaseEvent_IsBase(true);
        vkedittoolbar->mouseReleaseEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnMouseReleaseEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_MouseDoubleClickEvent(KEditToolBar* self, QMouseEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseMouseDoubleClickEvent(KEditToolBar* self, QMouseEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_MouseDoubleClickEvent_IsBase(true);
        vkedittoolbar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnMouseDoubleClickEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_MouseMoveEvent(KEditToolBar* self, QMouseEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->mouseMoveEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseMouseMoveEvent(KEditToolBar* self, QMouseEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_MouseMoveEvent_IsBase(true);
        vkedittoolbar->mouseMoveEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnMouseMoveEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_MouseMoveEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_WheelEvent(KEditToolBar* self, QWheelEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->wheelEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseWheelEvent(KEditToolBar* self, QWheelEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_WheelEvent_IsBase(true);
        vkedittoolbar->wheelEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnWheelEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_WheelEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_KeyReleaseEvent(KEditToolBar* self, QKeyEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->keyReleaseEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseKeyReleaseEvent(KEditToolBar* self, QKeyEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_KeyReleaseEvent_IsBase(true);
        vkedittoolbar->keyReleaseEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnKeyReleaseEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_FocusInEvent(KEditToolBar* self, QFocusEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->focusInEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseFocusInEvent(KEditToolBar* self, QFocusEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_FocusInEvent_IsBase(true);
        vkedittoolbar->focusInEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnFocusInEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_FocusInEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_FocusOutEvent(KEditToolBar* self, QFocusEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->focusOutEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseFocusOutEvent(KEditToolBar* self, QFocusEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_FocusOutEvent_IsBase(true);
        vkedittoolbar->focusOutEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnFocusOutEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_FocusOutEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_EnterEvent(KEditToolBar* self, QEnterEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->enterEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseEnterEvent(KEditToolBar* self, QEnterEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_EnterEvent_IsBase(true);
        vkedittoolbar->enterEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnEnterEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_EnterEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_LeaveEvent(KEditToolBar* self, QEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->leaveEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseLeaveEvent(KEditToolBar* self, QEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_LeaveEvent_IsBase(true);
        vkedittoolbar->leaveEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnLeaveEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_LeaveEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_PaintEvent(KEditToolBar* self, QPaintEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->paintEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBasePaintEvent(KEditToolBar* self, QPaintEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_PaintEvent_IsBase(true);
        vkedittoolbar->paintEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnPaintEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_PaintEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_MoveEvent(KEditToolBar* self, QMoveEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->moveEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseMoveEvent(KEditToolBar* self, QMoveEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_MoveEvent_IsBase(true);
        vkedittoolbar->moveEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnMoveEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_MoveEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_TabletEvent(KEditToolBar* self, QTabletEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->tabletEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseTabletEvent(KEditToolBar* self, QTabletEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_TabletEvent_IsBase(true);
        vkedittoolbar->tabletEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnTabletEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_TabletEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_ActionEvent(KEditToolBar* self, QActionEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->actionEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseActionEvent(KEditToolBar* self, QActionEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_ActionEvent_IsBase(true);
        vkedittoolbar->actionEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnActionEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_ActionEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_DragEnterEvent(KEditToolBar* self, QDragEnterEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->dragEnterEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseDragEnterEvent(KEditToolBar* self, QDragEnterEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_DragEnterEvent_IsBase(true);
        vkedittoolbar->dragEnterEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnDragEnterEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_DragEnterEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_DragMoveEvent(KEditToolBar* self, QDragMoveEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->dragMoveEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseDragMoveEvent(KEditToolBar* self, QDragMoveEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_DragMoveEvent_IsBase(true);
        vkedittoolbar->dragMoveEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnDragMoveEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_DragMoveEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_DragLeaveEvent(KEditToolBar* self, QDragLeaveEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->dragLeaveEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseDragLeaveEvent(KEditToolBar* self, QDragLeaveEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_DragLeaveEvent_IsBase(true);
        vkedittoolbar->dragLeaveEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnDragLeaveEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_DragLeaveEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_DropEvent(KEditToolBar* self, QDropEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->dropEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseDropEvent(KEditToolBar* self, QDropEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_DropEvent_IsBase(true);
        vkedittoolbar->dropEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnDropEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_DropEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEditToolBar_NativeEvent(KEditToolBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return vkedittoolbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKEditToolBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KEditToolBar_QBaseNativeEvent(KEditToolBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_NativeEvent_IsBase(true);
        return vkedittoolbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKEditToolBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnNativeEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_NativeEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_ChangeEvent(KEditToolBar* self, QEvent* param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->changeEvent(param1);
    } else {
        ((VirtualKEditToolBar*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseChangeEvent(KEditToolBar* self, QEvent* param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_ChangeEvent_IsBase(true);
        vkedittoolbar->changeEvent(param1);
    } else {
        ((VirtualKEditToolBar*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnChangeEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_ChangeEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KEditToolBar_Metric(const KEditToolBar* self, int param1) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return vkedittoolbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKEditToolBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KEditToolBar_QBaseMetric(const KEditToolBar* self, int param1) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Metric_IsBase(true);
        return vkedittoolbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKEditToolBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnMetric(const KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Metric_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_InitPainter(const KEditToolBar* self, QPainter* painter) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->initPainter(painter);
    } else {
        ((VirtualKEditToolBar*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseInitPainter(const KEditToolBar* self, QPainter* painter) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_InitPainter_IsBase(true);
        vkedittoolbar->initPainter(painter);
    } else {
        ((VirtualKEditToolBar*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnInitPainter(const KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_InitPainter_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KEditToolBar_Redirected(const KEditToolBar* self, QPoint* offset) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return vkedittoolbar->redirected(offset);
    } else {
        return ((VirtualKEditToolBar*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KEditToolBar_QBaseRedirected(const KEditToolBar* self, QPoint* offset) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Redirected_IsBase(true);
        return vkedittoolbar->redirected(offset);
    } else {
        return ((VirtualKEditToolBar*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnRedirected(const KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Redirected_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KEditToolBar_SharedPainter(const KEditToolBar* self) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return vkedittoolbar->sharedPainter();
    } else {
        return ((VirtualKEditToolBar*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KEditToolBar_QBaseSharedPainter(const KEditToolBar* self) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_SharedPainter_IsBase(true);
        return vkedittoolbar->sharedPainter();
    } else {
        return ((VirtualKEditToolBar*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnSharedPainter(const KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_SharedPainter_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_InputMethodEvent(KEditToolBar* self, QInputMethodEvent* param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->inputMethodEvent(param1);
    } else {
        ((VirtualKEditToolBar*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseInputMethodEvent(KEditToolBar* self, QInputMethodEvent* param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_InputMethodEvent_IsBase(true);
        vkedittoolbar->inputMethodEvent(param1);
    } else {
        ((VirtualKEditToolBar*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnInputMethodEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_InputMethodEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KEditToolBar_InputMethodQuery(const KEditToolBar* self, int param1) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return new QVariant(vkedittoolbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKEditToolBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KEditToolBar_QBaseInputMethodQuery(const KEditToolBar* self, int param1) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_InputMethodQuery_IsBase(true);
        return new QVariant(vkedittoolbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKEditToolBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnInputMethodQuery(const KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_InputMethodQuery_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEditToolBar_FocusNextPrevChild(KEditToolBar* self, bool next) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return vkedittoolbar->focusNextPrevChild(next);
    } else {
        return ((VirtualKEditToolBar*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KEditToolBar_QBaseFocusNextPrevChild(KEditToolBar* self, bool next) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_FocusNextPrevChild_IsBase(true);
        return vkedittoolbar->focusNextPrevChild(next);
    } else {
        return ((VirtualKEditToolBar*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnFocusNextPrevChild(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_TimerEvent(KEditToolBar* self, QTimerEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->timerEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseTimerEvent(KEditToolBar* self, QTimerEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_TimerEvent_IsBase(true);
        vkedittoolbar->timerEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnTimerEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_TimerEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_ChildEvent(KEditToolBar* self, QChildEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->childEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseChildEvent(KEditToolBar* self, QChildEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_ChildEvent_IsBase(true);
        vkedittoolbar->childEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnChildEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_ChildEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_CustomEvent(KEditToolBar* self, QEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->customEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseCustomEvent(KEditToolBar* self, QEvent* event) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_CustomEvent_IsBase(true);
        vkedittoolbar->customEvent(event);
    } else {
        ((VirtualKEditToolBar*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnCustomEvent(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_CustomEvent_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_ConnectNotify(KEditToolBar* self, const QMetaMethod* signal) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->connectNotify(*signal);
    } else {
        ((VirtualKEditToolBar*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseConnectNotify(KEditToolBar* self, const QMetaMethod* signal) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_ConnectNotify_IsBase(true);
        vkedittoolbar->connectNotify(*signal);
    } else {
        ((VirtualKEditToolBar*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnConnectNotify(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_ConnectNotify_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_DisconnectNotify(KEditToolBar* self, const QMetaMethod* signal) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->disconnectNotify(*signal);
    } else {
        ((VirtualKEditToolBar*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseDisconnectNotify(KEditToolBar* self, const QMetaMethod* signal) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_DisconnectNotify_IsBase(true);
        vkedittoolbar->disconnectNotify(*signal);
    } else {
        ((VirtualKEditToolBar*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnDisconnectNotify(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_DisconnectNotify_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_AdjustPosition(KEditToolBar* self, QWidget* param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->adjustPosition(param1);
    } else {
        ((VirtualKEditToolBar*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KEditToolBar_QBaseAdjustPosition(KEditToolBar* self, QWidget* param1) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_AdjustPosition_IsBase(true);
        vkedittoolbar->adjustPosition(param1);
    } else {
        ((VirtualKEditToolBar*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnAdjustPosition(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_AdjustPosition_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_UpdateMicroFocus(KEditToolBar* self) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->updateMicroFocus();
    } else {
        ((VirtualKEditToolBar*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KEditToolBar_QBaseUpdateMicroFocus(KEditToolBar* self) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_UpdateMicroFocus_IsBase(true);
        vkedittoolbar->updateMicroFocus();
    } else {
        ((VirtualKEditToolBar*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnUpdateMicroFocus(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_Create(KEditToolBar* self) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->create();
    } else {
        ((VirtualKEditToolBar*)self)->create();
    }
}

// Base class handler implementation
void KEditToolBar_QBaseCreate(KEditToolBar* self) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Create_IsBase(true);
        vkedittoolbar->create();
    } else {
        ((VirtualKEditToolBar*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnCreate(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Create_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditToolBar_Destroy(KEditToolBar* self) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->destroy();
    } else {
        ((VirtualKEditToolBar*)self)->destroy();
    }
}

// Base class handler implementation
void KEditToolBar_QBaseDestroy(KEditToolBar* self) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Destroy_IsBase(true);
        vkedittoolbar->destroy();
    } else {
        ((VirtualKEditToolBar*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnDestroy(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Destroy_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEditToolBar_FocusNextChild(KEditToolBar* self) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return vkedittoolbar->focusNextChild();
    } else {
        return ((VirtualKEditToolBar*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KEditToolBar_QBaseFocusNextChild(KEditToolBar* self) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_FocusNextChild_IsBase(true);
        return vkedittoolbar->focusNextChild();
    } else {
        return ((VirtualKEditToolBar*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnFocusNextChild(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_FocusNextChild_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEditToolBar_FocusPreviousChild(KEditToolBar* self) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return vkedittoolbar->focusPreviousChild();
    } else {
        return ((VirtualKEditToolBar*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KEditToolBar_QBaseFocusPreviousChild(KEditToolBar* self) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_FocusPreviousChild_IsBase(true);
        return vkedittoolbar->focusPreviousChild();
    } else {
        return ((VirtualKEditToolBar*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnFocusPreviousChild(KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = dynamic_cast<VirtualKEditToolBar*>(self);
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_FocusPreviousChild_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KEditToolBar_Sender(const KEditToolBar* self) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return vkedittoolbar->sender();
    } else {
        return ((VirtualKEditToolBar*)self)->sender();
    }
}

// Base class handler implementation
QObject* KEditToolBar_QBaseSender(const KEditToolBar* self) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Sender_IsBase(true);
        return vkedittoolbar->sender();
    } else {
        return ((VirtualKEditToolBar*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnSender(const KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Sender_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KEditToolBar_SenderSignalIndex(const KEditToolBar* self) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return vkedittoolbar->senderSignalIndex();
    } else {
        return ((VirtualKEditToolBar*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KEditToolBar_QBaseSenderSignalIndex(const KEditToolBar* self) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_SenderSignalIndex_IsBase(true);
        return vkedittoolbar->senderSignalIndex();
    } else {
        return ((VirtualKEditToolBar*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnSenderSignalIndex(const KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_SenderSignalIndex_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KEditToolBar_Receivers(const KEditToolBar* self, const char* signal) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return vkedittoolbar->receivers(signal);
    } else {
        return ((VirtualKEditToolBar*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KEditToolBar_QBaseReceivers(const KEditToolBar* self, const char* signal) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Receivers_IsBase(true);
        return vkedittoolbar->receivers(signal);
    } else {
        return ((VirtualKEditToolBar*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnReceivers(const KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_Receivers_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEditToolBar_IsSignalConnected(const KEditToolBar* self, const QMetaMethod* signal) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return vkedittoolbar->isSignalConnected(*signal);
    } else {
        return ((VirtualKEditToolBar*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KEditToolBar_QBaseIsSignalConnected(const KEditToolBar* self, const QMetaMethod* signal) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_IsSignalConnected_IsBase(true);
        return vkedittoolbar->isSignalConnected(*signal);
    } else {
        return ((VirtualKEditToolBar*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnIsSignalConnected(const KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_IsSignalConnected_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KEditToolBar_GetDecodedMetricF(const KEditToolBar* self, int metricA, int metricB) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        return vkedittoolbar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKEditToolBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KEditToolBar_QBaseGetDecodedMetricF(const KEditToolBar* self, int metricA, int metricB) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_GetDecodedMetricF_IsBase(true);
        return vkedittoolbar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKEditToolBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KEditToolBar_OnGetDecodedMetricF(const KEditToolBar* self, intptr_t slot) {
    auto* vkedittoolbar = const_cast<VirtualKEditToolBar*>(dynamic_cast<const VirtualKEditToolBar*>(self));
    if (vkedittoolbar && vkedittoolbar->isVirtualKEditToolBar) {
        vkedittoolbar->setKEditToolBar_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKEditToolBar::KEditToolBar_GetDecodedMetricF_Callback>(slot));
    }
}

void KEditToolBar_Delete(KEditToolBar* self) {
    delete self;
}
