#include <KFileCustomDialog>
#include <KFileWidget>
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
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kfilecustomdialog.h>
#include "libkfilecustomdialog.h"
#include "libkfilecustomdialog.hxx"

KFileCustomDialog* KFileCustomDialog_new(QWidget* parent) {
    return new VirtualKFileCustomDialog(parent);
}

KFileCustomDialog* KFileCustomDialog_new2() {
    return new VirtualKFileCustomDialog();
}

KFileCustomDialog* KFileCustomDialog_new3(const QUrl* startDir) {
    return new VirtualKFileCustomDialog(*startDir);
}

KFileCustomDialog* KFileCustomDialog_new4(const QUrl* startDir, QWidget* parent) {
    return new VirtualKFileCustomDialog(*startDir, parent);
}

QMetaObject* KFileCustomDialog_MetaObject(const KFileCustomDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFileCustomDialog_Metacast(KFileCustomDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFileCustomDialog_Metacall(KFileCustomDialog* self, int param1, int param2, void** param3) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFileCustomDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KFileCustomDialog_Tr(const char* s) {
    QString _ret = KFileCustomDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFileCustomDialog_SetUrl(KFileCustomDialog* self, const QUrl* url) {
    self->setUrl(*url);
}

void KFileCustomDialog_SetCustomWidget(KFileCustomDialog* self, QWidget* widget) {
    self->setCustomWidget(widget);
}

KFileWidget* KFileCustomDialog_FileWidget(const KFileCustomDialog* self) {
    return self->fileWidget();
}

void KFileCustomDialog_SetOperationMode(KFileCustomDialog* self, int op) {
    self->setOperationMode(static_cast<KFileWidget::OperationMode>(op));
}

void KFileCustomDialog_Accept(KFileCustomDialog* self) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        self->accept();
    } else {
        ((VirtualKFileCustomDialog*)self)->accept();
    }
}

libqt_string KFileCustomDialog_Tr2(const char* s, const char* c) {
    QString _ret = KFileCustomDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFileCustomDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = KFileCustomDialog::tr(s, c, static_cast<int>(n));
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
int KFileCustomDialog_QBaseMetacall(KFileCustomDialog* self, int param1, int param2, void** param3) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Metacall_IsBase(true);
        return vkfilecustomdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KFileCustomDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnMetacall(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Metacall_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseAccept(KFileCustomDialog* self) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Accept_IsBase(true);
        vkfilecustomdialog->accept();
    } else {
        self->KFileCustomDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnAccept(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Accept_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_SetVisible(KFileCustomDialog* self, bool visible) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setVisible(visible);
    } else {
        self->KFileCustomDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseSetVisible(KFileCustomDialog* self, bool visible) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_SetVisible_IsBase(true);
        vkfilecustomdialog->setVisible(visible);
    } else {
        self->KFileCustomDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnSetVisible(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_SetVisible_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KFileCustomDialog_SizeHint(const KFileCustomDialog* self) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return new QSize(vkfilecustomdialog->sizeHint());
    } else {
        return new QSize(((VirtualKFileCustomDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KFileCustomDialog_QBaseSizeHint(const KFileCustomDialog* self) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_SizeHint_IsBase(true);
        return new QSize(vkfilecustomdialog->sizeHint());
    } else {
        return new QSize(((VirtualKFileCustomDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnSizeHint(const KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_SizeHint_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KFileCustomDialog_MinimumSizeHint(const KFileCustomDialog* self) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return new QSize(vkfilecustomdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKFileCustomDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KFileCustomDialog_QBaseMinimumSizeHint(const KFileCustomDialog* self) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkfilecustomdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKFileCustomDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnMinimumSizeHint(const KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_Open(KFileCustomDialog* self) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->open();
    } else {
        self->KFileCustomDialog::open();
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseOpen(KFileCustomDialog* self) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Open_IsBase(true);
        vkfilecustomdialog->open();
    } else {
        self->KFileCustomDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnOpen(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Open_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileCustomDialog_Exec(KFileCustomDialog* self) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return vkfilecustomdialog->exec();
    } else {
        return self->KFileCustomDialog::exec();
    }
}

// Base class handler implementation
int KFileCustomDialog_QBaseExec(KFileCustomDialog* self) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Exec_IsBase(true);
        return vkfilecustomdialog->exec();
    } else {
        return self->KFileCustomDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnExec(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Exec_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_Done(KFileCustomDialog* self, int param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->done(static_cast<int>(param1));
    } else {
        self->KFileCustomDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseDone(KFileCustomDialog* self, int param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Done_IsBase(true);
        vkfilecustomdialog->done(static_cast<int>(param1));
    } else {
        self->KFileCustomDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnDone(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Done_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_Reject(KFileCustomDialog* self) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->reject();
    } else {
        self->KFileCustomDialog::reject();
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseReject(KFileCustomDialog* self) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Reject_IsBase(true);
        vkfilecustomdialog->reject();
    } else {
        self->KFileCustomDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnReject(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Reject_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_KeyPressEvent(KFileCustomDialog* self, QKeyEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->keyPressEvent(param1);
    } else {
        ((VirtualKFileCustomDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseKeyPressEvent(KFileCustomDialog* self, QKeyEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_KeyPressEvent_IsBase(true);
        vkfilecustomdialog->keyPressEvent(param1);
    } else {
        ((VirtualKFileCustomDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnKeyPressEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_CloseEvent(KFileCustomDialog* self, QCloseEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->closeEvent(param1);
    } else {
        ((VirtualKFileCustomDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseCloseEvent(KFileCustomDialog* self, QCloseEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_CloseEvent_IsBase(true);
        vkfilecustomdialog->closeEvent(param1);
    } else {
        ((VirtualKFileCustomDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnCloseEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_CloseEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_ShowEvent(KFileCustomDialog* self, QShowEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->showEvent(param1);
    } else {
        ((VirtualKFileCustomDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseShowEvent(KFileCustomDialog* self, QShowEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_ShowEvent_IsBase(true);
        vkfilecustomdialog->showEvent(param1);
    } else {
        ((VirtualKFileCustomDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnShowEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_ShowEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_ResizeEvent(KFileCustomDialog* self, QResizeEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->resizeEvent(param1);
    } else {
        ((VirtualKFileCustomDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseResizeEvent(KFileCustomDialog* self, QResizeEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_ResizeEvent_IsBase(true);
        vkfilecustomdialog->resizeEvent(param1);
    } else {
        ((VirtualKFileCustomDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnResizeEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_ContextMenuEvent(KFileCustomDialog* self, QContextMenuEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKFileCustomDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseContextMenuEvent(KFileCustomDialog* self, QContextMenuEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_ContextMenuEvent_IsBase(true);
        vkfilecustomdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKFileCustomDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnContextMenuEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileCustomDialog_EventFilter(KFileCustomDialog* self, QObject* param1, QEvent* param2) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return vkfilecustomdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKFileCustomDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KFileCustomDialog_QBaseEventFilter(KFileCustomDialog* self, QObject* param1, QEvent* param2) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_EventFilter_IsBase(true);
        return vkfilecustomdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKFileCustomDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnEventFilter(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_EventFilter_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileCustomDialog_DevType(const KFileCustomDialog* self) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return vkfilecustomdialog->devType();
    } else {
        return self->KFileCustomDialog::devType();
    }
}

// Base class handler implementation
int KFileCustomDialog_QBaseDevType(const KFileCustomDialog* self) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_DevType_IsBase(true);
        return vkfilecustomdialog->devType();
    } else {
        return self->KFileCustomDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnDevType(const KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_DevType_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileCustomDialog_HeightForWidth(const KFileCustomDialog* self, int param1) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return vkfilecustomdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KFileCustomDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KFileCustomDialog_QBaseHeightForWidth(const KFileCustomDialog* self, int param1) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_HeightForWidth_IsBase(true);
        return vkfilecustomdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KFileCustomDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnHeightForWidth(const KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileCustomDialog_HasHeightForWidth(const KFileCustomDialog* self) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return vkfilecustomdialog->hasHeightForWidth();
    } else {
        return self->KFileCustomDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KFileCustomDialog_QBaseHasHeightForWidth(const KFileCustomDialog* self) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_HasHeightForWidth_IsBase(true);
        return vkfilecustomdialog->hasHeightForWidth();
    } else {
        return self->KFileCustomDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnHasHeightForWidth(const KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KFileCustomDialog_PaintEngine(const KFileCustomDialog* self) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return vkfilecustomdialog->paintEngine();
    } else {
        return self->KFileCustomDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KFileCustomDialog_QBasePaintEngine(const KFileCustomDialog* self) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_PaintEngine_IsBase(true);
        return vkfilecustomdialog->paintEngine();
    } else {
        return self->KFileCustomDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnPaintEngine(const KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_PaintEngine_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileCustomDialog_Event(KFileCustomDialog* self, QEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return vkfilecustomdialog->event(event);
    } else {
        return ((VirtualKFileCustomDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KFileCustomDialog_QBaseEvent(KFileCustomDialog* self, QEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Event_IsBase(true);
        return vkfilecustomdialog->event(event);
    } else {
        return ((VirtualKFileCustomDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Event_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_MousePressEvent(KFileCustomDialog* self, QMouseEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->mousePressEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseMousePressEvent(KFileCustomDialog* self, QMouseEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_MousePressEvent_IsBase(true);
        vkfilecustomdialog->mousePressEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnMousePressEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_MouseReleaseEvent(KFileCustomDialog* self, QMouseEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseMouseReleaseEvent(KFileCustomDialog* self, QMouseEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_MouseReleaseEvent_IsBase(true);
        vkfilecustomdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnMouseReleaseEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_MouseDoubleClickEvent(KFileCustomDialog* self, QMouseEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseMouseDoubleClickEvent(KFileCustomDialog* self, QMouseEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_MouseDoubleClickEvent_IsBase(true);
        vkfilecustomdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnMouseDoubleClickEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_MouseMoveEvent(KFileCustomDialog* self, QMouseEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseMouseMoveEvent(KFileCustomDialog* self, QMouseEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_MouseMoveEvent_IsBase(true);
        vkfilecustomdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnMouseMoveEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_WheelEvent(KFileCustomDialog* self, QWheelEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->wheelEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseWheelEvent(KFileCustomDialog* self, QWheelEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_WheelEvent_IsBase(true);
        vkfilecustomdialog->wheelEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnWheelEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_WheelEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_KeyReleaseEvent(KFileCustomDialog* self, QKeyEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseKeyReleaseEvent(KFileCustomDialog* self, QKeyEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_KeyReleaseEvent_IsBase(true);
        vkfilecustomdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnKeyReleaseEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_FocusInEvent(KFileCustomDialog* self, QFocusEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->focusInEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseFocusInEvent(KFileCustomDialog* self, QFocusEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_FocusInEvent_IsBase(true);
        vkfilecustomdialog->focusInEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnFocusInEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_FocusOutEvent(KFileCustomDialog* self, QFocusEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->focusOutEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseFocusOutEvent(KFileCustomDialog* self, QFocusEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_FocusOutEvent_IsBase(true);
        vkfilecustomdialog->focusOutEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnFocusOutEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_EnterEvent(KFileCustomDialog* self, QEnterEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->enterEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseEnterEvent(KFileCustomDialog* self, QEnterEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_EnterEvent_IsBase(true);
        vkfilecustomdialog->enterEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnEnterEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_EnterEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_LeaveEvent(KFileCustomDialog* self, QEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->leaveEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseLeaveEvent(KFileCustomDialog* self, QEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_LeaveEvent_IsBase(true);
        vkfilecustomdialog->leaveEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnLeaveEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_PaintEvent(KFileCustomDialog* self, QPaintEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->paintEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBasePaintEvent(KFileCustomDialog* self, QPaintEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_PaintEvent_IsBase(true);
        vkfilecustomdialog->paintEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnPaintEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_PaintEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_MoveEvent(KFileCustomDialog* self, QMoveEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->moveEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseMoveEvent(KFileCustomDialog* self, QMoveEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_MoveEvent_IsBase(true);
        vkfilecustomdialog->moveEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnMoveEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_MoveEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_TabletEvent(KFileCustomDialog* self, QTabletEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->tabletEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseTabletEvent(KFileCustomDialog* self, QTabletEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_TabletEvent_IsBase(true);
        vkfilecustomdialog->tabletEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnTabletEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_TabletEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_ActionEvent(KFileCustomDialog* self, QActionEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->actionEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseActionEvent(KFileCustomDialog* self, QActionEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_ActionEvent_IsBase(true);
        vkfilecustomdialog->actionEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnActionEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_ActionEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_DragEnterEvent(KFileCustomDialog* self, QDragEnterEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->dragEnterEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseDragEnterEvent(KFileCustomDialog* self, QDragEnterEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_DragEnterEvent_IsBase(true);
        vkfilecustomdialog->dragEnterEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnDragEnterEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_DragMoveEvent(KFileCustomDialog* self, QDragMoveEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->dragMoveEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseDragMoveEvent(KFileCustomDialog* self, QDragMoveEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_DragMoveEvent_IsBase(true);
        vkfilecustomdialog->dragMoveEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnDragMoveEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_DragLeaveEvent(KFileCustomDialog* self, QDragLeaveEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseDragLeaveEvent(KFileCustomDialog* self, QDragLeaveEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_DragLeaveEvent_IsBase(true);
        vkfilecustomdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnDragLeaveEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_DropEvent(KFileCustomDialog* self, QDropEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->dropEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseDropEvent(KFileCustomDialog* self, QDropEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_DropEvent_IsBase(true);
        vkfilecustomdialog->dropEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnDropEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_DropEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_HideEvent(KFileCustomDialog* self, QHideEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->hideEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseHideEvent(KFileCustomDialog* self, QHideEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_HideEvent_IsBase(true);
        vkfilecustomdialog->hideEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnHideEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_HideEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileCustomDialog_NativeEvent(KFileCustomDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return vkfilecustomdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKFileCustomDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KFileCustomDialog_QBaseNativeEvent(KFileCustomDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_NativeEvent_IsBase(true);
        return vkfilecustomdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKFileCustomDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnNativeEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_NativeEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_ChangeEvent(KFileCustomDialog* self, QEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->changeEvent(param1);
    } else {
        ((VirtualKFileCustomDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseChangeEvent(KFileCustomDialog* self, QEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_ChangeEvent_IsBase(true);
        vkfilecustomdialog->changeEvent(param1);
    } else {
        ((VirtualKFileCustomDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnChangeEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileCustomDialog_Metric(const KFileCustomDialog* self, int param1) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return vkfilecustomdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKFileCustomDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KFileCustomDialog_QBaseMetric(const KFileCustomDialog* self, int param1) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Metric_IsBase(true);
        return vkfilecustomdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKFileCustomDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnMetric(const KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Metric_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_InitPainter(const KFileCustomDialog* self, QPainter* painter) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->initPainter(painter);
    } else {
        ((VirtualKFileCustomDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseInitPainter(const KFileCustomDialog* self, QPainter* painter) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_InitPainter_IsBase(true);
        vkfilecustomdialog->initPainter(painter);
    } else {
        ((VirtualKFileCustomDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnInitPainter(const KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_InitPainter_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KFileCustomDialog_Redirected(const KFileCustomDialog* self, QPoint* offset) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return vkfilecustomdialog->redirected(offset);
    } else {
        return ((VirtualKFileCustomDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KFileCustomDialog_QBaseRedirected(const KFileCustomDialog* self, QPoint* offset) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Redirected_IsBase(true);
        return vkfilecustomdialog->redirected(offset);
    } else {
        return ((VirtualKFileCustomDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnRedirected(const KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Redirected_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KFileCustomDialog_SharedPainter(const KFileCustomDialog* self) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return vkfilecustomdialog->sharedPainter();
    } else {
        return ((VirtualKFileCustomDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KFileCustomDialog_QBaseSharedPainter(const KFileCustomDialog* self) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_SharedPainter_IsBase(true);
        return vkfilecustomdialog->sharedPainter();
    } else {
        return ((VirtualKFileCustomDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnSharedPainter(const KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_SharedPainter_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_InputMethodEvent(KFileCustomDialog* self, QInputMethodEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKFileCustomDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseInputMethodEvent(KFileCustomDialog* self, QInputMethodEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_InputMethodEvent_IsBase(true);
        vkfilecustomdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKFileCustomDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnInputMethodEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KFileCustomDialog_InputMethodQuery(const KFileCustomDialog* self, int param1) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return new QVariant(vkfilecustomdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKFileCustomDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KFileCustomDialog_QBaseInputMethodQuery(const KFileCustomDialog* self, int param1) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkfilecustomdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKFileCustomDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnInputMethodQuery(const KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileCustomDialog_FocusNextPrevChild(KFileCustomDialog* self, bool next) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return vkfilecustomdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKFileCustomDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KFileCustomDialog_QBaseFocusNextPrevChild(KFileCustomDialog* self, bool next) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_FocusNextPrevChild_IsBase(true);
        return vkfilecustomdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKFileCustomDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnFocusNextPrevChild(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_TimerEvent(KFileCustomDialog* self, QTimerEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->timerEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseTimerEvent(KFileCustomDialog* self, QTimerEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_TimerEvent_IsBase(true);
        vkfilecustomdialog->timerEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnTimerEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_TimerEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_ChildEvent(KFileCustomDialog* self, QChildEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->childEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseChildEvent(KFileCustomDialog* self, QChildEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_ChildEvent_IsBase(true);
        vkfilecustomdialog->childEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnChildEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_ChildEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_CustomEvent(KFileCustomDialog* self, QEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->customEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseCustomEvent(KFileCustomDialog* self, QEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_CustomEvent_IsBase(true);
        vkfilecustomdialog->customEvent(event);
    } else {
        ((VirtualKFileCustomDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnCustomEvent(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_CustomEvent_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_ConnectNotify(KFileCustomDialog* self, const QMetaMethod* signal) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->connectNotify(*signal);
    } else {
        ((VirtualKFileCustomDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseConnectNotify(KFileCustomDialog* self, const QMetaMethod* signal) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_ConnectNotify_IsBase(true);
        vkfilecustomdialog->connectNotify(*signal);
    } else {
        ((VirtualKFileCustomDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnConnectNotify(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_DisconnectNotify(KFileCustomDialog* self, const QMetaMethod* signal) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKFileCustomDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseDisconnectNotify(KFileCustomDialog* self, const QMetaMethod* signal) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_DisconnectNotify_IsBase(true);
        vkfilecustomdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKFileCustomDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnDisconnectNotify(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_AdjustPosition(KFileCustomDialog* self, QWidget* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->adjustPosition(param1);
    } else {
        ((VirtualKFileCustomDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseAdjustPosition(KFileCustomDialog* self, QWidget* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_AdjustPosition_IsBase(true);
        vkfilecustomdialog->adjustPosition(param1);
    } else {
        ((VirtualKFileCustomDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnAdjustPosition(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_UpdateMicroFocus(KFileCustomDialog* self) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->updateMicroFocus();
    } else {
        ((VirtualKFileCustomDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseUpdateMicroFocus(KFileCustomDialog* self) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_UpdateMicroFocus_IsBase(true);
        vkfilecustomdialog->updateMicroFocus();
    } else {
        ((VirtualKFileCustomDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnUpdateMicroFocus(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_Create(KFileCustomDialog* self) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->create();
    } else {
        ((VirtualKFileCustomDialog*)self)->create();
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseCreate(KFileCustomDialog* self) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Create_IsBase(true);
        vkfilecustomdialog->create();
    } else {
        ((VirtualKFileCustomDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnCreate(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Create_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileCustomDialog_Destroy(KFileCustomDialog* self) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->destroy();
    } else {
        ((VirtualKFileCustomDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KFileCustomDialog_QBaseDestroy(KFileCustomDialog* self) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Destroy_IsBase(true);
        vkfilecustomdialog->destroy();
    } else {
        ((VirtualKFileCustomDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnDestroy(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Destroy_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileCustomDialog_FocusNextChild(KFileCustomDialog* self) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return vkfilecustomdialog->focusNextChild();
    } else {
        return ((VirtualKFileCustomDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KFileCustomDialog_QBaseFocusNextChild(KFileCustomDialog* self) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_FocusNextChild_IsBase(true);
        return vkfilecustomdialog->focusNextChild();
    } else {
        return ((VirtualKFileCustomDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnFocusNextChild(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileCustomDialog_FocusPreviousChild(KFileCustomDialog* self) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return vkfilecustomdialog->focusPreviousChild();
    } else {
        return ((VirtualKFileCustomDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KFileCustomDialog_QBaseFocusPreviousChild(KFileCustomDialog* self) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_FocusPreviousChild_IsBase(true);
        return vkfilecustomdialog->focusPreviousChild();
    } else {
        return ((VirtualKFileCustomDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnFocusPreviousChild(KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KFileCustomDialog_Sender(const KFileCustomDialog* self) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return vkfilecustomdialog->sender();
    } else {
        return ((VirtualKFileCustomDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KFileCustomDialog_QBaseSender(const KFileCustomDialog* self) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Sender_IsBase(true);
        return vkfilecustomdialog->sender();
    } else {
        return ((VirtualKFileCustomDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnSender(const KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Sender_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileCustomDialog_SenderSignalIndex(const KFileCustomDialog* self) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return vkfilecustomdialog->senderSignalIndex();
    } else {
        return ((VirtualKFileCustomDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KFileCustomDialog_QBaseSenderSignalIndex(const KFileCustomDialog* self) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_SenderSignalIndex_IsBase(true);
        return vkfilecustomdialog->senderSignalIndex();
    } else {
        return ((VirtualKFileCustomDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnSenderSignalIndex(const KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileCustomDialog_Receivers(const KFileCustomDialog* self, const char* signal) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return vkfilecustomdialog->receivers(signal);
    } else {
        return ((VirtualKFileCustomDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KFileCustomDialog_QBaseReceivers(const KFileCustomDialog* self, const char* signal) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Receivers_IsBase(true);
        return vkfilecustomdialog->receivers(signal);
    } else {
        return ((VirtualKFileCustomDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnReceivers(const KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_Receivers_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileCustomDialog_IsSignalConnected(const KFileCustomDialog* self, const QMetaMethod* signal) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return vkfilecustomdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKFileCustomDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KFileCustomDialog_QBaseIsSignalConnected(const KFileCustomDialog* self, const QMetaMethod* signal) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_IsSignalConnected_IsBase(true);
        return vkfilecustomdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKFileCustomDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnIsSignalConnected(const KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KFileCustomDialog_GetDecodedMetricF(const KFileCustomDialog* self, int metricA, int metricB) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        return vkfilecustomdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKFileCustomDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KFileCustomDialog_QBaseGetDecodedMetricF(const KFileCustomDialog* self, int metricA, int metricB) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_GetDecodedMetricF_IsBase(true);
        return vkfilecustomdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKFileCustomDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnGetDecodedMetricF(const KFileCustomDialog* self, intptr_t slot) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog && vkfilecustomdialog->isVirtualKFileCustomDialog) {
        vkfilecustomdialog->setKFileCustomDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KFileCustomDialog_Delete(KFileCustomDialog* self) {
    delete self;
}
