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
#include <QByteArray>
#include <cstring>
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
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKAboutPluginDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KAboutPluginDialog_Tr(const char* s) {
    QString _ret = KAboutPluginDialog::tr(s);
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
    QString _ret = KAboutPluginDialog::tr(s, c);
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
    QString _ret = KAboutPluginDialog::tr(s, c, static_cast<int>(n));
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
int KAboutPluginDialog_QBaseMetacall(KAboutPluginDialog* self, int param1, int param2, void** param3) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Metacall_IsBase(true);
        return vkaboutplugindialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KAboutPluginDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnMetacall(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Metacall_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_SetVisible(KAboutPluginDialog* self, bool visible) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setVisible(visible);
    } else {
        self->KAboutPluginDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseSetVisible(KAboutPluginDialog* self, bool visible) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_SetVisible_IsBase(true);
        vkaboutplugindialog->setVisible(visible);
    } else {
        self->KAboutPluginDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnSetVisible(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_SetVisible_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KAboutPluginDialog_SizeHint(const KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return new QSize(vkaboutplugindialog->sizeHint());
    } else {
        return new QSize(((VirtualKAboutPluginDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KAboutPluginDialog_QBaseSizeHint(const KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_SizeHint_IsBase(true);
        return new QSize(vkaboutplugindialog->sizeHint());
    } else {
        return new QSize(((VirtualKAboutPluginDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnSizeHint(const KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_SizeHint_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KAboutPluginDialog_MinimumSizeHint(const KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return new QSize(vkaboutplugindialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKAboutPluginDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KAboutPluginDialog_QBaseMinimumSizeHint(const KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkaboutplugindialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKAboutPluginDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnMinimumSizeHint(const KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_Open(KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->open();
    } else {
        self->KAboutPluginDialog::open();
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseOpen(KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Open_IsBase(true);
        vkaboutplugindialog->open();
    } else {
        self->KAboutPluginDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnOpen(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Open_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KAboutPluginDialog_Exec(KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return vkaboutplugindialog->exec();
    } else {
        return self->KAboutPluginDialog::exec();
    }
}

// Base class handler implementation
int KAboutPluginDialog_QBaseExec(KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Exec_IsBase(true);
        return vkaboutplugindialog->exec();
    } else {
        return self->KAboutPluginDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnExec(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Exec_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_Done(KAboutPluginDialog* self, int param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->done(static_cast<int>(param1));
    } else {
        self->KAboutPluginDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseDone(KAboutPluginDialog* self, int param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Done_IsBase(true);
        vkaboutplugindialog->done(static_cast<int>(param1));
    } else {
        self->KAboutPluginDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnDone(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Done_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_Accept(KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->accept();
    } else {
        self->KAboutPluginDialog::accept();
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseAccept(KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Accept_IsBase(true);
        vkaboutplugindialog->accept();
    } else {
        self->KAboutPluginDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnAccept(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Accept_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_Reject(KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->reject();
    } else {
        self->KAboutPluginDialog::reject();
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseReject(KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Reject_IsBase(true);
        vkaboutplugindialog->reject();
    } else {
        self->KAboutPluginDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnReject(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Reject_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_KeyPressEvent(KAboutPluginDialog* self, QKeyEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->keyPressEvent(param1);
    } else {
        ((VirtualKAboutPluginDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseKeyPressEvent(KAboutPluginDialog* self, QKeyEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_KeyPressEvent_IsBase(true);
        vkaboutplugindialog->keyPressEvent(param1);
    } else {
        ((VirtualKAboutPluginDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnKeyPressEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_CloseEvent(KAboutPluginDialog* self, QCloseEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->closeEvent(param1);
    } else {
        ((VirtualKAboutPluginDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseCloseEvent(KAboutPluginDialog* self, QCloseEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_CloseEvent_IsBase(true);
        vkaboutplugindialog->closeEvent(param1);
    } else {
        ((VirtualKAboutPluginDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnCloseEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_CloseEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_ShowEvent(KAboutPluginDialog* self, QShowEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->showEvent(param1);
    } else {
        ((VirtualKAboutPluginDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseShowEvent(KAboutPluginDialog* self, QShowEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_ShowEvent_IsBase(true);
        vkaboutplugindialog->showEvent(param1);
    } else {
        ((VirtualKAboutPluginDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnShowEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_ShowEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_ResizeEvent(KAboutPluginDialog* self, QResizeEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->resizeEvent(param1);
    } else {
        ((VirtualKAboutPluginDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseResizeEvent(KAboutPluginDialog* self, QResizeEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_ResizeEvent_IsBase(true);
        vkaboutplugindialog->resizeEvent(param1);
    } else {
        ((VirtualKAboutPluginDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnResizeEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_ContextMenuEvent(KAboutPluginDialog* self, QContextMenuEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->contextMenuEvent(param1);
    } else {
        ((VirtualKAboutPluginDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseContextMenuEvent(KAboutPluginDialog* self, QContextMenuEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_ContextMenuEvent_IsBase(true);
        vkaboutplugindialog->contextMenuEvent(param1);
    } else {
        ((VirtualKAboutPluginDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnContextMenuEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAboutPluginDialog_EventFilter(KAboutPluginDialog* self, QObject* param1, QEvent* param2) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return vkaboutplugindialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKAboutPluginDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KAboutPluginDialog_QBaseEventFilter(KAboutPluginDialog* self, QObject* param1, QEvent* param2) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_EventFilter_IsBase(true);
        return vkaboutplugindialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKAboutPluginDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnEventFilter(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_EventFilter_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KAboutPluginDialog_DevType(const KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return vkaboutplugindialog->devType();
    } else {
        return self->KAboutPluginDialog::devType();
    }
}

// Base class handler implementation
int KAboutPluginDialog_QBaseDevType(const KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_DevType_IsBase(true);
        return vkaboutplugindialog->devType();
    } else {
        return self->KAboutPluginDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnDevType(const KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_DevType_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KAboutPluginDialog_HeightForWidth(const KAboutPluginDialog* self, int param1) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return vkaboutplugindialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KAboutPluginDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KAboutPluginDialog_QBaseHeightForWidth(const KAboutPluginDialog* self, int param1) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_HeightForWidth_IsBase(true);
        return vkaboutplugindialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KAboutPluginDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnHeightForWidth(const KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAboutPluginDialog_HasHeightForWidth(const KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return vkaboutplugindialog->hasHeightForWidth();
    } else {
        return self->KAboutPluginDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KAboutPluginDialog_QBaseHasHeightForWidth(const KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_HasHeightForWidth_IsBase(true);
        return vkaboutplugindialog->hasHeightForWidth();
    } else {
        return self->KAboutPluginDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnHasHeightForWidth(const KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KAboutPluginDialog_PaintEngine(const KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return vkaboutplugindialog->paintEngine();
    } else {
        return self->KAboutPluginDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KAboutPluginDialog_QBasePaintEngine(const KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_PaintEngine_IsBase(true);
        return vkaboutplugindialog->paintEngine();
    } else {
        return self->KAboutPluginDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnPaintEngine(const KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_PaintEngine_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAboutPluginDialog_Event(KAboutPluginDialog* self, QEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return vkaboutplugindialog->event(event);
    } else {
        return ((VirtualKAboutPluginDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KAboutPluginDialog_QBaseEvent(KAboutPluginDialog* self, QEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Event_IsBase(true);
        return vkaboutplugindialog->event(event);
    } else {
        return ((VirtualKAboutPluginDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Event_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_MousePressEvent(KAboutPluginDialog* self, QMouseEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->mousePressEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseMousePressEvent(KAboutPluginDialog* self, QMouseEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_MousePressEvent_IsBase(true);
        vkaboutplugindialog->mousePressEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnMousePressEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_MouseReleaseEvent(KAboutPluginDialog* self, QMouseEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseMouseReleaseEvent(KAboutPluginDialog* self, QMouseEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_MouseReleaseEvent_IsBase(true);
        vkaboutplugindialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnMouseReleaseEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_MouseDoubleClickEvent(KAboutPluginDialog* self, QMouseEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseMouseDoubleClickEvent(KAboutPluginDialog* self, QMouseEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_MouseDoubleClickEvent_IsBase(true);
        vkaboutplugindialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnMouseDoubleClickEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_MouseMoveEvent(KAboutPluginDialog* self, QMouseEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->mouseMoveEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseMouseMoveEvent(KAboutPluginDialog* self, QMouseEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_MouseMoveEvent_IsBase(true);
        vkaboutplugindialog->mouseMoveEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnMouseMoveEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_WheelEvent(KAboutPluginDialog* self, QWheelEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->wheelEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseWheelEvent(KAboutPluginDialog* self, QWheelEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_WheelEvent_IsBase(true);
        vkaboutplugindialog->wheelEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnWheelEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_WheelEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_KeyReleaseEvent(KAboutPluginDialog* self, QKeyEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->keyReleaseEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseKeyReleaseEvent(KAboutPluginDialog* self, QKeyEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_KeyReleaseEvent_IsBase(true);
        vkaboutplugindialog->keyReleaseEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnKeyReleaseEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_FocusInEvent(KAboutPluginDialog* self, QFocusEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->focusInEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseFocusInEvent(KAboutPluginDialog* self, QFocusEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_FocusInEvent_IsBase(true);
        vkaboutplugindialog->focusInEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnFocusInEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_FocusOutEvent(KAboutPluginDialog* self, QFocusEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->focusOutEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseFocusOutEvent(KAboutPluginDialog* self, QFocusEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_FocusOutEvent_IsBase(true);
        vkaboutplugindialog->focusOutEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnFocusOutEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_EnterEvent(KAboutPluginDialog* self, QEnterEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->enterEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseEnterEvent(KAboutPluginDialog* self, QEnterEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_EnterEvent_IsBase(true);
        vkaboutplugindialog->enterEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnEnterEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_EnterEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_LeaveEvent(KAboutPluginDialog* self, QEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->leaveEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseLeaveEvent(KAboutPluginDialog* self, QEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_LeaveEvent_IsBase(true);
        vkaboutplugindialog->leaveEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnLeaveEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_PaintEvent(KAboutPluginDialog* self, QPaintEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->paintEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBasePaintEvent(KAboutPluginDialog* self, QPaintEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_PaintEvent_IsBase(true);
        vkaboutplugindialog->paintEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnPaintEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_PaintEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_MoveEvent(KAboutPluginDialog* self, QMoveEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->moveEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseMoveEvent(KAboutPluginDialog* self, QMoveEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_MoveEvent_IsBase(true);
        vkaboutplugindialog->moveEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnMoveEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_MoveEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_TabletEvent(KAboutPluginDialog* self, QTabletEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->tabletEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseTabletEvent(KAboutPluginDialog* self, QTabletEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_TabletEvent_IsBase(true);
        vkaboutplugindialog->tabletEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnTabletEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_TabletEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_ActionEvent(KAboutPluginDialog* self, QActionEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->actionEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseActionEvent(KAboutPluginDialog* self, QActionEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_ActionEvent_IsBase(true);
        vkaboutplugindialog->actionEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnActionEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_ActionEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_DragEnterEvent(KAboutPluginDialog* self, QDragEnterEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->dragEnterEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseDragEnterEvent(KAboutPluginDialog* self, QDragEnterEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_DragEnterEvent_IsBase(true);
        vkaboutplugindialog->dragEnterEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnDragEnterEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_DragMoveEvent(KAboutPluginDialog* self, QDragMoveEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->dragMoveEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseDragMoveEvent(KAboutPluginDialog* self, QDragMoveEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_DragMoveEvent_IsBase(true);
        vkaboutplugindialog->dragMoveEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnDragMoveEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_DragLeaveEvent(KAboutPluginDialog* self, QDragLeaveEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->dragLeaveEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseDragLeaveEvent(KAboutPluginDialog* self, QDragLeaveEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_DragLeaveEvent_IsBase(true);
        vkaboutplugindialog->dragLeaveEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnDragLeaveEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_DropEvent(KAboutPluginDialog* self, QDropEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->dropEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseDropEvent(KAboutPluginDialog* self, QDropEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_DropEvent_IsBase(true);
        vkaboutplugindialog->dropEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnDropEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_DropEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_HideEvent(KAboutPluginDialog* self, QHideEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->hideEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseHideEvent(KAboutPluginDialog* self, QHideEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_HideEvent_IsBase(true);
        vkaboutplugindialog->hideEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnHideEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_HideEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAboutPluginDialog_NativeEvent(KAboutPluginDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return vkaboutplugindialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKAboutPluginDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KAboutPluginDialog_QBaseNativeEvent(KAboutPluginDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_NativeEvent_IsBase(true);
        return vkaboutplugindialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKAboutPluginDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnNativeEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_NativeEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_ChangeEvent(KAboutPluginDialog* self, QEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->changeEvent(param1);
    } else {
        ((VirtualKAboutPluginDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseChangeEvent(KAboutPluginDialog* self, QEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_ChangeEvent_IsBase(true);
        vkaboutplugindialog->changeEvent(param1);
    } else {
        ((VirtualKAboutPluginDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnChangeEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KAboutPluginDialog_Metric(const KAboutPluginDialog* self, int param1) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return vkaboutplugindialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKAboutPluginDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KAboutPluginDialog_QBaseMetric(const KAboutPluginDialog* self, int param1) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Metric_IsBase(true);
        return vkaboutplugindialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKAboutPluginDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnMetric(const KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Metric_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_InitPainter(const KAboutPluginDialog* self, QPainter* painter) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->initPainter(painter);
    } else {
        ((VirtualKAboutPluginDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseInitPainter(const KAboutPluginDialog* self, QPainter* painter) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_InitPainter_IsBase(true);
        vkaboutplugindialog->initPainter(painter);
    } else {
        ((VirtualKAboutPluginDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnInitPainter(const KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_InitPainter_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KAboutPluginDialog_Redirected(const KAboutPluginDialog* self, QPoint* offset) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return vkaboutplugindialog->redirected(offset);
    } else {
        return ((VirtualKAboutPluginDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KAboutPluginDialog_QBaseRedirected(const KAboutPluginDialog* self, QPoint* offset) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Redirected_IsBase(true);
        return vkaboutplugindialog->redirected(offset);
    } else {
        return ((VirtualKAboutPluginDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnRedirected(const KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Redirected_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KAboutPluginDialog_SharedPainter(const KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return vkaboutplugindialog->sharedPainter();
    } else {
        return ((VirtualKAboutPluginDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KAboutPluginDialog_QBaseSharedPainter(const KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_SharedPainter_IsBase(true);
        return vkaboutplugindialog->sharedPainter();
    } else {
        return ((VirtualKAboutPluginDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnSharedPainter(const KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_SharedPainter_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_InputMethodEvent(KAboutPluginDialog* self, QInputMethodEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->inputMethodEvent(param1);
    } else {
        ((VirtualKAboutPluginDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseInputMethodEvent(KAboutPluginDialog* self, QInputMethodEvent* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_InputMethodEvent_IsBase(true);
        vkaboutplugindialog->inputMethodEvent(param1);
    } else {
        ((VirtualKAboutPluginDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnInputMethodEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KAboutPluginDialog_InputMethodQuery(const KAboutPluginDialog* self, int param1) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return new QVariant(vkaboutplugindialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKAboutPluginDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KAboutPluginDialog_QBaseInputMethodQuery(const KAboutPluginDialog* self, int param1) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkaboutplugindialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKAboutPluginDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnInputMethodQuery(const KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAboutPluginDialog_FocusNextPrevChild(KAboutPluginDialog* self, bool next) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return vkaboutplugindialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKAboutPluginDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KAboutPluginDialog_QBaseFocusNextPrevChild(KAboutPluginDialog* self, bool next) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_FocusNextPrevChild_IsBase(true);
        return vkaboutplugindialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKAboutPluginDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnFocusNextPrevChild(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_TimerEvent(KAboutPluginDialog* self, QTimerEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->timerEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseTimerEvent(KAboutPluginDialog* self, QTimerEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_TimerEvent_IsBase(true);
        vkaboutplugindialog->timerEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnTimerEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_TimerEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_ChildEvent(KAboutPluginDialog* self, QChildEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->childEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseChildEvent(KAboutPluginDialog* self, QChildEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_ChildEvent_IsBase(true);
        vkaboutplugindialog->childEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnChildEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_ChildEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_CustomEvent(KAboutPluginDialog* self, QEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->customEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseCustomEvent(KAboutPluginDialog* self, QEvent* event) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_CustomEvent_IsBase(true);
        vkaboutplugindialog->customEvent(event);
    } else {
        ((VirtualKAboutPluginDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnCustomEvent(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_CustomEvent_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_ConnectNotify(KAboutPluginDialog* self, const QMetaMethod* signal) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->connectNotify(*signal);
    } else {
        ((VirtualKAboutPluginDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseConnectNotify(KAboutPluginDialog* self, const QMetaMethod* signal) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_ConnectNotify_IsBase(true);
        vkaboutplugindialog->connectNotify(*signal);
    } else {
        ((VirtualKAboutPluginDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnConnectNotify(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_DisconnectNotify(KAboutPluginDialog* self, const QMetaMethod* signal) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->disconnectNotify(*signal);
    } else {
        ((VirtualKAboutPluginDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseDisconnectNotify(KAboutPluginDialog* self, const QMetaMethod* signal) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_DisconnectNotify_IsBase(true);
        vkaboutplugindialog->disconnectNotify(*signal);
    } else {
        ((VirtualKAboutPluginDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnDisconnectNotify(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_AdjustPosition(KAboutPluginDialog* self, QWidget* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->adjustPosition(param1);
    } else {
        ((VirtualKAboutPluginDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseAdjustPosition(KAboutPluginDialog* self, QWidget* param1) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_AdjustPosition_IsBase(true);
        vkaboutplugindialog->adjustPosition(param1);
    } else {
        ((VirtualKAboutPluginDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnAdjustPosition(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_UpdateMicroFocus(KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->updateMicroFocus();
    } else {
        ((VirtualKAboutPluginDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseUpdateMicroFocus(KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_UpdateMicroFocus_IsBase(true);
        vkaboutplugindialog->updateMicroFocus();
    } else {
        ((VirtualKAboutPluginDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnUpdateMicroFocus(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_Create(KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->create();
    } else {
        ((VirtualKAboutPluginDialog*)self)->create();
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseCreate(KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Create_IsBase(true);
        vkaboutplugindialog->create();
    } else {
        ((VirtualKAboutPluginDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnCreate(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Create_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutPluginDialog_Destroy(KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->destroy();
    } else {
        ((VirtualKAboutPluginDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KAboutPluginDialog_QBaseDestroy(KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Destroy_IsBase(true);
        vkaboutplugindialog->destroy();
    } else {
        ((VirtualKAboutPluginDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnDestroy(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Destroy_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAboutPluginDialog_FocusNextChild(KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return vkaboutplugindialog->focusNextChild();
    } else {
        return ((VirtualKAboutPluginDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KAboutPluginDialog_QBaseFocusNextChild(KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_FocusNextChild_IsBase(true);
        return vkaboutplugindialog->focusNextChild();
    } else {
        return ((VirtualKAboutPluginDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnFocusNextChild(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAboutPluginDialog_FocusPreviousChild(KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return vkaboutplugindialog->focusPreviousChild();
    } else {
        return ((VirtualKAboutPluginDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KAboutPluginDialog_QBaseFocusPreviousChild(KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_FocusPreviousChild_IsBase(true);
        return vkaboutplugindialog->focusPreviousChild();
    } else {
        return ((VirtualKAboutPluginDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnFocusPreviousChild(KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = dynamic_cast<VirtualKAboutPluginDialog*>(self);
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KAboutPluginDialog_Sender(const KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return vkaboutplugindialog->sender();
    } else {
        return ((VirtualKAboutPluginDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KAboutPluginDialog_QBaseSender(const KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Sender_IsBase(true);
        return vkaboutplugindialog->sender();
    } else {
        return ((VirtualKAboutPluginDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnSender(const KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Sender_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KAboutPluginDialog_SenderSignalIndex(const KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return vkaboutplugindialog->senderSignalIndex();
    } else {
        return ((VirtualKAboutPluginDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KAboutPluginDialog_QBaseSenderSignalIndex(const KAboutPluginDialog* self) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_SenderSignalIndex_IsBase(true);
        return vkaboutplugindialog->senderSignalIndex();
    } else {
        return ((VirtualKAboutPluginDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnSenderSignalIndex(const KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KAboutPluginDialog_Receivers(const KAboutPluginDialog* self, const char* signal) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return vkaboutplugindialog->receivers(signal);
    } else {
        return ((VirtualKAboutPluginDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KAboutPluginDialog_QBaseReceivers(const KAboutPluginDialog* self, const char* signal) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Receivers_IsBase(true);
        return vkaboutplugindialog->receivers(signal);
    } else {
        return ((VirtualKAboutPluginDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnReceivers(const KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_Receivers_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAboutPluginDialog_IsSignalConnected(const KAboutPluginDialog* self, const QMetaMethod* signal) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return vkaboutplugindialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKAboutPluginDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KAboutPluginDialog_QBaseIsSignalConnected(const KAboutPluginDialog* self, const QMetaMethod* signal) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_IsSignalConnected_IsBase(true);
        return vkaboutplugindialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKAboutPluginDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnIsSignalConnected(const KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KAboutPluginDialog_GetDecodedMetricF(const KAboutPluginDialog* self, int metricA, int metricB) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        return vkaboutplugindialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKAboutPluginDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KAboutPluginDialog_QBaseGetDecodedMetricF(const KAboutPluginDialog* self, int metricA, int metricB) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_GetDecodedMetricF_IsBase(true);
        return vkaboutplugindialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKAboutPluginDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutPluginDialog_OnGetDecodedMetricF(const KAboutPluginDialog* self, intptr_t slot) {
    auto* vkaboutplugindialog = const_cast<VirtualKAboutPluginDialog*>(dynamic_cast<const VirtualKAboutPluginDialog*>(self));
    if (vkaboutplugindialog && vkaboutplugindialog->isVirtualKAboutPluginDialog) {
        vkaboutplugindialog->setKAboutPluginDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKAboutPluginDialog::KAboutPluginDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KAboutPluginDialog_Delete(KAboutPluginDialog* self) {
    delete self;
}
