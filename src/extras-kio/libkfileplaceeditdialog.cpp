#include <KFilePlaceEditDialog>
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
#include <kfileplaceeditdialog.h>
#include "libkfileplaceeditdialog.h"
#include "libkfileplaceeditdialog.hxx"

KFilePlaceEditDialog* KFilePlaceEditDialog_new(bool allowGlobal, const QUrl* url, const libqt_string label, const libqt_string icon, bool isAddingNewPlace) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    return new VirtualKFilePlaceEditDialog(allowGlobal, *url, label_QString, icon_QString, isAddingNewPlace);
}

KFilePlaceEditDialog* KFilePlaceEditDialog_new2(bool allowGlobal, const QUrl* url, const libqt_string label, const libqt_string icon, bool isAddingNewPlace, bool appLocal) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    return new VirtualKFilePlaceEditDialog(allowGlobal, *url, label_QString, icon_QString, isAddingNewPlace, appLocal);
}

KFilePlaceEditDialog* KFilePlaceEditDialog_new3(bool allowGlobal, const QUrl* url, const libqt_string label, const libqt_string icon, bool isAddingNewPlace, bool appLocal, int iconSize) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    return new VirtualKFilePlaceEditDialog(allowGlobal, *url, label_QString, icon_QString, isAddingNewPlace, appLocal, static_cast<int>(iconSize));
}

KFilePlaceEditDialog* KFilePlaceEditDialog_new4(bool allowGlobal, const QUrl* url, const libqt_string label, const libqt_string icon, bool isAddingNewPlace, bool appLocal, int iconSize, QWidget* parent) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    return new VirtualKFilePlaceEditDialog(allowGlobal, *url, label_QString, icon_QString, isAddingNewPlace, appLocal, static_cast<int>(iconSize), parent);
}

