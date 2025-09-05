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
#include <QByteArray>
#include <cstring>
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
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KAboutApplicationDialog_Tr(const char* s) {
    QString _ret = KAboutApplicationDialog::tr(s);
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
    QString _ret = KAboutApplicationDialog::tr(s, c);
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
    QString _ret = KAboutApplicationDialog::tr(s, c, static_cast<int>(n));
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
int KAboutApplicationDialog_QBaseMetacall(KAboutApplicationDialog* self, int param1, int param2, void** param3) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Metacall_IsBase(true);
        return vkaboutapplicationdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KAboutApplicationDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnMetacall(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Metacall_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_SetVisible(KAboutApplicationDialog* self, bool visible) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setVisible(visible);
    } else {
        self->KAboutApplicationDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseSetVisible(KAboutApplicationDialog* self, bool visible) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_SetVisible_IsBase(true);
        vkaboutapplicationdialog->setVisible(visible);
    } else {
        self->KAboutApplicationDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnSetVisible(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_SetVisible_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KAboutApplicationDialog_SizeHint(const KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return new QSize(vkaboutapplicationdialog->sizeHint());
    } else {
        return new QSize(((VirtualKAboutApplicationDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KAboutApplicationDialog_QBaseSizeHint(const KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_SizeHint_IsBase(true);
        return new QSize(vkaboutapplicationdialog->sizeHint());
    } else {
        return new QSize(((VirtualKAboutApplicationDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnSizeHint(const KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_SizeHint_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KAboutApplicationDialog_MinimumSizeHint(const KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return new QSize(vkaboutapplicationdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKAboutApplicationDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KAboutApplicationDialog_QBaseMinimumSizeHint(const KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkaboutapplicationdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKAboutApplicationDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnMinimumSizeHint(const KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_Open(KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->open();
    } else {
        self->KAboutApplicationDialog::open();
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseOpen(KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Open_IsBase(true);
        vkaboutapplicationdialog->open();
    } else {
        self->KAboutApplicationDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnOpen(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Open_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KAboutApplicationDialog_Exec(KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return vkaboutapplicationdialog->exec();
    } else {
        return self->KAboutApplicationDialog::exec();
    }
}

// Base class handler implementation
int KAboutApplicationDialog_QBaseExec(KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Exec_IsBase(true);
        return vkaboutapplicationdialog->exec();
    } else {
        return self->KAboutApplicationDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnExec(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Exec_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_Done(KAboutApplicationDialog* self, int param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->done(static_cast<int>(param1));
    } else {
        self->KAboutApplicationDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseDone(KAboutApplicationDialog* self, int param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Done_IsBase(true);
        vkaboutapplicationdialog->done(static_cast<int>(param1));
    } else {
        self->KAboutApplicationDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnDone(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Done_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_Accept(KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->accept();
    } else {
        self->KAboutApplicationDialog::accept();
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseAccept(KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Accept_IsBase(true);
        vkaboutapplicationdialog->accept();
    } else {
        self->KAboutApplicationDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnAccept(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Accept_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_Reject(KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->reject();
    } else {
        self->KAboutApplicationDialog::reject();
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseReject(KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Reject_IsBase(true);
        vkaboutapplicationdialog->reject();
    } else {
        self->KAboutApplicationDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnReject(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Reject_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_KeyPressEvent(KAboutApplicationDialog* self, QKeyEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->keyPressEvent(param1);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseKeyPressEvent(KAboutApplicationDialog* self, QKeyEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_KeyPressEvent_IsBase(true);
        vkaboutapplicationdialog->keyPressEvent(param1);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnKeyPressEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_CloseEvent(KAboutApplicationDialog* self, QCloseEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->closeEvent(param1);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseCloseEvent(KAboutApplicationDialog* self, QCloseEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_CloseEvent_IsBase(true);
        vkaboutapplicationdialog->closeEvent(param1);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnCloseEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_CloseEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_ShowEvent(KAboutApplicationDialog* self, QShowEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->showEvent(param1);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseShowEvent(KAboutApplicationDialog* self, QShowEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_ShowEvent_IsBase(true);
        vkaboutapplicationdialog->showEvent(param1);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnShowEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_ShowEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_ResizeEvent(KAboutApplicationDialog* self, QResizeEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->resizeEvent(param1);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseResizeEvent(KAboutApplicationDialog* self, QResizeEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_ResizeEvent_IsBase(true);
        vkaboutapplicationdialog->resizeEvent(param1);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnResizeEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_ContextMenuEvent(KAboutApplicationDialog* self, QContextMenuEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseContextMenuEvent(KAboutApplicationDialog* self, QContextMenuEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_ContextMenuEvent_IsBase(true);
        vkaboutapplicationdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnContextMenuEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAboutApplicationDialog_EventFilter(KAboutApplicationDialog* self, QObject* param1, QEvent* param2) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return vkaboutapplicationdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KAboutApplicationDialog_QBaseEventFilter(KAboutApplicationDialog* self, QObject* param1, QEvent* param2) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_EventFilter_IsBase(true);
        return vkaboutapplicationdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnEventFilter(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_EventFilter_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KAboutApplicationDialog_DevType(const KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return vkaboutapplicationdialog->devType();
    } else {
        return self->KAboutApplicationDialog::devType();
    }
}

// Base class handler implementation
int KAboutApplicationDialog_QBaseDevType(const KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_DevType_IsBase(true);
        return vkaboutapplicationdialog->devType();
    } else {
        return self->KAboutApplicationDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnDevType(const KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_DevType_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KAboutApplicationDialog_HeightForWidth(const KAboutApplicationDialog* self, int param1) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return vkaboutapplicationdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KAboutApplicationDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KAboutApplicationDialog_QBaseHeightForWidth(const KAboutApplicationDialog* self, int param1) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_HeightForWidth_IsBase(true);
        return vkaboutapplicationdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KAboutApplicationDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnHeightForWidth(const KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAboutApplicationDialog_HasHeightForWidth(const KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return vkaboutapplicationdialog->hasHeightForWidth();
    } else {
        return self->KAboutApplicationDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KAboutApplicationDialog_QBaseHasHeightForWidth(const KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_HasHeightForWidth_IsBase(true);
        return vkaboutapplicationdialog->hasHeightForWidth();
    } else {
        return self->KAboutApplicationDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnHasHeightForWidth(const KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KAboutApplicationDialog_PaintEngine(const KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return vkaboutapplicationdialog->paintEngine();
    } else {
        return self->KAboutApplicationDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KAboutApplicationDialog_QBasePaintEngine(const KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_PaintEngine_IsBase(true);
        return vkaboutapplicationdialog->paintEngine();
    } else {
        return self->KAboutApplicationDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnPaintEngine(const KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_PaintEngine_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAboutApplicationDialog_Event(KAboutApplicationDialog* self, QEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return vkaboutapplicationdialog->event(event);
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KAboutApplicationDialog_QBaseEvent(KAboutApplicationDialog* self, QEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Event_IsBase(true);
        return vkaboutapplicationdialog->event(event);
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Event_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_MousePressEvent(KAboutApplicationDialog* self, QMouseEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->mousePressEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseMousePressEvent(KAboutApplicationDialog* self, QMouseEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_MousePressEvent_IsBase(true);
        vkaboutapplicationdialog->mousePressEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnMousePressEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_MouseReleaseEvent(KAboutApplicationDialog* self, QMouseEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseMouseReleaseEvent(KAboutApplicationDialog* self, QMouseEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_MouseReleaseEvent_IsBase(true);
        vkaboutapplicationdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnMouseReleaseEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_MouseDoubleClickEvent(KAboutApplicationDialog* self, QMouseEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseMouseDoubleClickEvent(KAboutApplicationDialog* self, QMouseEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_MouseDoubleClickEvent_IsBase(true);
        vkaboutapplicationdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnMouseDoubleClickEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_MouseMoveEvent(KAboutApplicationDialog* self, QMouseEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseMouseMoveEvent(KAboutApplicationDialog* self, QMouseEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_MouseMoveEvent_IsBase(true);
        vkaboutapplicationdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnMouseMoveEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_WheelEvent(KAboutApplicationDialog* self, QWheelEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->wheelEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseWheelEvent(KAboutApplicationDialog* self, QWheelEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_WheelEvent_IsBase(true);
        vkaboutapplicationdialog->wheelEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnWheelEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_WheelEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_KeyReleaseEvent(KAboutApplicationDialog* self, QKeyEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseKeyReleaseEvent(KAboutApplicationDialog* self, QKeyEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_KeyReleaseEvent_IsBase(true);
        vkaboutapplicationdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnKeyReleaseEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_FocusInEvent(KAboutApplicationDialog* self, QFocusEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->focusInEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseFocusInEvent(KAboutApplicationDialog* self, QFocusEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_FocusInEvent_IsBase(true);
        vkaboutapplicationdialog->focusInEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnFocusInEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_FocusOutEvent(KAboutApplicationDialog* self, QFocusEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->focusOutEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseFocusOutEvent(KAboutApplicationDialog* self, QFocusEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_FocusOutEvent_IsBase(true);
        vkaboutapplicationdialog->focusOutEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnFocusOutEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_EnterEvent(KAboutApplicationDialog* self, QEnterEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->enterEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseEnterEvent(KAboutApplicationDialog* self, QEnterEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_EnterEvent_IsBase(true);
        vkaboutapplicationdialog->enterEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnEnterEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_EnterEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_LeaveEvent(KAboutApplicationDialog* self, QEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->leaveEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseLeaveEvent(KAboutApplicationDialog* self, QEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_LeaveEvent_IsBase(true);
        vkaboutapplicationdialog->leaveEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnLeaveEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_PaintEvent(KAboutApplicationDialog* self, QPaintEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->paintEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBasePaintEvent(KAboutApplicationDialog* self, QPaintEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_PaintEvent_IsBase(true);
        vkaboutapplicationdialog->paintEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnPaintEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_PaintEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_MoveEvent(KAboutApplicationDialog* self, QMoveEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->moveEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseMoveEvent(KAboutApplicationDialog* self, QMoveEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_MoveEvent_IsBase(true);
        vkaboutapplicationdialog->moveEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnMoveEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_MoveEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_TabletEvent(KAboutApplicationDialog* self, QTabletEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->tabletEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseTabletEvent(KAboutApplicationDialog* self, QTabletEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_TabletEvent_IsBase(true);
        vkaboutapplicationdialog->tabletEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnTabletEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_TabletEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_ActionEvent(KAboutApplicationDialog* self, QActionEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->actionEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseActionEvent(KAboutApplicationDialog* self, QActionEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_ActionEvent_IsBase(true);
        vkaboutapplicationdialog->actionEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnActionEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_ActionEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_DragEnterEvent(KAboutApplicationDialog* self, QDragEnterEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->dragEnterEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseDragEnterEvent(KAboutApplicationDialog* self, QDragEnterEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_DragEnterEvent_IsBase(true);
        vkaboutapplicationdialog->dragEnterEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnDragEnterEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_DragMoveEvent(KAboutApplicationDialog* self, QDragMoveEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->dragMoveEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseDragMoveEvent(KAboutApplicationDialog* self, QDragMoveEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_DragMoveEvent_IsBase(true);
        vkaboutapplicationdialog->dragMoveEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnDragMoveEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_DragLeaveEvent(KAboutApplicationDialog* self, QDragLeaveEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseDragLeaveEvent(KAboutApplicationDialog* self, QDragLeaveEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_DragLeaveEvent_IsBase(true);
        vkaboutapplicationdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnDragLeaveEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_DropEvent(KAboutApplicationDialog* self, QDropEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->dropEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseDropEvent(KAboutApplicationDialog* self, QDropEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_DropEvent_IsBase(true);
        vkaboutapplicationdialog->dropEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnDropEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_DropEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_HideEvent(KAboutApplicationDialog* self, QHideEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->hideEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseHideEvent(KAboutApplicationDialog* self, QHideEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_HideEvent_IsBase(true);
        vkaboutapplicationdialog->hideEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnHideEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_HideEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAboutApplicationDialog_NativeEvent(KAboutApplicationDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return vkaboutapplicationdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KAboutApplicationDialog_QBaseNativeEvent(KAboutApplicationDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_NativeEvent_IsBase(true);
        return vkaboutapplicationdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnNativeEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_NativeEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_ChangeEvent(KAboutApplicationDialog* self, QEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->changeEvent(param1);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseChangeEvent(KAboutApplicationDialog* self, QEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_ChangeEvent_IsBase(true);
        vkaboutapplicationdialog->changeEvent(param1);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnChangeEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KAboutApplicationDialog_Metric(const KAboutApplicationDialog* self, int param1) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return vkaboutapplicationdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KAboutApplicationDialog_QBaseMetric(const KAboutApplicationDialog* self, int param1) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Metric_IsBase(true);
        return vkaboutapplicationdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnMetric(const KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Metric_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_InitPainter(const KAboutApplicationDialog* self, QPainter* painter) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->initPainter(painter);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseInitPainter(const KAboutApplicationDialog* self, QPainter* painter) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_InitPainter_IsBase(true);
        vkaboutapplicationdialog->initPainter(painter);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnInitPainter(const KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_InitPainter_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KAboutApplicationDialog_Redirected(const KAboutApplicationDialog* self, QPoint* offset) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return vkaboutapplicationdialog->redirected(offset);
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KAboutApplicationDialog_QBaseRedirected(const KAboutApplicationDialog* self, QPoint* offset) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Redirected_IsBase(true);
        return vkaboutapplicationdialog->redirected(offset);
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnRedirected(const KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Redirected_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KAboutApplicationDialog_SharedPainter(const KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return vkaboutapplicationdialog->sharedPainter();
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KAboutApplicationDialog_QBaseSharedPainter(const KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_SharedPainter_IsBase(true);
        return vkaboutapplicationdialog->sharedPainter();
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnSharedPainter(const KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_SharedPainter_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_InputMethodEvent(KAboutApplicationDialog* self, QInputMethodEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseInputMethodEvent(KAboutApplicationDialog* self, QInputMethodEvent* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_InputMethodEvent_IsBase(true);
        vkaboutapplicationdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnInputMethodEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KAboutApplicationDialog_InputMethodQuery(const KAboutApplicationDialog* self, int param1) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return new QVariant(vkaboutapplicationdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKAboutApplicationDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KAboutApplicationDialog_QBaseInputMethodQuery(const KAboutApplicationDialog* self, int param1) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkaboutapplicationdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKAboutApplicationDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnInputMethodQuery(const KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAboutApplicationDialog_FocusNextPrevChild(KAboutApplicationDialog* self, bool next) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return vkaboutapplicationdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KAboutApplicationDialog_QBaseFocusNextPrevChild(KAboutApplicationDialog* self, bool next) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_FocusNextPrevChild_IsBase(true);
        return vkaboutapplicationdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnFocusNextPrevChild(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_TimerEvent(KAboutApplicationDialog* self, QTimerEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->timerEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseTimerEvent(KAboutApplicationDialog* self, QTimerEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_TimerEvent_IsBase(true);
        vkaboutapplicationdialog->timerEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnTimerEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_TimerEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_ChildEvent(KAboutApplicationDialog* self, QChildEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->childEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseChildEvent(KAboutApplicationDialog* self, QChildEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_ChildEvent_IsBase(true);
        vkaboutapplicationdialog->childEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnChildEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_ChildEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_CustomEvent(KAboutApplicationDialog* self, QEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->customEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseCustomEvent(KAboutApplicationDialog* self, QEvent* event) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_CustomEvent_IsBase(true);
        vkaboutapplicationdialog->customEvent(event);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnCustomEvent(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_CustomEvent_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_ConnectNotify(KAboutApplicationDialog* self, const QMetaMethod* signal) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->connectNotify(*signal);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseConnectNotify(KAboutApplicationDialog* self, const QMetaMethod* signal) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_ConnectNotify_IsBase(true);
        vkaboutapplicationdialog->connectNotify(*signal);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnConnectNotify(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_DisconnectNotify(KAboutApplicationDialog* self, const QMetaMethod* signal) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseDisconnectNotify(KAboutApplicationDialog* self, const QMetaMethod* signal) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_DisconnectNotify_IsBase(true);
        vkaboutapplicationdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnDisconnectNotify(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_AdjustPosition(KAboutApplicationDialog* self, QWidget* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->adjustPosition(param1);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseAdjustPosition(KAboutApplicationDialog* self, QWidget* param1) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_AdjustPosition_IsBase(true);
        vkaboutapplicationdialog->adjustPosition(param1);
    } else {
        ((VirtualKAboutApplicationDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnAdjustPosition(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_UpdateMicroFocus(KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->updateMicroFocus();
    } else {
        ((VirtualKAboutApplicationDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseUpdateMicroFocus(KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_UpdateMicroFocus_IsBase(true);
        vkaboutapplicationdialog->updateMicroFocus();
    } else {
        ((VirtualKAboutApplicationDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnUpdateMicroFocus(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_Create(KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->create();
    } else {
        ((VirtualKAboutApplicationDialog*)self)->create();
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseCreate(KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Create_IsBase(true);
        vkaboutapplicationdialog->create();
    } else {
        ((VirtualKAboutApplicationDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnCreate(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Create_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KAboutApplicationDialog_Destroy(KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->destroy();
    } else {
        ((VirtualKAboutApplicationDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KAboutApplicationDialog_QBaseDestroy(KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Destroy_IsBase(true);
        vkaboutapplicationdialog->destroy();
    } else {
        ((VirtualKAboutApplicationDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnDestroy(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Destroy_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAboutApplicationDialog_FocusNextChild(KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return vkaboutapplicationdialog->focusNextChild();
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KAboutApplicationDialog_QBaseFocusNextChild(KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_FocusNextChild_IsBase(true);
        return vkaboutapplicationdialog->focusNextChild();
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnFocusNextChild(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAboutApplicationDialog_FocusPreviousChild(KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return vkaboutapplicationdialog->focusPreviousChild();
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KAboutApplicationDialog_QBaseFocusPreviousChild(KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_FocusPreviousChild_IsBase(true);
        return vkaboutapplicationdialog->focusPreviousChild();
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnFocusPreviousChild(KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = dynamic_cast<VirtualKAboutApplicationDialog*>(self);
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KAboutApplicationDialog_Sender(const KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return vkaboutapplicationdialog->sender();
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KAboutApplicationDialog_QBaseSender(const KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Sender_IsBase(true);
        return vkaboutapplicationdialog->sender();
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnSender(const KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Sender_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KAboutApplicationDialog_SenderSignalIndex(const KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return vkaboutapplicationdialog->senderSignalIndex();
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KAboutApplicationDialog_QBaseSenderSignalIndex(const KAboutApplicationDialog* self) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_SenderSignalIndex_IsBase(true);
        return vkaboutapplicationdialog->senderSignalIndex();
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnSenderSignalIndex(const KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KAboutApplicationDialog_Receivers(const KAboutApplicationDialog* self, const char* signal) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return vkaboutapplicationdialog->receivers(signal);
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KAboutApplicationDialog_QBaseReceivers(const KAboutApplicationDialog* self, const char* signal) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Receivers_IsBase(true);
        return vkaboutapplicationdialog->receivers(signal);
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnReceivers(const KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_Receivers_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAboutApplicationDialog_IsSignalConnected(const KAboutApplicationDialog* self, const QMetaMethod* signal) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return vkaboutapplicationdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KAboutApplicationDialog_QBaseIsSignalConnected(const KAboutApplicationDialog* self, const QMetaMethod* signal) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_IsSignalConnected_IsBase(true);
        return vkaboutapplicationdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnIsSignalConnected(const KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KAboutApplicationDialog_GetDecodedMetricF(const KAboutApplicationDialog* self, int metricA, int metricB) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        return vkaboutapplicationdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KAboutApplicationDialog_QBaseGetDecodedMetricF(const KAboutApplicationDialog* self, int metricA, int metricB) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_GetDecodedMetricF_IsBase(true);
        return vkaboutapplicationdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKAboutApplicationDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KAboutApplicationDialog_OnGetDecodedMetricF(const KAboutApplicationDialog* self, intptr_t slot) {
    auto* vkaboutapplicationdialog = const_cast<VirtualKAboutApplicationDialog*>(dynamic_cast<const VirtualKAboutApplicationDialog*>(self));
    if (vkaboutapplicationdialog && vkaboutapplicationdialog->isVirtualKAboutApplicationDialog) {
        vkaboutapplicationdialog->setKAboutApplicationDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKAboutApplicationDialog::KAboutApplicationDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KAboutApplicationDialog_Delete(KAboutApplicationDialog* self) {
    delete self;
}
