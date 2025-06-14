#include <QAbstractPrintDialog>
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
#include <QPrintDialog>
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
#include <qprintdialog.h>
#include "libqprintdialog.h"
#include "libqprintdialog.hxx"

QPrintDialog* QPrintDialog_new(QWidget* parent) {
    return new VirtualQPrintDialog(parent);
}

QPrintDialog* QPrintDialog_new2(QPrinter* printer) {
    return new VirtualQPrintDialog(printer);
}

QPrintDialog* QPrintDialog_new3() {
    return new VirtualQPrintDialog();
}

QPrintDialog* QPrintDialog_new4(QPrinter* printer, QWidget* parent) {
    return new VirtualQPrintDialog(printer, parent);
}

QMetaObject* QPrintDialog_MetaObject(const QPrintDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPrintDialog_Metacast(QPrintDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPrintDialog_Metacall(QPrintDialog* self, int param1, int param2, void** param3) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPrintDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPrintDialog_OnMetacall(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Metacall_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPrintDialog_QBaseMetacall(QPrintDialog* self, int param1, int param2, void** param3) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Metacall_IsBase(true);
        return vqprintdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPrintDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPrintDialog_Tr(const char* s) {
    QString _ret = QPrintDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPrintDialog_SetOption(QPrintDialog* self, int option) {
    self->setOption(static_cast<QAbstractPrintDialog::PrintDialogOption>(option));
}

bool QPrintDialog_TestOption(const QPrintDialog* self, int option) {
    return self->testOption(static_cast<QAbstractPrintDialog::PrintDialogOption>(option));
}

void QPrintDialog_SetOptions(QPrintDialog* self, int options) {
    self->setOptions(static_cast<QAbstractPrintDialog::PrintDialogOptions>(options));
}

int QPrintDialog_Options(const QPrintDialog* self) {
    return static_cast<int>(self->options());
}

void QPrintDialog_Accepted(QPrintDialog* self, QPrinter* printer) {
    self->accepted(printer);
}

libqt_string QPrintDialog_Tr2(const char* s, const char* c) {
    QString _ret = QPrintDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPrintDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPrintDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPrintDialog_SetOption2(QPrintDialog* self, int option, bool on) {
    self->setOption(static_cast<QAbstractPrintDialog::PrintDialogOption>(option), on);
}

// Derived class handler implementation
int QPrintDialog_Exec(QPrintDialog* self) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return vqprintdialog->exec();
    } else {
        return self->QPrintDialog::exec();
    }
}

// Base class handler implementation
int QPrintDialog_QBaseExec(QPrintDialog* self) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Exec_IsBase(true);
        return vqprintdialog->exec();
    } else {
        return self->QPrintDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnExec(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Exec_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_Accept(QPrintDialog* self) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->accept();
    } else {
        self->QPrintDialog::accept();
    }
}

// Base class handler implementation
void QPrintDialog_QBaseAccept(QPrintDialog* self) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Accept_IsBase(true);
        vqprintdialog->accept();
    } else {
        self->QPrintDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnAccept(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Accept_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_Done(QPrintDialog* self, int result) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->done(static_cast<int>(result));
    } else {
        self->QPrintDialog::done(static_cast<int>(result));
    }
}

// Base class handler implementation
void QPrintDialog_QBaseDone(QPrintDialog* self, int result) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Done_IsBase(true);
        vqprintdialog->done(static_cast<int>(result));
    } else {
        self->QPrintDialog::done(static_cast<int>(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnDone(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Done_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_SetVisible(QPrintDialog* self, bool visible) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setVisible(visible);
    } else {
        self->QPrintDialog::setVisible(visible);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseSetVisible(QPrintDialog* self, bool visible) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_SetVisible_IsBase(true);
        vqprintdialog->setVisible(visible);
    } else {
        self->QPrintDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnSetVisible(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_SetVisible_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPrintDialog_SizeHint(const QPrintDialog* self) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return new QSize(vqprintdialog->sizeHint());
    } else {
        return new QSize(((VirtualQPrintDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QPrintDialog_QBaseSizeHint(const QPrintDialog* self) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_SizeHint_IsBase(true);
        return new QSize(vqprintdialog->sizeHint());
    } else {
        return new QSize(((VirtualQPrintDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnSizeHint(const QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_SizeHint_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPrintDialog_MinimumSizeHint(const QPrintDialog* self) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return new QSize(vqprintdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualQPrintDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QPrintDialog_QBaseMinimumSizeHint(const QPrintDialog* self) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vqprintdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualQPrintDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnMinimumSizeHint(const QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_Open(QPrintDialog* self) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->open();
    } else {
        self->QPrintDialog::open();
    }
}

// Base class handler implementation
void QPrintDialog_QBaseOpen(QPrintDialog* self) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Open_IsBase(true);
        vqprintdialog->open();
    } else {
        self->QPrintDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnOpen(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Open_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_Reject(QPrintDialog* self) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->reject();
    } else {
        self->QPrintDialog::reject();
    }
}

// Base class handler implementation
void QPrintDialog_QBaseReject(QPrintDialog* self) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Reject_IsBase(true);
        vqprintdialog->reject();
    } else {
        self->QPrintDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnReject(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Reject_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_KeyPressEvent(QPrintDialog* self, QKeyEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->keyPressEvent(param1);
    } else {
        ((VirtualQPrintDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseKeyPressEvent(QPrintDialog* self, QKeyEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_KeyPressEvent_IsBase(true);
        vqprintdialog->keyPressEvent(param1);
    } else {
        ((VirtualQPrintDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnKeyPressEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_CloseEvent(QPrintDialog* self, QCloseEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->closeEvent(param1);
    } else {
        ((VirtualQPrintDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseCloseEvent(QPrintDialog* self, QCloseEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_CloseEvent_IsBase(true);
        vqprintdialog->closeEvent(param1);
    } else {
        ((VirtualQPrintDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnCloseEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_CloseEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_ShowEvent(QPrintDialog* self, QShowEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->showEvent(param1);
    } else {
        ((VirtualQPrintDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseShowEvent(QPrintDialog* self, QShowEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_ShowEvent_IsBase(true);
        vqprintdialog->showEvent(param1);
    } else {
        ((VirtualQPrintDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnShowEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_ShowEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_ResizeEvent(QPrintDialog* self, QResizeEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->resizeEvent(param1);
    } else {
        ((VirtualQPrintDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseResizeEvent(QPrintDialog* self, QResizeEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_ResizeEvent_IsBase(true);
        vqprintdialog->resizeEvent(param1);
    } else {
        ((VirtualQPrintDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnResizeEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_ResizeEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_ContextMenuEvent(QPrintDialog* self, QContextMenuEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->contextMenuEvent(param1);
    } else {
        ((VirtualQPrintDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseContextMenuEvent(QPrintDialog* self, QContextMenuEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_ContextMenuEvent_IsBase(true);
        vqprintdialog->contextMenuEvent(param1);
    } else {
        ((VirtualQPrintDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnContextMenuEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintDialog_EventFilter(QPrintDialog* self, QObject* param1, QEvent* param2) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return vqprintdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualQPrintDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QPrintDialog_QBaseEventFilter(QPrintDialog* self, QObject* param1, QEvent* param2) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_EventFilter_IsBase(true);
        return vqprintdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualQPrintDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnEventFilter(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_EventFilter_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintDialog_DevType(const QPrintDialog* self) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return vqprintdialog->devType();
    } else {
        return self->QPrintDialog::devType();
    }
}

// Base class handler implementation
int QPrintDialog_QBaseDevType(const QPrintDialog* self) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_DevType_IsBase(true);
        return vqprintdialog->devType();
    } else {
        return self->QPrintDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnDevType(const QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_DevType_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintDialog_HeightForWidth(const QPrintDialog* self, int param1) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return vqprintdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QPrintDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QPrintDialog_QBaseHeightForWidth(const QPrintDialog* self, int param1) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_HeightForWidth_IsBase(true);
        return vqprintdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QPrintDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnHeightForWidth(const QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_HeightForWidth_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintDialog_HasHeightForWidth(const QPrintDialog* self) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return vqprintdialog->hasHeightForWidth();
    } else {
        return self->QPrintDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QPrintDialog_QBaseHasHeightForWidth(const QPrintDialog* self) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_HasHeightForWidth_IsBase(true);
        return vqprintdialog->hasHeightForWidth();
    } else {
        return self->QPrintDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnHasHeightForWidth(const QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QPrintDialog_PaintEngine(const QPrintDialog* self) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return vqprintdialog->paintEngine();
    } else {
        return self->QPrintDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QPrintDialog_QBasePaintEngine(const QPrintDialog* self) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_PaintEngine_IsBase(true);
        return vqprintdialog->paintEngine();
    } else {
        return self->QPrintDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnPaintEngine(const QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_PaintEngine_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintDialog_Event(QPrintDialog* self, QEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return vqprintdialog->event(event);
    } else {
        return ((VirtualQPrintDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool QPrintDialog_QBaseEvent(QPrintDialog* self, QEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Event_IsBase(true);
        return vqprintdialog->event(event);
    } else {
        return ((VirtualQPrintDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Event_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_MousePressEvent(QPrintDialog* self, QMouseEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->mousePressEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseMousePressEvent(QPrintDialog* self, QMouseEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_MousePressEvent_IsBase(true);
        vqprintdialog->mousePressEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnMousePressEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_MousePressEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_MouseReleaseEvent(QPrintDialog* self, QMouseEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseMouseReleaseEvent(QPrintDialog* self, QMouseEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_MouseReleaseEvent_IsBase(true);
        vqprintdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnMouseReleaseEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_MouseDoubleClickEvent(QPrintDialog* self, QMouseEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseMouseDoubleClickEvent(QPrintDialog* self, QMouseEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_MouseDoubleClickEvent_IsBase(true);
        vqprintdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnMouseDoubleClickEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_MouseMoveEvent(QPrintDialog* self, QMouseEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->mouseMoveEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseMouseMoveEvent(QPrintDialog* self, QMouseEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_MouseMoveEvent_IsBase(true);
        vqprintdialog->mouseMoveEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnMouseMoveEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_WheelEvent(QPrintDialog* self, QWheelEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->wheelEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseWheelEvent(QPrintDialog* self, QWheelEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_WheelEvent_IsBase(true);
        vqprintdialog->wheelEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnWheelEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_WheelEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_KeyReleaseEvent(QPrintDialog* self, QKeyEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->keyReleaseEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseKeyReleaseEvent(QPrintDialog* self, QKeyEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_KeyReleaseEvent_IsBase(true);
        vqprintdialog->keyReleaseEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnKeyReleaseEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_FocusInEvent(QPrintDialog* self, QFocusEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->focusInEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseFocusInEvent(QPrintDialog* self, QFocusEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_FocusInEvent_IsBase(true);
        vqprintdialog->focusInEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnFocusInEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_FocusInEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_FocusOutEvent(QPrintDialog* self, QFocusEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->focusOutEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseFocusOutEvent(QPrintDialog* self, QFocusEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_FocusOutEvent_IsBase(true);
        vqprintdialog->focusOutEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnFocusOutEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_EnterEvent(QPrintDialog* self, QEnterEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->enterEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseEnterEvent(QPrintDialog* self, QEnterEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_EnterEvent_IsBase(true);
        vqprintdialog->enterEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnEnterEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_EnterEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_LeaveEvent(QPrintDialog* self, QEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->leaveEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseLeaveEvent(QPrintDialog* self, QEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_LeaveEvent_IsBase(true);
        vqprintdialog->leaveEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnLeaveEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_LeaveEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_PaintEvent(QPrintDialog* self, QPaintEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->paintEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBasePaintEvent(QPrintDialog* self, QPaintEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_PaintEvent_IsBase(true);
        vqprintdialog->paintEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnPaintEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_PaintEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_MoveEvent(QPrintDialog* self, QMoveEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->moveEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseMoveEvent(QPrintDialog* self, QMoveEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_MoveEvent_IsBase(true);
        vqprintdialog->moveEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnMoveEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_MoveEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_TabletEvent(QPrintDialog* self, QTabletEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->tabletEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseTabletEvent(QPrintDialog* self, QTabletEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_TabletEvent_IsBase(true);
        vqprintdialog->tabletEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnTabletEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_TabletEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_ActionEvent(QPrintDialog* self, QActionEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->actionEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseActionEvent(QPrintDialog* self, QActionEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_ActionEvent_IsBase(true);
        vqprintdialog->actionEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnActionEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_ActionEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_DragEnterEvent(QPrintDialog* self, QDragEnterEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->dragEnterEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseDragEnterEvent(QPrintDialog* self, QDragEnterEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_DragEnterEvent_IsBase(true);
        vqprintdialog->dragEnterEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnDragEnterEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_DragMoveEvent(QPrintDialog* self, QDragMoveEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->dragMoveEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseDragMoveEvent(QPrintDialog* self, QDragMoveEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_DragMoveEvent_IsBase(true);
        vqprintdialog->dragMoveEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnDragMoveEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_DragLeaveEvent(QPrintDialog* self, QDragLeaveEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->dragLeaveEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseDragLeaveEvent(QPrintDialog* self, QDragLeaveEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_DragLeaveEvent_IsBase(true);
        vqprintdialog->dragLeaveEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnDragLeaveEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_DropEvent(QPrintDialog* self, QDropEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->dropEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseDropEvent(QPrintDialog* self, QDropEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_DropEvent_IsBase(true);
        vqprintdialog->dropEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnDropEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_DropEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_HideEvent(QPrintDialog* self, QHideEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->hideEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseHideEvent(QPrintDialog* self, QHideEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_HideEvent_IsBase(true);
        vqprintdialog->hideEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnHideEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_HideEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintDialog_NativeEvent(QPrintDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return vqprintdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQPrintDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QPrintDialog_QBaseNativeEvent(QPrintDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_NativeEvent_IsBase(true);
        return vqprintdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQPrintDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnNativeEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_NativeEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_ChangeEvent(QPrintDialog* self, QEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->changeEvent(param1);
    } else {
        ((VirtualQPrintDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseChangeEvent(QPrintDialog* self, QEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_ChangeEvent_IsBase(true);
        vqprintdialog->changeEvent(param1);
    } else {
        ((VirtualQPrintDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnChangeEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_ChangeEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintDialog_Metric(const QPrintDialog* self, int param1) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return vqprintdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQPrintDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QPrintDialog_QBaseMetric(const QPrintDialog* self, int param1) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Metric_IsBase(true);
        return vqprintdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQPrintDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnMetric(const QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Metric_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_InitPainter(const QPrintDialog* self, QPainter* painter) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->initPainter(painter);
    } else {
        ((VirtualQPrintDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseInitPainter(const QPrintDialog* self, QPainter* painter) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_InitPainter_IsBase(true);
        vqprintdialog->initPainter(painter);
    } else {
        ((VirtualQPrintDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnInitPainter(const QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_InitPainter_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QPrintDialog_Redirected(const QPrintDialog* self, QPoint* offset) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return vqprintdialog->redirected(offset);
    } else {
        return ((VirtualQPrintDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QPrintDialog_QBaseRedirected(const QPrintDialog* self, QPoint* offset) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Redirected_IsBase(true);
        return vqprintdialog->redirected(offset);
    } else {
        return ((VirtualQPrintDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnRedirected(const QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Redirected_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QPrintDialog_SharedPainter(const QPrintDialog* self) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return vqprintdialog->sharedPainter();
    } else {
        return ((VirtualQPrintDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QPrintDialog_QBaseSharedPainter(const QPrintDialog* self) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_SharedPainter_IsBase(true);
        return vqprintdialog->sharedPainter();
    } else {
        return ((VirtualQPrintDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnSharedPainter(const QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_SharedPainter_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_InputMethodEvent(QPrintDialog* self, QInputMethodEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->inputMethodEvent(param1);
    } else {
        ((VirtualQPrintDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseInputMethodEvent(QPrintDialog* self, QInputMethodEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_InputMethodEvent_IsBase(true);
        vqprintdialog->inputMethodEvent(param1);
    } else {
        ((VirtualQPrintDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnInputMethodEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPrintDialog_InputMethodQuery(const QPrintDialog* self, int param1) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return new QVariant(vqprintdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQPrintDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QPrintDialog_QBaseInputMethodQuery(const QPrintDialog* self, int param1) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vqprintdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQPrintDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnInputMethodQuery(const QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintDialog_FocusNextPrevChild(QPrintDialog* self, bool next) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return vqprintdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualQPrintDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QPrintDialog_QBaseFocusNextPrevChild(QPrintDialog* self, bool next) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_FocusNextPrevChild_IsBase(true);
        return vqprintdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualQPrintDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnFocusNextPrevChild(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_TimerEvent(QPrintDialog* self, QTimerEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->timerEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseTimerEvent(QPrintDialog* self, QTimerEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_TimerEvent_IsBase(true);
        vqprintdialog->timerEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnTimerEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_TimerEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_ChildEvent(QPrintDialog* self, QChildEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->childEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseChildEvent(QPrintDialog* self, QChildEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_ChildEvent_IsBase(true);
        vqprintdialog->childEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnChildEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_ChildEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_CustomEvent(QPrintDialog* self, QEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->customEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseCustomEvent(QPrintDialog* self, QEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_CustomEvent_IsBase(true);
        vqprintdialog->customEvent(event);
    } else {
        ((VirtualQPrintDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnCustomEvent(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_CustomEvent_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_ConnectNotify(QPrintDialog* self, const QMetaMethod* signal) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->connectNotify(*signal);
    } else {
        ((VirtualQPrintDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseConnectNotify(QPrintDialog* self, const QMetaMethod* signal) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_ConnectNotify_IsBase(true);
        vqprintdialog->connectNotify(*signal);
    } else {
        ((VirtualQPrintDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnConnectNotify(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_ConnectNotify_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_DisconnectNotify(QPrintDialog* self, const QMetaMethod* signal) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->disconnectNotify(*signal);
    } else {
        ((VirtualQPrintDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseDisconnectNotify(QPrintDialog* self, const QMetaMethod* signal) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_DisconnectNotify_IsBase(true);
        vqprintdialog->disconnectNotify(*signal);
    } else {
        ((VirtualQPrintDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnDisconnectNotify(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_AdjustPosition(QPrintDialog* self, QWidget* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->adjustPosition(param1);
    } else {
        ((VirtualQPrintDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void QPrintDialog_QBaseAdjustPosition(QPrintDialog* self, QWidget* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_AdjustPosition_IsBase(true);
        vqprintdialog->adjustPosition(param1);
    } else {
        ((VirtualQPrintDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnAdjustPosition(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_AdjustPosition_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_UpdateMicroFocus(QPrintDialog* self) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->updateMicroFocus();
    } else {
        ((VirtualQPrintDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QPrintDialog_QBaseUpdateMicroFocus(QPrintDialog* self) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_UpdateMicroFocus_IsBase(true);
        vqprintdialog->updateMicroFocus();
    } else {
        ((VirtualQPrintDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnUpdateMicroFocus(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_Create(QPrintDialog* self) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->create();
    } else {
        ((VirtualQPrintDialog*)self)->create();
    }
}

// Base class handler implementation
void QPrintDialog_QBaseCreate(QPrintDialog* self) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Create_IsBase(true);
        vqprintdialog->create();
    } else {
        ((VirtualQPrintDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnCreate(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Create_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintDialog_Destroy(QPrintDialog* self) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->destroy();
    } else {
        ((VirtualQPrintDialog*)self)->destroy();
    }
}

// Base class handler implementation
void QPrintDialog_QBaseDestroy(QPrintDialog* self) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Destroy_IsBase(true);
        vqprintdialog->destroy();
    } else {
        ((VirtualQPrintDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnDestroy(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Destroy_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintDialog_FocusNextChild(QPrintDialog* self) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return vqprintdialog->focusNextChild();
    } else {
        return ((VirtualQPrintDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QPrintDialog_QBaseFocusNextChild(QPrintDialog* self) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_FocusNextChild_IsBase(true);
        return vqprintdialog->focusNextChild();
    } else {
        return ((VirtualQPrintDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnFocusNextChild(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_FocusNextChild_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintDialog_FocusPreviousChild(QPrintDialog* self) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return vqprintdialog->focusPreviousChild();
    } else {
        return ((VirtualQPrintDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QPrintDialog_QBaseFocusPreviousChild(QPrintDialog* self) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_FocusPreviousChild_IsBase(true);
        return vqprintdialog->focusPreviousChild();
    } else {
        return ((VirtualQPrintDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnFocusPreviousChild(QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPrintDialog_Sender(const QPrintDialog* self) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return vqprintdialog->sender();
    } else {
        return ((VirtualQPrintDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPrintDialog_QBaseSender(const QPrintDialog* self) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Sender_IsBase(true);
        return vqprintdialog->sender();
    } else {
        return ((VirtualQPrintDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnSender(const QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Sender_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintDialog_SenderSignalIndex(const QPrintDialog* self) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return vqprintdialog->senderSignalIndex();
    } else {
        return ((VirtualQPrintDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPrintDialog_QBaseSenderSignalIndex(const QPrintDialog* self) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_SenderSignalIndex_IsBase(true);
        return vqprintdialog->senderSignalIndex();
    } else {
        return ((VirtualQPrintDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnSenderSignalIndex(const QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintDialog_Receivers(const QPrintDialog* self, const char* signal) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return vqprintdialog->receivers(signal);
    } else {
        return ((VirtualQPrintDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPrintDialog_QBaseReceivers(const QPrintDialog* self, const char* signal) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Receivers_IsBase(true);
        return vqprintdialog->receivers(signal);
    } else {
        return ((VirtualQPrintDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnReceivers(const QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_Receivers_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintDialog_IsSignalConnected(const QPrintDialog* self, const QMetaMethod* signal) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        return vqprintdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualQPrintDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPrintDialog_QBaseIsSignalConnected(const QPrintDialog* self, const QMetaMethod* signal) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_IsSignalConnected_IsBase(true);
        return vqprintdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualQPrintDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnIsSignalConnected(const QPrintDialog* self, intptr_t slot) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog && vqprintdialog->isVirtualQPrintDialog) {
        vqprintdialog->setQPrintDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualQPrintDialog::QPrintDialog_IsSignalConnected_Callback>(slot));
    }
}

void QPrintDialog_Delete(QPrintDialog* self) {
    delete self;
}