QMetaObject* KFilePlaceEditDialog_MetaObject(const KFilePlaceEditDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFilePlaceEditDialog_Metacast(KFilePlaceEditDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFilePlaceEditDialog_Metacall(KFilePlaceEditDialog* self, int param1, int param2, void** param3) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KFilePlaceEditDialog_Tr(const char* s) {
    QString _ret = KFilePlaceEditDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KFilePlaceEditDialog_GetInformation(bool allowGlobal, QUrl* url, libqt_string label, libqt_string icon, bool isAddingNewPlace, bool* appLocal, int iconSize) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    return KFilePlaceEditDialog::getInformation(allowGlobal, *url, label_QString, icon_QString, isAddingNewPlace, *appLocal, static_cast<int>(iconSize));
}

QUrl* KFilePlaceEditDialog_Url(const KFilePlaceEditDialog* self) {
    return new QUrl(self->url());
}

libqt_string KFilePlaceEditDialog_Label(const KFilePlaceEditDialog* self) {
    QString _ret = self->label();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFilePlaceEditDialog_Icon(const KFilePlaceEditDialog* self) {
    QString _ret = self->icon();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KFilePlaceEditDialog_ApplicationLocal(const KFilePlaceEditDialog* self) {
    return self->applicationLocal();
}

void KFilePlaceEditDialog_UrlChanged(KFilePlaceEditDialog* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->urlChanged(param1_QString);
}

libqt_string KFilePlaceEditDialog_Tr2(const char* s, const char* c) {
    QString _ret = KFilePlaceEditDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFilePlaceEditDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = KFilePlaceEditDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KFilePlaceEditDialog_GetInformation8(bool allowGlobal, QUrl* url, libqt_string label, libqt_string icon, bool isAddingNewPlace, bool* appLocal, int iconSize, QWidget* parent) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    return KFilePlaceEditDialog::getInformation(allowGlobal, *url, label_QString, icon_QString, isAddingNewPlace, *appLocal, static_cast<int>(iconSize), parent);
}

// Base class handler implementation
int KFilePlaceEditDialog_QBaseMetacall(KFilePlaceEditDialog* self, int param1, int param2, void** param3) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Metacall_IsBase(true);
        return vkfileplaceeditdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KFilePlaceEditDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnMetacall(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Metacall_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_SetVisible(KFilePlaceEditDialog* self, bool visible) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setVisible(visible);
    } else {
        self->KFilePlaceEditDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseSetVisible(KFilePlaceEditDialog* self, bool visible) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_SetVisible_IsBase(true);
        vkfileplaceeditdialog->setVisible(visible);
    } else {
        self->KFilePlaceEditDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnSetVisible(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_SetVisible_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KFilePlaceEditDialog_SizeHint(const KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return new QSize(vkfileplaceeditdialog->sizeHint());
    } else {
        return new QSize(((VirtualKFilePlaceEditDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KFilePlaceEditDialog_QBaseSizeHint(const KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_SizeHint_IsBase(true);
        return new QSize(vkfileplaceeditdialog->sizeHint());
    } else {
        return new QSize(((VirtualKFilePlaceEditDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnSizeHint(const KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_SizeHint_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KFilePlaceEditDialog_MinimumSizeHint(const KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return new QSize(vkfileplaceeditdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKFilePlaceEditDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KFilePlaceEditDialog_QBaseMinimumSizeHint(const KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkfileplaceeditdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKFilePlaceEditDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnMinimumSizeHint(const KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_Open(KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->open();
    } else {
        self->KFilePlaceEditDialog::open();
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseOpen(KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Open_IsBase(true);
        vkfileplaceeditdialog->open();
    } else {
        self->KFilePlaceEditDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnOpen(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Open_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlaceEditDialog_Exec(KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return vkfileplaceeditdialog->exec();
    } else {
        return self->KFilePlaceEditDialog::exec();
    }
}

// Base class handler implementation
int KFilePlaceEditDialog_QBaseExec(KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Exec_IsBase(true);
        return vkfileplaceeditdialog->exec();
    } else {
        return self->KFilePlaceEditDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnExec(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Exec_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_Done(KFilePlaceEditDialog* self, int param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->done(static_cast<int>(param1));
    } else {
        self->KFilePlaceEditDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseDone(KFilePlaceEditDialog* self, int param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Done_IsBase(true);
        vkfileplaceeditdialog->done(static_cast<int>(param1));
    } else {
        self->KFilePlaceEditDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnDone(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Done_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_Accept(KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->accept();
    } else {
        self->KFilePlaceEditDialog::accept();
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseAccept(KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Accept_IsBase(true);
        vkfileplaceeditdialog->accept();
    } else {
        self->KFilePlaceEditDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnAccept(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Accept_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_Reject(KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->reject();
    } else {
        self->KFilePlaceEditDialog::reject();
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseReject(KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Reject_IsBase(true);
        vkfileplaceeditdialog->reject();
    } else {
        self->KFilePlaceEditDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnReject(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Reject_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_KeyPressEvent(KFilePlaceEditDialog* self, QKeyEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->keyPressEvent(param1);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseKeyPressEvent(KFilePlaceEditDialog* self, QKeyEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_KeyPressEvent_IsBase(true);
        vkfileplaceeditdialog->keyPressEvent(param1);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnKeyPressEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_CloseEvent(KFilePlaceEditDialog* self, QCloseEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->closeEvent(param1);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseCloseEvent(KFilePlaceEditDialog* self, QCloseEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_CloseEvent_IsBase(true);
        vkfileplaceeditdialog->closeEvent(param1);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnCloseEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_CloseEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_ShowEvent(KFilePlaceEditDialog* self, QShowEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->showEvent(param1);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseShowEvent(KFilePlaceEditDialog* self, QShowEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_ShowEvent_IsBase(true);
        vkfileplaceeditdialog->showEvent(param1);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnShowEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_ShowEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_ResizeEvent(KFilePlaceEditDialog* self, QResizeEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->resizeEvent(param1);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseResizeEvent(KFilePlaceEditDialog* self, QResizeEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_ResizeEvent_IsBase(true);
        vkfileplaceeditdialog->resizeEvent(param1);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnResizeEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_ContextMenuEvent(KFilePlaceEditDialog* self, QContextMenuEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseContextMenuEvent(KFilePlaceEditDialog* self, QContextMenuEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_ContextMenuEvent_IsBase(true);
        vkfileplaceeditdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnContextMenuEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlaceEditDialog_EventFilter(KFilePlaceEditDialog* self, QObject* param1, QEvent* param2) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return vkfileplaceeditdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KFilePlaceEditDialog_QBaseEventFilter(KFilePlaceEditDialog* self, QObject* param1, QEvent* param2) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_EventFilter_IsBase(true);
        return vkfileplaceeditdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnEventFilter(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_EventFilter_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlaceEditDialog_DevType(const KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return vkfileplaceeditdialog->devType();
    } else {
        return self->KFilePlaceEditDialog::devType();
    }
}

// Base class handler implementation
int KFilePlaceEditDialog_QBaseDevType(const KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_DevType_IsBase(true);
        return vkfileplaceeditdialog->devType();
    } else {
        return self->KFilePlaceEditDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnDevType(const KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_DevType_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlaceEditDialog_HeightForWidth(const KFilePlaceEditDialog* self, int param1) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return vkfileplaceeditdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KFilePlaceEditDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KFilePlaceEditDialog_QBaseHeightForWidth(const KFilePlaceEditDialog* self, int param1) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_HeightForWidth_IsBase(true);
        return vkfileplaceeditdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KFilePlaceEditDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnHeightForWidth(const KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlaceEditDialog_HasHeightForWidth(const KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return vkfileplaceeditdialog->hasHeightForWidth();
    } else {
        return self->KFilePlaceEditDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KFilePlaceEditDialog_QBaseHasHeightForWidth(const KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_HasHeightForWidth_IsBase(true);
        return vkfileplaceeditdialog->hasHeightForWidth();
    } else {
        return self->KFilePlaceEditDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnHasHeightForWidth(const KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KFilePlaceEditDialog_PaintEngine(const KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return vkfileplaceeditdialog->paintEngine();
    } else {
        return self->KFilePlaceEditDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KFilePlaceEditDialog_QBasePaintEngine(const KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_PaintEngine_IsBase(true);
        return vkfileplaceeditdialog->paintEngine();
    } else {
        return self->KFilePlaceEditDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnPaintEngine(const KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_PaintEngine_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlaceEditDialog_Event(KFilePlaceEditDialog* self, QEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return vkfileplaceeditdialog->event(event);
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KFilePlaceEditDialog_QBaseEvent(KFilePlaceEditDialog* self, QEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Event_IsBase(true);
        return vkfileplaceeditdialog->event(event);
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Event_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_MousePressEvent(KFilePlaceEditDialog* self, QMouseEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->mousePressEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseMousePressEvent(KFilePlaceEditDialog* self, QMouseEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_MousePressEvent_IsBase(true);
        vkfileplaceeditdialog->mousePressEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnMousePressEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_MouseReleaseEvent(KFilePlaceEditDialog* self, QMouseEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseMouseReleaseEvent(KFilePlaceEditDialog* self, QMouseEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_MouseReleaseEvent_IsBase(true);
        vkfileplaceeditdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnMouseReleaseEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_MouseDoubleClickEvent(KFilePlaceEditDialog* self, QMouseEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseMouseDoubleClickEvent(KFilePlaceEditDialog* self, QMouseEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_MouseDoubleClickEvent_IsBase(true);
        vkfileplaceeditdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnMouseDoubleClickEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_MouseMoveEvent(KFilePlaceEditDialog* self, QMouseEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseMouseMoveEvent(KFilePlaceEditDialog* self, QMouseEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_MouseMoveEvent_IsBase(true);
        vkfileplaceeditdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnMouseMoveEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_WheelEvent(KFilePlaceEditDialog* self, QWheelEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->wheelEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseWheelEvent(KFilePlaceEditDialog* self, QWheelEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_WheelEvent_IsBase(true);
        vkfileplaceeditdialog->wheelEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnWheelEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_WheelEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_KeyReleaseEvent(KFilePlaceEditDialog* self, QKeyEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseKeyReleaseEvent(KFilePlaceEditDialog* self, QKeyEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_KeyReleaseEvent_IsBase(true);
        vkfileplaceeditdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnKeyReleaseEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_FocusInEvent(KFilePlaceEditDialog* self, QFocusEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->focusInEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseFocusInEvent(KFilePlaceEditDialog* self, QFocusEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_FocusInEvent_IsBase(true);
        vkfileplaceeditdialog->focusInEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnFocusInEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_FocusOutEvent(KFilePlaceEditDialog* self, QFocusEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->focusOutEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseFocusOutEvent(KFilePlaceEditDialog* self, QFocusEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_FocusOutEvent_IsBase(true);
        vkfileplaceeditdialog->focusOutEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnFocusOutEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_EnterEvent(KFilePlaceEditDialog* self, QEnterEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->enterEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseEnterEvent(KFilePlaceEditDialog* self, QEnterEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_EnterEvent_IsBase(true);
        vkfileplaceeditdialog->enterEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnEnterEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_EnterEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_LeaveEvent(KFilePlaceEditDialog* self, QEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->leaveEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseLeaveEvent(KFilePlaceEditDialog* self, QEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_LeaveEvent_IsBase(true);
        vkfileplaceeditdialog->leaveEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnLeaveEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_PaintEvent(KFilePlaceEditDialog* self, QPaintEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->paintEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBasePaintEvent(KFilePlaceEditDialog* self, QPaintEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_PaintEvent_IsBase(true);
        vkfileplaceeditdialog->paintEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnPaintEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_PaintEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_MoveEvent(KFilePlaceEditDialog* self, QMoveEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->moveEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseMoveEvent(KFilePlaceEditDialog* self, QMoveEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_MoveEvent_IsBase(true);
        vkfileplaceeditdialog->moveEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnMoveEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_MoveEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_TabletEvent(KFilePlaceEditDialog* self, QTabletEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->tabletEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseTabletEvent(KFilePlaceEditDialog* self, QTabletEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_TabletEvent_IsBase(true);
        vkfileplaceeditdialog->tabletEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnTabletEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_TabletEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_ActionEvent(KFilePlaceEditDialog* self, QActionEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->actionEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseActionEvent(KFilePlaceEditDialog* self, QActionEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_ActionEvent_IsBase(true);
        vkfileplaceeditdialog->actionEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnActionEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_ActionEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_DragEnterEvent(KFilePlaceEditDialog* self, QDragEnterEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->dragEnterEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseDragEnterEvent(KFilePlaceEditDialog* self, QDragEnterEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_DragEnterEvent_IsBase(true);
        vkfileplaceeditdialog->dragEnterEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnDragEnterEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_DragMoveEvent(KFilePlaceEditDialog* self, QDragMoveEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->dragMoveEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseDragMoveEvent(KFilePlaceEditDialog* self, QDragMoveEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_DragMoveEvent_IsBase(true);
        vkfileplaceeditdialog->dragMoveEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnDragMoveEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_DragLeaveEvent(KFilePlaceEditDialog* self, QDragLeaveEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseDragLeaveEvent(KFilePlaceEditDialog* self, QDragLeaveEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_DragLeaveEvent_IsBase(true);
        vkfileplaceeditdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnDragLeaveEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_DropEvent(KFilePlaceEditDialog* self, QDropEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->dropEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseDropEvent(KFilePlaceEditDialog* self, QDropEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_DropEvent_IsBase(true);
        vkfileplaceeditdialog->dropEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnDropEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_DropEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_HideEvent(KFilePlaceEditDialog* self, QHideEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->hideEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseHideEvent(KFilePlaceEditDialog* self, QHideEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_HideEvent_IsBase(true);
        vkfileplaceeditdialog->hideEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnHideEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_HideEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlaceEditDialog_NativeEvent(KFilePlaceEditDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return vkfileplaceeditdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KFilePlaceEditDialog_QBaseNativeEvent(KFilePlaceEditDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_NativeEvent_IsBase(true);
        return vkfileplaceeditdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnNativeEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_NativeEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_ChangeEvent(KFilePlaceEditDialog* self, QEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->changeEvent(param1);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseChangeEvent(KFilePlaceEditDialog* self, QEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_ChangeEvent_IsBase(true);
        vkfileplaceeditdialog->changeEvent(param1);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnChangeEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlaceEditDialog_Metric(const KFilePlaceEditDialog* self, int param1) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return vkfileplaceeditdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KFilePlaceEditDialog_QBaseMetric(const KFilePlaceEditDialog* self, int param1) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Metric_IsBase(true);
        return vkfileplaceeditdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnMetric(const KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Metric_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_InitPainter(const KFilePlaceEditDialog* self, QPainter* painter) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->initPainter(painter);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseInitPainter(const KFilePlaceEditDialog* self, QPainter* painter) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_InitPainter_IsBase(true);
        vkfileplaceeditdialog->initPainter(painter);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnInitPainter(const KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_InitPainter_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KFilePlaceEditDialog_Redirected(const KFilePlaceEditDialog* self, QPoint* offset) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return vkfileplaceeditdialog->redirected(offset);
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KFilePlaceEditDialog_QBaseRedirected(const KFilePlaceEditDialog* self, QPoint* offset) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Redirected_IsBase(true);
        return vkfileplaceeditdialog->redirected(offset);
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnRedirected(const KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Redirected_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KFilePlaceEditDialog_SharedPainter(const KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return vkfileplaceeditdialog->sharedPainter();
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KFilePlaceEditDialog_QBaseSharedPainter(const KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_SharedPainter_IsBase(true);
        return vkfileplaceeditdialog->sharedPainter();
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnSharedPainter(const KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_SharedPainter_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_InputMethodEvent(KFilePlaceEditDialog* self, QInputMethodEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseInputMethodEvent(KFilePlaceEditDialog* self, QInputMethodEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_InputMethodEvent_IsBase(true);
        vkfileplaceeditdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnInputMethodEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KFilePlaceEditDialog_InputMethodQuery(const KFilePlaceEditDialog* self, int param1) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return new QVariant(vkfileplaceeditdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKFilePlaceEditDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KFilePlaceEditDialog_QBaseInputMethodQuery(const KFilePlaceEditDialog* self, int param1) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkfileplaceeditdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKFilePlaceEditDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnInputMethodQuery(const KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlaceEditDialog_FocusNextPrevChild(KFilePlaceEditDialog* self, bool next) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return vkfileplaceeditdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KFilePlaceEditDialog_QBaseFocusNextPrevChild(KFilePlaceEditDialog* self, bool next) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_FocusNextPrevChild_IsBase(true);
        return vkfileplaceeditdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnFocusNextPrevChild(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_TimerEvent(KFilePlaceEditDialog* self, QTimerEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->timerEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseTimerEvent(KFilePlaceEditDialog* self, QTimerEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_TimerEvent_IsBase(true);
        vkfileplaceeditdialog->timerEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnTimerEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_TimerEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_ChildEvent(KFilePlaceEditDialog* self, QChildEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->childEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseChildEvent(KFilePlaceEditDialog* self, QChildEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_ChildEvent_IsBase(true);
        vkfileplaceeditdialog->childEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnChildEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_ChildEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_CustomEvent(KFilePlaceEditDialog* self, QEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->customEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseCustomEvent(KFilePlaceEditDialog* self, QEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_CustomEvent_IsBase(true);
        vkfileplaceeditdialog->customEvent(event);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnCustomEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_CustomEvent_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_ConnectNotify(KFilePlaceEditDialog* self, const QMetaMethod* signal) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->connectNotify(*signal);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseConnectNotify(KFilePlaceEditDialog* self, const QMetaMethod* signal) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_ConnectNotify_IsBase(true);
        vkfileplaceeditdialog->connectNotify(*signal);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnConnectNotify(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_DisconnectNotify(KFilePlaceEditDialog* self, const QMetaMethod* signal) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseDisconnectNotify(KFilePlaceEditDialog* self, const QMetaMethod* signal) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_DisconnectNotify_IsBase(true);
        vkfileplaceeditdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnDisconnectNotify(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_AdjustPosition(KFilePlaceEditDialog* self, QWidget* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->adjustPosition(param1);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseAdjustPosition(KFilePlaceEditDialog* self, QWidget* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_AdjustPosition_IsBase(true);
        vkfileplaceeditdialog->adjustPosition(param1);
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnAdjustPosition(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_UpdateMicroFocus(KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->updateMicroFocus();
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseUpdateMicroFocus(KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_UpdateMicroFocus_IsBase(true);
        vkfileplaceeditdialog->updateMicroFocus();
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnUpdateMicroFocus(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_Create(KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->create();
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->create();
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseCreate(KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Create_IsBase(true);
        vkfileplaceeditdialog->create();
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnCreate(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Create_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePlaceEditDialog_Destroy(KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->destroy();
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_QBaseDestroy(KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Destroy_IsBase(true);
        vkfileplaceeditdialog->destroy();
    } else {
        ((VirtualKFilePlaceEditDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnDestroy(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Destroy_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlaceEditDialog_FocusNextChild(KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return vkfileplaceeditdialog->focusNextChild();
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KFilePlaceEditDialog_QBaseFocusNextChild(KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_FocusNextChild_IsBase(true);
        return vkfileplaceeditdialog->focusNextChild();
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnFocusNextChild(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlaceEditDialog_FocusPreviousChild(KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return vkfileplaceeditdialog->focusPreviousChild();
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KFilePlaceEditDialog_QBaseFocusPreviousChild(KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_FocusPreviousChild_IsBase(true);
        return vkfileplaceeditdialog->focusPreviousChild();
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnFocusPreviousChild(KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KFilePlaceEditDialog_Sender(const KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return vkfileplaceeditdialog->sender();
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KFilePlaceEditDialog_QBaseSender(const KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Sender_IsBase(true);
        return vkfileplaceeditdialog->sender();
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnSender(const KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Sender_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlaceEditDialog_SenderSignalIndex(const KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return vkfileplaceeditdialog->senderSignalIndex();
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KFilePlaceEditDialog_QBaseSenderSignalIndex(const KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_SenderSignalIndex_IsBase(true);
        return vkfileplaceeditdialog->senderSignalIndex();
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnSenderSignalIndex(const KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePlaceEditDialog_Receivers(const KFilePlaceEditDialog* self, const char* signal) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return vkfileplaceeditdialog->receivers(signal);
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KFilePlaceEditDialog_QBaseReceivers(const KFilePlaceEditDialog* self, const char* signal) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Receivers_IsBase(true);
        return vkfileplaceeditdialog->receivers(signal);
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnReceivers(const KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_Receivers_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePlaceEditDialog_IsSignalConnected(const KFilePlaceEditDialog* self, const QMetaMethod* signal) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return vkfileplaceeditdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KFilePlaceEditDialog_QBaseIsSignalConnected(const KFilePlaceEditDialog* self, const QMetaMethod* signal) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_IsSignalConnected_IsBase(true);
        return vkfileplaceeditdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnIsSignalConnected(const KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KFilePlaceEditDialog_GetDecodedMetricF(const KFilePlaceEditDialog* self, int metricA, int metricB) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        return vkfileplaceeditdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KFilePlaceEditDialog_QBaseGetDecodedMetricF(const KFilePlaceEditDialog* self, int metricA, int metricB) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_GetDecodedMetricF_IsBase(true);
        return vkfileplaceeditdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKFilePlaceEditDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnGetDecodedMetricF(const KFilePlaceEditDialog* self, intptr_t slot) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog && vkfileplaceeditdialog->isVirtualKFilePlaceEditDialog) {
        vkfileplaceeditdialog->setKFilePlaceEditDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KFilePlaceEditDialog_Delete(KFilePlaceEditDialog* self) {
    delete self;
}
