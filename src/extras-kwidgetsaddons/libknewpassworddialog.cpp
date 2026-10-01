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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNewPasswordDialog_Tr(const char* s) {
    auto _ret = KNewPasswordDialog::tr(s);
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
    auto _ret = self->prompt();
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
    auto _ret = self->password();
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

void KNewPasswordDialog_Accept(KNewPasswordDialog* self) {
    self->accept();
}

bool KNewPasswordDialog_CheckPassword(KNewPasswordDialog* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        return vknewpassworddialog->checkPassword(param1_QString);
    }
    qFatal("Error: Protected method KNewPasswordDialog::checkPassword called without a directly constructed type");
}

void KNewPasswordDialog_NewPassword(KNewPasswordDialog* self, const libqt_string password) {
    QString password_QString = QString::fromUtf8(password.data, password.len);
    self->newPassword(password_QString);
}

void KNewPasswordDialog_Connect_NewPassword(KNewPasswordDialog* self, intptr_t slot) {
    void (*slotFunc)(KNewPasswordDialog*, const char*) = reinterpret_cast<void (*)(KNewPasswordDialog*, const char*)>(slot);
    KNewPasswordDialog::connect(self,
                                static_cast<void (KNewPasswordDialog::*)(const QString&)>(&KNewPasswordDialog::newPassword),
                                [self, slotFunc](const QString& password) {
                                    const auto password_ret = password;
                                    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                    QByteArray password_b = password_ret.toUtf8();
                                    auto password_str_len = password_b.length();
                                    const char* password_str = static_cast<const char*>(malloc(password_str_len + 1));
                                    memcpy((void*)password_str, password_b.data(), password_str_len);
                                    ((char*)password_str)[password_str_len] = '\0';
                                    const char* sigval1 = password_str;
                                    slotFunc(self, sigval1);
                                    libqt_free(password_str);
                                });
}

