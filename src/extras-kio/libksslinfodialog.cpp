#include <KSslInfoDialog>
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
#include <ksslinfodialog.h>
#include "libksslinfodialog.h"
#include "libksslinfodialog.hxx"

KSslInfoDialog* KSslInfoDialog_new(QWidget* parent) {
    return new VirtualKSslInfoDialog(parent);
}

KSslInfoDialog* KSslInfoDialog_new2() {
    return new VirtualKSslInfoDialog();
}

QMetaObject* KSslInfoDialog_MetaObject(const KSslInfoDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSslInfoDialog_Metacast(KSslInfoDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSslInfoDialog_Metacall(KSslInfoDialog* self, int param1, int param2, void** param3) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSslInfoDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KSslInfoDialog_Tr(const char* s) {
    QString _ret = KSslInfoDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSslInfoDialog_SetMainPartEncrypted(KSslInfoDialog* self, bool mainPartEncrypted) {
    self->setMainPartEncrypted(mainPartEncrypted);
}

void KSslInfoDialog_SetAuxiliaryPartsEncrypted(KSslInfoDialog* self, bool auxiliaryPartsEncrypted) {
    self->setAuxiliaryPartsEncrypted(auxiliaryPartsEncrypted);
}

libqt_string KSslInfoDialog_Tr2(const char* s, const char* c) {
    QString _ret = KSslInfoDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSslInfoDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = KSslInfoDialog::tr(s, c, static_cast<int>(n));
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
int KSslInfoDialog_QBaseMetacall(KSslInfoDialog* self, int param1, int param2, void** param3) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Metacall_IsBase(true);
        return vksslinfodialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KSslInfoDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnMetacall(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Metacall_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_SetVisible(KSslInfoDialog* self, bool visible) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setVisible(visible);
    } else {
        self->KSslInfoDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseSetVisible(KSslInfoDialog* self, bool visible) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_SetVisible_IsBase(true);
        vksslinfodialog->setVisible(visible);
    } else {
        self->KSslInfoDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnSetVisible(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_SetVisible_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KSslInfoDialog_SizeHint(const KSslInfoDialog* self) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return new QSize(vksslinfodialog->sizeHint());
    } else {
        return new QSize(((VirtualKSslInfoDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KSslInfoDialog_QBaseSizeHint(const KSslInfoDialog* self) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_SizeHint_IsBase(true);
        return new QSize(vksslinfodialog->sizeHint());
    } else {
        return new QSize(((VirtualKSslInfoDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnSizeHint(const KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_SizeHint_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KSslInfoDialog_MinimumSizeHint(const KSslInfoDialog* self) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return new QSize(vksslinfodialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKSslInfoDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KSslInfoDialog_QBaseMinimumSizeHint(const KSslInfoDialog* self) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vksslinfodialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKSslInfoDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnMinimumSizeHint(const KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_Open(KSslInfoDialog* self) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->open();
    } else {
        self->KSslInfoDialog::open();
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseOpen(KSslInfoDialog* self) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Open_IsBase(true);
        vksslinfodialog->open();
    } else {
        self->KSslInfoDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnOpen(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Open_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KSslInfoDialog_Exec(KSslInfoDialog* self) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return vksslinfodialog->exec();
    } else {
        return self->KSslInfoDialog::exec();
    }
}

// Base class handler implementation
int KSslInfoDialog_QBaseExec(KSslInfoDialog* self) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Exec_IsBase(true);
        return vksslinfodialog->exec();
    } else {
        return self->KSslInfoDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnExec(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Exec_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_Done(KSslInfoDialog* self, int param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->done(static_cast<int>(param1));
    } else {
        self->KSslInfoDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseDone(KSslInfoDialog* self, int param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Done_IsBase(true);
        vksslinfodialog->done(static_cast<int>(param1));
    } else {
        self->KSslInfoDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnDone(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Done_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_Accept(KSslInfoDialog* self) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->accept();
    } else {
        self->KSslInfoDialog::accept();
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseAccept(KSslInfoDialog* self) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Accept_IsBase(true);
        vksslinfodialog->accept();
    } else {
        self->KSslInfoDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnAccept(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Accept_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_Reject(KSslInfoDialog* self) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->reject();
    } else {
        self->KSslInfoDialog::reject();
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseReject(KSslInfoDialog* self) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Reject_IsBase(true);
        vksslinfodialog->reject();
    } else {
        self->KSslInfoDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnReject(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Reject_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_KeyPressEvent(KSslInfoDialog* self, QKeyEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->keyPressEvent(param1);
    } else {
        ((VirtualKSslInfoDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseKeyPressEvent(KSslInfoDialog* self, QKeyEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_KeyPressEvent_IsBase(true);
        vksslinfodialog->keyPressEvent(param1);
    } else {
        ((VirtualKSslInfoDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnKeyPressEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_CloseEvent(KSslInfoDialog* self, QCloseEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->closeEvent(param1);
    } else {
        ((VirtualKSslInfoDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseCloseEvent(KSslInfoDialog* self, QCloseEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_CloseEvent_IsBase(true);
        vksslinfodialog->closeEvent(param1);
    } else {
        ((VirtualKSslInfoDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnCloseEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_CloseEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_ShowEvent(KSslInfoDialog* self, QShowEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->showEvent(param1);
    } else {
        ((VirtualKSslInfoDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseShowEvent(KSslInfoDialog* self, QShowEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_ShowEvent_IsBase(true);
        vksslinfodialog->showEvent(param1);
    } else {
        ((VirtualKSslInfoDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnShowEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_ShowEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_ResizeEvent(KSslInfoDialog* self, QResizeEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->resizeEvent(param1);
    } else {
        ((VirtualKSslInfoDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseResizeEvent(KSslInfoDialog* self, QResizeEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_ResizeEvent_IsBase(true);
        vksslinfodialog->resizeEvent(param1);
    } else {
        ((VirtualKSslInfoDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnResizeEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_ContextMenuEvent(KSslInfoDialog* self, QContextMenuEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->contextMenuEvent(param1);
    } else {
        ((VirtualKSslInfoDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseContextMenuEvent(KSslInfoDialog* self, QContextMenuEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_ContextMenuEvent_IsBase(true);
        vksslinfodialog->contextMenuEvent(param1);
    } else {
        ((VirtualKSslInfoDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnContextMenuEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSslInfoDialog_EventFilter(KSslInfoDialog* self, QObject* param1, QEvent* param2) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return vksslinfodialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKSslInfoDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KSslInfoDialog_QBaseEventFilter(KSslInfoDialog* self, QObject* param1, QEvent* param2) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_EventFilter_IsBase(true);
        return vksslinfodialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKSslInfoDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnEventFilter(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_EventFilter_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KSslInfoDialog_DevType(const KSslInfoDialog* self) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return vksslinfodialog->devType();
    } else {
        return self->KSslInfoDialog::devType();
    }
}

// Base class handler implementation
int KSslInfoDialog_QBaseDevType(const KSslInfoDialog* self) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_DevType_IsBase(true);
        return vksslinfodialog->devType();
    } else {
        return self->KSslInfoDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnDevType(const KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_DevType_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KSslInfoDialog_HeightForWidth(const KSslInfoDialog* self, int param1) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return vksslinfodialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KSslInfoDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KSslInfoDialog_QBaseHeightForWidth(const KSslInfoDialog* self, int param1) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_HeightForWidth_IsBase(true);
        return vksslinfodialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KSslInfoDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnHeightForWidth(const KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSslInfoDialog_HasHeightForWidth(const KSslInfoDialog* self) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return vksslinfodialog->hasHeightForWidth();
    } else {
        return self->KSslInfoDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KSslInfoDialog_QBaseHasHeightForWidth(const KSslInfoDialog* self) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_HasHeightForWidth_IsBase(true);
        return vksslinfodialog->hasHeightForWidth();
    } else {
        return self->KSslInfoDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnHasHeightForWidth(const KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KSslInfoDialog_PaintEngine(const KSslInfoDialog* self) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return vksslinfodialog->paintEngine();
    } else {
        return self->KSslInfoDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KSslInfoDialog_QBasePaintEngine(const KSslInfoDialog* self) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_PaintEngine_IsBase(true);
        return vksslinfodialog->paintEngine();
    } else {
        return self->KSslInfoDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnPaintEngine(const KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_PaintEngine_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSslInfoDialog_Event(KSslInfoDialog* self, QEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return vksslinfodialog->event(event);
    } else {
        return ((VirtualKSslInfoDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KSslInfoDialog_QBaseEvent(KSslInfoDialog* self, QEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Event_IsBase(true);
        return vksslinfodialog->event(event);
    } else {
        return ((VirtualKSslInfoDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Event_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_MousePressEvent(KSslInfoDialog* self, QMouseEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->mousePressEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseMousePressEvent(KSslInfoDialog* self, QMouseEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_MousePressEvent_IsBase(true);
        vksslinfodialog->mousePressEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnMousePressEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_MouseReleaseEvent(KSslInfoDialog* self, QMouseEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseMouseReleaseEvent(KSslInfoDialog* self, QMouseEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_MouseReleaseEvent_IsBase(true);
        vksslinfodialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnMouseReleaseEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_MouseDoubleClickEvent(KSslInfoDialog* self, QMouseEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseMouseDoubleClickEvent(KSslInfoDialog* self, QMouseEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_MouseDoubleClickEvent_IsBase(true);
        vksslinfodialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnMouseDoubleClickEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_MouseMoveEvent(KSslInfoDialog* self, QMouseEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->mouseMoveEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseMouseMoveEvent(KSslInfoDialog* self, QMouseEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_MouseMoveEvent_IsBase(true);
        vksslinfodialog->mouseMoveEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnMouseMoveEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_WheelEvent(KSslInfoDialog* self, QWheelEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->wheelEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseWheelEvent(KSslInfoDialog* self, QWheelEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_WheelEvent_IsBase(true);
        vksslinfodialog->wheelEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnWheelEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_WheelEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_KeyReleaseEvent(KSslInfoDialog* self, QKeyEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->keyReleaseEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseKeyReleaseEvent(KSslInfoDialog* self, QKeyEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_KeyReleaseEvent_IsBase(true);
        vksslinfodialog->keyReleaseEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnKeyReleaseEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_FocusInEvent(KSslInfoDialog* self, QFocusEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->focusInEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseFocusInEvent(KSslInfoDialog* self, QFocusEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_FocusInEvent_IsBase(true);
        vksslinfodialog->focusInEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnFocusInEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_FocusOutEvent(KSslInfoDialog* self, QFocusEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->focusOutEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseFocusOutEvent(KSslInfoDialog* self, QFocusEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_FocusOutEvent_IsBase(true);
        vksslinfodialog->focusOutEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnFocusOutEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_EnterEvent(KSslInfoDialog* self, QEnterEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->enterEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseEnterEvent(KSslInfoDialog* self, QEnterEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_EnterEvent_IsBase(true);
        vksslinfodialog->enterEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnEnterEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_EnterEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_LeaveEvent(KSslInfoDialog* self, QEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->leaveEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseLeaveEvent(KSslInfoDialog* self, QEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_LeaveEvent_IsBase(true);
        vksslinfodialog->leaveEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnLeaveEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_PaintEvent(KSslInfoDialog* self, QPaintEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->paintEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBasePaintEvent(KSslInfoDialog* self, QPaintEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_PaintEvent_IsBase(true);
        vksslinfodialog->paintEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnPaintEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_PaintEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_MoveEvent(KSslInfoDialog* self, QMoveEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->moveEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseMoveEvent(KSslInfoDialog* self, QMoveEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_MoveEvent_IsBase(true);
        vksslinfodialog->moveEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnMoveEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_MoveEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_TabletEvent(KSslInfoDialog* self, QTabletEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->tabletEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseTabletEvent(KSslInfoDialog* self, QTabletEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_TabletEvent_IsBase(true);
        vksslinfodialog->tabletEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnTabletEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_TabletEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_ActionEvent(KSslInfoDialog* self, QActionEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->actionEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseActionEvent(KSslInfoDialog* self, QActionEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_ActionEvent_IsBase(true);
        vksslinfodialog->actionEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnActionEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_ActionEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_DragEnterEvent(KSslInfoDialog* self, QDragEnterEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->dragEnterEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseDragEnterEvent(KSslInfoDialog* self, QDragEnterEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_DragEnterEvent_IsBase(true);
        vksslinfodialog->dragEnterEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnDragEnterEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_DragMoveEvent(KSslInfoDialog* self, QDragMoveEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->dragMoveEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseDragMoveEvent(KSslInfoDialog* self, QDragMoveEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_DragMoveEvent_IsBase(true);
        vksslinfodialog->dragMoveEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnDragMoveEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_DragLeaveEvent(KSslInfoDialog* self, QDragLeaveEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->dragLeaveEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseDragLeaveEvent(KSslInfoDialog* self, QDragLeaveEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_DragLeaveEvent_IsBase(true);
        vksslinfodialog->dragLeaveEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnDragLeaveEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_DropEvent(KSslInfoDialog* self, QDropEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->dropEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseDropEvent(KSslInfoDialog* self, QDropEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_DropEvent_IsBase(true);
        vksslinfodialog->dropEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnDropEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_DropEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_HideEvent(KSslInfoDialog* self, QHideEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->hideEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseHideEvent(KSslInfoDialog* self, QHideEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_HideEvent_IsBase(true);
        vksslinfodialog->hideEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnHideEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_HideEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSslInfoDialog_NativeEvent(KSslInfoDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return vksslinfodialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKSslInfoDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KSslInfoDialog_QBaseNativeEvent(KSslInfoDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_NativeEvent_IsBase(true);
        return vksslinfodialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKSslInfoDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnNativeEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_NativeEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_ChangeEvent(KSslInfoDialog* self, QEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->changeEvent(param1);
    } else {
        ((VirtualKSslInfoDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseChangeEvent(KSslInfoDialog* self, QEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_ChangeEvent_IsBase(true);
        vksslinfodialog->changeEvent(param1);
    } else {
        ((VirtualKSslInfoDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnChangeEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KSslInfoDialog_Metric(const KSslInfoDialog* self, int param1) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return vksslinfodialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKSslInfoDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KSslInfoDialog_QBaseMetric(const KSslInfoDialog* self, int param1) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Metric_IsBase(true);
        return vksslinfodialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKSslInfoDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnMetric(const KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Metric_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_InitPainter(const KSslInfoDialog* self, QPainter* painter) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->initPainter(painter);
    } else {
        ((VirtualKSslInfoDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseInitPainter(const KSslInfoDialog* self, QPainter* painter) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_InitPainter_IsBase(true);
        vksslinfodialog->initPainter(painter);
    } else {
        ((VirtualKSslInfoDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnInitPainter(const KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_InitPainter_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KSslInfoDialog_Redirected(const KSslInfoDialog* self, QPoint* offset) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return vksslinfodialog->redirected(offset);
    } else {
        return ((VirtualKSslInfoDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KSslInfoDialog_QBaseRedirected(const KSslInfoDialog* self, QPoint* offset) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Redirected_IsBase(true);
        return vksslinfodialog->redirected(offset);
    } else {
        return ((VirtualKSslInfoDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnRedirected(const KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Redirected_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KSslInfoDialog_SharedPainter(const KSslInfoDialog* self) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return vksslinfodialog->sharedPainter();
    } else {
        return ((VirtualKSslInfoDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KSslInfoDialog_QBaseSharedPainter(const KSslInfoDialog* self) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_SharedPainter_IsBase(true);
        return vksslinfodialog->sharedPainter();
    } else {
        return ((VirtualKSslInfoDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnSharedPainter(const KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_SharedPainter_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_InputMethodEvent(KSslInfoDialog* self, QInputMethodEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->inputMethodEvent(param1);
    } else {
        ((VirtualKSslInfoDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseInputMethodEvent(KSslInfoDialog* self, QInputMethodEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_InputMethodEvent_IsBase(true);
        vksslinfodialog->inputMethodEvent(param1);
    } else {
        ((VirtualKSslInfoDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnInputMethodEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KSslInfoDialog_InputMethodQuery(const KSslInfoDialog* self, int param1) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return new QVariant(vksslinfodialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKSslInfoDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KSslInfoDialog_QBaseInputMethodQuery(const KSslInfoDialog* self, int param1) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vksslinfodialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKSslInfoDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnInputMethodQuery(const KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSslInfoDialog_FocusNextPrevChild(KSslInfoDialog* self, bool next) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return vksslinfodialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKSslInfoDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KSslInfoDialog_QBaseFocusNextPrevChild(KSslInfoDialog* self, bool next) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_FocusNextPrevChild_IsBase(true);
        return vksslinfodialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKSslInfoDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnFocusNextPrevChild(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_TimerEvent(KSslInfoDialog* self, QTimerEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->timerEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseTimerEvent(KSslInfoDialog* self, QTimerEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_TimerEvent_IsBase(true);
        vksslinfodialog->timerEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnTimerEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_TimerEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_ChildEvent(KSslInfoDialog* self, QChildEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->childEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseChildEvent(KSslInfoDialog* self, QChildEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_ChildEvent_IsBase(true);
        vksslinfodialog->childEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnChildEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_ChildEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_CustomEvent(KSslInfoDialog* self, QEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->customEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseCustomEvent(KSslInfoDialog* self, QEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_CustomEvent_IsBase(true);
        vksslinfodialog->customEvent(event);
    } else {
        ((VirtualKSslInfoDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnCustomEvent(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_CustomEvent_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_ConnectNotify(KSslInfoDialog* self, const QMetaMethod* signal) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->connectNotify(*signal);
    } else {
        ((VirtualKSslInfoDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseConnectNotify(KSslInfoDialog* self, const QMetaMethod* signal) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_ConnectNotify_IsBase(true);
        vksslinfodialog->connectNotify(*signal);
    } else {
        ((VirtualKSslInfoDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnConnectNotify(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_DisconnectNotify(KSslInfoDialog* self, const QMetaMethod* signal) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->disconnectNotify(*signal);
    } else {
        ((VirtualKSslInfoDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseDisconnectNotify(KSslInfoDialog* self, const QMetaMethod* signal) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_DisconnectNotify_IsBase(true);
        vksslinfodialog->disconnectNotify(*signal);
    } else {
        ((VirtualKSslInfoDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnDisconnectNotify(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_AdjustPosition(KSslInfoDialog* self, QWidget* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->adjustPosition(param1);
    } else {
        ((VirtualKSslInfoDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseAdjustPosition(KSslInfoDialog* self, QWidget* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_AdjustPosition_IsBase(true);
        vksslinfodialog->adjustPosition(param1);
    } else {
        ((VirtualKSslInfoDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnAdjustPosition(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_UpdateMicroFocus(KSslInfoDialog* self) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->updateMicroFocus();
    } else {
        ((VirtualKSslInfoDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseUpdateMicroFocus(KSslInfoDialog* self) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_UpdateMicroFocus_IsBase(true);
        vksslinfodialog->updateMicroFocus();
    } else {
        ((VirtualKSslInfoDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnUpdateMicroFocus(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_Create(KSslInfoDialog* self) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->create();
    } else {
        ((VirtualKSslInfoDialog*)self)->create();
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseCreate(KSslInfoDialog* self) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Create_IsBase(true);
        vksslinfodialog->create();
    } else {
        ((VirtualKSslInfoDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnCreate(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Create_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslInfoDialog_Destroy(KSslInfoDialog* self) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->destroy();
    } else {
        ((VirtualKSslInfoDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KSslInfoDialog_QBaseDestroy(KSslInfoDialog* self) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Destroy_IsBase(true);
        vksslinfodialog->destroy();
    } else {
        ((VirtualKSslInfoDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnDestroy(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Destroy_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSslInfoDialog_FocusNextChild(KSslInfoDialog* self) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return vksslinfodialog->focusNextChild();
    } else {
        return ((VirtualKSslInfoDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KSslInfoDialog_QBaseFocusNextChild(KSslInfoDialog* self) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_FocusNextChild_IsBase(true);
        return vksslinfodialog->focusNextChild();
    } else {
        return ((VirtualKSslInfoDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnFocusNextChild(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSslInfoDialog_FocusPreviousChild(KSslInfoDialog* self) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return vksslinfodialog->focusPreviousChild();
    } else {
        return ((VirtualKSslInfoDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KSslInfoDialog_QBaseFocusPreviousChild(KSslInfoDialog* self) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_FocusPreviousChild_IsBase(true);
        return vksslinfodialog->focusPreviousChild();
    } else {
        return ((VirtualKSslInfoDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnFocusPreviousChild(KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KSslInfoDialog_Sender(const KSslInfoDialog* self) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return vksslinfodialog->sender();
    } else {
        return ((VirtualKSslInfoDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KSslInfoDialog_QBaseSender(const KSslInfoDialog* self) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Sender_IsBase(true);
        return vksslinfodialog->sender();
    } else {
        return ((VirtualKSslInfoDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnSender(const KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Sender_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KSslInfoDialog_SenderSignalIndex(const KSslInfoDialog* self) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return vksslinfodialog->senderSignalIndex();
    } else {
        return ((VirtualKSslInfoDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KSslInfoDialog_QBaseSenderSignalIndex(const KSslInfoDialog* self) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_SenderSignalIndex_IsBase(true);
        return vksslinfodialog->senderSignalIndex();
    } else {
        return ((VirtualKSslInfoDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnSenderSignalIndex(const KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KSslInfoDialog_Receivers(const KSslInfoDialog* self, const char* signal) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return vksslinfodialog->receivers(signal);
    } else {
        return ((VirtualKSslInfoDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KSslInfoDialog_QBaseReceivers(const KSslInfoDialog* self, const char* signal) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Receivers_IsBase(true);
        return vksslinfodialog->receivers(signal);
    } else {
        return ((VirtualKSslInfoDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnReceivers(const KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_Receivers_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSslInfoDialog_IsSignalConnected(const KSslInfoDialog* self, const QMetaMethod* signal) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return vksslinfodialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKSslInfoDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KSslInfoDialog_QBaseIsSignalConnected(const KSslInfoDialog* self, const QMetaMethod* signal) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_IsSignalConnected_IsBase(true);
        return vksslinfodialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKSslInfoDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnIsSignalConnected(const KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KSslInfoDialog_GetDecodedMetricF(const KSslInfoDialog* self, int metricA, int metricB) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        return vksslinfodialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKSslInfoDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KSslInfoDialog_QBaseGetDecodedMetricF(const KSslInfoDialog* self, int metricA, int metricB) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_GetDecodedMetricF_IsBase(true);
        return vksslinfodialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKSslInfoDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnGetDecodedMetricF(const KSslInfoDialog* self, intptr_t slot) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog && vksslinfodialog->isVirtualKSslInfoDialog) {
        vksslinfodialog->setKSslInfoDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KSslInfoDialog_Delete(KSslInfoDialog* self) {
    delete self;
}
