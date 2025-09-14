#include <KNameAndUrlInputDialog>
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
#include <knameandurlinputdialog.h>
#include "libknameandurlinputdialog.h"
#include "libknameandurlinputdialog.hxx"

KNameAndUrlInputDialog* KNameAndUrlInputDialog_new(const libqt_string nameLabel, const libqt_string urlLabel, const QUrl* startDir, QWidget* parent) {
    QString nameLabel_QString = QString::fromUtf8(nameLabel.data, nameLabel.len);
    QString urlLabel_QString = QString::fromUtf8(urlLabel.data, urlLabel.len);
    return new VirtualKNameAndUrlInputDialog(nameLabel_QString, urlLabel_QString, *startDir, parent);
}

QMetaObject* KNameAndUrlInputDialog_MetaObject(const KNameAndUrlInputDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNameAndUrlInputDialog_Metacast(KNameAndUrlInputDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNameAndUrlInputDialog_Metacall(KNameAndUrlInputDialog* self, int param1, int param2, void** param3) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KNameAndUrlInputDialog_Tr(const char* s) {
    QString _ret = KNameAndUrlInputDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNameAndUrlInputDialog_SetSuggestedName(KNameAndUrlInputDialog* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setSuggestedName(name_QString);
}

void KNameAndUrlInputDialog_SetSuggestedUrl(KNameAndUrlInputDialog* self, const QUrl* url) {
    self->setSuggestedUrl(*url);
}

libqt_string KNameAndUrlInputDialog_Name(const KNameAndUrlInputDialog* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KNameAndUrlInputDialog_Url(const KNameAndUrlInputDialog* self) {
    return new QUrl(self->url());
}

libqt_string KNameAndUrlInputDialog_UrlText(const KNameAndUrlInputDialog* self) {
    QString _ret = self->urlText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNameAndUrlInputDialog_Tr2(const char* s, const char* c) {
    QString _ret = KNameAndUrlInputDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNameAndUrlInputDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = KNameAndUrlInputDialog::tr(s, c, static_cast<int>(n));
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
int KNameAndUrlInputDialog_QBaseMetacall(KNameAndUrlInputDialog* self, int param1, int param2, void** param3) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Metacall_IsBase(true);
        return vknameandurlinputdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KNameAndUrlInputDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnMetacall(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Metacall_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_SetVisible(KNameAndUrlInputDialog* self, bool visible) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setVisible(visible);
    } else {
        self->KNameAndUrlInputDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseSetVisible(KNameAndUrlInputDialog* self, bool visible) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_SetVisible_IsBase(true);
        vknameandurlinputdialog->setVisible(visible);
    } else {
        self->KNameAndUrlInputDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnSetVisible(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_SetVisible_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KNameAndUrlInputDialog_SizeHint(const KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return new QSize(vknameandurlinputdialog->sizeHint());
    } else {
        return new QSize(((VirtualKNameAndUrlInputDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KNameAndUrlInputDialog_QBaseSizeHint(const KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_SizeHint_IsBase(true);
        return new QSize(vknameandurlinputdialog->sizeHint());
    } else {
        return new QSize(((VirtualKNameAndUrlInputDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnSizeHint(const KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_SizeHint_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KNameAndUrlInputDialog_MinimumSizeHint(const KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return new QSize(vknameandurlinputdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKNameAndUrlInputDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KNameAndUrlInputDialog_QBaseMinimumSizeHint(const KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vknameandurlinputdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKNameAndUrlInputDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnMinimumSizeHint(const KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_Open(KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->open();
    } else {
        self->KNameAndUrlInputDialog::open();
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseOpen(KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Open_IsBase(true);
        vknameandurlinputdialog->open();
    } else {
        self->KNameAndUrlInputDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnOpen(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Open_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KNameAndUrlInputDialog_Exec(KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return vknameandurlinputdialog->exec();
    } else {
        return self->KNameAndUrlInputDialog::exec();
    }
}

// Base class handler implementation
int KNameAndUrlInputDialog_QBaseExec(KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Exec_IsBase(true);
        return vknameandurlinputdialog->exec();
    } else {
        return self->KNameAndUrlInputDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnExec(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Exec_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_Done(KNameAndUrlInputDialog* self, int param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->done(static_cast<int>(param1));
    } else {
        self->KNameAndUrlInputDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseDone(KNameAndUrlInputDialog* self, int param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Done_IsBase(true);
        vknameandurlinputdialog->done(static_cast<int>(param1));
    } else {
        self->KNameAndUrlInputDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnDone(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Done_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_Accept(KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->accept();
    } else {
        self->KNameAndUrlInputDialog::accept();
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseAccept(KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Accept_IsBase(true);
        vknameandurlinputdialog->accept();
    } else {
        self->KNameAndUrlInputDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnAccept(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Accept_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_Reject(KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->reject();
    } else {
        self->KNameAndUrlInputDialog::reject();
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseReject(KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Reject_IsBase(true);
        vknameandurlinputdialog->reject();
    } else {
        self->KNameAndUrlInputDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnReject(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Reject_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_KeyPressEvent(KNameAndUrlInputDialog* self, QKeyEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->keyPressEvent(param1);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseKeyPressEvent(KNameAndUrlInputDialog* self, QKeyEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_KeyPressEvent_IsBase(true);
        vknameandurlinputdialog->keyPressEvent(param1);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnKeyPressEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_CloseEvent(KNameAndUrlInputDialog* self, QCloseEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->closeEvent(param1);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseCloseEvent(KNameAndUrlInputDialog* self, QCloseEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_CloseEvent_IsBase(true);
        vknameandurlinputdialog->closeEvent(param1);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnCloseEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_CloseEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_ShowEvent(KNameAndUrlInputDialog* self, QShowEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->showEvent(param1);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseShowEvent(KNameAndUrlInputDialog* self, QShowEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_ShowEvent_IsBase(true);
        vknameandurlinputdialog->showEvent(param1);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnShowEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_ShowEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_ResizeEvent(KNameAndUrlInputDialog* self, QResizeEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->resizeEvent(param1);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseResizeEvent(KNameAndUrlInputDialog* self, QResizeEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_ResizeEvent_IsBase(true);
        vknameandurlinputdialog->resizeEvent(param1);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnResizeEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_ContextMenuEvent(KNameAndUrlInputDialog* self, QContextMenuEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseContextMenuEvent(KNameAndUrlInputDialog* self, QContextMenuEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_ContextMenuEvent_IsBase(true);
        vknameandurlinputdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnContextMenuEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNameAndUrlInputDialog_EventFilter(KNameAndUrlInputDialog* self, QObject* param1, QEvent* param2) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return vknameandurlinputdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KNameAndUrlInputDialog_QBaseEventFilter(KNameAndUrlInputDialog* self, QObject* param1, QEvent* param2) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_EventFilter_IsBase(true);
        return vknameandurlinputdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnEventFilter(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_EventFilter_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KNameAndUrlInputDialog_DevType(const KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return vknameandurlinputdialog->devType();
    } else {
        return self->KNameAndUrlInputDialog::devType();
    }
}

// Base class handler implementation
int KNameAndUrlInputDialog_QBaseDevType(const KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_DevType_IsBase(true);
        return vknameandurlinputdialog->devType();
    } else {
        return self->KNameAndUrlInputDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnDevType(const KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_DevType_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KNameAndUrlInputDialog_HeightForWidth(const KNameAndUrlInputDialog* self, int param1) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return vknameandurlinputdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KNameAndUrlInputDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KNameAndUrlInputDialog_QBaseHeightForWidth(const KNameAndUrlInputDialog* self, int param1) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_HeightForWidth_IsBase(true);
        return vknameandurlinputdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KNameAndUrlInputDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnHeightForWidth(const KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNameAndUrlInputDialog_HasHeightForWidth(const KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return vknameandurlinputdialog->hasHeightForWidth();
    } else {
        return self->KNameAndUrlInputDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KNameAndUrlInputDialog_QBaseHasHeightForWidth(const KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_HasHeightForWidth_IsBase(true);
        return vknameandurlinputdialog->hasHeightForWidth();
    } else {
        return self->KNameAndUrlInputDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnHasHeightForWidth(const KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KNameAndUrlInputDialog_PaintEngine(const KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return vknameandurlinputdialog->paintEngine();
    } else {
        return self->KNameAndUrlInputDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KNameAndUrlInputDialog_QBasePaintEngine(const KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_PaintEngine_IsBase(true);
        return vknameandurlinputdialog->paintEngine();
    } else {
        return self->KNameAndUrlInputDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnPaintEngine(const KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_PaintEngine_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNameAndUrlInputDialog_Event(KNameAndUrlInputDialog* self, QEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return vknameandurlinputdialog->event(event);
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KNameAndUrlInputDialog_QBaseEvent(KNameAndUrlInputDialog* self, QEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Event_IsBase(true);
        return vknameandurlinputdialog->event(event);
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Event_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_MousePressEvent(KNameAndUrlInputDialog* self, QMouseEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->mousePressEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseMousePressEvent(KNameAndUrlInputDialog* self, QMouseEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_MousePressEvent_IsBase(true);
        vknameandurlinputdialog->mousePressEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnMousePressEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_MouseReleaseEvent(KNameAndUrlInputDialog* self, QMouseEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseMouseReleaseEvent(KNameAndUrlInputDialog* self, QMouseEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_MouseReleaseEvent_IsBase(true);
        vknameandurlinputdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnMouseReleaseEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_MouseDoubleClickEvent(KNameAndUrlInputDialog* self, QMouseEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseMouseDoubleClickEvent(KNameAndUrlInputDialog* self, QMouseEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_MouseDoubleClickEvent_IsBase(true);
        vknameandurlinputdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnMouseDoubleClickEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_MouseMoveEvent(KNameAndUrlInputDialog* self, QMouseEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseMouseMoveEvent(KNameAndUrlInputDialog* self, QMouseEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_MouseMoveEvent_IsBase(true);
        vknameandurlinputdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnMouseMoveEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_WheelEvent(KNameAndUrlInputDialog* self, QWheelEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->wheelEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseWheelEvent(KNameAndUrlInputDialog* self, QWheelEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_WheelEvent_IsBase(true);
        vknameandurlinputdialog->wheelEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnWheelEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_WheelEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_KeyReleaseEvent(KNameAndUrlInputDialog* self, QKeyEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseKeyReleaseEvent(KNameAndUrlInputDialog* self, QKeyEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_KeyReleaseEvent_IsBase(true);
        vknameandurlinputdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnKeyReleaseEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_FocusInEvent(KNameAndUrlInputDialog* self, QFocusEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->focusInEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseFocusInEvent(KNameAndUrlInputDialog* self, QFocusEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_FocusInEvent_IsBase(true);
        vknameandurlinputdialog->focusInEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnFocusInEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_FocusOutEvent(KNameAndUrlInputDialog* self, QFocusEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->focusOutEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseFocusOutEvent(KNameAndUrlInputDialog* self, QFocusEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_FocusOutEvent_IsBase(true);
        vknameandurlinputdialog->focusOutEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnFocusOutEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_EnterEvent(KNameAndUrlInputDialog* self, QEnterEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->enterEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseEnterEvent(KNameAndUrlInputDialog* self, QEnterEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_EnterEvent_IsBase(true);
        vknameandurlinputdialog->enterEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnEnterEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_EnterEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_LeaveEvent(KNameAndUrlInputDialog* self, QEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->leaveEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseLeaveEvent(KNameAndUrlInputDialog* self, QEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_LeaveEvent_IsBase(true);
        vknameandurlinputdialog->leaveEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnLeaveEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_PaintEvent(KNameAndUrlInputDialog* self, QPaintEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->paintEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBasePaintEvent(KNameAndUrlInputDialog* self, QPaintEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_PaintEvent_IsBase(true);
        vknameandurlinputdialog->paintEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnPaintEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_PaintEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_MoveEvent(KNameAndUrlInputDialog* self, QMoveEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->moveEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseMoveEvent(KNameAndUrlInputDialog* self, QMoveEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_MoveEvent_IsBase(true);
        vknameandurlinputdialog->moveEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnMoveEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_MoveEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_TabletEvent(KNameAndUrlInputDialog* self, QTabletEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->tabletEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseTabletEvent(KNameAndUrlInputDialog* self, QTabletEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_TabletEvent_IsBase(true);
        vknameandurlinputdialog->tabletEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnTabletEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_TabletEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_ActionEvent(KNameAndUrlInputDialog* self, QActionEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->actionEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseActionEvent(KNameAndUrlInputDialog* self, QActionEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_ActionEvent_IsBase(true);
        vknameandurlinputdialog->actionEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnActionEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_ActionEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_DragEnterEvent(KNameAndUrlInputDialog* self, QDragEnterEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->dragEnterEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseDragEnterEvent(KNameAndUrlInputDialog* self, QDragEnterEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_DragEnterEvent_IsBase(true);
        vknameandurlinputdialog->dragEnterEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnDragEnterEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_DragMoveEvent(KNameAndUrlInputDialog* self, QDragMoveEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->dragMoveEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseDragMoveEvent(KNameAndUrlInputDialog* self, QDragMoveEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_DragMoveEvent_IsBase(true);
        vknameandurlinputdialog->dragMoveEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnDragMoveEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_DragLeaveEvent(KNameAndUrlInputDialog* self, QDragLeaveEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseDragLeaveEvent(KNameAndUrlInputDialog* self, QDragLeaveEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_DragLeaveEvent_IsBase(true);
        vknameandurlinputdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnDragLeaveEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_DropEvent(KNameAndUrlInputDialog* self, QDropEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->dropEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseDropEvent(KNameAndUrlInputDialog* self, QDropEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_DropEvent_IsBase(true);
        vknameandurlinputdialog->dropEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnDropEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_DropEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_HideEvent(KNameAndUrlInputDialog* self, QHideEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->hideEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseHideEvent(KNameAndUrlInputDialog* self, QHideEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_HideEvent_IsBase(true);
        vknameandurlinputdialog->hideEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnHideEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_HideEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNameAndUrlInputDialog_NativeEvent(KNameAndUrlInputDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return vknameandurlinputdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KNameAndUrlInputDialog_QBaseNativeEvent(KNameAndUrlInputDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_NativeEvent_IsBase(true);
        return vknameandurlinputdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnNativeEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_NativeEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_ChangeEvent(KNameAndUrlInputDialog* self, QEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->changeEvent(param1);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseChangeEvent(KNameAndUrlInputDialog* self, QEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_ChangeEvent_IsBase(true);
        vknameandurlinputdialog->changeEvent(param1);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnChangeEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KNameAndUrlInputDialog_Metric(const KNameAndUrlInputDialog* self, int param1) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return vknameandurlinputdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KNameAndUrlInputDialog_QBaseMetric(const KNameAndUrlInputDialog* self, int param1) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Metric_IsBase(true);
        return vknameandurlinputdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnMetric(const KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Metric_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_InitPainter(const KNameAndUrlInputDialog* self, QPainter* painter) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->initPainter(painter);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseInitPainter(const KNameAndUrlInputDialog* self, QPainter* painter) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_InitPainter_IsBase(true);
        vknameandurlinputdialog->initPainter(painter);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnInitPainter(const KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_InitPainter_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KNameAndUrlInputDialog_Redirected(const KNameAndUrlInputDialog* self, QPoint* offset) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return vknameandurlinputdialog->redirected(offset);
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KNameAndUrlInputDialog_QBaseRedirected(const KNameAndUrlInputDialog* self, QPoint* offset) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Redirected_IsBase(true);
        return vknameandurlinputdialog->redirected(offset);
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnRedirected(const KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Redirected_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KNameAndUrlInputDialog_SharedPainter(const KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return vknameandurlinputdialog->sharedPainter();
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KNameAndUrlInputDialog_QBaseSharedPainter(const KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_SharedPainter_IsBase(true);
        return vknameandurlinputdialog->sharedPainter();
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnSharedPainter(const KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_SharedPainter_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_InputMethodEvent(KNameAndUrlInputDialog* self, QInputMethodEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseInputMethodEvent(KNameAndUrlInputDialog* self, QInputMethodEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_InputMethodEvent_IsBase(true);
        vknameandurlinputdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnInputMethodEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KNameAndUrlInputDialog_InputMethodQuery(const KNameAndUrlInputDialog* self, int param1) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return new QVariant(vknameandurlinputdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKNameAndUrlInputDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KNameAndUrlInputDialog_QBaseInputMethodQuery(const KNameAndUrlInputDialog* self, int param1) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vknameandurlinputdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKNameAndUrlInputDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnInputMethodQuery(const KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNameAndUrlInputDialog_FocusNextPrevChild(KNameAndUrlInputDialog* self, bool next) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return vknameandurlinputdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KNameAndUrlInputDialog_QBaseFocusNextPrevChild(KNameAndUrlInputDialog* self, bool next) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_FocusNextPrevChild_IsBase(true);
        return vknameandurlinputdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnFocusNextPrevChild(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_TimerEvent(KNameAndUrlInputDialog* self, QTimerEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->timerEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseTimerEvent(KNameAndUrlInputDialog* self, QTimerEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_TimerEvent_IsBase(true);
        vknameandurlinputdialog->timerEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnTimerEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_TimerEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_ChildEvent(KNameAndUrlInputDialog* self, QChildEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->childEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseChildEvent(KNameAndUrlInputDialog* self, QChildEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_ChildEvent_IsBase(true);
        vknameandurlinputdialog->childEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnChildEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_ChildEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_CustomEvent(KNameAndUrlInputDialog* self, QEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->customEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseCustomEvent(KNameAndUrlInputDialog* self, QEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_CustomEvent_IsBase(true);
        vknameandurlinputdialog->customEvent(event);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnCustomEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_CustomEvent_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_ConnectNotify(KNameAndUrlInputDialog* self, const QMetaMethod* signal) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->connectNotify(*signal);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseConnectNotify(KNameAndUrlInputDialog* self, const QMetaMethod* signal) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_ConnectNotify_IsBase(true);
        vknameandurlinputdialog->connectNotify(*signal);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnConnectNotify(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_DisconnectNotify(KNameAndUrlInputDialog* self, const QMetaMethod* signal) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseDisconnectNotify(KNameAndUrlInputDialog* self, const QMetaMethod* signal) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_DisconnectNotify_IsBase(true);
        vknameandurlinputdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnDisconnectNotify(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_AdjustPosition(KNameAndUrlInputDialog* self, QWidget* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->adjustPosition(param1);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseAdjustPosition(KNameAndUrlInputDialog* self, QWidget* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_AdjustPosition_IsBase(true);
        vknameandurlinputdialog->adjustPosition(param1);
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnAdjustPosition(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_UpdateMicroFocus(KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->updateMicroFocus();
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseUpdateMicroFocus(KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_UpdateMicroFocus_IsBase(true);
        vknameandurlinputdialog->updateMicroFocus();
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnUpdateMicroFocus(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_Create(KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->create();
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->create();
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseCreate(KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Create_IsBase(true);
        vknameandurlinputdialog->create();
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnCreate(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Create_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KNameAndUrlInputDialog_Destroy(KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->destroy();
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_QBaseDestroy(KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Destroy_IsBase(true);
        vknameandurlinputdialog->destroy();
    } else {
        ((VirtualKNameAndUrlInputDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnDestroy(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Destroy_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNameAndUrlInputDialog_FocusNextChild(KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return vknameandurlinputdialog->focusNextChild();
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KNameAndUrlInputDialog_QBaseFocusNextChild(KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_FocusNextChild_IsBase(true);
        return vknameandurlinputdialog->focusNextChild();
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnFocusNextChild(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNameAndUrlInputDialog_FocusPreviousChild(KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return vknameandurlinputdialog->focusPreviousChild();
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KNameAndUrlInputDialog_QBaseFocusPreviousChild(KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_FocusPreviousChild_IsBase(true);
        return vknameandurlinputdialog->focusPreviousChild();
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnFocusPreviousChild(KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KNameAndUrlInputDialog_Sender(const KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return vknameandurlinputdialog->sender();
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KNameAndUrlInputDialog_QBaseSender(const KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Sender_IsBase(true);
        return vknameandurlinputdialog->sender();
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnSender(const KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Sender_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KNameAndUrlInputDialog_SenderSignalIndex(const KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return vknameandurlinputdialog->senderSignalIndex();
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KNameAndUrlInputDialog_QBaseSenderSignalIndex(const KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_SenderSignalIndex_IsBase(true);
        return vknameandurlinputdialog->senderSignalIndex();
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnSenderSignalIndex(const KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KNameAndUrlInputDialog_Receivers(const KNameAndUrlInputDialog* self, const char* signal) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return vknameandurlinputdialog->receivers(signal);
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KNameAndUrlInputDialog_QBaseReceivers(const KNameAndUrlInputDialog* self, const char* signal) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Receivers_IsBase(true);
        return vknameandurlinputdialog->receivers(signal);
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnReceivers(const KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_Receivers_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNameAndUrlInputDialog_IsSignalConnected(const KNameAndUrlInputDialog* self, const QMetaMethod* signal) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return vknameandurlinputdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KNameAndUrlInputDialog_QBaseIsSignalConnected(const KNameAndUrlInputDialog* self, const QMetaMethod* signal) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_IsSignalConnected_IsBase(true);
        return vknameandurlinputdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnIsSignalConnected(const KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KNameAndUrlInputDialog_GetDecodedMetricF(const KNameAndUrlInputDialog* self, int metricA, int metricB) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        return vknameandurlinputdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KNameAndUrlInputDialog_QBaseGetDecodedMetricF(const KNameAndUrlInputDialog* self, int metricA, int metricB) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_GetDecodedMetricF_IsBase(true);
        return vknameandurlinputdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKNameAndUrlInputDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnGetDecodedMetricF(const KNameAndUrlInputDialog* self, intptr_t slot) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog && vknameandurlinputdialog->isVirtualKNameAndUrlInputDialog) {
        vknameandurlinputdialog->setKNameAndUrlInputDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KNameAndUrlInputDialog_Delete(KNameAndUrlInputDialog* self) {
    delete self;
}
