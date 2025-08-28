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
#include <qdialog.h>
#include "libqdialog.h"
#include "libqdialog.hxx"

QDialog* QDialog_new(QWidget* parent) {
    return new VirtualQDialog(parent);
}

QDialog* QDialog_new2() {
    return new VirtualQDialog();
}

QDialog* QDialog_new3(QWidget* parent, int f) {
    return new VirtualQDialog(parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QDialog_MetaObject(const QDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDialog_Metacast(QDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDialog_Metacall(QDialog* self, int param1, int param2, void** param3) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDialog_Tr(const char* s) {
    QString _ret = QDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QDialog_Result(const QDialog* self) {
    return self->result();
}

void QDialog_SetVisible(QDialog* self, bool visible) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        self->setVisible(visible);
    } else {
        ((VirtualQDialog*)self)->setVisible(visible);
    }
}

QSize* QDialog_SizeHint(const QDialog* self) {
    auto* vqdialog = dynamic_cast<const VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualQDialog*)self)->sizeHint());
    }
}

QSize* QDialog_MinimumSizeHint(const QDialog* self) {
    auto* vqdialog = dynamic_cast<const VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return new QSize(self->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDialog*)self)->minimumSizeHint());
    }
}

void QDialog_SetSizeGripEnabled(QDialog* self, bool sizeGripEnabled) {
    self->setSizeGripEnabled(sizeGripEnabled);
}

bool QDialog_IsSizeGripEnabled(const QDialog* self) {
    return self->isSizeGripEnabled();
}

void QDialog_SetModal(QDialog* self, bool modal) {
    self->setModal(modal);
}

void QDialog_SetResult(QDialog* self, int r) {
    self->setResult(static_cast<int>(r));
}

void QDialog_Finished(QDialog* self, int result) {
    self->finished(static_cast<int>(result));
}

void QDialog_Connect_Finished(QDialog* self, intptr_t slot) {
    void (*slotFunc)(QDialog*, int) = reinterpret_cast<void (*)(QDialog*, int)>(slot);
    QDialog::connect(self, &QDialog::finished, [self, slotFunc](int result) {
        int sigval1 = result;
        slotFunc(self, sigval1);
    });
}

void QDialog_Accepted(QDialog* self) {
    self->accepted();
}

void QDialog_Connect_Accepted(QDialog* self, intptr_t slot) {
    void (*slotFunc)(QDialog*) = reinterpret_cast<void (*)(QDialog*)>(slot);
    QDialog::connect(self, &QDialog::accepted, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QDialog_Rejected(QDialog* self) {
    self->rejected();
}

void QDialog_Connect_Rejected(QDialog* self, intptr_t slot) {
    void (*slotFunc)(QDialog*) = reinterpret_cast<void (*)(QDialog*)>(slot);
    QDialog::connect(self, &QDialog::rejected, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QDialog_Open(QDialog* self) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        self->open();
    } else {
        ((VirtualQDialog*)self)->open();
    }
}

int QDialog_Exec(QDialog* self) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return self->exec();
    } else {
        return ((VirtualQDialog*)self)->exec();
    }
}

void QDialog_Done(QDialog* self, int param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        self->done(static_cast<int>(param1));
    } else {
        ((VirtualQDialog*)self)->done(static_cast<int>(param1));
    }
}

void QDialog_Accept(QDialog* self) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        self->accept();
    } else {
        ((VirtualQDialog*)self)->accept();
    }
}

void QDialog_Reject(QDialog* self) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        self->reject();
    } else {
        ((VirtualQDialog*)self)->reject();
    }
}

void QDialog_KeyPressEvent(QDialog* self, QKeyEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->keyPressEvent(param1);
    }
}

void QDialog_CloseEvent(QDialog* self, QCloseEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->closeEvent(param1);
    }
}

void QDialog_ShowEvent(QDialog* self, QShowEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->showEvent(param1);
    }
}

void QDialog_ResizeEvent(QDialog* self, QResizeEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->resizeEvent(param1);
    }
}

void QDialog_ContextMenuEvent(QDialog* self, QContextMenuEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->contextMenuEvent(param1);
    }
}

bool QDialog_EventFilter(QDialog* self, QObject* param1, QEvent* param2) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return vqdialog->eventFilter(param1, param2);
    }
    return {};
}

