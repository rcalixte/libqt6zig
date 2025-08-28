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
#include <QErrorMessage>
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
#include <qerrormessage.h>
#include "libqerrormessage.h"
#include "libqerrormessage.hxx"

QErrorMessage* QErrorMessage_new(QWidget* parent) {
    return new VirtualQErrorMessage(parent);
}

QErrorMessage* QErrorMessage_new2() {
    return new VirtualQErrorMessage();
}

QMetaObject* QErrorMessage_MetaObject(const QErrorMessage* self) {
    return (QMetaObject*)self->metaObject();
}

void* QErrorMessage_Metacast(QErrorMessage* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QErrorMessage_Metacall(QErrorMessage* self, int param1, int param2, void** param3) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQErrorMessage*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QErrorMessage_OnMetacall(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Metacall_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QErrorMessage_QBaseMetacall(QErrorMessage* self, int param1, int param2, void** param3) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Metacall_IsBase(true);
        return vqerrormessage->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQErrorMessage*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QErrorMessage_Tr(const char* s) {
    QString _ret = QErrorMessage::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QErrorMessage* QErrorMessage_QtHandler() {
    return QErrorMessage::qtHandler();
}

void QErrorMessage_ShowMessage(QErrorMessage* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->showMessage(message_QString);
}

void QErrorMessage_ShowMessage2(QErrorMessage* self, const libqt_string message, const libqt_string typeVal) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString typeVal_QString = QString::fromUtf8(typeVal.data, typeVal.len);
    self->showMessage(message_QString, typeVal_QString);
}

void QErrorMessage_Done(QErrorMessage* self, int param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->done(static_cast<int>(param1));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QErrorMessage_OnDone(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Done_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Done_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QErrorMessage_QBaseDone(QErrorMessage* self, int param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Done_IsBase(true);
        vqerrormessage->done(static_cast<int>(param1));
    }
}

void QErrorMessage_ChangeEvent(QErrorMessage* self, QEvent* e) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->changeEvent(e);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QErrorMessage_OnChangeEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_ChangeEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_ChangeEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QErrorMessage_QBaseChangeEvent(QErrorMessage* self, QEvent* e) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_ChangeEvent_IsBase(true);
        vqerrormessage->changeEvent(e);
    }
}

libqt_string QErrorMessage_Tr2(const char* s, const char* c) {
    QString _ret = QErrorMessage::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QErrorMessage_Tr3(const char* s, const char* c, int n) {
    QString _ret = QErrorMessage::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QErrorMessage_SetVisible(QErrorMessage* self, bool visible) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setVisible(visible);
    } else {
        self->QErrorMessage::setVisible(visible);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseSetVisible(QErrorMessage* self, bool visible) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_SetVisible_IsBase(true);
        vqerrormessage->setVisible(visible);
    } else {
        self->QErrorMessage::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnSetVisible(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_SetVisible_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QErrorMessage_SizeHint(const QErrorMessage* self) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return new QSize(vqerrormessage->sizeHint());
    } else {
        return new QSize(((VirtualQErrorMessage*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QErrorMessage_QBaseSizeHint(const QErrorMessage* self) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_SizeHint_IsBase(true);
        return new QSize(vqerrormessage->sizeHint());
    } else {
        return new QSize(((VirtualQErrorMessage*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnSizeHint(const QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_SizeHint_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QErrorMessage_MinimumSizeHint(const QErrorMessage* self) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return new QSize(vqerrormessage->minimumSizeHint());
    } else {
        return new QSize(((VirtualQErrorMessage*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QErrorMessage_QBaseMinimumSizeHint(const QErrorMessage* self) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_MinimumSizeHint_IsBase(true);
        return new QSize(vqerrormessage->minimumSizeHint());
    } else {
        return new QSize(((VirtualQErrorMessage*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnMinimumSizeHint(const QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_MinimumSizeHint_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_Open(QErrorMessage* self) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->open();
    } else {
        self->QErrorMessage::open();
    }
}

// Base class handler implementation
void QErrorMessage_QBaseOpen(QErrorMessage* self) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Open_IsBase(true);
        vqerrormessage->open();
    } else {
        self->QErrorMessage::open();
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnOpen(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Open_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int QErrorMessage_Exec(QErrorMessage* self) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return vqerrormessage->exec();
    } else {
        return self->QErrorMessage::exec();
    }
}

// Base class handler implementation
int QErrorMessage_QBaseExec(QErrorMessage* self) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Exec_IsBase(true);
        return vqerrormessage->exec();
    } else {
        return self->QErrorMessage::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnExec(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Exec_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_Accept(QErrorMessage* self) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->accept();
    } else {
        self->QErrorMessage::accept();
    }
}

// Base class handler implementation
void QErrorMessage_QBaseAccept(QErrorMessage* self) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Accept_IsBase(true);
        vqerrormessage->accept();
    } else {
        self->QErrorMessage::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnAccept(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Accept_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_Reject(QErrorMessage* self) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->reject();
    } else {
        self->QErrorMessage::reject();
    }
}

// Base class handler implementation
void QErrorMessage_QBaseReject(QErrorMessage* self) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Reject_IsBase(true);
        vqerrormessage->reject();
    } else {
        self->QErrorMessage::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnReject(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Reject_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_KeyPressEvent(QErrorMessage* self, QKeyEvent* param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->keyPressEvent(param1);
    } else {
        ((VirtualQErrorMessage*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseKeyPressEvent(QErrorMessage* self, QKeyEvent* param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_KeyPressEvent_IsBase(true);
        vqerrormessage->keyPressEvent(param1);
    } else {
        ((VirtualQErrorMessage*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnKeyPressEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_KeyPressEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_CloseEvent(QErrorMessage* self, QCloseEvent* param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->closeEvent(param1);
    } else {
        ((VirtualQErrorMessage*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseCloseEvent(QErrorMessage* self, QCloseEvent* param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_CloseEvent_IsBase(true);
        vqerrormessage->closeEvent(param1);
    } else {
        ((VirtualQErrorMessage*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnCloseEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_CloseEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_ShowEvent(QErrorMessage* self, QShowEvent* param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->showEvent(param1);
    } else {
        ((VirtualQErrorMessage*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseShowEvent(QErrorMessage* self, QShowEvent* param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_ShowEvent_IsBase(true);
        vqerrormessage->showEvent(param1);
    } else {
        ((VirtualQErrorMessage*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnShowEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_ShowEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_ResizeEvent(QErrorMessage* self, QResizeEvent* param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->resizeEvent(param1);
    } else {
        ((VirtualQErrorMessage*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseResizeEvent(QErrorMessage* self, QResizeEvent* param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_ResizeEvent_IsBase(true);
        vqerrormessage->resizeEvent(param1);
    } else {
        ((VirtualQErrorMessage*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnResizeEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_ResizeEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_ContextMenuEvent(QErrorMessage* self, QContextMenuEvent* param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->contextMenuEvent(param1);
    } else {
        ((VirtualQErrorMessage*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseContextMenuEvent(QErrorMessage* self, QContextMenuEvent* param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_ContextMenuEvent_IsBase(true);
        vqerrormessage->contextMenuEvent(param1);
    } else {
        ((VirtualQErrorMessage*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnContextMenuEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_ContextMenuEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QErrorMessage_EventFilter(QErrorMessage* self, QObject* param1, QEvent* param2) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return vqerrormessage->eventFilter(param1, param2);
    } else {
        return ((VirtualQErrorMessage*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QErrorMessage_QBaseEventFilter(QErrorMessage* self, QObject* param1, QEvent* param2) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_EventFilter_IsBase(true);
        return vqerrormessage->eventFilter(param1, param2);
    } else {
        return ((VirtualQErrorMessage*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnEventFilter(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_EventFilter_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int QErrorMessage_DevType(const QErrorMessage* self) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return vqerrormessage->devType();
    } else {
        return self->QErrorMessage::devType();
    }
}

// Base class handler implementation
int QErrorMessage_QBaseDevType(const QErrorMessage* self) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_DevType_IsBase(true);
        return vqerrormessage->devType();
    } else {
        return self->QErrorMessage::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnDevType(const QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_DevType_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int QErrorMessage_HeightForWidth(const QErrorMessage* self, int param1) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return vqerrormessage->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QErrorMessage::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QErrorMessage_QBaseHeightForWidth(const QErrorMessage* self, int param1) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_HeightForWidth_IsBase(true);
        return vqerrormessage->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QErrorMessage::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnHeightForWidth(const QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_HeightForWidth_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QErrorMessage_HasHeightForWidth(const QErrorMessage* self) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return vqerrormessage->hasHeightForWidth();
    } else {
        return self->QErrorMessage::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QErrorMessage_QBaseHasHeightForWidth(const QErrorMessage* self) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_HasHeightForWidth_IsBase(true);
        return vqerrormessage->hasHeightForWidth();
    } else {
        return self->QErrorMessage::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnHasHeightForWidth(const QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_HasHeightForWidth_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QErrorMessage_PaintEngine(const QErrorMessage* self) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return vqerrormessage->paintEngine();
    } else {
        return self->QErrorMessage::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QErrorMessage_QBasePaintEngine(const QErrorMessage* self) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_PaintEngine_IsBase(true);
        return vqerrormessage->paintEngine();
    } else {
        return self->QErrorMessage::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnPaintEngine(const QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_PaintEngine_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QErrorMessage_Event(QErrorMessage* self, QEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return vqerrormessage->event(event);
    } else {
        return ((VirtualQErrorMessage*)self)->event(event);
    }
}

// Base class handler implementation
bool QErrorMessage_QBaseEvent(QErrorMessage* self, QEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Event_IsBase(true);
        return vqerrormessage->event(event);
    } else {
        return ((VirtualQErrorMessage*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Event_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_MousePressEvent(QErrorMessage* self, QMouseEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->mousePressEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseMousePressEvent(QErrorMessage* self, QMouseEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_MousePressEvent_IsBase(true);
        vqerrormessage->mousePressEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnMousePressEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_MousePressEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_MouseReleaseEvent(QErrorMessage* self, QMouseEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->mouseReleaseEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseMouseReleaseEvent(QErrorMessage* self, QMouseEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_MouseReleaseEvent_IsBase(true);
        vqerrormessage->mouseReleaseEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnMouseReleaseEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_MouseDoubleClickEvent(QErrorMessage* self, QMouseEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseMouseDoubleClickEvent(QErrorMessage* self, QMouseEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_MouseDoubleClickEvent_IsBase(true);
        vqerrormessage->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnMouseDoubleClickEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_MouseMoveEvent(QErrorMessage* self, QMouseEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->mouseMoveEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseMouseMoveEvent(QErrorMessage* self, QMouseEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_MouseMoveEvent_IsBase(true);
        vqerrormessage->mouseMoveEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnMouseMoveEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_MouseMoveEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_WheelEvent(QErrorMessage* self, QWheelEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->wheelEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseWheelEvent(QErrorMessage* self, QWheelEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_WheelEvent_IsBase(true);
        vqerrormessage->wheelEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnWheelEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_WheelEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_KeyReleaseEvent(QErrorMessage* self, QKeyEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->keyReleaseEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseKeyReleaseEvent(QErrorMessage* self, QKeyEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_KeyReleaseEvent_IsBase(true);
        vqerrormessage->keyReleaseEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnKeyReleaseEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_FocusInEvent(QErrorMessage* self, QFocusEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->focusInEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseFocusInEvent(QErrorMessage* self, QFocusEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_FocusInEvent_IsBase(true);
        vqerrormessage->focusInEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnFocusInEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_FocusInEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_FocusOutEvent(QErrorMessage* self, QFocusEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->focusOutEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseFocusOutEvent(QErrorMessage* self, QFocusEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_FocusOutEvent_IsBase(true);
        vqerrormessage->focusOutEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnFocusOutEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_FocusOutEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_EnterEvent(QErrorMessage* self, QEnterEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->enterEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseEnterEvent(QErrorMessage* self, QEnterEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_EnterEvent_IsBase(true);
        vqerrormessage->enterEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnEnterEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_EnterEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_LeaveEvent(QErrorMessage* self, QEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->leaveEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseLeaveEvent(QErrorMessage* self, QEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_LeaveEvent_IsBase(true);
        vqerrormessage->leaveEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnLeaveEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_LeaveEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_PaintEvent(QErrorMessage* self, QPaintEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->paintEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBasePaintEvent(QErrorMessage* self, QPaintEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_PaintEvent_IsBase(true);
        vqerrormessage->paintEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnPaintEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_PaintEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_MoveEvent(QErrorMessage* self, QMoveEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->moveEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseMoveEvent(QErrorMessage* self, QMoveEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_MoveEvent_IsBase(true);
        vqerrormessage->moveEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnMoveEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_MoveEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_TabletEvent(QErrorMessage* self, QTabletEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->tabletEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseTabletEvent(QErrorMessage* self, QTabletEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_TabletEvent_IsBase(true);
        vqerrormessage->tabletEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnTabletEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_TabletEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_ActionEvent(QErrorMessage* self, QActionEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->actionEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseActionEvent(QErrorMessage* self, QActionEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_ActionEvent_IsBase(true);
        vqerrormessage->actionEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnActionEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_ActionEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_DragEnterEvent(QErrorMessage* self, QDragEnterEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->dragEnterEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseDragEnterEvent(QErrorMessage* self, QDragEnterEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_DragEnterEvent_IsBase(true);
        vqerrormessage->dragEnterEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnDragEnterEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_DragEnterEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_DragMoveEvent(QErrorMessage* self, QDragMoveEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->dragMoveEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseDragMoveEvent(QErrorMessage* self, QDragMoveEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_DragMoveEvent_IsBase(true);
        vqerrormessage->dragMoveEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnDragMoveEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_DragMoveEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_DragLeaveEvent(QErrorMessage* self, QDragLeaveEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->dragLeaveEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseDragLeaveEvent(QErrorMessage* self, QDragLeaveEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_DragLeaveEvent_IsBase(true);
        vqerrormessage->dragLeaveEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnDragLeaveEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_DragLeaveEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_DropEvent(QErrorMessage* self, QDropEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->dropEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseDropEvent(QErrorMessage* self, QDropEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_DropEvent_IsBase(true);
        vqerrormessage->dropEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnDropEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_DropEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_HideEvent(QErrorMessage* self, QHideEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->hideEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseHideEvent(QErrorMessage* self, QHideEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_HideEvent_IsBase(true);
        vqerrormessage->hideEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnHideEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_HideEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QErrorMessage_NativeEvent(QErrorMessage* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return vqerrormessage->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQErrorMessage*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QErrorMessage_QBaseNativeEvent(QErrorMessage* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_NativeEvent_IsBase(true);
        return vqerrormessage->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQErrorMessage*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnNativeEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_NativeEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QErrorMessage_Metric(const QErrorMessage* self, int param1) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return vqerrormessage->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQErrorMessage*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QErrorMessage_QBaseMetric(const QErrorMessage* self, int param1) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Metric_IsBase(true);
        return vqerrormessage->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQErrorMessage*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnMetric(const QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Metric_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_InitPainter(const QErrorMessage* self, QPainter* painter) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->initPainter(painter);
    } else {
        ((VirtualQErrorMessage*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseInitPainter(const QErrorMessage* self, QPainter* painter) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_InitPainter_IsBase(true);
        vqerrormessage->initPainter(painter);
    } else {
        ((VirtualQErrorMessage*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnInitPainter(const QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_InitPainter_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QErrorMessage_Redirected(const QErrorMessage* self, QPoint* offset) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return vqerrormessage->redirected(offset);
    } else {
        return ((VirtualQErrorMessage*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QErrorMessage_QBaseRedirected(const QErrorMessage* self, QPoint* offset) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Redirected_IsBase(true);
        return vqerrormessage->redirected(offset);
    } else {
        return ((VirtualQErrorMessage*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnRedirected(const QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Redirected_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QErrorMessage_SharedPainter(const QErrorMessage* self) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return vqerrormessage->sharedPainter();
    } else {
        return ((VirtualQErrorMessage*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QErrorMessage_QBaseSharedPainter(const QErrorMessage* self) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_SharedPainter_IsBase(true);
        return vqerrormessage->sharedPainter();
    } else {
        return ((VirtualQErrorMessage*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnSharedPainter(const QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_SharedPainter_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_InputMethodEvent(QErrorMessage* self, QInputMethodEvent* param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->inputMethodEvent(param1);
    } else {
        ((VirtualQErrorMessage*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseInputMethodEvent(QErrorMessage* self, QInputMethodEvent* param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_InputMethodEvent_IsBase(true);
        vqerrormessage->inputMethodEvent(param1);
    } else {
        ((VirtualQErrorMessage*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnInputMethodEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_InputMethodEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QErrorMessage_InputMethodQuery(const QErrorMessage* self, int param1) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return new QVariant(vqerrormessage->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQErrorMessage*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QErrorMessage_QBaseInputMethodQuery(const QErrorMessage* self, int param1) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_InputMethodQuery_IsBase(true);
        return new QVariant(vqerrormessage->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQErrorMessage*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnInputMethodQuery(const QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_InputMethodQuery_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QErrorMessage_FocusNextPrevChild(QErrorMessage* self, bool next) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return vqerrormessage->focusNextPrevChild(next);
    } else {
        return ((VirtualQErrorMessage*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QErrorMessage_QBaseFocusNextPrevChild(QErrorMessage* self, bool next) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_FocusNextPrevChild_IsBase(true);
        return vqerrormessage->focusNextPrevChild(next);
    } else {
        return ((VirtualQErrorMessage*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnFocusNextPrevChild(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_TimerEvent(QErrorMessage* self, QTimerEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->timerEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseTimerEvent(QErrorMessage* self, QTimerEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_TimerEvent_IsBase(true);
        vqerrormessage->timerEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnTimerEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_TimerEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_ChildEvent(QErrorMessage* self, QChildEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->childEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseChildEvent(QErrorMessage* self, QChildEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_ChildEvent_IsBase(true);
        vqerrormessage->childEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnChildEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_ChildEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_CustomEvent(QErrorMessage* self, QEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->customEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseCustomEvent(QErrorMessage* self, QEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_CustomEvent_IsBase(true);
        vqerrormessage->customEvent(event);
    } else {
        ((VirtualQErrorMessage*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnCustomEvent(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_CustomEvent_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_ConnectNotify(QErrorMessage* self, const QMetaMethod* signal) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->connectNotify(*signal);
    } else {
        ((VirtualQErrorMessage*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseConnectNotify(QErrorMessage* self, const QMetaMethod* signal) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_ConnectNotify_IsBase(true);
        vqerrormessage->connectNotify(*signal);
    } else {
        ((VirtualQErrorMessage*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnConnectNotify(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_ConnectNotify_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_DisconnectNotify(QErrorMessage* self, const QMetaMethod* signal) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->disconnectNotify(*signal);
    } else {
        ((VirtualQErrorMessage*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseDisconnectNotify(QErrorMessage* self, const QMetaMethod* signal) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_DisconnectNotify_IsBase(true);
        vqerrormessage->disconnectNotify(*signal);
    } else {
        ((VirtualQErrorMessage*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnDisconnectNotify(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_DisconnectNotify_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_AdjustPosition(QErrorMessage* self, QWidget* param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->adjustPosition(param1);
    } else {
        ((VirtualQErrorMessage*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void QErrorMessage_QBaseAdjustPosition(QErrorMessage* self, QWidget* param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_AdjustPosition_IsBase(true);
        vqerrormessage->adjustPosition(param1);
    } else {
        ((VirtualQErrorMessage*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnAdjustPosition(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_AdjustPosition_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_UpdateMicroFocus(QErrorMessage* self) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->updateMicroFocus();
    } else {
        ((VirtualQErrorMessage*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QErrorMessage_QBaseUpdateMicroFocus(QErrorMessage* self) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_UpdateMicroFocus_IsBase(true);
        vqerrormessage->updateMicroFocus();
    } else {
        ((VirtualQErrorMessage*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnUpdateMicroFocus(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_Create(QErrorMessage* self) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->create();
    } else {
        ((VirtualQErrorMessage*)self)->create();
    }
}

// Base class handler implementation
void QErrorMessage_QBaseCreate(QErrorMessage* self) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Create_IsBase(true);
        vqerrormessage->create();
    } else {
        ((VirtualQErrorMessage*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnCreate(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Create_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QErrorMessage_Destroy(QErrorMessage* self) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->destroy();
    } else {
        ((VirtualQErrorMessage*)self)->destroy();
    }
}

// Base class handler implementation
void QErrorMessage_QBaseDestroy(QErrorMessage* self) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Destroy_IsBase(true);
        vqerrormessage->destroy();
    } else {
        ((VirtualQErrorMessage*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnDestroy(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Destroy_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QErrorMessage_FocusNextChild(QErrorMessage* self) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return vqerrormessage->focusNextChild();
    } else {
        return ((VirtualQErrorMessage*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QErrorMessage_QBaseFocusNextChild(QErrorMessage* self) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_FocusNextChild_IsBase(true);
        return vqerrormessage->focusNextChild();
    } else {
        return ((VirtualQErrorMessage*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnFocusNextChild(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_FocusNextChild_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QErrorMessage_FocusPreviousChild(QErrorMessage* self) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return vqerrormessage->focusPreviousChild();
    } else {
        return ((VirtualQErrorMessage*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QErrorMessage_QBaseFocusPreviousChild(QErrorMessage* self) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_FocusPreviousChild_IsBase(true);
        return vqerrormessage->focusPreviousChild();
    } else {
        return ((VirtualQErrorMessage*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnFocusPreviousChild(QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_FocusPreviousChild_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QErrorMessage_Sender(const QErrorMessage* self) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return vqerrormessage->sender();
    } else {
        return ((VirtualQErrorMessage*)self)->sender();
    }
}

// Base class handler implementation
QObject* QErrorMessage_QBaseSender(const QErrorMessage* self) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Sender_IsBase(true);
        return vqerrormessage->sender();
    } else {
        return ((VirtualQErrorMessage*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnSender(const QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Sender_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QErrorMessage_SenderSignalIndex(const QErrorMessage* self) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return vqerrormessage->senderSignalIndex();
    } else {
        return ((VirtualQErrorMessage*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QErrorMessage_QBaseSenderSignalIndex(const QErrorMessage* self) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_SenderSignalIndex_IsBase(true);
        return vqerrormessage->senderSignalIndex();
    } else {
        return ((VirtualQErrorMessage*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnSenderSignalIndex(const QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_SenderSignalIndex_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QErrorMessage_Receivers(const QErrorMessage* self, const char* signal) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return vqerrormessage->receivers(signal);
    } else {
        return ((VirtualQErrorMessage*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QErrorMessage_QBaseReceivers(const QErrorMessage* self, const char* signal) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Receivers_IsBase(true);
        return vqerrormessage->receivers(signal);
    } else {
        return ((VirtualQErrorMessage*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnReceivers(const QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_Receivers_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QErrorMessage_IsSignalConnected(const QErrorMessage* self, const QMetaMethod* signal) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return vqerrormessage->isSignalConnected(*signal);
    } else {
        return ((VirtualQErrorMessage*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QErrorMessage_QBaseIsSignalConnected(const QErrorMessage* self, const QMetaMethod* signal) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_IsSignalConnected_IsBase(true);
        return vqerrormessage->isSignalConnected(*signal);
    } else {
        return ((VirtualQErrorMessage*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnIsSignalConnected(const QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_IsSignalConnected_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QErrorMessage_GetDecodedMetricF(const QErrorMessage* self, int metricA, int metricB) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        return vqerrormessage->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQErrorMessage*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QErrorMessage_QBaseGetDecodedMetricF(const QErrorMessage* self, int metricA, int metricB) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_GetDecodedMetricF_IsBase(true);
        return vqerrormessage->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQErrorMessage*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnGetDecodedMetricF(const QErrorMessage* self, intptr_t slot) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage && vqerrormessage->isVirtualQErrorMessage) {
        vqerrormessage->setQErrorMessage_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQErrorMessage::QErrorMessage_GetDecodedMetricF_Callback>(slot));
    }
}

void QErrorMessage_Delete(QErrorMessage* self) {
    delete self;
}