libqt_string KNewPasswordDialog_Tr2(const char* s, const char* c) {
    auto _ret = KNewPasswordDialog::tr(s, c);
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
    auto _ret = KNewPasswordDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* KNewPasswordDialog_SuperMetaObject(const KNewPasswordDialog* self) {
    return (QMetaObject*)self->KNewPasswordDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnMetaObject(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self)))
        vknewpassworddialog->knewpassworddialog_metaobject_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KNewPasswordDialog_SuperMetacast(KNewPasswordDialog* self, const char* param1) {
    return self->KNewPasswordDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnMetacast(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_metacast_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KNewPasswordDialog_SuperMetacall(KNewPasswordDialog* self, int param1, int param2, void** param3) {
    return self->KNewPasswordDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnMetacall(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_metacall_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
void KNewPasswordDialog_SuperAccept(KNewPasswordDialog* self) {
    self->KNewPasswordDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnAccept(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_accept_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Accept_Callback>(slot);
}

// Base class handler implementation
bool KNewPasswordDialog_SuperCheckPassword(KNewPasswordDialog* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        return vknewpassworddialog->KNewPasswordDialog::checkPassword(param1_QString);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::checkPassword called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnCheckPassword(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_checkpassword_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_CheckPassword_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_SetVisible(KNewPasswordDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KNewPasswordDialog_SuperSetVisible(KNewPasswordDialog* self, bool visible) {
    self->KNewPasswordDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnSetVisible(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_setvisible_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KNewPasswordDialog_SizeHint(const KNewPasswordDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KNewPasswordDialog_SuperSizeHint(const KNewPasswordDialog* self) {
    return new QSize(self->KNewPasswordDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnSizeHint(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self)))
        vknewpassworddialog->knewpassworddialog_sizehint_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KNewPasswordDialog_MinimumSizeHint(const KNewPasswordDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KNewPasswordDialog_SuperMinimumSizeHint(const KNewPasswordDialog* self) {
    return new QSize(self->KNewPasswordDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnMinimumSizeHint(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self)))
        vknewpassworddialog->knewpassworddialog_minimumsizehint_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_Open(KNewPasswordDialog* self) {
    self->open();
}

// Base class handler implementation
void KNewPasswordDialog_SuperOpen(KNewPasswordDialog* self) {
    self->KNewPasswordDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnOpen(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_open_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KNewPasswordDialog_Exec(KNewPasswordDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KNewPasswordDialog_SuperExec(KNewPasswordDialog* self) {
    return self->KNewPasswordDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnExec(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_exec_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_Done(KNewPasswordDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KNewPasswordDialog_SuperDone(KNewPasswordDialog* self, int param1) {
    self->KNewPasswordDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnDone(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_done_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_Reject(KNewPasswordDialog* self) {
    self->reject();
}

// Base class handler implementation
void KNewPasswordDialog_SuperReject(KNewPasswordDialog* self) {
    self->KNewPasswordDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnReject(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_reject_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_KeyPressEvent(KNewPasswordDialog* self, QKeyEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperKeyPressEvent(KNewPasswordDialog* self, QKeyEvent* param1) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnKeyPressEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_keypressevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_CloseEvent(KNewPasswordDialog* self, QCloseEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperCloseEvent(KNewPasswordDialog* self, QCloseEvent* param1) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnCloseEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_closeevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_ShowEvent(KNewPasswordDialog* self, QShowEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperShowEvent(KNewPasswordDialog* self, QShowEvent* param1) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnShowEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_showevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_ResizeEvent(KNewPasswordDialog* self, QResizeEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperResizeEvent(KNewPasswordDialog* self, QResizeEvent* param1) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnResizeEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_resizeevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_ContextMenuEvent(KNewPasswordDialog* self, QContextMenuEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperContextMenuEvent(KNewPasswordDialog* self, QContextMenuEvent* param1) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnContextMenuEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_contextmenuevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KNewPasswordDialog_EventFilter(KNewPasswordDialog* self, QObject* param1, QEvent* param2) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        return vknewpassworddialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNewPasswordDialog_SuperEventFilter(KNewPasswordDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        return vknewpassworddialog->KNewPasswordDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnEventFilter(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_eventfilter_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KNewPasswordDialog_DevType(const KNewPasswordDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KNewPasswordDialog_SuperDevType(const KNewPasswordDialog* self) {
    return self->KNewPasswordDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnDevType(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self)))
        vknewpassworddialog->knewpassworddialog_devtype_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KNewPasswordDialog_HeightForWidth(const KNewPasswordDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KNewPasswordDialog_SuperHeightForWidth(const KNewPasswordDialog* self, int param1) {
    return self->KNewPasswordDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnHeightForWidth(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self)))
        vknewpassworddialog->knewpassworddialog_heightforwidth_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KNewPasswordDialog_HasHeightForWidth(const KNewPasswordDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KNewPasswordDialog_SuperHasHeightForWidth(const KNewPasswordDialog* self) {
    return self->KNewPasswordDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnHasHeightForWidth(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self)))
        vknewpassworddialog->knewpassworddialog_hasheightforwidth_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KNewPasswordDialog_PaintEngine(const KNewPasswordDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KNewPasswordDialog_SuperPaintEngine(const KNewPasswordDialog* self) {
    return self->KNewPasswordDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnPaintEngine(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self)))
        vknewpassworddialog->knewpassworddialog_paintengine_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KNewPasswordDialog_Event(KNewPasswordDialog* self, QEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        return vknewpassworddialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNewPasswordDialog_SuperEvent(KNewPasswordDialog* self, QEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        return vknewpassworddialog->KNewPasswordDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_event_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_MousePressEvent(KNewPasswordDialog* self, QMouseEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperMousePressEvent(KNewPasswordDialog* self, QMouseEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnMousePressEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_mousepressevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_MouseReleaseEvent(KNewPasswordDialog* self, QMouseEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperMouseReleaseEvent(KNewPasswordDialog* self, QMouseEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnMouseReleaseEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_mousereleaseevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_MouseDoubleClickEvent(KNewPasswordDialog* self, QMouseEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperMouseDoubleClickEvent(KNewPasswordDialog* self, QMouseEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnMouseDoubleClickEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_MouseMoveEvent(KNewPasswordDialog* self, QMouseEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperMouseMoveEvent(KNewPasswordDialog* self, QMouseEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnMouseMoveEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_mousemoveevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_WheelEvent(KNewPasswordDialog* self, QWheelEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperWheelEvent(KNewPasswordDialog* self, QWheelEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnWheelEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_wheelevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_KeyReleaseEvent(KNewPasswordDialog* self, QKeyEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperKeyReleaseEvent(KNewPasswordDialog* self, QKeyEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnKeyReleaseEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_keyreleaseevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_FocusInEvent(KNewPasswordDialog* self, QFocusEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperFocusInEvent(KNewPasswordDialog* self, QFocusEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnFocusInEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_focusinevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_FocusOutEvent(KNewPasswordDialog* self, QFocusEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperFocusOutEvent(KNewPasswordDialog* self, QFocusEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnFocusOutEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_focusoutevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_EnterEvent(KNewPasswordDialog* self, QEnterEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperEnterEvent(KNewPasswordDialog* self, QEnterEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnEnterEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_enterevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_LeaveEvent(KNewPasswordDialog* self, QEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperLeaveEvent(KNewPasswordDialog* self, QEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnLeaveEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_leaveevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_PaintEvent(KNewPasswordDialog* self, QPaintEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperPaintEvent(KNewPasswordDialog* self, QPaintEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnPaintEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_paintevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_MoveEvent(KNewPasswordDialog* self, QMoveEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperMoveEvent(KNewPasswordDialog* self, QMoveEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnMoveEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_moveevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_TabletEvent(KNewPasswordDialog* self, QTabletEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperTabletEvent(KNewPasswordDialog* self, QTabletEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnTabletEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_tabletevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_ActionEvent(KNewPasswordDialog* self, QActionEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperActionEvent(KNewPasswordDialog* self, QActionEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnActionEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_actionevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_DragEnterEvent(KNewPasswordDialog* self, QDragEnterEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperDragEnterEvent(KNewPasswordDialog* self, QDragEnterEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnDragEnterEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_dragenterevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_DragMoveEvent(KNewPasswordDialog* self, QDragMoveEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperDragMoveEvent(KNewPasswordDialog* self, QDragMoveEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnDragMoveEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_dragmoveevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_DragLeaveEvent(KNewPasswordDialog* self, QDragLeaveEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperDragLeaveEvent(KNewPasswordDialog* self, QDragLeaveEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnDragLeaveEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_dragleaveevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_DropEvent(KNewPasswordDialog* self, QDropEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperDropEvent(KNewPasswordDialog* self, QDropEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnDropEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_dropevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_HideEvent(KNewPasswordDialog* self, QHideEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperHideEvent(KNewPasswordDialog* self, QHideEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnHideEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_hideevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KNewPasswordDialog_NativeEvent(KNewPasswordDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        return vknewpassworddialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNewPasswordDialog_SuperNativeEvent(KNewPasswordDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        return vknewpassworddialog->KNewPasswordDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnNativeEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_nativeevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_ChangeEvent(KNewPasswordDialog* self, QEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperChangeEvent(KNewPasswordDialog* self, QEvent* param1) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnChangeEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_changeevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KNewPasswordDialog_Metric(const KNewPasswordDialog* self, int param1) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog) {
        return vknewpassworddialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KNewPasswordDialog_SuperMetric(const KNewPasswordDialog* self, int param1) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self))) {
        return vknewpassworddialog->KNewPasswordDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnMetric(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self)))
        vknewpassworddialog->knewpassworddialog_metric_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_InitPainter(const KNewPasswordDialog* self, QPainter* painter) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog) {
        vknewpassworddialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperInitPainter(const KNewPasswordDialog* self, QPainter* painter) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self))) {
        vknewpassworddialog->KNewPasswordDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnInitPainter(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self)))
        vknewpassworddialog->knewpassworddialog_initpainter_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KNewPasswordDialog_Redirected(const KNewPasswordDialog* self, QPoint* offset) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog) {
        return vknewpassworddialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KNewPasswordDialog_SuperRedirected(const KNewPasswordDialog* self, QPoint* offset) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self))) {
        return vknewpassworddialog->KNewPasswordDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnRedirected(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self)))
        vknewpassworddialog->knewpassworddialog_redirected_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KNewPasswordDialog_SharedPainter(const KNewPasswordDialog* self) {
    auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self));
    if (vknewpassworddialog) {
        return vknewpassworddialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KNewPasswordDialog_SuperSharedPainter(const KNewPasswordDialog* self) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self))) {
        return vknewpassworddialog->KNewPasswordDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnSharedPainter(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self)))
        vknewpassworddialog->knewpassworddialog_sharedpainter_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_InputMethodEvent(KNewPasswordDialog* self, QInputMethodEvent* param1) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperInputMethodEvent(KNewPasswordDialog* self, QInputMethodEvent* param1) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnInputMethodEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_inputmethodevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KNewPasswordDialog_InputMethodQuery(const KNewPasswordDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KNewPasswordDialog_SuperInputMethodQuery(const KNewPasswordDialog* self, int param1) {
    return new QVariant(self->KNewPasswordDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnInputMethodQuery(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self)))
        vknewpassworddialog->knewpassworddialog_inputmethodquery_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KNewPasswordDialog_FocusNextPrevChild(KNewPasswordDialog* self, bool next) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        return vknewpassworddialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNewPasswordDialog_SuperFocusNextPrevChild(KNewPasswordDialog* self, bool next) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        return vknewpassworddialog->KNewPasswordDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnFocusNextPrevChild(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_focusnextprevchild_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_TimerEvent(KNewPasswordDialog* self, QTimerEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperTimerEvent(KNewPasswordDialog* self, QTimerEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnTimerEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_timerevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_ChildEvent(KNewPasswordDialog* self, QChildEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperChildEvent(KNewPasswordDialog* self, QChildEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnChildEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_childevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_CustomEvent(KNewPasswordDialog* self, QEvent* event) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperCustomEvent(KNewPasswordDialog* self, QEvent* event) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnCustomEvent(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_customevent_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_ConnectNotify(KNewPasswordDialog* self, const QMetaMethod* signal) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperConnectNotify(KNewPasswordDialog* self, const QMetaMethod* signal) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnConnectNotify(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_connectnotify_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordDialog_DisconnectNotify(KNewPasswordDialog* self, const QMetaMethod* signal) {
    auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self);
    if (vknewpassworddialog) {
        vknewpassworddialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordDialog_SuperDisconnectNotify(KNewPasswordDialog* self, const QMetaMethod* signal) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->KNewPasswordDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNewPasswordDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordDialog_OnDisconnectNotify(KNewPasswordDialog* self, intptr_t slot) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self))
        vknewpassworddialog->knewpassworddialog_disconnectnotify_callback = reinterpret_cast<VirtualKNewPasswordDialog::KNewPasswordDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KNewPasswordDialog_AdjustPosition(KNewPasswordDialog* self, QWidget* param1) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->VirtualKNewPasswordDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KNewPasswordDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KNewPasswordDialog_UpdateMicroFocus(KNewPasswordDialog* self) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->VirtualKNewPasswordDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KNewPasswordDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KNewPasswordDialog_Create(KNewPasswordDialog* self) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->VirtualKNewPasswordDialog::create();
    } else
        qFatal("Error: Protected method KNewPasswordDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KNewPasswordDialog_Destroy(KNewPasswordDialog* self) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        vknewpassworddialog->VirtualKNewPasswordDialog::destroy();
    } else
        qFatal("Error: Protected method KNewPasswordDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNewPasswordDialog_FocusNextChild(KNewPasswordDialog* self) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        return vknewpassworddialog->VirtualKNewPasswordDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KNewPasswordDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNewPasswordDialog_FocusPreviousChild(KNewPasswordDialog* self) {
    if (auto* vknewpassworddialog = dynamic_cast<VirtualKNewPasswordDialog*>(self)) {
        return vknewpassworddialog->VirtualKNewPasswordDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KNewPasswordDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KNewPasswordDialog_Sender(const KNewPasswordDialog* self) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self))) {
        return vknewpassworddialog->VirtualKNewPasswordDialog::sender();
    } else
        qFatal("Error: Protected method KNewPasswordDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KNewPasswordDialog_SenderSignalIndex(const KNewPasswordDialog* self) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self))) {
        return vknewpassworddialog->VirtualKNewPasswordDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KNewPasswordDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KNewPasswordDialog_Receivers(const KNewPasswordDialog* self, const char* signal) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self))) {
        return vknewpassworddialog->VirtualKNewPasswordDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KNewPasswordDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNewPasswordDialog_IsSignalConnected(const KNewPasswordDialog* self, const QMetaMethod* signal) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self))) {
        return vknewpassworddialog->VirtualKNewPasswordDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KNewPasswordDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KNewPasswordDialog_GetDecodedMetricF(const KNewPasswordDialog* self, int metricA, int metricB) {
    if (auto* vknewpassworddialog = const_cast<VirtualKNewPasswordDialog*>(dynamic_cast<const VirtualKNewPasswordDialog*>(self))) {
        return vknewpassworddialog->VirtualKNewPasswordDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KNewPasswordDialog::getDecodedMetricF called without a directly constructed type");
}

void KNewPasswordDialog_Delete(KNewPasswordDialog* self) {
    delete self;
}