libqt_string QDialog_Tr2(const char* s, const char* c) {
    QString _ret = QDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDialog::tr(s, c, static_cast<int>(n));
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
int QDialog_QBaseMetacall(QDialog* self, int param1, int param2, void** param3) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Metacall_IsBase(true);
        return vqdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMetacall(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Metacall_Callback(reinterpret_cast<VirtualQDialog::QDialog_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QDialog_QBaseSetVisible(QDialog* self, bool visible) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_SetVisible_IsBase(true);
        vqdialog->setVisible(visible);
    } else {
        self->QDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnSetVisible(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_SetVisible_Callback(reinterpret_cast<VirtualQDialog::QDialog_SetVisible_Callback>(slot));
    }
}

// Base class handler implementation
QSize* QDialog_QBaseSizeHint(const QDialog* self) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_SizeHint_IsBase(true);
        return new QSize(vqdialog->sizeHint());
    } else {
        return new QSize(((VirtualQDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnSizeHint(const QDialog* self, intptr_t slot) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_SizeHint_Callback(reinterpret_cast<VirtualQDialog::QDialog_SizeHint_Callback>(slot));
    }
}

// Base class handler implementation
QSize* QDialog_QBaseMinimumSizeHint(const QDialog* self) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vqdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMinimumSizeHint(const QDialog* self, intptr_t slot) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualQDialog::QDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Base class handler implementation
void QDialog_QBaseOpen(QDialog* self) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Open_IsBase(true);
        vqdialog->open();
    } else {
        self->QDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnOpen(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Open_Callback(reinterpret_cast<VirtualQDialog::QDialog_Open_Callback>(slot));
    }
}

// Base class handler implementation
int QDialog_QBaseExec(QDialog* self) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Exec_IsBase(true);
        return vqdialog->exec();
    } else {
        return self->QDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnExec(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Exec_Callback(reinterpret_cast<VirtualQDialog::QDialog_Exec_Callback>(slot));
    }
}

// Base class handler implementation
void QDialog_QBaseDone(QDialog* self, int param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Done_IsBase(true);
        vqdialog->done(static_cast<int>(param1));
    } else {
        self->QDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDone(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Done_Callback(reinterpret_cast<VirtualQDialog::QDialog_Done_Callback>(slot));
    }
}

// Base class handler implementation
void QDialog_QBaseAccept(QDialog* self) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Accept_IsBase(true);
        vqdialog->accept();
    } else {
        self->QDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnAccept(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Accept_Callback(reinterpret_cast<VirtualQDialog::QDialog_Accept_Callback>(slot));
    }
}

// Base class handler implementation
void QDialog_QBaseReject(QDialog* self) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Reject_IsBase(true);
        vqdialog->reject();
    } else {
        self->QDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnReject(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Reject_Callback(reinterpret_cast<VirtualQDialog::QDialog_Reject_Callback>(slot));
    }
}

