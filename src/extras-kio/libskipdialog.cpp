#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__SkipDialog
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
#include <skipdialog.h>
#include "libskipdialog.h"
#include "libskipdialog.hxx"

KIO__SkipDialog* KIO__SkipDialog_new(QWidget* parent, int options, const libqt_string _error_text) {
    QString _error_text_QString = QString::fromUtf8(_error_text.data, _error_text.len);
    return new VirtualKIOSkipDialog(parent, static_cast<KIO::SkipDialog_Options>(options), _error_text_QString);
}

QMetaObject* KIO__SkipDialog_MetaObject(const KIO__SkipDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__SkipDialog_Metacast(KIO__SkipDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__SkipDialog_Metacall(KIO__SkipDialog* self, int param1, int param2, void** param3) {
    auto* vkio__skipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkio__skipdialog && vkio__skipdialog->isVirtualKIOSkipDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKIOSkipDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KIO__SkipDialog_Tr(const char* s) {
    QString _ret = KIO::SkipDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__SkipDialog_Tr2(const char* s, const char* c) {
    QString _ret = KIO::SkipDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__SkipDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::SkipDialog::tr(s, c, static_cast<int>(n));
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
int KIO__SkipDialog_QBaseMetacall(KIO__SkipDialog* self, int param1, int param2, void** param3) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Metacall_IsBase(true);
        return vkioskipdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIO::SkipDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnMetacall(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Metacall_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_SetVisible(KIO__SkipDialog* self, bool visible) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setVisible(visible);
    } else {
        self->KIO::SkipDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseSetVisible(KIO__SkipDialog* self, bool visible) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_SetVisible_IsBase(true);
        vkioskipdialog->setVisible(visible);
    } else {
        self->KIO::SkipDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnSetVisible(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_SetVisible_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KIO__SkipDialog_SizeHint(const KIO__SkipDialog* self) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return new QSize(vkioskipdialog->sizeHint());
    } else {
        return new QSize(((VirtualKIOSkipDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KIO__SkipDialog_QBaseSizeHint(const KIO__SkipDialog* self) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_SizeHint_IsBase(true);
        return new QSize(vkioskipdialog->sizeHint());
    } else {
        return new QSize(((VirtualKIOSkipDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnSizeHint(const KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_SizeHint_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KIO__SkipDialog_MinimumSizeHint(const KIO__SkipDialog* self) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return new QSize(vkioskipdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKIOSkipDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KIO__SkipDialog_QBaseMinimumSizeHint(const KIO__SkipDialog* self) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkioskipdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKIOSkipDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnMinimumSizeHint(const KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_Open(KIO__SkipDialog* self) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->open();
    } else {
        self->KIO::SkipDialog::open();
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseOpen(KIO__SkipDialog* self) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Open_IsBase(true);
        vkioskipdialog->open();
    } else {
        self->KIO::SkipDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnOpen(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Open_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__SkipDialog_Exec(KIO__SkipDialog* self) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return vkioskipdialog->exec();
    } else {
        return self->KIO::SkipDialog::exec();
    }
}

// Base class handler implementation
int KIO__SkipDialog_QBaseExec(KIO__SkipDialog* self) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Exec_IsBase(true);
        return vkioskipdialog->exec();
    } else {
        return self->KIO::SkipDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnExec(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Exec_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_Done(KIO__SkipDialog* self, int param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->done(static_cast<int>(param1));
    } else {
        self->KIO::SkipDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseDone(KIO__SkipDialog* self, int param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Done_IsBase(true);
        vkioskipdialog->done(static_cast<int>(param1));
    } else {
        self->KIO::SkipDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnDone(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Done_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_Accept(KIO__SkipDialog* self) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->accept();
    } else {
        self->KIO::SkipDialog::accept();
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseAccept(KIO__SkipDialog* self) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Accept_IsBase(true);
        vkioskipdialog->accept();
    } else {
        self->KIO::SkipDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnAccept(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Accept_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_Reject(KIO__SkipDialog* self) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->reject();
    } else {
        self->KIO::SkipDialog::reject();
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseReject(KIO__SkipDialog* self) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Reject_IsBase(true);
        vkioskipdialog->reject();
    } else {
        self->KIO::SkipDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnReject(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Reject_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_KeyPressEvent(KIO__SkipDialog* self, QKeyEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->keyPressEvent(param1);
    } else {
        ((VirtualKIOSkipDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseKeyPressEvent(KIO__SkipDialog* self, QKeyEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_KeyPressEvent_IsBase(true);
        vkioskipdialog->keyPressEvent(param1);
    } else {
        ((VirtualKIOSkipDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnKeyPressEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_CloseEvent(KIO__SkipDialog* self, QCloseEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->closeEvent(param1);
    } else {
        ((VirtualKIOSkipDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseCloseEvent(KIO__SkipDialog* self, QCloseEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_CloseEvent_IsBase(true);
        vkioskipdialog->closeEvent(param1);
    } else {
        ((VirtualKIOSkipDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnCloseEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_CloseEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_ShowEvent(KIO__SkipDialog* self, QShowEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->showEvent(param1);
    } else {
        ((VirtualKIOSkipDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseShowEvent(KIO__SkipDialog* self, QShowEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_ShowEvent_IsBase(true);
        vkioskipdialog->showEvent(param1);
    } else {
        ((VirtualKIOSkipDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnShowEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_ShowEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_ResizeEvent(KIO__SkipDialog* self, QResizeEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->resizeEvent(param1);
    } else {
        ((VirtualKIOSkipDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseResizeEvent(KIO__SkipDialog* self, QResizeEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_ResizeEvent_IsBase(true);
        vkioskipdialog->resizeEvent(param1);
    } else {
        ((VirtualKIOSkipDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnResizeEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_ContextMenuEvent(KIO__SkipDialog* self, QContextMenuEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKIOSkipDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseContextMenuEvent(KIO__SkipDialog* self, QContextMenuEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_ContextMenuEvent_IsBase(true);
        vkioskipdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKIOSkipDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnContextMenuEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__SkipDialog_EventFilter(KIO__SkipDialog* self, QObject* param1, QEvent* param2) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return vkioskipdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKIOSkipDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KIO__SkipDialog_QBaseEventFilter(KIO__SkipDialog* self, QObject* param1, QEvent* param2) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_EventFilter_IsBase(true);
        return vkioskipdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKIOSkipDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnEventFilter(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_EventFilter_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__SkipDialog_DevType(const KIO__SkipDialog* self) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return vkioskipdialog->devType();
    } else {
        return self->KIO::SkipDialog::devType();
    }
}

// Base class handler implementation
int KIO__SkipDialog_QBaseDevType(const KIO__SkipDialog* self) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_DevType_IsBase(true);
        return vkioskipdialog->devType();
    } else {
        return self->KIO::SkipDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnDevType(const KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_DevType_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__SkipDialog_HeightForWidth(const KIO__SkipDialog* self, int param1) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return vkioskipdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KIO::SkipDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KIO__SkipDialog_QBaseHeightForWidth(const KIO__SkipDialog* self, int param1) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_HeightForWidth_IsBase(true);
        return vkioskipdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KIO::SkipDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnHeightForWidth(const KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__SkipDialog_HasHeightForWidth(const KIO__SkipDialog* self) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return vkioskipdialog->hasHeightForWidth();
    } else {
        return self->KIO::SkipDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KIO__SkipDialog_QBaseHasHeightForWidth(const KIO__SkipDialog* self) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_HasHeightForWidth_IsBase(true);
        return vkioskipdialog->hasHeightForWidth();
    } else {
        return self->KIO::SkipDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnHasHeightForWidth(const KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KIO__SkipDialog_PaintEngine(const KIO__SkipDialog* self) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return vkioskipdialog->paintEngine();
    } else {
        return self->KIO::SkipDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KIO__SkipDialog_QBasePaintEngine(const KIO__SkipDialog* self) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_PaintEngine_IsBase(true);
        return vkioskipdialog->paintEngine();
    } else {
        return self->KIO::SkipDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnPaintEngine(const KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_PaintEngine_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__SkipDialog_Event(KIO__SkipDialog* self, QEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return vkioskipdialog->event(event);
    } else {
        return ((VirtualKIOSkipDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KIO__SkipDialog_QBaseEvent(KIO__SkipDialog* self, QEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Event_IsBase(true);
        return vkioskipdialog->event(event);
    } else {
        return ((VirtualKIOSkipDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Event_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_MousePressEvent(KIO__SkipDialog* self, QMouseEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->mousePressEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseMousePressEvent(KIO__SkipDialog* self, QMouseEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_MousePressEvent_IsBase(true);
        vkioskipdialog->mousePressEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnMousePressEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_MouseReleaseEvent(KIO__SkipDialog* self, QMouseEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseMouseReleaseEvent(KIO__SkipDialog* self, QMouseEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_MouseReleaseEvent_IsBase(true);
        vkioskipdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnMouseReleaseEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_MouseDoubleClickEvent(KIO__SkipDialog* self, QMouseEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseMouseDoubleClickEvent(KIO__SkipDialog* self, QMouseEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_MouseDoubleClickEvent_IsBase(true);
        vkioskipdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnMouseDoubleClickEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_MouseMoveEvent(KIO__SkipDialog* self, QMouseEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseMouseMoveEvent(KIO__SkipDialog* self, QMouseEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_MouseMoveEvent_IsBase(true);
        vkioskipdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnMouseMoveEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_WheelEvent(KIO__SkipDialog* self, QWheelEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->wheelEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseWheelEvent(KIO__SkipDialog* self, QWheelEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_WheelEvent_IsBase(true);
        vkioskipdialog->wheelEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnWheelEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_WheelEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_KeyReleaseEvent(KIO__SkipDialog* self, QKeyEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseKeyReleaseEvent(KIO__SkipDialog* self, QKeyEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_KeyReleaseEvent_IsBase(true);
        vkioskipdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnKeyReleaseEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_FocusInEvent(KIO__SkipDialog* self, QFocusEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->focusInEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseFocusInEvent(KIO__SkipDialog* self, QFocusEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_FocusInEvent_IsBase(true);
        vkioskipdialog->focusInEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnFocusInEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_FocusOutEvent(KIO__SkipDialog* self, QFocusEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->focusOutEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseFocusOutEvent(KIO__SkipDialog* self, QFocusEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_FocusOutEvent_IsBase(true);
        vkioskipdialog->focusOutEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnFocusOutEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_EnterEvent(KIO__SkipDialog* self, QEnterEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->enterEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseEnterEvent(KIO__SkipDialog* self, QEnterEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_EnterEvent_IsBase(true);
        vkioskipdialog->enterEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnEnterEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_EnterEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_LeaveEvent(KIO__SkipDialog* self, QEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->leaveEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseLeaveEvent(KIO__SkipDialog* self, QEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_LeaveEvent_IsBase(true);
        vkioskipdialog->leaveEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnLeaveEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_PaintEvent(KIO__SkipDialog* self, QPaintEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->paintEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBasePaintEvent(KIO__SkipDialog* self, QPaintEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_PaintEvent_IsBase(true);
        vkioskipdialog->paintEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnPaintEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_PaintEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_MoveEvent(KIO__SkipDialog* self, QMoveEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->moveEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseMoveEvent(KIO__SkipDialog* self, QMoveEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_MoveEvent_IsBase(true);
        vkioskipdialog->moveEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnMoveEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_MoveEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_TabletEvent(KIO__SkipDialog* self, QTabletEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->tabletEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseTabletEvent(KIO__SkipDialog* self, QTabletEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_TabletEvent_IsBase(true);
        vkioskipdialog->tabletEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnTabletEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_TabletEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_ActionEvent(KIO__SkipDialog* self, QActionEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->actionEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseActionEvent(KIO__SkipDialog* self, QActionEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_ActionEvent_IsBase(true);
        vkioskipdialog->actionEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnActionEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_ActionEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_DragEnterEvent(KIO__SkipDialog* self, QDragEnterEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->dragEnterEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseDragEnterEvent(KIO__SkipDialog* self, QDragEnterEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_DragEnterEvent_IsBase(true);
        vkioskipdialog->dragEnterEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnDragEnterEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_DragMoveEvent(KIO__SkipDialog* self, QDragMoveEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->dragMoveEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseDragMoveEvent(KIO__SkipDialog* self, QDragMoveEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_DragMoveEvent_IsBase(true);
        vkioskipdialog->dragMoveEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnDragMoveEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_DragLeaveEvent(KIO__SkipDialog* self, QDragLeaveEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseDragLeaveEvent(KIO__SkipDialog* self, QDragLeaveEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_DragLeaveEvent_IsBase(true);
        vkioskipdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnDragLeaveEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_DropEvent(KIO__SkipDialog* self, QDropEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->dropEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseDropEvent(KIO__SkipDialog* self, QDropEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_DropEvent_IsBase(true);
        vkioskipdialog->dropEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnDropEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_DropEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_HideEvent(KIO__SkipDialog* self, QHideEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->hideEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseHideEvent(KIO__SkipDialog* self, QHideEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_HideEvent_IsBase(true);
        vkioskipdialog->hideEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnHideEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_HideEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__SkipDialog_NativeEvent(KIO__SkipDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return vkioskipdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKIOSkipDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KIO__SkipDialog_QBaseNativeEvent(KIO__SkipDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_NativeEvent_IsBase(true);
        return vkioskipdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKIOSkipDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnNativeEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_NativeEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_ChangeEvent(KIO__SkipDialog* self, QEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->changeEvent(param1);
    } else {
        ((VirtualKIOSkipDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseChangeEvent(KIO__SkipDialog* self, QEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_ChangeEvent_IsBase(true);
        vkioskipdialog->changeEvent(param1);
    } else {
        ((VirtualKIOSkipDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnChangeEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__SkipDialog_Metric(const KIO__SkipDialog* self, int param1) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return vkioskipdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKIOSkipDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KIO__SkipDialog_QBaseMetric(const KIO__SkipDialog* self, int param1) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Metric_IsBase(true);
        return vkioskipdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKIOSkipDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnMetric(const KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Metric_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_InitPainter(const KIO__SkipDialog* self, QPainter* painter) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->initPainter(painter);
    } else {
        ((VirtualKIOSkipDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseInitPainter(const KIO__SkipDialog* self, QPainter* painter) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_InitPainter_IsBase(true);
        vkioskipdialog->initPainter(painter);
    } else {
        ((VirtualKIOSkipDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnInitPainter(const KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_InitPainter_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KIO__SkipDialog_Redirected(const KIO__SkipDialog* self, QPoint* offset) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return vkioskipdialog->redirected(offset);
    } else {
        return ((VirtualKIOSkipDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KIO__SkipDialog_QBaseRedirected(const KIO__SkipDialog* self, QPoint* offset) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Redirected_IsBase(true);
        return vkioskipdialog->redirected(offset);
    } else {
        return ((VirtualKIOSkipDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnRedirected(const KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Redirected_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KIO__SkipDialog_SharedPainter(const KIO__SkipDialog* self) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return vkioskipdialog->sharedPainter();
    } else {
        return ((VirtualKIOSkipDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KIO__SkipDialog_QBaseSharedPainter(const KIO__SkipDialog* self) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_SharedPainter_IsBase(true);
        return vkioskipdialog->sharedPainter();
    } else {
        return ((VirtualKIOSkipDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnSharedPainter(const KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_SharedPainter_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_InputMethodEvent(KIO__SkipDialog* self, QInputMethodEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKIOSkipDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseInputMethodEvent(KIO__SkipDialog* self, QInputMethodEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_InputMethodEvent_IsBase(true);
        vkioskipdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKIOSkipDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnInputMethodEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KIO__SkipDialog_InputMethodQuery(const KIO__SkipDialog* self, int param1) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return new QVariant(vkioskipdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKIOSkipDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KIO__SkipDialog_QBaseInputMethodQuery(const KIO__SkipDialog* self, int param1) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkioskipdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKIOSkipDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnInputMethodQuery(const KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__SkipDialog_FocusNextPrevChild(KIO__SkipDialog* self, bool next) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return vkioskipdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKIOSkipDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KIO__SkipDialog_QBaseFocusNextPrevChild(KIO__SkipDialog* self, bool next) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_FocusNextPrevChild_IsBase(true);
        return vkioskipdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKIOSkipDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnFocusNextPrevChild(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_TimerEvent(KIO__SkipDialog* self, QTimerEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->timerEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseTimerEvent(KIO__SkipDialog* self, QTimerEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_TimerEvent_IsBase(true);
        vkioskipdialog->timerEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnTimerEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_TimerEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_ChildEvent(KIO__SkipDialog* self, QChildEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->childEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseChildEvent(KIO__SkipDialog* self, QChildEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_ChildEvent_IsBase(true);
        vkioskipdialog->childEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnChildEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_ChildEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_CustomEvent(KIO__SkipDialog* self, QEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->customEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseCustomEvent(KIO__SkipDialog* self, QEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_CustomEvent_IsBase(true);
        vkioskipdialog->customEvent(event);
    } else {
        ((VirtualKIOSkipDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnCustomEvent(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_CustomEvent_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_ConnectNotify(KIO__SkipDialog* self, const QMetaMethod* signal) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->connectNotify(*signal);
    } else {
        ((VirtualKIOSkipDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseConnectNotify(KIO__SkipDialog* self, const QMetaMethod* signal) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_ConnectNotify_IsBase(true);
        vkioskipdialog->connectNotify(*signal);
    } else {
        ((VirtualKIOSkipDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnConnectNotify(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_DisconnectNotify(KIO__SkipDialog* self, const QMetaMethod* signal) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKIOSkipDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseDisconnectNotify(KIO__SkipDialog* self, const QMetaMethod* signal) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_DisconnectNotify_IsBase(true);
        vkioskipdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKIOSkipDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnDisconnectNotify(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_AdjustPosition(KIO__SkipDialog* self, QWidget* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->adjustPosition(param1);
    } else {
        ((VirtualKIOSkipDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseAdjustPosition(KIO__SkipDialog* self, QWidget* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_AdjustPosition_IsBase(true);
        vkioskipdialog->adjustPosition(param1);
    } else {
        ((VirtualKIOSkipDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnAdjustPosition(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_UpdateMicroFocus(KIO__SkipDialog* self) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->updateMicroFocus();
    } else {
        ((VirtualKIOSkipDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseUpdateMicroFocus(KIO__SkipDialog* self) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_UpdateMicroFocus_IsBase(true);
        vkioskipdialog->updateMicroFocus();
    } else {
        ((VirtualKIOSkipDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnUpdateMicroFocus(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_Create(KIO__SkipDialog* self) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->create();
    } else {
        ((VirtualKIOSkipDialog*)self)->create();
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseCreate(KIO__SkipDialog* self) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Create_IsBase(true);
        vkioskipdialog->create();
    } else {
        ((VirtualKIOSkipDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnCreate(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Create_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__SkipDialog_Destroy(KIO__SkipDialog* self) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->destroy();
    } else {
        ((VirtualKIOSkipDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KIO__SkipDialog_QBaseDestroy(KIO__SkipDialog* self) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Destroy_IsBase(true);
        vkioskipdialog->destroy();
    } else {
        ((VirtualKIOSkipDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnDestroy(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Destroy_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__SkipDialog_FocusNextChild(KIO__SkipDialog* self) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return vkioskipdialog->focusNextChild();
    } else {
        return ((VirtualKIOSkipDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KIO__SkipDialog_QBaseFocusNextChild(KIO__SkipDialog* self) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_FocusNextChild_IsBase(true);
        return vkioskipdialog->focusNextChild();
    } else {
        return ((VirtualKIOSkipDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnFocusNextChild(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__SkipDialog_FocusPreviousChild(KIO__SkipDialog* self) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return vkioskipdialog->focusPreviousChild();
    } else {
        return ((VirtualKIOSkipDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KIO__SkipDialog_QBaseFocusPreviousChild(KIO__SkipDialog* self) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_FocusPreviousChild_IsBase(true);
        return vkioskipdialog->focusPreviousChild();
    } else {
        return ((VirtualKIOSkipDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnFocusPreviousChild(KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIO__SkipDialog_Sender(const KIO__SkipDialog* self) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return vkioskipdialog->sender();
    } else {
        return ((VirtualKIOSkipDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIO__SkipDialog_QBaseSender(const KIO__SkipDialog* self) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Sender_IsBase(true);
        return vkioskipdialog->sender();
    } else {
        return ((VirtualKIOSkipDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnSender(const KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Sender_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__SkipDialog_SenderSignalIndex(const KIO__SkipDialog* self) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return vkioskipdialog->senderSignalIndex();
    } else {
        return ((VirtualKIOSkipDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIO__SkipDialog_QBaseSenderSignalIndex(const KIO__SkipDialog* self) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_SenderSignalIndex_IsBase(true);
        return vkioskipdialog->senderSignalIndex();
    } else {
        return ((VirtualKIOSkipDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnSenderSignalIndex(const KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__SkipDialog_Receivers(const KIO__SkipDialog* self, const char* signal) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return vkioskipdialog->receivers(signal);
    } else {
        return ((VirtualKIOSkipDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIO__SkipDialog_QBaseReceivers(const KIO__SkipDialog* self, const char* signal) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Receivers_IsBase(true);
        return vkioskipdialog->receivers(signal);
    } else {
        return ((VirtualKIOSkipDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnReceivers(const KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_Receivers_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__SkipDialog_IsSignalConnected(const KIO__SkipDialog* self, const QMetaMethod* signal) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return vkioskipdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOSkipDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIO__SkipDialog_QBaseIsSignalConnected(const KIO__SkipDialog* self, const QMetaMethod* signal) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_IsSignalConnected_IsBase(true);
        return vkioskipdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOSkipDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnIsSignalConnected(const KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KIO__SkipDialog_GetDecodedMetricF(const KIO__SkipDialog* self, int metricA, int metricB) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        return vkioskipdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKIOSkipDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KIO__SkipDialog_QBaseGetDecodedMetricF(const KIO__SkipDialog* self, int metricA, int metricB) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_GetDecodedMetricF_IsBase(true);
        return vkioskipdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKIOSkipDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnGetDecodedMetricF(const KIO__SkipDialog* self, intptr_t slot) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog && vkioskipdialog->isVirtualKIOSkipDialog) {
        vkioskipdialog->setKIO__SkipDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KIO__SkipDialog_Delete(KIO__SkipDialog* self) {
    delete self;
}
