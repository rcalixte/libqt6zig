#include <KNewPasswordDialog>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
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
#include <QIcon>
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
#include <knewpassworddialog.h>
#include "libknewpassworddialog.h"
#include "libknewpassworddialog.hxx"

KNewPasswordDialog* KNewPasswordDialog_new(QWidget* parent) {
    return new VirtualKNewPasswordDialog(parent);
}

KNewPasswordDialog* KNewPasswordDialog_new2() {
    return new VirtualKNewPasswordDialog();
}

QMetaObject* KNewPasswordDialog_MetaObject(const KNewPasswordDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNewPasswordDialog_Metacast(KNewPasswordDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNewPasswordDialog_Metacall(KNewPasswordDialog* self, int param1, int param2, void** param3) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKNewPasswordDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KNewPasswordDialog_OnMetacall(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Metacall_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KNewPasswordDialog_QBaseMetacall(KNewPasswordDialog* self, int param1, int param2, void** param3) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Metacall_IsBase(true);
        return vknewpassworddialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKNewPasswordDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KNewPasswordDialog_Tr(const char* s) {
    QString _ret = KNewPasswordDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNewPasswordDialog_SetPrompt(KNewPasswordDialog* self, const libqt_string prompt) {
    QString prompt_QString = QString::fromUtf8(prompt.data, prompt.len);
    self->setPrompt(prompt_QString);
}

libqt_string KNewPasswordDialog_Prompt(const KNewPasswordDialog* self) {
    QString _ret = self->prompt();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNewPasswordDialog_SetIcon(KNewPasswordDialog* self, const QIcon* icon) {
    self->setIcon(*icon);
}

QIcon* KNewPasswordDialog_Icon(const KNewPasswordDialog* self) {
    return new QIcon(self->icon());
}

void KNewPasswordDialog_SetAllowEmptyPasswords(KNewPasswordDialog* self, bool allowed) {
    self->setAllowEmptyPasswords(allowed);
}

bool KNewPasswordDialog_AllowEmptyPasswords(const KNewPasswordDialog* self) {
    return self->allowEmptyPasswords();
}

void KNewPasswordDialog_SetMinimumPasswordLength(KNewPasswordDialog* self, int minLength) {
    self->setMinimumPasswordLength(static_cast<int>(minLength));
}

int KNewPasswordDialog_MinimumPasswordLength(const KNewPasswordDialog* self) {
    return self->minimumPasswordLength();
}

void KNewPasswordDialog_SetMaximumPasswordLength(KNewPasswordDialog* self, int maxLength) {
    self->setMaximumPasswordLength(static_cast<int>(maxLength));
}

int KNewPasswordDialog_MaximumPasswordLength(const KNewPasswordDialog* self) {
    return self->maximumPasswordLength();
}

void KNewPasswordDialog_SetReasonablePasswordLength(KNewPasswordDialog* self, int reasonableLength) {
    self->setReasonablePasswordLength(static_cast<int>(reasonableLength));
}

int KNewPasswordDialog_ReasonablePasswordLength(const KNewPasswordDialog* self) {
    return self->reasonablePasswordLength();
}

void KNewPasswordDialog_SetPasswordStrengthWarningLevel(KNewPasswordDialog* self, int warningLevel) {
    self->setPasswordStrengthWarningLevel(static_cast<int>(warningLevel));
}

int KNewPasswordDialog_PasswordStrengthWarningLevel(const KNewPasswordDialog* self) {
    return self->passwordStrengthWarningLevel();
}

void KNewPasswordDialog_SetBackgroundWarningColor(KNewPasswordDialog* self, const QColor* color) {
    self->setBackgroundWarningColor(*color);
}

QColor* KNewPasswordDialog_BackgroundWarningColor(const KNewPasswordDialog* self) {
    return new QColor(self->backgroundWarningColor());
}

libqt_string KNewPasswordDialog_Password(const KNewPasswordDialog* self) {
    QString _ret = self->password();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNewPasswordDialog_SetRevealPasswordAvailable(KNewPasswordDialog* self, bool reveal) {
    self->setRevealPasswordAvailable(reveal);
}

bool KNewPasswordDialog_IsRevealPasswordAvailable(const KNewPasswordDialog* self) {
    return self->isRevealPasswordAvailable();
}

int KNewPasswordDialog_RevealPasswordMode(const KNewPasswordDialog* self) {
    return static_cast<int>(self->revealPasswordMode());
}

void KNewPasswordDialog_SetRevealPasswordMode(KNewPasswordDialog* self, int revealPasswordMode) {
    self->setRevealPasswordMode(static_cast<KPassword::RevealMode>(revealPasswordMode));
}

void KNewPasswordDialog_NewPassword(KNewPasswordDialog* self, const libqt_string password) {
    QString password_QString = QString::fromUtf8(password.data, password.len);
    self->newPassword(password_QString);
}

void KNewPasswordDialog_Connect_NewPassword(KNewPasswordDialog* self, intptr_t slot) {
    void (*slotFunc)(KNewPasswordDialog*, const char*) = reinterpret_cast<void (*)(KNewPasswordDialog*, const char*)>(slot);
    KNewPasswordDialog::connect(self, &KNewPasswordDialog::newPassword, [self, slotFunc](const QString& password) {
        const QString password_ret = password;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray password_b = password_ret.toUtf8();
        const char* password_str = static_cast<const char*>(malloc(password_b.length() + 1));
        memcpy((void*)password_str, password_b.data(), password_b.length());
        ((char*)password_str)[password_b.length()] = '\0';
        const char* sigval1 = password_str;
        slotFunc(self, sigval1);
        libqt_free(password_str);
    });
}

libqt_string KNewPasswordDialog_Tr2(const char* s, const char* c) {
    QString _ret = KNewPasswordDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNewPasswordDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = KNewPasswordDialog::tr(s, c, static_cast<int>(n));
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
void KNewPasswordDialog_Accept(KNewPasswordDialog* self) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->accept();
    } else {
        self->KNewPasswordDialog::accept();
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseAccept(KNewPasswordDialog* self) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Accept_IsBase(true);
        vknewpassworddialog->accept();
    } else {
        self->KNewPasswordDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnAccept(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Accept_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNewPasswordDialog_CheckPassword(KNewPasswordDialog* self, const libqt_string param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return vknewpassworddialog->checkPassword(param1_QString);
    } else {
        return ((VirtualKNewPasswordDialog*)self)->checkPassword(param1_QString);
    }
}

// Base class handler implementation
bool KNewPasswordDialog_QBaseCheckPassword(KNewPasswordDialog* self, const libqt_string param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_CheckPassword_IsBase(true);
        return vknewpassworddialog->checkPassword(param1_QString);
    } else {
        return ((VirtualKNewPasswordDialog*)self)->checkPassword(param1_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnCheckPassword(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_CheckPassword_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_CheckPassword_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_SetVisible(KNewPasswordDialog* self, bool visible) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setVisible(visible);
    } else {
        self->KNewPasswordDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseSetVisible(KNewPasswordDialog* self, bool visible) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_SetVisible_IsBase(true);
        vknewpassworddialog->setVisible(visible);
    } else {
        self->KNewPasswordDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnSetVisible(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_SetVisible_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KNewPasswordDialog_SizeHint(const KNewPasswordDialog* self) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return new QSize(vknewpassworddialog->sizeHint());
    } else {
        return new QSize(((VirtualKNewPasswordDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KNewPasswordDialog_QBaseSizeHint(const KNewPasswordDialog* self) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_SizeHint_IsBase(true);
        return new QSize(vknewpassworddialog->sizeHint());
    } else {
        return new QSize(((VirtualKNewPasswordDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnSizeHint(const KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_SizeHint_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KNewPasswordDialog_MinimumSizeHint(const KNewPasswordDialog* self) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return new QSize(vknewpassworddialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKNewPasswordDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KNewPasswordDialog_QBaseMinimumSizeHint(const KNewPasswordDialog* self) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vknewpassworddialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKNewPasswordDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnMinimumSizeHint(const KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_Open(KNewPasswordDialog* self) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->open();
    } else {
        self->KNewPasswordDialog::open();
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseOpen(KNewPasswordDialog* self) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Open_IsBase(true);
        vknewpassworddialog->open();
    } else {
        self->KNewPasswordDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnOpen(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Open_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KNewPasswordDialog_Exec(KNewPasswordDialog* self) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return vknewpassworddialog->exec();
    } else {
        return self->KNewPasswordDialog::exec();
    }
}

// Base class handler implementation
int KNewPasswordDialog_QBaseExec(KNewPasswordDialog* self) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Exec_IsBase(true);
        return vknewpassworddialog->exec();
    } else {
        return self->KNewPasswordDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnExec(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Exec_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_Done(KNewPasswordDialog* self, int param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->done(static_cast<int>(param1));
    } else {
        self->KNewPasswordDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseDone(KNewPasswordDialog* self, int param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Done_IsBase(true);
        vknewpassworddialog->done(static_cast<int>(param1));
    } else {
        self->KNewPasswordDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnDone(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Done_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_Reject(KNewPasswordDialog* self) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->reject();
    } else {
        self->KNewPasswordDialog::reject();
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseReject(KNewPasswordDialog* self) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Reject_IsBase(true);
        vknewpassworddialog->reject();
    } else {
        self->KNewPasswordDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnReject(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Reject_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_KeyPressEvent(KNewPasswordDialog* self, QKeyEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->keyPressEvent(param1);
    } else {
        ((VirtualKNewPasswordDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseKeyPressEvent(KNewPasswordDialog* self, QKeyEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_KeyPressEvent_IsBase(true);
        vknewpassworddialog->keyPressEvent(param1);
    } else {
        ((VirtualKNewPasswordDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnKeyPressEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_CloseEvent(KNewPasswordDialog* self, QCloseEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->closeEvent(param1);
    } else {
        ((VirtualKNewPasswordDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseCloseEvent(KNewPasswordDialog* self, QCloseEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_CloseEvent_IsBase(true);
        vknewpassworddialog->closeEvent(param1);
    } else {
        ((VirtualKNewPasswordDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnCloseEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_CloseEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_ShowEvent(KNewPasswordDialog* self, QShowEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->showEvent(param1);
    } else {
        ((VirtualKNewPasswordDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseShowEvent(KNewPasswordDialog* self, QShowEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_ShowEvent_IsBase(true);
        vknewpassworddialog->showEvent(param1);
    } else {
        ((VirtualKNewPasswordDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnShowEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_ShowEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_ResizeEvent(KNewPasswordDialog* self, QResizeEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->resizeEvent(param1);
    } else {
        ((VirtualKNewPasswordDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseResizeEvent(KNewPasswordDialog* self, QResizeEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_ResizeEvent_IsBase(true);
        vknewpassworddialog->resizeEvent(param1);
    } else {
        ((VirtualKNewPasswordDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnResizeEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_ContextMenuEvent(KNewPasswordDialog* self, QContextMenuEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->contextMenuEvent(param1);
    } else {
        ((VirtualKNewPasswordDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseContextMenuEvent(KNewPasswordDialog* self, QContextMenuEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_ContextMenuEvent_IsBase(true);
        vknewpassworddialog->contextMenuEvent(param1);
    } else {
        ((VirtualKNewPasswordDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnContextMenuEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNewPasswordDialog_EventFilter(KNewPasswordDialog* self, QObject* param1, QEvent* param2) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return vknewpassworddialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKNewPasswordDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KNewPasswordDialog_QBaseEventFilter(KNewPasswordDialog* self, QObject* param1, QEvent* param2) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_EventFilter_IsBase(true);
        return vknewpassworddialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKNewPasswordDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnEventFilter(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_EventFilter_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KNewPasswordDialog_DevType(const KNewPasswordDialog* self) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return vknewpassworddialog->devType();
    } else {
        return self->KNewPasswordDialog::devType();
    }
}

// Base class handler implementation
int KNewPasswordDialog_QBaseDevType(const KNewPasswordDialog* self) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_DevType_IsBase(true);
        return vknewpassworddialog->devType();
    } else {
        return self->KNewPasswordDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnDevType(const KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_DevType_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KNewPasswordDialog_HeightForWidth(const KNewPasswordDialog* self, int param1) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return vknewpassworddialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KNewPasswordDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KNewPasswordDialog_QBaseHeightForWidth(const KNewPasswordDialog* self, int param1) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_HeightForWidth_IsBase(true);
        return vknewpassworddialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KNewPasswordDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnHeightForWidth(const KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNewPasswordDialog_HasHeightForWidth(const KNewPasswordDialog* self) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return vknewpassworddialog->hasHeightForWidth();
    } else {
        return self->KNewPasswordDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KNewPasswordDialog_QBaseHasHeightForWidth(const KNewPasswordDialog* self) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_HasHeightForWidth_IsBase(true);
        return vknewpassworddialog->hasHeightForWidth();
    } else {
        return self->KNewPasswordDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnHasHeightForWidth(const KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KNewPasswordDialog_PaintEngine(const KNewPasswordDialog* self) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return vknewpassworddialog->paintEngine();
    } else {
        return self->KNewPasswordDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KNewPasswordDialog_QBasePaintEngine(const KNewPasswordDialog* self) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_PaintEngine_IsBase(true);
        return vknewpassworddialog->paintEngine();
    } else {
        return self->KNewPasswordDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnPaintEngine(const KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_PaintEngine_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNewPasswordDialog_Event(KNewPasswordDialog* self, QEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return vknewpassworddialog->event(event);
    } else {
        return ((VirtualKNewPasswordDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KNewPasswordDialog_QBaseEvent(KNewPasswordDialog* self, QEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Event_IsBase(true);
        return vknewpassworddialog->event(event);
    } else {
        return ((VirtualKNewPasswordDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Event_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_MousePressEvent(KNewPasswordDialog* self, QMouseEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->mousePressEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseMousePressEvent(KNewPasswordDialog* self, QMouseEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_MousePressEvent_IsBase(true);
        vknewpassworddialog->mousePressEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnMousePressEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_MouseReleaseEvent(KNewPasswordDialog* self, QMouseEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseMouseReleaseEvent(KNewPasswordDialog* self, QMouseEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_MouseReleaseEvent_IsBase(true);
        vknewpassworddialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnMouseReleaseEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_MouseDoubleClickEvent(KNewPasswordDialog* self, QMouseEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseMouseDoubleClickEvent(KNewPasswordDialog* self, QMouseEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_MouseDoubleClickEvent_IsBase(true);
        vknewpassworddialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnMouseDoubleClickEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_MouseMoveEvent(KNewPasswordDialog* self, QMouseEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->mouseMoveEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseMouseMoveEvent(KNewPasswordDialog* self, QMouseEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_MouseMoveEvent_IsBase(true);
        vknewpassworddialog->mouseMoveEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnMouseMoveEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_WheelEvent(KNewPasswordDialog* self, QWheelEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->wheelEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseWheelEvent(KNewPasswordDialog* self, QWheelEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_WheelEvent_IsBase(true);
        vknewpassworddialog->wheelEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnWheelEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_WheelEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_KeyReleaseEvent(KNewPasswordDialog* self, QKeyEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->keyReleaseEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseKeyReleaseEvent(KNewPasswordDialog* self, QKeyEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_KeyReleaseEvent_IsBase(true);
        vknewpassworddialog->keyReleaseEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnKeyReleaseEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_FocusInEvent(KNewPasswordDialog* self, QFocusEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->focusInEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseFocusInEvent(KNewPasswordDialog* self, QFocusEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_FocusInEvent_IsBase(true);
        vknewpassworddialog->focusInEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnFocusInEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_FocusOutEvent(KNewPasswordDialog* self, QFocusEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->focusOutEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseFocusOutEvent(KNewPasswordDialog* self, QFocusEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_FocusOutEvent_IsBase(true);
        vknewpassworddialog->focusOutEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnFocusOutEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_EnterEvent(KNewPasswordDialog* self, QEnterEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->enterEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseEnterEvent(KNewPasswordDialog* self, QEnterEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_EnterEvent_IsBase(true);
        vknewpassworddialog->enterEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnEnterEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_EnterEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_LeaveEvent(KNewPasswordDialog* self, QEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->leaveEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseLeaveEvent(KNewPasswordDialog* self, QEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_LeaveEvent_IsBase(true);
        vknewpassworddialog->leaveEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnLeaveEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_PaintEvent(KNewPasswordDialog* self, QPaintEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->paintEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBasePaintEvent(KNewPasswordDialog* self, QPaintEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_PaintEvent_IsBase(true);
        vknewpassworddialog->paintEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnPaintEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_PaintEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_MoveEvent(KNewPasswordDialog* self, QMoveEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->moveEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseMoveEvent(KNewPasswordDialog* self, QMoveEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_MoveEvent_IsBase(true);
        vknewpassworddialog->moveEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnMoveEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_MoveEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_TabletEvent(KNewPasswordDialog* self, QTabletEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->tabletEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseTabletEvent(KNewPasswordDialog* self, QTabletEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_TabletEvent_IsBase(true);
        vknewpassworddialog->tabletEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnTabletEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_TabletEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_ActionEvent(KNewPasswordDialog* self, QActionEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->actionEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseActionEvent(KNewPasswordDialog* self, QActionEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_ActionEvent_IsBase(true);
        vknewpassworddialog->actionEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnActionEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_ActionEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_DragEnterEvent(KNewPasswordDialog* self, QDragEnterEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->dragEnterEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseDragEnterEvent(KNewPasswordDialog* self, QDragEnterEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_DragEnterEvent_IsBase(true);
        vknewpassworddialog->dragEnterEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnDragEnterEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_DragMoveEvent(KNewPasswordDialog* self, QDragMoveEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->dragMoveEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseDragMoveEvent(KNewPasswordDialog* self, QDragMoveEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_DragMoveEvent_IsBase(true);
        vknewpassworddialog->dragMoveEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnDragMoveEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_DragLeaveEvent(KNewPasswordDialog* self, QDragLeaveEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->dragLeaveEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseDragLeaveEvent(KNewPasswordDialog* self, QDragLeaveEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_DragLeaveEvent_IsBase(true);
        vknewpassworddialog->dragLeaveEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnDragLeaveEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_DropEvent(KNewPasswordDialog* self, QDropEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->dropEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseDropEvent(KNewPasswordDialog* self, QDropEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_DropEvent_IsBase(true);
        vknewpassworddialog->dropEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnDropEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_DropEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_HideEvent(KNewPasswordDialog* self, QHideEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->hideEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseHideEvent(KNewPasswordDialog* self, QHideEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_HideEvent_IsBase(true);
        vknewpassworddialog->hideEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnHideEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_HideEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNewPasswordDialog_NativeEvent(KNewPasswordDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return vknewpassworddialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKNewPasswordDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KNewPasswordDialog_QBaseNativeEvent(KNewPasswordDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_NativeEvent_IsBase(true);
        return vknewpassworddialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKNewPasswordDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnNativeEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_NativeEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_ChangeEvent(KNewPasswordDialog* self, QEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->changeEvent(param1);
    } else {
        ((VirtualKNewPasswordDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseChangeEvent(KNewPasswordDialog* self, QEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_ChangeEvent_IsBase(true);
        vknewpassworddialog->changeEvent(param1);
    } else {
        ((VirtualKNewPasswordDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnChangeEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KNewPasswordDialog_Metric(const KNewPasswordDialog* self, int param1) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return vknewpassworddialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKNewPasswordDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KNewPasswordDialog_QBaseMetric(const KNewPasswordDialog* self, int param1) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Metric_IsBase(true);
        return vknewpassworddialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKNewPasswordDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnMetric(const KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Metric_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_InitPainter(const KNewPasswordDialog* self, QPainter* painter) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->initPainter(painter);
    } else {
        ((VirtualKNewPasswordDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseInitPainter(const KNewPasswordDialog* self, QPainter* painter) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_InitPainter_IsBase(true);
        vknewpassworddialog->initPainter(painter);
    } else {
        ((VirtualKNewPasswordDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnInitPainter(const KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_InitPainter_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KNewPasswordDialog_Redirected(const KNewPasswordDialog* self, QPoint* offset) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return vknewpassworddialog->redirected(offset);
    } else {
        return ((VirtualKNewPasswordDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KNewPasswordDialog_QBaseRedirected(const KNewPasswordDialog* self, QPoint* offset) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Redirected_IsBase(true);
        return vknewpassworddialog->redirected(offset);
    } else {
        return ((VirtualKNewPasswordDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnRedirected(const KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Redirected_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KNewPasswordDialog_SharedPainter(const KNewPasswordDialog* self) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return vknewpassworddialog->sharedPainter();
    } else {
        return ((VirtualKNewPasswordDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KNewPasswordDialog_QBaseSharedPainter(const KNewPasswordDialog* self) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_SharedPainter_IsBase(true);
        return vknewpassworddialog->sharedPainter();
    } else {
        return ((VirtualKNewPasswordDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnSharedPainter(const KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_SharedPainter_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_InputMethodEvent(KNewPasswordDialog* self, QInputMethodEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->inputMethodEvent(param1);
    } else {
        ((VirtualKNewPasswordDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseInputMethodEvent(KNewPasswordDialog* self, QInputMethodEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_InputMethodEvent_IsBase(true);
        vknewpassworddialog->inputMethodEvent(param1);
    } else {
        ((VirtualKNewPasswordDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnInputMethodEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KNewPasswordDialog_InputMethodQuery(const KNewPasswordDialog* self, int param1) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return new QVariant(vknewpassworddialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKNewPasswordDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KNewPasswordDialog_QBaseInputMethodQuery(const KNewPasswordDialog* self, int param1) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vknewpassworddialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKNewPasswordDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnInputMethodQuery(const KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNewPasswordDialog_FocusNextPrevChild(KNewPasswordDialog* self, bool next) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return vknewpassworddialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKNewPasswordDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KNewPasswordDialog_QBaseFocusNextPrevChild(KNewPasswordDialog* self, bool next) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_FocusNextPrevChild_IsBase(true);
        return vknewpassworddialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKNewPasswordDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnFocusNextPrevChild(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_TimerEvent(KNewPasswordDialog* self, QTimerEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->timerEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseTimerEvent(KNewPasswordDialog* self, QTimerEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_TimerEvent_IsBase(true);
        vknewpassworddialog->timerEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnTimerEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_TimerEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_ChildEvent(KNewPasswordDialog* self, QChildEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->childEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseChildEvent(KNewPasswordDialog* self, QChildEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_ChildEvent_IsBase(true);
        vknewpassworddialog->childEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnChildEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_ChildEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_CustomEvent(KNewPasswordDialog* self, QEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->customEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseCustomEvent(KNewPasswordDialog* self, QEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_CustomEvent_IsBase(true);
        vknewpassworddialog->customEvent(event);
    } else {
        ((VirtualKNewPasswordDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnCustomEvent(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_CustomEvent_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_ConnectNotify(KNewPasswordDialog* self, const QMetaMethod* signal) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->connectNotify(*signal);
    } else {
        ((VirtualKNewPasswordDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseConnectNotify(KNewPasswordDialog* self, const QMetaMethod* signal) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_ConnectNotify_IsBase(true);
        vknewpassworddialog->connectNotify(*signal);
    } else {
        ((VirtualKNewPasswordDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnConnectNotify(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_DisconnectNotify(KNewPasswordDialog* self, const QMetaMethod* signal) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->disconnectNotify(*signal);
    } else {
        ((VirtualKNewPasswordDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseDisconnectNotify(KNewPasswordDialog* self, const QMetaMethod* signal) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_DisconnectNotify_IsBase(true);
        vknewpassworddialog->disconnectNotify(*signal);
    } else {
        ((VirtualKNewPasswordDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnDisconnectNotify(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_AdjustPosition(KNewPasswordDialog* self, QWidget* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->adjustPosition(param1);
    } else {
        ((VirtualKNewPasswordDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseAdjustPosition(KNewPasswordDialog* self, QWidget* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_AdjustPosition_IsBase(true);
        vknewpassworddialog->adjustPosition(param1);
    } else {
        ((VirtualKNewPasswordDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnAdjustPosition(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_UpdateMicroFocus(KNewPasswordDialog* self) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->updateMicroFocus();
    } else {
        ((VirtualKNewPasswordDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseUpdateMicroFocus(KNewPasswordDialog* self) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_UpdateMicroFocus_IsBase(true);
        vknewpassworddialog->updateMicroFocus();
    } else {
        ((VirtualKNewPasswordDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnUpdateMicroFocus(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_Create(KNewPasswordDialog* self) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->create();
    } else {
        ((VirtualKNewPasswordDialog*)self)->create();
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseCreate(KNewPasswordDialog* self) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Create_IsBase(true);
        vknewpassworddialog->create();
    } else {
        ((VirtualKNewPasswordDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnCreate(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Create_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordDialog_Destroy(KNewPasswordDialog* self) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->destroy();
    } else {
        ((VirtualKNewPasswordDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KNewPasswordDialog_QBaseDestroy(KNewPasswordDialog* self) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Destroy_IsBase(true);
        vknewpassworddialog->destroy();
    } else {
        ((VirtualKNewPasswordDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnDestroy(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Destroy_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNewPasswordDialog_FocusNextChild(KNewPasswordDialog* self) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return vknewpassworddialog->focusNextChild();
    } else {
        return ((VirtualKNewPasswordDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KNewPasswordDialog_QBaseFocusNextChild(KNewPasswordDialog* self) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_FocusNextChild_IsBase(true);
        return vknewpassworddialog->focusNextChild();
    } else {
        return ((VirtualKNewPasswordDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnFocusNextChild(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNewPasswordDialog_FocusPreviousChild(KNewPasswordDialog* self) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return vknewpassworddialog->focusPreviousChild();
    } else {
        return ((VirtualKNewPasswordDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KNewPasswordDialog_QBaseFocusPreviousChild(KNewPasswordDialog* self) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_FocusPreviousChild_IsBase(true);
        return vknewpassworddialog->focusPreviousChild();
    } else {
        return ((VirtualKNewPasswordDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnFocusPreviousChild(KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KNewPasswordDialog_Sender(const KNewPasswordDialog* self) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return vknewpassworddialog->sender();
    } else {
        return ((VirtualKNewPasswordDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KNewPasswordDialog_QBaseSender(const KNewPasswordDialog* self) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Sender_IsBase(true);
        return vknewpassworddialog->sender();
    } else {
        return ((VirtualKNewPasswordDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnSender(const KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Sender_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KNewPasswordDialog_SenderSignalIndex(const KNewPasswordDialog* self) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return vknewpassworddialog->senderSignalIndex();
    } else {
        return ((VirtualKNewPasswordDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KNewPasswordDialog_QBaseSenderSignalIndex(const KNewPasswordDialog* self) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_SenderSignalIndex_IsBase(true);
        return vknewpassworddialog->senderSignalIndex();
    } else {
        return ((VirtualKNewPasswordDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnSenderSignalIndex(const KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KNewPasswordDialog_Receivers(const KNewPasswordDialog* self, const char* signal) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return vknewpassworddialog->receivers(signal);
    } else {
        return ((VirtualKNewPasswordDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KNewPasswordDialog_QBaseReceivers(const KNewPasswordDialog* self, const char* signal) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Receivers_IsBase(true);
        return vknewpassworddialog->receivers(signal);
    } else {
        return ((VirtualKNewPasswordDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnReceivers(const KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_Receivers_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNewPasswordDialog_IsSignalConnected(const KNewPasswordDialog* self, const QMetaMethod* signal) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return vknewpassworddialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKNewPasswordDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KNewPasswordDialog_QBaseIsSignalConnected(const KNewPasswordDialog* self, const QMetaMethod* signal) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_IsSignalConnected_IsBase(true);
        return vknewpassworddialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKNewPasswordDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnIsSignalConnected(const KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KNewPasswordDialog_GetDecodedMetricF(const KNewPasswordDialog* self, int metricA, int metricB) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        return vknewpassworddialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKNewPasswordDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KNewPasswordDialog_QBaseGetDecodedMetricF(const KNewPasswordDialog* self, int metricA, int metricB) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_GetDecodedMetricF_IsBase(true);
        return vknewpassworddialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKNewPasswordDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnGetDecodedMetricF(const KNewPasswordDialog* self, intptr_t slot) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog && vknewpassworddialog->isVirtualKNewPasswordDialog) {
        vknewpassworddialog->setKNewPasswordDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KNewPasswordDialog_Delete(KNewPasswordDialog* self) {
    delete self;
}