// Base class handler implementation
void QDialog_QBaseKeyPressEvent(QDialog* self, QKeyEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_KeyPressEvent_IsBase(true);
        vqdialog->keyPressEvent(param1);
    } else {
        ((VirtualQDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnKeyPressEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_KeyPressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QDialog_QBaseCloseEvent(QDialog* self, QCloseEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_CloseEvent_IsBase(true);
        vqdialog->closeEvent(param1);
    } else {
        ((VirtualQDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnCloseEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_CloseEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_CloseEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QDialog_QBaseShowEvent(QDialog* self, QShowEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_ShowEvent_IsBase(true);
        vqdialog->showEvent(param1);
    } else {
        ((VirtualQDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnShowEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_ShowEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_ShowEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QDialog_QBaseResizeEvent(QDialog* self, QResizeEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_ResizeEvent_IsBase(true);
        vqdialog->resizeEvent(param1);
    } else {
        ((VirtualQDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnResizeEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_ResizeEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_ResizeEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QDialog_QBaseContextMenuEvent(QDialog* self, QContextMenuEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_ContextMenuEvent_IsBase(true);
        vqdialog->contextMenuEvent(param1);
    } else {
        ((VirtualQDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnContextMenuEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Base class handler implementation
bool QDialog_QBaseEventFilter(QDialog* self, QObject* param1, QEvent* param2) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_EventFilter_IsBase(true);
        return vqdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualQDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnEventFilter(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_EventFilter_Callback(reinterpret_cast<VirtualQDialog::QDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int QDialog_DevType(const QDialog* self) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return vqdialog->devType();
    } else {
        return self->QDialog::devType();
    }
}

// Base class handler implementation
int QDialog_QBaseDevType(const QDialog* self) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_DevType_IsBase(true);
        return vqdialog->devType();
    } else {
        return self->QDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDevType(const QDialog* self, intptr_t slot) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_DevType_Callback(reinterpret_cast<VirtualQDialog::QDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int QDialog_HeightForWidth(const QDialog* self, int param1) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return vqdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QDialog_QBaseHeightForWidth(const QDialog* self, int param1) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_HeightForWidth_IsBase(true);
        return vqdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnHeightForWidth(const QDialog* self, intptr_t slot) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_HeightForWidth_Callback(reinterpret_cast<VirtualQDialog::QDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialog_HasHeightForWidth(const QDialog* self) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return vqdialog->hasHeightForWidth();
    } else {
        return self->QDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QDialog_QBaseHasHeightForWidth(const QDialog* self) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_HasHeightForWidth_IsBase(true);
        return vqdialog->hasHeightForWidth();
    } else {
        return self->QDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnHasHeightForWidth(const QDialog* self, intptr_t slot) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualQDialog::QDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QDialog_PaintEngine(const QDialog* self) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return vqdialog->paintEngine();
    } else {
        return self->QDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QDialog_QBasePaintEngine(const QDialog* self) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_PaintEngine_IsBase(true);
        return vqdialog->paintEngine();
    } else {
        return self->QDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnPaintEngine(const QDialog* self, intptr_t slot) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_PaintEngine_Callback(reinterpret_cast<VirtualQDialog::QDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialog_Event(QDialog* self, QEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return vqdialog->event(event);
    } else {
        return ((VirtualQDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool QDialog_QBaseEvent(QDialog* self, QEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Event_IsBase(true);
        return vqdialog->event(event);
    } else {
        return ((VirtualQDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Event_Callback(reinterpret_cast<VirtualQDialog::QDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_MousePressEvent(QDialog* self, QMouseEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->mousePressEvent(event);
    } else {
        ((VirtualQDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseMousePressEvent(QDialog* self, QMouseEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_MousePressEvent_IsBase(true);
        vqdialog->mousePressEvent(event);
    } else {
        ((VirtualQDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMousePressEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_MousePressEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_MouseReleaseEvent(QDialog* self, QMouseEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualQDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseMouseReleaseEvent(QDialog* self, QMouseEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_MouseReleaseEvent_IsBase(true);
        vqdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualQDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMouseReleaseEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_MouseDoubleClickEvent(QDialog* self, QMouseEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseMouseDoubleClickEvent(QDialog* self, QMouseEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_MouseDoubleClickEvent_IsBase(true);
        vqdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMouseDoubleClickEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_MouseMoveEvent(QDialog* self, QMouseEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->mouseMoveEvent(event);
    } else {
        ((VirtualQDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseMouseMoveEvent(QDialog* self, QMouseEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_MouseMoveEvent_IsBase(true);
        vqdialog->mouseMoveEvent(event);
    } else {
        ((VirtualQDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMouseMoveEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_WheelEvent(QDialog* self, QWheelEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->wheelEvent(event);
    } else {
        ((VirtualQDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseWheelEvent(QDialog* self, QWheelEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_WheelEvent_IsBase(true);
        vqdialog->wheelEvent(event);
    } else {
        ((VirtualQDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnWheelEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_WheelEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_KeyReleaseEvent(QDialog* self, QKeyEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->keyReleaseEvent(event);
    } else {
        ((VirtualQDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseKeyReleaseEvent(QDialog* self, QKeyEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_KeyReleaseEvent_IsBase(true);
        vqdialog->keyReleaseEvent(event);
    } else {
        ((VirtualQDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnKeyReleaseEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_FocusInEvent(QDialog* self, QFocusEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->focusInEvent(event);
    } else {
        ((VirtualQDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseFocusInEvent(QDialog* self, QFocusEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_FocusInEvent_IsBase(true);
        vqdialog->focusInEvent(event);
    } else {
        ((VirtualQDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnFocusInEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_FocusInEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_FocusOutEvent(QDialog* self, QFocusEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->focusOutEvent(event);
    } else {
        ((VirtualQDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseFocusOutEvent(QDialog* self, QFocusEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_FocusOutEvent_IsBase(true);
        vqdialog->focusOutEvent(event);
    } else {
        ((VirtualQDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnFocusOutEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_EnterEvent(QDialog* self, QEnterEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->enterEvent(event);
    } else {
        ((VirtualQDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseEnterEvent(QDialog* self, QEnterEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_EnterEvent_IsBase(true);
        vqdialog->enterEvent(event);
    } else {
        ((VirtualQDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnEnterEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_EnterEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_LeaveEvent(QDialog* self, QEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->leaveEvent(event);
    } else {
        ((VirtualQDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseLeaveEvent(QDialog* self, QEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_LeaveEvent_IsBase(true);
        vqdialog->leaveEvent(event);
    } else {
        ((VirtualQDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnLeaveEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_LeaveEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_PaintEvent(QDialog* self, QPaintEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->paintEvent(event);
    } else {
        ((VirtualQDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBasePaintEvent(QDialog* self, QPaintEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_PaintEvent_IsBase(true);
        vqdialog->paintEvent(event);
    } else {
        ((VirtualQDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnPaintEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_PaintEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_MoveEvent(QDialog* self, QMoveEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->moveEvent(event);
    } else {
        ((VirtualQDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseMoveEvent(QDialog* self, QMoveEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_MoveEvent_IsBase(true);
        vqdialog->moveEvent(event);
    } else {
        ((VirtualQDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMoveEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_MoveEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_TabletEvent(QDialog* self, QTabletEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->tabletEvent(event);
    } else {
        ((VirtualQDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseTabletEvent(QDialog* self, QTabletEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_TabletEvent_IsBase(true);
        vqdialog->tabletEvent(event);
    } else {
        ((VirtualQDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnTabletEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_TabletEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_ActionEvent(QDialog* self, QActionEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->actionEvent(event);
    } else {
        ((VirtualQDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseActionEvent(QDialog* self, QActionEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_ActionEvent_IsBase(true);
        vqdialog->actionEvent(event);
    } else {
        ((VirtualQDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnActionEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_ActionEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_DragEnterEvent(QDialog* self, QDragEnterEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->dragEnterEvent(event);
    } else {
        ((VirtualQDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseDragEnterEvent(QDialog* self, QDragEnterEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_DragEnterEvent_IsBase(true);
        vqdialog->dragEnterEvent(event);
    } else {
        ((VirtualQDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDragEnterEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_DragMoveEvent(QDialog* self, QDragMoveEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->dragMoveEvent(event);
    } else {
        ((VirtualQDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseDragMoveEvent(QDialog* self, QDragMoveEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_DragMoveEvent_IsBase(true);
        vqdialog->dragMoveEvent(event);
    } else {
        ((VirtualQDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDragMoveEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_DragLeaveEvent(QDialog* self, QDragLeaveEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->dragLeaveEvent(event);
    } else {
        ((VirtualQDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseDragLeaveEvent(QDialog* self, QDragLeaveEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_DragLeaveEvent_IsBase(true);
        vqdialog->dragLeaveEvent(event);
    } else {
        ((VirtualQDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDragLeaveEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_DropEvent(QDialog* self, QDropEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->dropEvent(event);
    } else {
        ((VirtualQDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseDropEvent(QDialog* self, QDropEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_DropEvent_IsBase(true);
        vqdialog->dropEvent(event);
    } else {
        ((VirtualQDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDropEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_DropEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_HideEvent(QDialog* self, QHideEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->hideEvent(event);
    } else {
        ((VirtualQDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseHideEvent(QDialog* self, QHideEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_HideEvent_IsBase(true);
        vqdialog->hideEvent(event);
    } else {
        ((VirtualQDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnHideEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_HideEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialog_NativeEvent(QDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return vqdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QDialog_QBaseNativeEvent(QDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_NativeEvent_IsBase(true);
        return vqdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnNativeEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_NativeEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_ChangeEvent(QDialog* self, QEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->changeEvent(param1);
    } else {
        ((VirtualQDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QDialog_QBaseChangeEvent(QDialog* self, QEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_ChangeEvent_IsBase(true);
        vqdialog->changeEvent(param1);
    } else {
        ((VirtualQDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnChangeEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_ChangeEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDialog_Metric(const QDialog* self, int param1) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return vqdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QDialog_QBaseMetric(const QDialog* self, int param1) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Metric_IsBase(true);
        return vqdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMetric(const QDialog* self, intptr_t slot) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Metric_Callback(reinterpret_cast<VirtualQDialog::QDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_InitPainter(const QDialog* self, QPainter* painter) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->initPainter(painter);
    } else {
        ((VirtualQDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QDialog_QBaseInitPainter(const QDialog* self, QPainter* painter) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_InitPainter_IsBase(true);
        vqdialog->initPainter(painter);
    } else {
        ((VirtualQDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnInitPainter(const QDialog* self, intptr_t slot) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_InitPainter_Callback(reinterpret_cast<VirtualQDialog::QDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QDialog_Redirected(const QDialog* self, QPoint* offset) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return vqdialog->redirected(offset);
    } else {
        return ((VirtualQDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QDialog_QBaseRedirected(const QDialog* self, QPoint* offset) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Redirected_IsBase(true);
        return vqdialog->redirected(offset);
    } else {
        return ((VirtualQDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnRedirected(const QDialog* self, intptr_t slot) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Redirected_Callback(reinterpret_cast<VirtualQDialog::QDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QDialog_SharedPainter(const QDialog* self) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return vqdialog->sharedPainter();
    } else {
        return ((VirtualQDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QDialog_QBaseSharedPainter(const QDialog* self) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_SharedPainter_IsBase(true);
        return vqdialog->sharedPainter();
    } else {
        return ((VirtualQDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnSharedPainter(const QDialog* self, intptr_t slot) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_SharedPainter_Callback(reinterpret_cast<VirtualQDialog::QDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_InputMethodEvent(QDialog* self, QInputMethodEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->inputMethodEvent(param1);
    } else {
        ((VirtualQDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QDialog_QBaseInputMethodEvent(QDialog* self, QInputMethodEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_InputMethodEvent_IsBase(true);
        vqdialog->inputMethodEvent(param1);
    } else {
        ((VirtualQDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnInputMethodEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QDialog_InputMethodQuery(const QDialog* self, int param1) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return new QVariant(vqdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QDialog_QBaseInputMethodQuery(const QDialog* self, int param1) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vqdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnInputMethodQuery(const QDialog* self, intptr_t slot) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualQDialog::QDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialog_FocusNextPrevChild(QDialog* self, bool next) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return vqdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualQDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QDialog_QBaseFocusNextPrevChild(QDialog* self, bool next) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_FocusNextPrevChild_IsBase(true);
        return vqdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualQDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnFocusNextPrevChild(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQDialog::QDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_TimerEvent(QDialog* self, QTimerEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->timerEvent(event);
    } else {
        ((VirtualQDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseTimerEvent(QDialog* self, QTimerEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_TimerEvent_IsBase(true);
        vqdialog->timerEvent(event);
    } else {
        ((VirtualQDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnTimerEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_TimerEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_ChildEvent(QDialog* self, QChildEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->childEvent(event);
    } else {
        ((VirtualQDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseChildEvent(QDialog* self, QChildEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_ChildEvent_IsBase(true);
        vqdialog->childEvent(event);
    } else {
        ((VirtualQDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnChildEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_ChildEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_CustomEvent(QDialog* self, QEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->customEvent(event);
    } else {
        ((VirtualQDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseCustomEvent(QDialog* self, QEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_CustomEvent_IsBase(true);
        vqdialog->customEvent(event);
    } else {
        ((VirtualQDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnCustomEvent(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_CustomEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_ConnectNotify(QDialog* self, const QMetaMethod* signal) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->connectNotify(*signal);
    } else {
        ((VirtualQDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDialog_QBaseConnectNotify(QDialog* self, const QMetaMethod* signal) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_ConnectNotify_IsBase(true);
        vqdialog->connectNotify(*signal);
    } else {
        ((VirtualQDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnConnectNotify(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_ConnectNotify_Callback(reinterpret_cast<VirtualQDialog::QDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_DisconnectNotify(QDialog* self, const QMetaMethod* signal) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->disconnectNotify(*signal);
    } else {
        ((VirtualQDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDialog_QBaseDisconnectNotify(QDialog* self, const QMetaMethod* signal) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_DisconnectNotify_IsBase(true);
        vqdialog->disconnectNotify(*signal);
    } else {
        ((VirtualQDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDisconnectNotify(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualQDialog::QDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_AdjustPosition(QDialog* self, QWidget* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->adjustPosition(param1);
    } else {
        ((VirtualQDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void QDialog_QBaseAdjustPosition(QDialog* self, QWidget* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_AdjustPosition_IsBase(true);
        vqdialog->adjustPosition(param1);
    } else {
        ((VirtualQDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnAdjustPosition(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_AdjustPosition_Callback(reinterpret_cast<VirtualQDialog::QDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_UpdateMicroFocus(QDialog* self) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->updateMicroFocus();
    } else {
        ((VirtualQDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QDialog_QBaseUpdateMicroFocus(QDialog* self) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_UpdateMicroFocus_IsBase(true);
        vqdialog->updateMicroFocus();
    } else {
        ((VirtualQDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnUpdateMicroFocus(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQDialog::QDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_Create(QDialog* self) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->create();
    } else {
        ((VirtualQDialog*)self)->create();
    }
}

// Base class handler implementation
void QDialog_QBaseCreate(QDialog* self) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Create_IsBase(true);
        vqdialog->create();
    } else {
        ((VirtualQDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnCreate(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Create_Callback(reinterpret_cast<VirtualQDialog::QDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_Destroy(QDialog* self) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->destroy();
    } else {
        ((VirtualQDialog*)self)->destroy();
    }
}

// Base class handler implementation
void QDialog_QBaseDestroy(QDialog* self) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Destroy_IsBase(true);
        vqdialog->destroy();
    } else {
        ((VirtualQDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDestroy(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Destroy_Callback(reinterpret_cast<VirtualQDialog::QDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialog_FocusNextChild(QDialog* self) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return vqdialog->focusNextChild();
    } else {
        return ((VirtualQDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QDialog_QBaseFocusNextChild(QDialog* self) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_FocusNextChild_IsBase(true);
        return vqdialog->focusNextChild();
    } else {
        return ((VirtualQDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnFocusNextChild(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_FocusNextChild_Callback(reinterpret_cast<VirtualQDialog::QDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialog_FocusPreviousChild(QDialog* self) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return vqdialog->focusPreviousChild();
    } else {
        return ((VirtualQDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QDialog_QBaseFocusPreviousChild(QDialog* self) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_FocusPreviousChild_IsBase(true);
        return vqdialog->focusPreviousChild();
    } else {
        return ((VirtualQDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnFocusPreviousChild(QDialog* self, intptr_t slot) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualQDialog::QDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDialog_Sender(const QDialog* self) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return vqdialog->sender();
    } else {
        return ((VirtualQDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDialog_QBaseSender(const QDialog* self) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Sender_IsBase(true);
        return vqdialog->sender();
    } else {
        return ((VirtualQDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnSender(const QDialog* self, intptr_t slot) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Sender_Callback(reinterpret_cast<VirtualQDialog::QDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDialog_SenderSignalIndex(const QDialog* self) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return vqdialog->senderSignalIndex();
    } else {
        return ((VirtualQDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDialog_QBaseSenderSignalIndex(const QDialog* self) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_SenderSignalIndex_IsBase(true);
        return vqdialog->senderSignalIndex();
    } else {
        return ((VirtualQDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnSenderSignalIndex(const QDialog* self, intptr_t slot) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDialog::QDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDialog_Receivers(const QDialog* self, const char* signal) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return vqdialog->receivers(signal);
    } else {
        return ((VirtualQDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDialog_QBaseReceivers(const QDialog* self, const char* signal) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Receivers_IsBase(true);
        return vqdialog->receivers(signal);
    } else {
        return ((VirtualQDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnReceivers(const QDialog* self, intptr_t slot) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_Receivers_Callback(reinterpret_cast<VirtualQDialog::QDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialog_IsSignalConnected(const QDialog* self, const QMetaMethod* signal) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return vqdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualQDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDialog_QBaseIsSignalConnected(const QDialog* self, const QMetaMethod* signal) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_IsSignalConnected_IsBase(true);
        return vqdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualQDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnIsSignalConnected(const QDialog* self, intptr_t slot) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualQDialog::QDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QDialog_GetDecodedMetricF(const QDialog* self, int metricA, int metricB) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        return vqdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QDialog_QBaseGetDecodedMetricF(const QDialog* self, int metricA, int metricB) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_GetDecodedMetricF_IsBase(true);
        return vqdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnGetDecodedMetricF(const QDialog* self, intptr_t slot) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog && vqdialog->isVirtualQDialog) {
        vqdialog->setQDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQDialog::QDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void QDialog_Delete(QDialog* self) {
    delete self;
}
