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
#include <QPageSetupDialog>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QPrinter>
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
#include <qpagesetupdialog.h>
#include "libqpagesetupdialog.h"
#include "libqpagesetupdialog.hxx"

QPageSetupDialog* QPageSetupDialog_new(QWidget* parent) {
    return new VirtualQPageSetupDialog(parent);
}

QPageSetupDialog* QPageSetupDialog_new2(QPrinter* printer) {
    return new VirtualQPageSetupDialog(printer);
}

QPageSetupDialog* QPageSetupDialog_new3() {
    return new VirtualQPageSetupDialog();
}

QPageSetupDialog* QPageSetupDialog_new4(QPrinter* printer, QWidget* parent) {
    return new VirtualQPageSetupDialog(printer, parent);
}

QMetaObject* QPageSetupDialog_MetaObject(const QPageSetupDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPageSetupDialog_Metacast(QPageSetupDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPageSetupDialog_Metacall(QPageSetupDialog* self, int param1, int param2, void** param3) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPageSetupDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPageSetupDialog_OnMetacall(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Metacall_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPageSetupDialog_QBaseMetacall(QPageSetupDialog* self, int param1, int param2, void** param3) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Metacall_IsBase(true);
        return vqpagesetupdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPageSetupDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPageSetupDialog_Tr(const char* s) {
    QString _ret = QPageSetupDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QPrinter* QPageSetupDialog_Printer(QPageSetupDialog* self) {
    return self->printer();
}

libqt_string QPageSetupDialog_Tr2(const char* s, const char* c) {
    QString _ret = QPageSetupDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPageSetupDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPageSetupDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QPageSetupDialog_Exec(QPageSetupDialog* self) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return vqpagesetupdialog->exec();
    } else {
        return self->QPageSetupDialog::exec();
    }
}

// Base class handler implementation
int QPageSetupDialog_QBaseExec(QPageSetupDialog* self) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Exec_IsBase(true);
        return vqpagesetupdialog->exec();
    } else {
        return self->QPageSetupDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnExec(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Exec_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_Done(QPageSetupDialog* self, int result) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->done(static_cast<int>(result));
    } else {
        self->QPageSetupDialog::done(static_cast<int>(result));
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseDone(QPageSetupDialog* self, int result) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Done_IsBase(true);
        vqpagesetupdialog->done(static_cast<int>(result));
    } else {
        self->QPageSetupDialog::done(static_cast<int>(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnDone(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Done_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_SetVisible(QPageSetupDialog* self, bool visible) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setVisible(visible);
    } else {
        self->QPageSetupDialog::setVisible(visible);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseSetVisible(QPageSetupDialog* self, bool visible) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_SetVisible_IsBase(true);
        vqpagesetupdialog->setVisible(visible);
    } else {
        self->QPageSetupDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnSetVisible(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_SetVisible_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPageSetupDialog_SizeHint(const QPageSetupDialog* self) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return new QSize(vqpagesetupdialog->sizeHint());
    } else {
        return new QSize(((VirtualQPageSetupDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QPageSetupDialog_QBaseSizeHint(const QPageSetupDialog* self) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_SizeHint_IsBase(true);
        return new QSize(vqpagesetupdialog->sizeHint());
    } else {
        return new QSize(((VirtualQPageSetupDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnSizeHint(const QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_SizeHint_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPageSetupDialog_MinimumSizeHint(const QPageSetupDialog* self) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return new QSize(vqpagesetupdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualQPageSetupDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QPageSetupDialog_QBaseMinimumSizeHint(const QPageSetupDialog* self) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vqpagesetupdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualQPageSetupDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnMinimumSizeHint(const QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_Open(QPageSetupDialog* self) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->open();
    } else {
        self->QPageSetupDialog::open();
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseOpen(QPageSetupDialog* self) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Open_IsBase(true);
        vqpagesetupdialog->open();
    } else {
        self->QPageSetupDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnOpen(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Open_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_Accept(QPageSetupDialog* self) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->accept();
    } else {
        self->QPageSetupDialog::accept();
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseAccept(QPageSetupDialog* self) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Accept_IsBase(true);
        vqpagesetupdialog->accept();
    } else {
        self->QPageSetupDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnAccept(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Accept_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_Reject(QPageSetupDialog* self) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->reject();
    } else {
        self->QPageSetupDialog::reject();
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseReject(QPageSetupDialog* self) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Reject_IsBase(true);
        vqpagesetupdialog->reject();
    } else {
        self->QPageSetupDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnReject(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Reject_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_KeyPressEvent(QPageSetupDialog* self, QKeyEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->keyPressEvent(param1);
    } else {
        ((VirtualQPageSetupDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseKeyPressEvent(QPageSetupDialog* self, QKeyEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_KeyPressEvent_IsBase(true);
        vqpagesetupdialog->keyPressEvent(param1);
    } else {
        ((VirtualQPageSetupDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnKeyPressEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_CloseEvent(QPageSetupDialog* self, QCloseEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->closeEvent(param1);
    } else {
        ((VirtualQPageSetupDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseCloseEvent(QPageSetupDialog* self, QCloseEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_CloseEvent_IsBase(true);
        vqpagesetupdialog->closeEvent(param1);
    } else {
        ((VirtualQPageSetupDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnCloseEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_CloseEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_ShowEvent(QPageSetupDialog* self, QShowEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->showEvent(param1);
    } else {
        ((VirtualQPageSetupDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseShowEvent(QPageSetupDialog* self, QShowEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_ShowEvent_IsBase(true);
        vqpagesetupdialog->showEvent(param1);
    } else {
        ((VirtualQPageSetupDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnShowEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_ShowEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_ResizeEvent(QPageSetupDialog* self, QResizeEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->resizeEvent(param1);
    } else {
        ((VirtualQPageSetupDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseResizeEvent(QPageSetupDialog* self, QResizeEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_ResizeEvent_IsBase(true);
        vqpagesetupdialog->resizeEvent(param1);
    } else {
        ((VirtualQPageSetupDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnResizeEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_ResizeEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_ContextMenuEvent(QPageSetupDialog* self, QContextMenuEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->contextMenuEvent(param1);
    } else {
        ((VirtualQPageSetupDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseContextMenuEvent(QPageSetupDialog* self, QContextMenuEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_ContextMenuEvent_IsBase(true);
        vqpagesetupdialog->contextMenuEvent(param1);
    } else {
        ((VirtualQPageSetupDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnContextMenuEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPageSetupDialog_EventFilter(QPageSetupDialog* self, QObject* param1, QEvent* param2) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return vqpagesetupdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualQPageSetupDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QPageSetupDialog_QBaseEventFilter(QPageSetupDialog* self, QObject* param1, QEvent* param2) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_EventFilter_IsBase(true);
        return vqpagesetupdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualQPageSetupDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnEventFilter(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_EventFilter_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int QPageSetupDialog_DevType(const QPageSetupDialog* self) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return vqpagesetupdialog->devType();
    } else {
        return self->QPageSetupDialog::devType();
    }
}

// Base class handler implementation
int QPageSetupDialog_QBaseDevType(const QPageSetupDialog* self) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_DevType_IsBase(true);
        return vqpagesetupdialog->devType();
    } else {
        return self->QPageSetupDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnDevType(const QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_DevType_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int QPageSetupDialog_HeightForWidth(const QPageSetupDialog* self, int param1) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return vqpagesetupdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QPageSetupDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QPageSetupDialog_QBaseHeightForWidth(const QPageSetupDialog* self, int param1) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_HeightForWidth_IsBase(true);
        return vqpagesetupdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QPageSetupDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnHeightForWidth(const QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_HeightForWidth_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPageSetupDialog_HasHeightForWidth(const QPageSetupDialog* self) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return vqpagesetupdialog->hasHeightForWidth();
    } else {
        return self->QPageSetupDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QPageSetupDialog_QBaseHasHeightForWidth(const QPageSetupDialog* self) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_HasHeightForWidth_IsBase(true);
        return vqpagesetupdialog->hasHeightForWidth();
    } else {
        return self->QPageSetupDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnHasHeightForWidth(const QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QPageSetupDialog_PaintEngine(const QPageSetupDialog* self) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return vqpagesetupdialog->paintEngine();
    } else {
        return self->QPageSetupDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QPageSetupDialog_QBasePaintEngine(const QPageSetupDialog* self) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_PaintEngine_IsBase(true);
        return vqpagesetupdialog->paintEngine();
    } else {
        return self->QPageSetupDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnPaintEngine(const QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_PaintEngine_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPageSetupDialog_Event(QPageSetupDialog* self, QEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return vqpagesetupdialog->event(event);
    } else {
        return ((VirtualQPageSetupDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool QPageSetupDialog_QBaseEvent(QPageSetupDialog* self, QEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Event_IsBase(true);
        return vqpagesetupdialog->event(event);
    } else {
        return ((VirtualQPageSetupDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Event_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_MousePressEvent(QPageSetupDialog* self, QMouseEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->mousePressEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseMousePressEvent(QPageSetupDialog* self, QMouseEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_MousePressEvent_IsBase(true);
        vqpagesetupdialog->mousePressEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnMousePressEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_MousePressEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_MouseReleaseEvent(QPageSetupDialog* self, QMouseEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseMouseReleaseEvent(QPageSetupDialog* self, QMouseEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_MouseReleaseEvent_IsBase(true);
        vqpagesetupdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnMouseReleaseEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_MouseDoubleClickEvent(QPageSetupDialog* self, QMouseEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseMouseDoubleClickEvent(QPageSetupDialog* self, QMouseEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_MouseDoubleClickEvent_IsBase(true);
        vqpagesetupdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnMouseDoubleClickEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_MouseMoveEvent(QPageSetupDialog* self, QMouseEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->mouseMoveEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseMouseMoveEvent(QPageSetupDialog* self, QMouseEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_MouseMoveEvent_IsBase(true);
        vqpagesetupdialog->mouseMoveEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnMouseMoveEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_WheelEvent(QPageSetupDialog* self, QWheelEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->wheelEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseWheelEvent(QPageSetupDialog* self, QWheelEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_WheelEvent_IsBase(true);
        vqpagesetupdialog->wheelEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnWheelEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_WheelEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_KeyReleaseEvent(QPageSetupDialog* self, QKeyEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->keyReleaseEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseKeyReleaseEvent(QPageSetupDialog* self, QKeyEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_KeyReleaseEvent_IsBase(true);
        vqpagesetupdialog->keyReleaseEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnKeyReleaseEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_FocusInEvent(QPageSetupDialog* self, QFocusEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->focusInEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseFocusInEvent(QPageSetupDialog* self, QFocusEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_FocusInEvent_IsBase(true);
        vqpagesetupdialog->focusInEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnFocusInEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_FocusInEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_FocusOutEvent(QPageSetupDialog* self, QFocusEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->focusOutEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseFocusOutEvent(QPageSetupDialog* self, QFocusEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_FocusOutEvent_IsBase(true);
        vqpagesetupdialog->focusOutEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnFocusOutEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_EnterEvent(QPageSetupDialog* self, QEnterEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->enterEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseEnterEvent(QPageSetupDialog* self, QEnterEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_EnterEvent_IsBase(true);
        vqpagesetupdialog->enterEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnEnterEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_EnterEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_LeaveEvent(QPageSetupDialog* self, QEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->leaveEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseLeaveEvent(QPageSetupDialog* self, QEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_LeaveEvent_IsBase(true);
        vqpagesetupdialog->leaveEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnLeaveEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_LeaveEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_PaintEvent(QPageSetupDialog* self, QPaintEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->paintEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBasePaintEvent(QPageSetupDialog* self, QPaintEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_PaintEvent_IsBase(true);
        vqpagesetupdialog->paintEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnPaintEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_PaintEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_MoveEvent(QPageSetupDialog* self, QMoveEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->moveEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseMoveEvent(QPageSetupDialog* self, QMoveEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_MoveEvent_IsBase(true);
        vqpagesetupdialog->moveEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnMoveEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_MoveEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_TabletEvent(QPageSetupDialog* self, QTabletEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->tabletEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseTabletEvent(QPageSetupDialog* self, QTabletEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_TabletEvent_IsBase(true);
        vqpagesetupdialog->tabletEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnTabletEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_TabletEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_ActionEvent(QPageSetupDialog* self, QActionEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->actionEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseActionEvent(QPageSetupDialog* self, QActionEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_ActionEvent_IsBase(true);
        vqpagesetupdialog->actionEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnActionEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_ActionEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_DragEnterEvent(QPageSetupDialog* self, QDragEnterEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->dragEnterEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseDragEnterEvent(QPageSetupDialog* self, QDragEnterEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_DragEnterEvent_IsBase(true);
        vqpagesetupdialog->dragEnterEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnDragEnterEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_DragMoveEvent(QPageSetupDialog* self, QDragMoveEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->dragMoveEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseDragMoveEvent(QPageSetupDialog* self, QDragMoveEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_DragMoveEvent_IsBase(true);
        vqpagesetupdialog->dragMoveEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnDragMoveEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_DragLeaveEvent(QPageSetupDialog* self, QDragLeaveEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->dragLeaveEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseDragLeaveEvent(QPageSetupDialog* self, QDragLeaveEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_DragLeaveEvent_IsBase(true);
        vqpagesetupdialog->dragLeaveEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnDragLeaveEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_DropEvent(QPageSetupDialog* self, QDropEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->dropEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseDropEvent(QPageSetupDialog* self, QDropEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_DropEvent_IsBase(true);
        vqpagesetupdialog->dropEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnDropEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_DropEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_HideEvent(QPageSetupDialog* self, QHideEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->hideEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseHideEvent(QPageSetupDialog* self, QHideEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_HideEvent_IsBase(true);
        vqpagesetupdialog->hideEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnHideEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_HideEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPageSetupDialog_NativeEvent(QPageSetupDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return vqpagesetupdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQPageSetupDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QPageSetupDialog_QBaseNativeEvent(QPageSetupDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_NativeEvent_IsBase(true);
        return vqpagesetupdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQPageSetupDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnNativeEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_NativeEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_ChangeEvent(QPageSetupDialog* self, QEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->changeEvent(param1);
    } else {
        ((VirtualQPageSetupDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseChangeEvent(QPageSetupDialog* self, QEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_ChangeEvent_IsBase(true);
        vqpagesetupdialog->changeEvent(param1);
    } else {
        ((VirtualQPageSetupDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnChangeEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_ChangeEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QPageSetupDialog_Metric(const QPageSetupDialog* self, int param1) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return vqpagesetupdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQPageSetupDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QPageSetupDialog_QBaseMetric(const QPageSetupDialog* self, int param1) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Metric_IsBase(true);
        return vqpagesetupdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQPageSetupDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnMetric(const QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Metric_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_InitPainter(const QPageSetupDialog* self, QPainter* painter) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->initPainter(painter);
    } else {
        ((VirtualQPageSetupDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseInitPainter(const QPageSetupDialog* self, QPainter* painter) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_InitPainter_IsBase(true);
        vqpagesetupdialog->initPainter(painter);
    } else {
        ((VirtualQPageSetupDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnInitPainter(const QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_InitPainter_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QPageSetupDialog_Redirected(const QPageSetupDialog* self, QPoint* offset) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return vqpagesetupdialog->redirected(offset);
    } else {
        return ((VirtualQPageSetupDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QPageSetupDialog_QBaseRedirected(const QPageSetupDialog* self, QPoint* offset) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Redirected_IsBase(true);
        return vqpagesetupdialog->redirected(offset);
    } else {
        return ((VirtualQPageSetupDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnRedirected(const QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Redirected_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QPageSetupDialog_SharedPainter(const QPageSetupDialog* self) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return vqpagesetupdialog->sharedPainter();
    } else {
        return ((VirtualQPageSetupDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QPageSetupDialog_QBaseSharedPainter(const QPageSetupDialog* self) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_SharedPainter_IsBase(true);
        return vqpagesetupdialog->sharedPainter();
    } else {
        return ((VirtualQPageSetupDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnSharedPainter(const QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_SharedPainter_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_InputMethodEvent(QPageSetupDialog* self, QInputMethodEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->inputMethodEvent(param1);
    } else {
        ((VirtualQPageSetupDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseInputMethodEvent(QPageSetupDialog* self, QInputMethodEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_InputMethodEvent_IsBase(true);
        vqpagesetupdialog->inputMethodEvent(param1);
    } else {
        ((VirtualQPageSetupDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnInputMethodEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPageSetupDialog_InputMethodQuery(const QPageSetupDialog* self, int param1) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return new QVariant(vqpagesetupdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQPageSetupDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QPageSetupDialog_QBaseInputMethodQuery(const QPageSetupDialog* self, int param1) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vqpagesetupdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQPageSetupDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnInputMethodQuery(const QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPageSetupDialog_FocusNextPrevChild(QPageSetupDialog* self, bool next) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return vqpagesetupdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualQPageSetupDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QPageSetupDialog_QBaseFocusNextPrevChild(QPageSetupDialog* self, bool next) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_FocusNextPrevChild_IsBase(true);
        return vqpagesetupdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualQPageSetupDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnFocusNextPrevChild(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_TimerEvent(QPageSetupDialog* self, QTimerEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->timerEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseTimerEvent(QPageSetupDialog* self, QTimerEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_TimerEvent_IsBase(true);
        vqpagesetupdialog->timerEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnTimerEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_TimerEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_ChildEvent(QPageSetupDialog* self, QChildEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->childEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseChildEvent(QPageSetupDialog* self, QChildEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_ChildEvent_IsBase(true);
        vqpagesetupdialog->childEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnChildEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_ChildEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_CustomEvent(QPageSetupDialog* self, QEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->customEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseCustomEvent(QPageSetupDialog* self, QEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_CustomEvent_IsBase(true);
        vqpagesetupdialog->customEvent(event);
    } else {
        ((VirtualQPageSetupDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnCustomEvent(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_CustomEvent_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_ConnectNotify(QPageSetupDialog* self, const QMetaMethod* signal) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->connectNotify(*signal);
    } else {
        ((VirtualQPageSetupDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseConnectNotify(QPageSetupDialog* self, const QMetaMethod* signal) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_ConnectNotify_IsBase(true);
        vqpagesetupdialog->connectNotify(*signal);
    } else {
        ((VirtualQPageSetupDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnConnectNotify(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_ConnectNotify_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_DisconnectNotify(QPageSetupDialog* self, const QMetaMethod* signal) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->disconnectNotify(*signal);
    } else {
        ((VirtualQPageSetupDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseDisconnectNotify(QPageSetupDialog* self, const QMetaMethod* signal) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_DisconnectNotify_IsBase(true);
        vqpagesetupdialog->disconnectNotify(*signal);
    } else {
        ((VirtualQPageSetupDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnDisconnectNotify(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_AdjustPosition(QPageSetupDialog* self, QWidget* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->adjustPosition(param1);
    } else {
        ((VirtualQPageSetupDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseAdjustPosition(QPageSetupDialog* self, QWidget* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_AdjustPosition_IsBase(true);
        vqpagesetupdialog->adjustPosition(param1);
    } else {
        ((VirtualQPageSetupDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnAdjustPosition(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_AdjustPosition_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_UpdateMicroFocus(QPageSetupDialog* self) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->updateMicroFocus();
    } else {
        ((VirtualQPageSetupDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseUpdateMicroFocus(QPageSetupDialog* self) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_UpdateMicroFocus_IsBase(true);
        vqpagesetupdialog->updateMicroFocus();
    } else {
        ((VirtualQPageSetupDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnUpdateMicroFocus(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_Create(QPageSetupDialog* self) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->create();
    } else {
        ((VirtualQPageSetupDialog*)self)->create();
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseCreate(QPageSetupDialog* self) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Create_IsBase(true);
        vqpagesetupdialog->create();
    } else {
        ((VirtualQPageSetupDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnCreate(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Create_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QPageSetupDialog_Destroy(QPageSetupDialog* self) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->destroy();
    } else {
        ((VirtualQPageSetupDialog*)self)->destroy();
    }
}

// Base class handler implementation
void QPageSetupDialog_QBaseDestroy(QPageSetupDialog* self) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Destroy_IsBase(true);
        vqpagesetupdialog->destroy();
    } else {
        ((VirtualQPageSetupDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnDestroy(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Destroy_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPageSetupDialog_FocusNextChild(QPageSetupDialog* self) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return vqpagesetupdialog->focusNextChild();
    } else {
        return ((VirtualQPageSetupDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QPageSetupDialog_QBaseFocusNextChild(QPageSetupDialog* self) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_FocusNextChild_IsBase(true);
        return vqpagesetupdialog->focusNextChild();
    } else {
        return ((VirtualQPageSetupDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnFocusNextChild(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_FocusNextChild_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPageSetupDialog_FocusPreviousChild(QPageSetupDialog* self) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return vqpagesetupdialog->focusPreviousChild();
    } else {
        return ((VirtualQPageSetupDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QPageSetupDialog_QBaseFocusPreviousChild(QPageSetupDialog* self) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_FocusPreviousChild_IsBase(true);
        return vqpagesetupdialog->focusPreviousChild();
    } else {
        return ((VirtualQPageSetupDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnFocusPreviousChild(QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPageSetupDialog_Sender(const QPageSetupDialog* self) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return vqpagesetupdialog->sender();
    } else {
        return ((VirtualQPageSetupDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPageSetupDialog_QBaseSender(const QPageSetupDialog* self) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Sender_IsBase(true);
        return vqpagesetupdialog->sender();
    } else {
        return ((VirtualQPageSetupDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnSender(const QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Sender_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPageSetupDialog_SenderSignalIndex(const QPageSetupDialog* self) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return vqpagesetupdialog->senderSignalIndex();
    } else {
        return ((VirtualQPageSetupDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPageSetupDialog_QBaseSenderSignalIndex(const QPageSetupDialog* self) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_SenderSignalIndex_IsBase(true);
        return vqpagesetupdialog->senderSignalIndex();
    } else {
        return ((VirtualQPageSetupDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnSenderSignalIndex(const QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPageSetupDialog_Receivers(const QPageSetupDialog* self, const char* signal) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return vqpagesetupdialog->receivers(signal);
    } else {
        return ((VirtualQPageSetupDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPageSetupDialog_QBaseReceivers(const QPageSetupDialog* self, const char* signal) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Receivers_IsBase(true);
        return vqpagesetupdialog->receivers(signal);
    } else {
        return ((VirtualQPageSetupDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnReceivers(const QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_Receivers_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPageSetupDialog_IsSignalConnected(const QPageSetupDialog* self, const QMetaMethod* signal) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        return vqpagesetupdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualQPageSetupDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPageSetupDialog_QBaseIsSignalConnected(const QPageSetupDialog* self, const QMetaMethod* signal) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_IsSignalConnected_IsBase(true);
        return vqpagesetupdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualQPageSetupDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnIsSignalConnected(const QPageSetupDialog* self, intptr_t slot) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog && vqpagesetupdialog->isVirtualQPageSetupDialog) {
        vqpagesetupdialog->setQPageSetupDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_IsSignalConnected_Callback>(slot));
    }
}

void QPageSetupDialog_Delete(QPageSetupDialog* self) {
    delete self;
}
