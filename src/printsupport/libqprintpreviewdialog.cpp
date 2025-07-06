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
#include <QPrintPreviewDialog>
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
#include <qprintpreviewdialog.h>
#include "libqprintpreviewdialog.h"
#include "libqprintpreviewdialog.hxx"

QPrintPreviewDialog* QPrintPreviewDialog_new(QWidget* parent) {
    return new VirtualQPrintPreviewDialog(parent);
}

QPrintPreviewDialog* QPrintPreviewDialog_new2() {
    return new VirtualQPrintPreviewDialog();
}

QPrintPreviewDialog* QPrintPreviewDialog_new3(QPrinter* printer) {
    return new VirtualQPrintPreviewDialog(printer);
}

QPrintPreviewDialog* QPrintPreviewDialog_new4(QWidget* parent, int flags) {
    return new VirtualQPrintPreviewDialog(parent, static_cast<Qt::WindowFlags>(flags));
}

QPrintPreviewDialog* QPrintPreviewDialog_new5(QPrinter* printer, QWidget* parent) {
    return new VirtualQPrintPreviewDialog(printer, parent);
}

QPrintPreviewDialog* QPrintPreviewDialog_new6(QPrinter* printer, QWidget* parent, int flags) {
    return new VirtualQPrintPreviewDialog(printer, parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QPrintPreviewDialog_MetaObject(const QPrintPreviewDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPrintPreviewDialog_Metacast(QPrintPreviewDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPrintPreviewDialog_Metacall(QPrintPreviewDialog* self, int param1, int param2, void** param3) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPrintPreviewDialog_OnMetacall(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Metacall_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPrintPreviewDialog_QBaseMetacall(QPrintPreviewDialog* self, int param1, int param2, void** param3) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Metacall_IsBase(true);
        return vqprintpreviewdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPrintPreviewDialog_Tr(const char* s) {
    QString _ret = QPrintPreviewDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QPrinter* QPrintPreviewDialog_Printer(QPrintPreviewDialog* self) {
    return self->printer();
}

void QPrintPreviewDialog_PaintRequested(QPrintPreviewDialog* self, QPrinter* printer) {
    self->paintRequested(printer);
}

void QPrintPreviewDialog_Connect_PaintRequested(QPrintPreviewDialog* self, intptr_t slot) {
    void (*slotFunc)(QPrintPreviewDialog*, QPrinter*) = reinterpret_cast<void (*)(QPrintPreviewDialog*, QPrinter*)>(slot);
    QPrintPreviewDialog::connect(self, &QPrintPreviewDialog::paintRequested, [self, slotFunc](QPrinter* printer) {
        QPrinter* sigval1 = printer;
        slotFunc(self, sigval1);
    });
}

libqt_string QPrintPreviewDialog_Tr2(const char* s, const char* c) {
    QString _ret = QPrintPreviewDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPrintPreviewDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPrintPreviewDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QPrintPreviewDialog_SetVisible(QPrintPreviewDialog* self, bool visible) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setVisible(visible);
    } else {
        self->QPrintPreviewDialog::setVisible(visible);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseSetVisible(QPrintPreviewDialog* self, bool visible) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_SetVisible_IsBase(true);
        vqprintpreviewdialog->setVisible(visible);
    } else {
        self->QPrintPreviewDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnSetVisible(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_SetVisible_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_Done(QPrintPreviewDialog* self, int result) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->done(static_cast<int>(result));
    } else {
        self->QPrintPreviewDialog::done(static_cast<int>(result));
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseDone(QPrintPreviewDialog* self, int result) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Done_IsBase(true);
        vqprintpreviewdialog->done(static_cast<int>(result));
    } else {
        self->QPrintPreviewDialog::done(static_cast<int>(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDone(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Done_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPrintPreviewDialog_SizeHint(const QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return new QSize(vqprintpreviewdialog->sizeHint());
    } else {
        return new QSize(((VirtualQPrintPreviewDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QPrintPreviewDialog_QBaseSizeHint(const QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_SizeHint_IsBase(true);
        return new QSize(vqprintpreviewdialog->sizeHint());
    } else {
        return new QSize(((VirtualQPrintPreviewDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnSizeHint(const QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_SizeHint_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPrintPreviewDialog_MinimumSizeHint(const QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return new QSize(vqprintpreviewdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualQPrintPreviewDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QPrintPreviewDialog_QBaseMinimumSizeHint(const QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vqprintpreviewdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualQPrintPreviewDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMinimumSizeHint(const QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_Open(QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->open();
    } else {
        self->QPrintPreviewDialog::open();
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseOpen(QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Open_IsBase(true);
        vqprintpreviewdialog->open();
    } else {
        self->QPrintPreviewDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnOpen(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Open_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintPreviewDialog_Exec(QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return vqprintpreviewdialog->exec();
    } else {
        return self->QPrintPreviewDialog::exec();
    }
}

// Base class handler implementation
int QPrintPreviewDialog_QBaseExec(QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Exec_IsBase(true);
        return vqprintpreviewdialog->exec();
    } else {
        return self->QPrintPreviewDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnExec(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Exec_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_Accept(QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->accept();
    } else {
        self->QPrintPreviewDialog::accept();
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseAccept(QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Accept_IsBase(true);
        vqprintpreviewdialog->accept();
    } else {
        self->QPrintPreviewDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnAccept(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Accept_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_Reject(QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->reject();
    } else {
        self->QPrintPreviewDialog::reject();
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseReject(QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Reject_IsBase(true);
        vqprintpreviewdialog->reject();
    } else {
        self->QPrintPreviewDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnReject(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Reject_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_KeyPressEvent(QPrintPreviewDialog* self, QKeyEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->keyPressEvent(param1);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseKeyPressEvent(QPrintPreviewDialog* self, QKeyEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_KeyPressEvent_IsBase(true);
        vqprintpreviewdialog->keyPressEvent(param1);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnKeyPressEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_CloseEvent(QPrintPreviewDialog* self, QCloseEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->closeEvent(param1);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseCloseEvent(QPrintPreviewDialog* self, QCloseEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_CloseEvent_IsBase(true);
        vqprintpreviewdialog->closeEvent(param1);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnCloseEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_CloseEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_ShowEvent(QPrintPreviewDialog* self, QShowEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->showEvent(param1);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseShowEvent(QPrintPreviewDialog* self, QShowEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ShowEvent_IsBase(true);
        vqprintpreviewdialog->showEvent(param1);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnShowEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ShowEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_ResizeEvent(QPrintPreviewDialog* self, QResizeEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->resizeEvent(param1);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseResizeEvent(QPrintPreviewDialog* self, QResizeEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ResizeEvent_IsBase(true);
        vqprintpreviewdialog->resizeEvent(param1);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnResizeEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ResizeEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_ContextMenuEvent(QPrintPreviewDialog* self, QContextMenuEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->contextMenuEvent(param1);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseContextMenuEvent(QPrintPreviewDialog* self, QContextMenuEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ContextMenuEvent_IsBase(true);
        vqprintpreviewdialog->contextMenuEvent(param1);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnContextMenuEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewDialog_EventFilter(QPrintPreviewDialog* self, QObject* param1, QEvent* param2) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return vqprintpreviewdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QPrintPreviewDialog_QBaseEventFilter(QPrintPreviewDialog* self, QObject* param1, QEvent* param2) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_EventFilter_IsBase(true);
        return vqprintpreviewdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnEventFilter(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_EventFilter_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintPreviewDialog_DevType(const QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return vqprintpreviewdialog->devType();
    } else {
        return self->QPrintPreviewDialog::devType();
    }
}

// Base class handler implementation
int QPrintPreviewDialog_QBaseDevType(const QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DevType_IsBase(true);
        return vqprintpreviewdialog->devType();
    } else {
        return self->QPrintPreviewDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDevType(const QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DevType_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintPreviewDialog_HeightForWidth(const QPrintPreviewDialog* self, int param1) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return vqprintpreviewdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QPrintPreviewDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QPrintPreviewDialog_QBaseHeightForWidth(const QPrintPreviewDialog* self, int param1) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_HeightForWidth_IsBase(true);
        return vqprintpreviewdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QPrintPreviewDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnHeightForWidth(const QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_HeightForWidth_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewDialog_HasHeightForWidth(const QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return vqprintpreviewdialog->hasHeightForWidth();
    } else {
        return self->QPrintPreviewDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QPrintPreviewDialog_QBaseHasHeightForWidth(const QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_HasHeightForWidth_IsBase(true);
        return vqprintpreviewdialog->hasHeightForWidth();
    } else {
        return self->QPrintPreviewDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnHasHeightForWidth(const QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QPrintPreviewDialog_PaintEngine(const QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return vqprintpreviewdialog->paintEngine();
    } else {
        return self->QPrintPreviewDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QPrintPreviewDialog_QBasePaintEngine(const QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_PaintEngine_IsBase(true);
        return vqprintpreviewdialog->paintEngine();
    } else {
        return self->QPrintPreviewDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnPaintEngine(const QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_PaintEngine_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewDialog_Event(QPrintPreviewDialog* self, QEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return vqprintpreviewdialog->event(event);
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool QPrintPreviewDialog_QBaseEvent(QPrintPreviewDialog* self, QEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Event_IsBase(true);
        return vqprintpreviewdialog->event(event);
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Event_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_MousePressEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->mousePressEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseMousePressEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MousePressEvent_IsBase(true);
        vqprintpreviewdialog->mousePressEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMousePressEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MousePressEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_MouseReleaseEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseMouseReleaseEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MouseReleaseEvent_IsBase(true);
        vqprintpreviewdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMouseReleaseEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_MouseDoubleClickEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseMouseDoubleClickEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MouseDoubleClickEvent_IsBase(true);
        vqprintpreviewdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMouseDoubleClickEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_MouseMoveEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->mouseMoveEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseMouseMoveEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MouseMoveEvent_IsBase(true);
        vqprintpreviewdialog->mouseMoveEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMouseMoveEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_WheelEvent(QPrintPreviewDialog* self, QWheelEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->wheelEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseWheelEvent(QPrintPreviewDialog* self, QWheelEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_WheelEvent_IsBase(true);
        vqprintpreviewdialog->wheelEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnWheelEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_WheelEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_KeyReleaseEvent(QPrintPreviewDialog* self, QKeyEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->keyReleaseEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseKeyReleaseEvent(QPrintPreviewDialog* self, QKeyEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_KeyReleaseEvent_IsBase(true);
        vqprintpreviewdialog->keyReleaseEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnKeyReleaseEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_FocusInEvent(QPrintPreviewDialog* self, QFocusEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->focusInEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseFocusInEvent(QPrintPreviewDialog* self, QFocusEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_FocusInEvent_IsBase(true);
        vqprintpreviewdialog->focusInEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnFocusInEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_FocusInEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_FocusOutEvent(QPrintPreviewDialog* self, QFocusEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->focusOutEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseFocusOutEvent(QPrintPreviewDialog* self, QFocusEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_FocusOutEvent_IsBase(true);
        vqprintpreviewdialog->focusOutEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnFocusOutEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_EnterEvent(QPrintPreviewDialog* self, QEnterEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->enterEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseEnterEvent(QPrintPreviewDialog* self, QEnterEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_EnterEvent_IsBase(true);
        vqprintpreviewdialog->enterEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnEnterEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_EnterEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_LeaveEvent(QPrintPreviewDialog* self, QEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->leaveEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseLeaveEvent(QPrintPreviewDialog* self, QEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_LeaveEvent_IsBase(true);
        vqprintpreviewdialog->leaveEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnLeaveEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_LeaveEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_PaintEvent(QPrintPreviewDialog* self, QPaintEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->paintEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBasePaintEvent(QPrintPreviewDialog* self, QPaintEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_PaintEvent_IsBase(true);
        vqprintpreviewdialog->paintEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnPaintEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_PaintEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_MoveEvent(QPrintPreviewDialog* self, QMoveEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->moveEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseMoveEvent(QPrintPreviewDialog* self, QMoveEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MoveEvent_IsBase(true);
        vqprintpreviewdialog->moveEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMoveEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MoveEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_TabletEvent(QPrintPreviewDialog* self, QTabletEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->tabletEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseTabletEvent(QPrintPreviewDialog* self, QTabletEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_TabletEvent_IsBase(true);
        vqprintpreviewdialog->tabletEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnTabletEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_TabletEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_ActionEvent(QPrintPreviewDialog* self, QActionEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->actionEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseActionEvent(QPrintPreviewDialog* self, QActionEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ActionEvent_IsBase(true);
        vqprintpreviewdialog->actionEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnActionEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ActionEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_DragEnterEvent(QPrintPreviewDialog* self, QDragEnterEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->dragEnterEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseDragEnterEvent(QPrintPreviewDialog* self, QDragEnterEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DragEnterEvent_IsBase(true);
        vqprintpreviewdialog->dragEnterEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDragEnterEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_DragMoveEvent(QPrintPreviewDialog* self, QDragMoveEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->dragMoveEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseDragMoveEvent(QPrintPreviewDialog* self, QDragMoveEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DragMoveEvent_IsBase(true);
        vqprintpreviewdialog->dragMoveEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDragMoveEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_DragLeaveEvent(QPrintPreviewDialog* self, QDragLeaveEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->dragLeaveEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseDragLeaveEvent(QPrintPreviewDialog* self, QDragLeaveEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DragLeaveEvent_IsBase(true);
        vqprintpreviewdialog->dragLeaveEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDragLeaveEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_DropEvent(QPrintPreviewDialog* self, QDropEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->dropEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseDropEvent(QPrintPreviewDialog* self, QDropEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DropEvent_IsBase(true);
        vqprintpreviewdialog->dropEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDropEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DropEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_HideEvent(QPrintPreviewDialog* self, QHideEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->hideEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseHideEvent(QPrintPreviewDialog* self, QHideEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_HideEvent_IsBase(true);
        vqprintpreviewdialog->hideEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnHideEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_HideEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewDialog_NativeEvent(QPrintPreviewDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return vqprintpreviewdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QPrintPreviewDialog_QBaseNativeEvent(QPrintPreviewDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_NativeEvent_IsBase(true);
        return vqprintpreviewdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnNativeEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_NativeEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_ChangeEvent(QPrintPreviewDialog* self, QEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->changeEvent(param1);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseChangeEvent(QPrintPreviewDialog* self, QEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ChangeEvent_IsBase(true);
        vqprintpreviewdialog->changeEvent(param1);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnChangeEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ChangeEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintPreviewDialog_Metric(const QPrintPreviewDialog* self, int param1) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return vqprintpreviewdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QPrintPreviewDialog_QBaseMetric(const QPrintPreviewDialog* self, int param1) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Metric_IsBase(true);
        return vqprintpreviewdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMetric(const QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Metric_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_InitPainter(const QPrintPreviewDialog* self, QPainter* painter) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->initPainter(painter);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseInitPainter(const QPrintPreviewDialog* self, QPainter* painter) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_InitPainter_IsBase(true);
        vqprintpreviewdialog->initPainter(painter);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnInitPainter(const QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_InitPainter_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QPrintPreviewDialog_Redirected(const QPrintPreviewDialog* self, QPoint* offset) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return vqprintpreviewdialog->redirected(offset);
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QPrintPreviewDialog_QBaseRedirected(const QPrintPreviewDialog* self, QPoint* offset) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Redirected_IsBase(true);
        return vqprintpreviewdialog->redirected(offset);
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnRedirected(const QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Redirected_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QPrintPreviewDialog_SharedPainter(const QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return vqprintpreviewdialog->sharedPainter();
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QPrintPreviewDialog_QBaseSharedPainter(const QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_SharedPainter_IsBase(true);
        return vqprintpreviewdialog->sharedPainter();
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnSharedPainter(const QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_SharedPainter_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_InputMethodEvent(QPrintPreviewDialog* self, QInputMethodEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->inputMethodEvent(param1);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseInputMethodEvent(QPrintPreviewDialog* self, QInputMethodEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_InputMethodEvent_IsBase(true);
        vqprintpreviewdialog->inputMethodEvent(param1);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnInputMethodEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPrintPreviewDialog_InputMethodQuery(const QPrintPreviewDialog* self, int param1) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return new QVariant(vqprintpreviewdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQPrintPreviewDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QPrintPreviewDialog_QBaseInputMethodQuery(const QPrintPreviewDialog* self, int param1) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vqprintpreviewdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQPrintPreviewDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnInputMethodQuery(const QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewDialog_FocusNextPrevChild(QPrintPreviewDialog* self, bool next) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return vqprintpreviewdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QPrintPreviewDialog_QBaseFocusNextPrevChild(QPrintPreviewDialog* self, bool next) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_FocusNextPrevChild_IsBase(true);
        return vqprintpreviewdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnFocusNextPrevChild(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_TimerEvent(QPrintPreviewDialog* self, QTimerEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->timerEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseTimerEvent(QPrintPreviewDialog* self, QTimerEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_TimerEvent_IsBase(true);
        vqprintpreviewdialog->timerEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnTimerEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_TimerEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_ChildEvent(QPrintPreviewDialog* self, QChildEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->childEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseChildEvent(QPrintPreviewDialog* self, QChildEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ChildEvent_IsBase(true);
        vqprintpreviewdialog->childEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnChildEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ChildEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_CustomEvent(QPrintPreviewDialog* self, QEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->customEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseCustomEvent(QPrintPreviewDialog* self, QEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_CustomEvent_IsBase(true);
        vqprintpreviewdialog->customEvent(event);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnCustomEvent(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_CustomEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_ConnectNotify(QPrintPreviewDialog* self, const QMetaMethod* signal) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->connectNotify(*signal);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseConnectNotify(QPrintPreviewDialog* self, const QMetaMethod* signal) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ConnectNotify_IsBase(true);
        vqprintpreviewdialog->connectNotify(*signal);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnConnectNotify(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ConnectNotify_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_DisconnectNotify(QPrintPreviewDialog* self, const QMetaMethod* signal) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->disconnectNotify(*signal);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseDisconnectNotify(QPrintPreviewDialog* self, const QMetaMethod* signal) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DisconnectNotify_IsBase(true);
        vqprintpreviewdialog->disconnectNotify(*signal);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDisconnectNotify(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_AdjustPosition(QPrintPreviewDialog* self, QWidget* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->adjustPosition(param1);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseAdjustPosition(QPrintPreviewDialog* self, QWidget* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_AdjustPosition_IsBase(true);
        vqprintpreviewdialog->adjustPosition(param1);
    } else {
        ((VirtualQPrintPreviewDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnAdjustPosition(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_AdjustPosition_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_UpdateMicroFocus(QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->updateMicroFocus();
    } else {
        ((VirtualQPrintPreviewDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseUpdateMicroFocus(QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_UpdateMicroFocus_IsBase(true);
        vqprintpreviewdialog->updateMicroFocus();
    } else {
        ((VirtualQPrintPreviewDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnUpdateMicroFocus(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_Create(QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->create();
    } else {
        ((VirtualQPrintPreviewDialog*)self)->create();
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseCreate(QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Create_IsBase(true);
        vqprintpreviewdialog->create();
    } else {
        ((VirtualQPrintPreviewDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnCreate(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Create_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_Destroy(QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->destroy();
    } else {
        ((VirtualQPrintPreviewDialog*)self)->destroy();
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseDestroy(QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Destroy_IsBase(true);
        vqprintpreviewdialog->destroy();
    } else {
        ((VirtualQPrintPreviewDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDestroy(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Destroy_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewDialog_FocusNextChild(QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return vqprintpreviewdialog->focusNextChild();
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QPrintPreviewDialog_QBaseFocusNextChild(QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_FocusNextChild_IsBase(true);
        return vqprintpreviewdialog->focusNextChild();
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnFocusNextChild(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_FocusNextChild_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewDialog_FocusPreviousChild(QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return vqprintpreviewdialog->focusPreviousChild();
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QPrintPreviewDialog_QBaseFocusPreviousChild(QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_FocusPreviousChild_IsBase(true);
        return vqprintpreviewdialog->focusPreviousChild();
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnFocusPreviousChild(QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPrintPreviewDialog_Sender(const QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return vqprintpreviewdialog->sender();
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPrintPreviewDialog_QBaseSender(const QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Sender_IsBase(true);
        return vqprintpreviewdialog->sender();
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnSender(const QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Sender_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintPreviewDialog_SenderSignalIndex(const QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return vqprintpreviewdialog->senderSignalIndex();
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPrintPreviewDialog_QBaseSenderSignalIndex(const QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_SenderSignalIndex_IsBase(true);
        return vqprintpreviewdialog->senderSignalIndex();
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnSenderSignalIndex(const QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintPreviewDialog_Receivers(const QPrintPreviewDialog* self, const char* signal) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return vqprintpreviewdialog->receivers(signal);
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPrintPreviewDialog_QBaseReceivers(const QPrintPreviewDialog* self, const char* signal) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Receivers_IsBase(true);
        return vqprintpreviewdialog->receivers(signal);
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnReceivers(const QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Receivers_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewDialog_IsSignalConnected(const QPrintPreviewDialog* self, const QMetaMethod* signal) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return vqprintpreviewdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPrintPreviewDialog_QBaseIsSignalConnected(const QPrintPreviewDialog* self, const QMetaMethod* signal) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_IsSignalConnected_IsBase(true);
        return vqprintpreviewdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnIsSignalConnected(const QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QPrintPreviewDialog_GetDecodedMetricF(const QPrintPreviewDialog* self, int metricA, int metricB) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        return vqprintpreviewdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QPrintPreviewDialog_QBaseGetDecodedMetricF(const QPrintPreviewDialog* self, int metricA, int metricB) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_GetDecodedMetricF_IsBase(true);
        return vqprintpreviewdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQPrintPreviewDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnGetDecodedMetricF(const QPrintPreviewDialog* self, intptr_t slot) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog && vqprintpreviewdialog->isVirtualQPrintPreviewDialog) {
        vqprintpreviewdialog->setQPrintPreviewDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void QPrintPreviewDialog_Delete(QPrintPreviewDialog* self) {
    delete self;
}
