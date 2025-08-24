#include <KPasswordDialog>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QDialogButtonBox>
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
#include <QMap>
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
#include <kpassworddialog.h>
#include "libkpassworddialog.h"
#include "libkpassworddialog.hxx"

KPasswordDialog* KPasswordDialog_new(QWidget* parent) {
    return new VirtualKPasswordDialog(parent);
}

KPasswordDialog* KPasswordDialog_new2() {
    return new VirtualKPasswordDialog();
}

KPasswordDialog* KPasswordDialog_new3(QWidget* parent, const int* flags) {
    return new VirtualKPasswordDialog(parent, (const KPasswordDialog::KPasswordDialogFlags&)(*flags));
}

QMetaObject* KPasswordDialog_MetaObject(const KPasswordDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPasswordDialog_Metacast(KPasswordDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPasswordDialog_Metacall(KPasswordDialog* self, int param1, int param2, void** param3) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPasswordDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KPasswordDialog_OnMetacall(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Metacall_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KPasswordDialog_QBaseMetacall(KPasswordDialog* self, int param1, int param2, void** param3) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Metacall_IsBase(true);
        return vkpassworddialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPasswordDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KPasswordDialog_Tr(const char* s) {
    QString _ret = KPasswordDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPasswordDialog_SetPrompt(KPasswordDialog* self, const libqt_string prompt) {
    QString prompt_QString = QString::fromUtf8(prompt.data, prompt.len);
    self->setPrompt(prompt_QString);
}

libqt_string KPasswordDialog_Prompt(const KPasswordDialog* self) {
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

void KPasswordDialog_SetIcon(KPasswordDialog* self, const QIcon* icon) {
    self->setIcon(*icon);
}

QIcon* KPasswordDialog_Icon(const KPasswordDialog* self) {
    return new QIcon(self->icon());
}

void KPasswordDialog_AddCommentLine(KPasswordDialog* self, const libqt_string label, const libqt_string comment) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString comment_QString = QString::fromUtf8(comment.data, comment.len);
    self->addCommentLine(label_QString, comment_QString);
}

void KPasswordDialog_ShowErrorMessage(KPasswordDialog* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->showErrorMessage(message_QString);
}

libqt_string KPasswordDialog_Password(const KPasswordDialog* self) {
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

void KPasswordDialog_SetUsername(KPasswordDialog* self, const libqt_string username) {
    QString username_QString = QString::fromUtf8(username.data, username.len);
    self->setUsername(username_QString);
}

libqt_string KPasswordDialog_Username(const KPasswordDialog* self) {
    QString _ret = self->username();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPasswordDialog_SetDomain(KPasswordDialog* self, const libqt_string domain) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    self->setDomain(domain_QString);
}

libqt_string KPasswordDialog_Domain(const KPasswordDialog* self) {
    QString _ret = self->domain();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPasswordDialog_SetAnonymousMode(KPasswordDialog* self, bool anonymous) {
    self->setAnonymousMode(anonymous);
}

bool KPasswordDialog_AnonymousMode(const KPasswordDialog* self) {
    return self->anonymousMode();
}

bool KPasswordDialog_KeepPassword(const KPasswordDialog* self) {
    return self->keepPassword();
}

void KPasswordDialog_SetKeepPassword(KPasswordDialog* self, bool b) {
    self->setKeepPassword(b);
}

void KPasswordDialog_SetUsernameReadOnly(KPasswordDialog* self, bool readOnly) {
    self->setUsernameReadOnly(readOnly);
}

void KPasswordDialog_SetPassword(KPasswordDialog* self, const libqt_string password) {
    QString password_QString = QString::fromUtf8(password.data, password.len);
    self->setPassword(password_QString);
}

void KPasswordDialog_SetKnownLogins(KPasswordDialog* self, const libqt_map /* of libqt_string to libqt_string */ knownLogins) {
    QMap<QString, QString> knownLogins_QMap;
    libqt_string* knownLogins_karr = static_cast<libqt_string*>(knownLogins.keys);
    libqt_string* knownLogins_varr = static_cast<libqt_string*>(knownLogins.values);
    for (size_t i = 0; i < knownLogins.len; ++i) {
        QString knownLogins_karr_i_QString = QString::fromUtf8(knownLogins_karr[i].data, knownLogins_karr[i].len);
        QString knownLogins_varr_i_QString = QString::fromUtf8(knownLogins_varr[i].data, knownLogins_varr[i].len);
        knownLogins_QMap[knownLogins_karr_i_QString] = knownLogins_varr_i_QString;
    }
    self->setKnownLogins(knownLogins_QMap);
}

QDialogButtonBox* KPasswordDialog_ButtonBox(const KPasswordDialog* self) {
    return self->buttonBox();
}

void KPasswordDialog_SetUsernameContextHelp(KPasswordDialog* self, const libqt_string help) {
    QString help_QString = QString::fromUtf8(help.data, help.len);
    self->setUsernameContextHelp(help_QString);
}

void KPasswordDialog_SetRevealPasswordAvailable(KPasswordDialog* self, bool reveal) {
    self->setRevealPasswordAvailable(reveal);
}

bool KPasswordDialog_IsRevealPasswordAvailable(const KPasswordDialog* self) {
    return self->isRevealPasswordAvailable();
}

int KPasswordDialog_RevealPasswordMode(const KPasswordDialog* self) {
    return static_cast<int>(self->revealPasswordMode());
}

void KPasswordDialog_SetRevealPasswordMode(KPasswordDialog* self, int revealPasswordMode) {
    self->setRevealPasswordMode(static_cast<KPassword::RevealMode>(revealPasswordMode));
}

void KPasswordDialog_GotPassword(KPasswordDialog* self, const libqt_string password, bool keep) {
    QString password_QString = QString::fromUtf8(password.data, password.len);
    self->gotPassword(password_QString, keep);
}

void KPasswordDialog_Connect_GotPassword(KPasswordDialog* self, intptr_t slot) {
    void (*slotFunc)(KPasswordDialog*, const char*, bool) = reinterpret_cast<void (*)(KPasswordDialog*, const char*, bool)>(slot);
    KPasswordDialog::connect(self, &KPasswordDialog::gotPassword, [self, slotFunc](const QString& password, bool keep) {
        const QString password_ret = password;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray password_b = password_ret.toUtf8();
        const char* password_str = static_cast<const char*>(malloc(password_b.length() + 1));
        memcpy((void*)password_str, password_b.data(), password_b.length());
        ((char*)password_str)[password_b.length()] = '\0';
        const char* sigval1 = password_str;
        bool sigval2 = keep;
        slotFunc(self, sigval1, sigval2);
        libqt_free(password_str);
    });
}

void KPasswordDialog_GotUsernameAndPassword(KPasswordDialog* self, const libqt_string username, const libqt_string password, bool keep) {
    QString username_QString = QString::fromUtf8(username.data, username.len);
    QString password_QString = QString::fromUtf8(password.data, password.len);
    self->gotUsernameAndPassword(username_QString, password_QString, keep);
}

void KPasswordDialog_Connect_GotUsernameAndPassword(KPasswordDialog* self, intptr_t slot) {
    void (*slotFunc)(KPasswordDialog*, const char*, const char*, bool) = reinterpret_cast<void (*)(KPasswordDialog*, const char*, const char*, bool)>(slot);
    KPasswordDialog::connect(self, &KPasswordDialog::gotUsernameAndPassword, [self, slotFunc](const QString& username, const QString& password, bool keep) {
        const QString username_ret = username;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray username_b = username_ret.toUtf8();
        const char* username_str = static_cast<const char*>(malloc(username_b.length() + 1));
        memcpy((void*)username_str, username_b.data(), username_b.length());
        ((char*)username_str)[username_b.length()] = '\0';
        const char* sigval1 = username_str;
        const QString password_ret = password;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray password_b = password_ret.toUtf8();
        const char* password_str = static_cast<const char*>(malloc(password_b.length() + 1));
        memcpy((void*)password_str, password_b.data(), password_b.length());
        ((char*)password_str)[password_b.length()] = '\0';
        const char* sigval2 = password_str;
        bool sigval3 = keep;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(username_str);
        libqt_free(password_str);
    });
}

libqt_string KPasswordDialog_Tr2(const char* s, const char* c) {
    QString _ret = KPasswordDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPasswordDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = KPasswordDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPasswordDialog_ShowErrorMessage2(KPasswordDialog* self, const libqt_string message, const int typeVal) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->showErrorMessage(message_QString, static_cast<const KPasswordDialog::ErrorType>(typeVal));
}

// Derived class handler implementation
void KPasswordDialog_Accept(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->accept();
    } else {
        self->KPasswordDialog::accept();
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseAccept(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Accept_IsBase(true);
        vkpassworddialog->accept();
    } else {
        self->KPasswordDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnAccept(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Accept_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPasswordDialog_CheckPassword(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return vkpassworddialog->checkPassword();
    } else {
        return ((VirtualKPasswordDialog*)self)->checkPassword();
    }
}

// Base class handler implementation
bool KPasswordDialog_QBaseCheckPassword(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_CheckPassword_IsBase(true);
        return vkpassworddialog->checkPassword();
    } else {
        return ((VirtualKPasswordDialog*)self)->checkPassword();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnCheckPassword(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_CheckPassword_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_CheckPassword_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_SetVisible(KPasswordDialog* self, bool visible) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setVisible(visible);
    } else {
        self->KPasswordDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseSetVisible(KPasswordDialog* self, bool visible) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_SetVisible_IsBase(true);
        vkpassworddialog->setVisible(visible);
    } else {
        self->KPasswordDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnSetVisible(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_SetVisible_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPasswordDialog_SizeHint(const KPasswordDialog* self) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return new QSize(vkpassworddialog->sizeHint());
    } else {
        return new QSize(((VirtualKPasswordDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KPasswordDialog_QBaseSizeHint(const KPasswordDialog* self) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_SizeHint_IsBase(true);
        return new QSize(vkpassworddialog->sizeHint());
    } else {
        return new QSize(((VirtualKPasswordDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnSizeHint(const KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_SizeHint_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPasswordDialog_MinimumSizeHint(const KPasswordDialog* self) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return new QSize(vkpassworddialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPasswordDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KPasswordDialog_QBaseMinimumSizeHint(const KPasswordDialog* self) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkpassworddialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPasswordDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnMinimumSizeHint(const KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_Open(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->open();
    } else {
        self->KPasswordDialog::open();
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseOpen(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Open_IsBase(true);
        vkpassworddialog->open();
    } else {
        self->KPasswordDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnOpen(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Open_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KPasswordDialog_Exec(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return vkpassworddialog->exec();
    } else {
        return self->KPasswordDialog::exec();
    }
}

// Base class handler implementation
int KPasswordDialog_QBaseExec(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Exec_IsBase(true);
        return vkpassworddialog->exec();
    } else {
        return self->KPasswordDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnExec(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Exec_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_Done(KPasswordDialog* self, int param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->done(static_cast<int>(param1));
    } else {
        self->KPasswordDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseDone(KPasswordDialog* self, int param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Done_IsBase(true);
        vkpassworddialog->done(static_cast<int>(param1));
    } else {
        self->KPasswordDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnDone(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Done_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_Reject(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->reject();
    } else {
        self->KPasswordDialog::reject();
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseReject(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Reject_IsBase(true);
        vkpassworddialog->reject();
    } else {
        self->KPasswordDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnReject(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Reject_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_KeyPressEvent(KPasswordDialog* self, QKeyEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->keyPressEvent(param1);
    } else {
        ((VirtualKPasswordDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseKeyPressEvent(KPasswordDialog* self, QKeyEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_KeyPressEvent_IsBase(true);
        vkpassworddialog->keyPressEvent(param1);
    } else {
        ((VirtualKPasswordDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnKeyPressEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_CloseEvent(KPasswordDialog* self, QCloseEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->closeEvent(param1);
    } else {
        ((VirtualKPasswordDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseCloseEvent(KPasswordDialog* self, QCloseEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_CloseEvent_IsBase(true);
        vkpassworddialog->closeEvent(param1);
    } else {
        ((VirtualKPasswordDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnCloseEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_CloseEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_ShowEvent(KPasswordDialog* self, QShowEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->showEvent(param1);
    } else {
        ((VirtualKPasswordDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseShowEvent(KPasswordDialog* self, QShowEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_ShowEvent_IsBase(true);
        vkpassworddialog->showEvent(param1);
    } else {
        ((VirtualKPasswordDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnShowEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_ShowEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_ResizeEvent(KPasswordDialog* self, QResizeEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->resizeEvent(param1);
    } else {
        ((VirtualKPasswordDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseResizeEvent(KPasswordDialog* self, QResizeEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_ResizeEvent_IsBase(true);
        vkpassworddialog->resizeEvent(param1);
    } else {
        ((VirtualKPasswordDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnResizeEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_ContextMenuEvent(KPasswordDialog* self, QContextMenuEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->contextMenuEvent(param1);
    } else {
        ((VirtualKPasswordDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseContextMenuEvent(KPasswordDialog* self, QContextMenuEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_ContextMenuEvent_IsBase(true);
        vkpassworddialog->contextMenuEvent(param1);
    } else {
        ((VirtualKPasswordDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnContextMenuEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPasswordDialog_EventFilter(KPasswordDialog* self, QObject* param1, QEvent* param2) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return vkpassworddialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKPasswordDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KPasswordDialog_QBaseEventFilter(KPasswordDialog* self, QObject* param1, QEvent* param2) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_EventFilter_IsBase(true);
        return vkpassworddialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKPasswordDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnEventFilter(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_EventFilter_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KPasswordDialog_DevType(const KPasswordDialog* self) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return vkpassworddialog->devType();
    } else {
        return self->KPasswordDialog::devType();
    }
}

// Base class handler implementation
int KPasswordDialog_QBaseDevType(const KPasswordDialog* self) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_DevType_IsBase(true);
        return vkpassworddialog->devType();
    } else {
        return self->KPasswordDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnDevType(const KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_DevType_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KPasswordDialog_HeightForWidth(const KPasswordDialog* self, int param1) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return vkpassworddialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPasswordDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KPasswordDialog_QBaseHeightForWidth(const KPasswordDialog* self, int param1) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_HeightForWidth_IsBase(true);
        return vkpassworddialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPasswordDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnHeightForWidth(const KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPasswordDialog_HasHeightForWidth(const KPasswordDialog* self) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return vkpassworddialog->hasHeightForWidth();
    } else {
        return self->KPasswordDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KPasswordDialog_QBaseHasHeightForWidth(const KPasswordDialog* self) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_HasHeightForWidth_IsBase(true);
        return vkpassworddialog->hasHeightForWidth();
    } else {
        return self->KPasswordDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnHasHeightForWidth(const KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KPasswordDialog_PaintEngine(const KPasswordDialog* self) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return vkpassworddialog->paintEngine();
    } else {
        return self->KPasswordDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KPasswordDialog_QBasePaintEngine(const KPasswordDialog* self) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_PaintEngine_IsBase(true);
        return vkpassworddialog->paintEngine();
    } else {
        return self->KPasswordDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnPaintEngine(const KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_PaintEngine_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPasswordDialog_Event(KPasswordDialog* self, QEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return vkpassworddialog->event(event);
    } else {
        return ((VirtualKPasswordDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KPasswordDialog_QBaseEvent(KPasswordDialog* self, QEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Event_IsBase(true);
        return vkpassworddialog->event(event);
    } else {
        return ((VirtualKPasswordDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Event_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_MousePressEvent(KPasswordDialog* self, QMouseEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->mousePressEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseMousePressEvent(KPasswordDialog* self, QMouseEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_MousePressEvent_IsBase(true);
        vkpassworddialog->mousePressEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnMousePressEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_MouseReleaseEvent(KPasswordDialog* self, QMouseEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseMouseReleaseEvent(KPasswordDialog* self, QMouseEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_MouseReleaseEvent_IsBase(true);
        vkpassworddialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnMouseReleaseEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_MouseDoubleClickEvent(KPasswordDialog* self, QMouseEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseMouseDoubleClickEvent(KPasswordDialog* self, QMouseEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_MouseDoubleClickEvent_IsBase(true);
        vkpassworddialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnMouseDoubleClickEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_MouseMoveEvent(KPasswordDialog* self, QMouseEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->mouseMoveEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseMouseMoveEvent(KPasswordDialog* self, QMouseEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_MouseMoveEvent_IsBase(true);
        vkpassworddialog->mouseMoveEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnMouseMoveEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_WheelEvent(KPasswordDialog* self, QWheelEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->wheelEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseWheelEvent(KPasswordDialog* self, QWheelEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_WheelEvent_IsBase(true);
        vkpassworddialog->wheelEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnWheelEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_WheelEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_KeyReleaseEvent(KPasswordDialog* self, QKeyEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->keyReleaseEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseKeyReleaseEvent(KPasswordDialog* self, QKeyEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_KeyReleaseEvent_IsBase(true);
        vkpassworddialog->keyReleaseEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnKeyReleaseEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_FocusInEvent(KPasswordDialog* self, QFocusEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->focusInEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseFocusInEvent(KPasswordDialog* self, QFocusEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_FocusInEvent_IsBase(true);
        vkpassworddialog->focusInEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnFocusInEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_FocusOutEvent(KPasswordDialog* self, QFocusEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->focusOutEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseFocusOutEvent(KPasswordDialog* self, QFocusEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_FocusOutEvent_IsBase(true);
        vkpassworddialog->focusOutEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnFocusOutEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_EnterEvent(KPasswordDialog* self, QEnterEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->enterEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseEnterEvent(KPasswordDialog* self, QEnterEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_EnterEvent_IsBase(true);
        vkpassworddialog->enterEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnEnterEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_EnterEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_LeaveEvent(KPasswordDialog* self, QEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->leaveEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseLeaveEvent(KPasswordDialog* self, QEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_LeaveEvent_IsBase(true);
        vkpassworddialog->leaveEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnLeaveEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_PaintEvent(KPasswordDialog* self, QPaintEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->paintEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBasePaintEvent(KPasswordDialog* self, QPaintEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_PaintEvent_IsBase(true);
        vkpassworddialog->paintEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnPaintEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_PaintEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_MoveEvent(KPasswordDialog* self, QMoveEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->moveEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseMoveEvent(KPasswordDialog* self, QMoveEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_MoveEvent_IsBase(true);
        vkpassworddialog->moveEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnMoveEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_MoveEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_TabletEvent(KPasswordDialog* self, QTabletEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->tabletEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseTabletEvent(KPasswordDialog* self, QTabletEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_TabletEvent_IsBase(true);
        vkpassworddialog->tabletEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnTabletEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_TabletEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_ActionEvent(KPasswordDialog* self, QActionEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->actionEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseActionEvent(KPasswordDialog* self, QActionEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_ActionEvent_IsBase(true);
        vkpassworddialog->actionEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnActionEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_ActionEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_DragEnterEvent(KPasswordDialog* self, QDragEnterEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->dragEnterEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseDragEnterEvent(KPasswordDialog* self, QDragEnterEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_DragEnterEvent_IsBase(true);
        vkpassworddialog->dragEnterEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnDragEnterEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_DragMoveEvent(KPasswordDialog* self, QDragMoveEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->dragMoveEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseDragMoveEvent(KPasswordDialog* self, QDragMoveEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_DragMoveEvent_IsBase(true);
        vkpassworddialog->dragMoveEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnDragMoveEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_DragLeaveEvent(KPasswordDialog* self, QDragLeaveEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->dragLeaveEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseDragLeaveEvent(KPasswordDialog* self, QDragLeaveEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_DragLeaveEvent_IsBase(true);
        vkpassworddialog->dragLeaveEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnDragLeaveEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_DropEvent(KPasswordDialog* self, QDropEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->dropEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseDropEvent(KPasswordDialog* self, QDropEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_DropEvent_IsBase(true);
        vkpassworddialog->dropEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnDropEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_DropEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_HideEvent(KPasswordDialog* self, QHideEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->hideEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseHideEvent(KPasswordDialog* self, QHideEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_HideEvent_IsBase(true);
        vkpassworddialog->hideEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnHideEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_HideEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPasswordDialog_NativeEvent(KPasswordDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return vkpassworddialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPasswordDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KPasswordDialog_QBaseNativeEvent(KPasswordDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_NativeEvent_IsBase(true);
        return vkpassworddialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPasswordDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnNativeEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_NativeEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_ChangeEvent(KPasswordDialog* self, QEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->changeEvent(param1);
    } else {
        ((VirtualKPasswordDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseChangeEvent(KPasswordDialog* self, QEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_ChangeEvent_IsBase(true);
        vkpassworddialog->changeEvent(param1);
    } else {
        ((VirtualKPasswordDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnChangeEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KPasswordDialog_Metric(const KPasswordDialog* self, int param1) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return vkpassworddialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPasswordDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KPasswordDialog_QBaseMetric(const KPasswordDialog* self, int param1) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Metric_IsBase(true);
        return vkpassworddialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPasswordDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnMetric(const KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Metric_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_InitPainter(const KPasswordDialog* self, QPainter* painter) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->initPainter(painter);
    } else {
        ((VirtualKPasswordDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseInitPainter(const KPasswordDialog* self, QPainter* painter) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_InitPainter_IsBase(true);
        vkpassworddialog->initPainter(painter);
    } else {
        ((VirtualKPasswordDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnInitPainter(const KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_InitPainter_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KPasswordDialog_Redirected(const KPasswordDialog* self, QPoint* offset) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return vkpassworddialog->redirected(offset);
    } else {
        return ((VirtualKPasswordDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KPasswordDialog_QBaseRedirected(const KPasswordDialog* self, QPoint* offset) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Redirected_IsBase(true);
        return vkpassworddialog->redirected(offset);
    } else {
        return ((VirtualKPasswordDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnRedirected(const KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Redirected_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KPasswordDialog_SharedPainter(const KPasswordDialog* self) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return vkpassworddialog->sharedPainter();
    } else {
        return ((VirtualKPasswordDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KPasswordDialog_QBaseSharedPainter(const KPasswordDialog* self) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_SharedPainter_IsBase(true);
        return vkpassworddialog->sharedPainter();
    } else {
        return ((VirtualKPasswordDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnSharedPainter(const KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_SharedPainter_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_InputMethodEvent(KPasswordDialog* self, QInputMethodEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->inputMethodEvent(param1);
    } else {
        ((VirtualKPasswordDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseInputMethodEvent(KPasswordDialog* self, QInputMethodEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_InputMethodEvent_IsBase(true);
        vkpassworddialog->inputMethodEvent(param1);
    } else {
        ((VirtualKPasswordDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnInputMethodEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KPasswordDialog_InputMethodQuery(const KPasswordDialog* self, int param1) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return new QVariant(vkpassworddialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPasswordDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KPasswordDialog_QBaseInputMethodQuery(const KPasswordDialog* self, int param1) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkpassworddialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPasswordDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnInputMethodQuery(const KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPasswordDialog_FocusNextPrevChild(KPasswordDialog* self, bool next) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return vkpassworddialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKPasswordDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KPasswordDialog_QBaseFocusNextPrevChild(KPasswordDialog* self, bool next) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_FocusNextPrevChild_IsBase(true);
        return vkpassworddialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKPasswordDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnFocusNextPrevChild(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_TimerEvent(KPasswordDialog* self, QTimerEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->timerEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseTimerEvent(KPasswordDialog* self, QTimerEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_TimerEvent_IsBase(true);
        vkpassworddialog->timerEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnTimerEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_TimerEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_ChildEvent(KPasswordDialog* self, QChildEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->childEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseChildEvent(KPasswordDialog* self, QChildEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_ChildEvent_IsBase(true);
        vkpassworddialog->childEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnChildEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_ChildEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_CustomEvent(KPasswordDialog* self, QEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->customEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseCustomEvent(KPasswordDialog* self, QEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_CustomEvent_IsBase(true);
        vkpassworddialog->customEvent(event);
    } else {
        ((VirtualKPasswordDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnCustomEvent(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_CustomEvent_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_ConnectNotify(KPasswordDialog* self, const QMetaMethod* signal) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->connectNotify(*signal);
    } else {
        ((VirtualKPasswordDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseConnectNotify(KPasswordDialog* self, const QMetaMethod* signal) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_ConnectNotify_IsBase(true);
        vkpassworddialog->connectNotify(*signal);
    } else {
        ((VirtualKPasswordDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnConnectNotify(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_DisconnectNotify(KPasswordDialog* self, const QMetaMethod* signal) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->disconnectNotify(*signal);
    } else {
        ((VirtualKPasswordDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseDisconnectNotify(KPasswordDialog* self, const QMetaMethod* signal) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_DisconnectNotify_IsBase(true);
        vkpassworddialog->disconnectNotify(*signal);
    } else {
        ((VirtualKPasswordDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnDisconnectNotify(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_AdjustPosition(KPasswordDialog* self, QWidget* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->adjustPosition(param1);
    } else {
        ((VirtualKPasswordDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseAdjustPosition(KPasswordDialog* self, QWidget* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_AdjustPosition_IsBase(true);
        vkpassworddialog->adjustPosition(param1);
    } else {
        ((VirtualKPasswordDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnAdjustPosition(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_UpdateMicroFocus(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->updateMicroFocus();
    } else {
        ((VirtualKPasswordDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseUpdateMicroFocus(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_UpdateMicroFocus_IsBase(true);
        vkpassworddialog->updateMicroFocus();
    } else {
        ((VirtualKPasswordDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnUpdateMicroFocus(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_Create(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->create();
    } else {
        ((VirtualKPasswordDialog*)self)->create();
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseCreate(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Create_IsBase(true);
        vkpassworddialog->create();
    } else {
        ((VirtualKPasswordDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnCreate(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Create_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordDialog_Destroy(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->destroy();
    } else {
        ((VirtualKPasswordDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KPasswordDialog_QBaseDestroy(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Destroy_IsBase(true);
        vkpassworddialog->destroy();
    } else {
        ((VirtualKPasswordDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnDestroy(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Destroy_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPasswordDialog_FocusNextChild(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return vkpassworddialog->focusNextChild();
    } else {
        return ((VirtualKPasswordDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KPasswordDialog_QBaseFocusNextChild(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_FocusNextChild_IsBase(true);
        return vkpassworddialog->focusNextChild();
    } else {
        return ((VirtualKPasswordDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnFocusNextChild(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPasswordDialog_FocusPreviousChild(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return vkpassworddialog->focusPreviousChild();
    } else {
        return ((VirtualKPasswordDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KPasswordDialog_QBaseFocusPreviousChild(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_FocusPreviousChild_IsBase(true);
        return vkpassworddialog->focusPreviousChild();
    } else {
        return ((VirtualKPasswordDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnFocusPreviousChild(KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KPasswordDialog_Sender(const KPasswordDialog* self) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return vkpassworddialog->sender();
    } else {
        return ((VirtualKPasswordDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KPasswordDialog_QBaseSender(const KPasswordDialog* self) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Sender_IsBase(true);
        return vkpassworddialog->sender();
    } else {
        return ((VirtualKPasswordDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnSender(const KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Sender_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KPasswordDialog_SenderSignalIndex(const KPasswordDialog* self) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return vkpassworddialog->senderSignalIndex();
    } else {
        return ((VirtualKPasswordDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KPasswordDialog_QBaseSenderSignalIndex(const KPasswordDialog* self) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_SenderSignalIndex_IsBase(true);
        return vkpassworddialog->senderSignalIndex();
    } else {
        return ((VirtualKPasswordDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnSenderSignalIndex(const KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KPasswordDialog_Receivers(const KPasswordDialog* self, const char* signal) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return vkpassworddialog->receivers(signal);
    } else {
        return ((VirtualKPasswordDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KPasswordDialog_QBaseReceivers(const KPasswordDialog* self, const char* signal) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Receivers_IsBase(true);
        return vkpassworddialog->receivers(signal);
    } else {
        return ((VirtualKPasswordDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnReceivers(const KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_Receivers_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPasswordDialog_IsSignalConnected(const KPasswordDialog* self, const QMetaMethod* signal) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return vkpassworddialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKPasswordDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KPasswordDialog_QBaseIsSignalConnected(const KPasswordDialog* self, const QMetaMethod* signal) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_IsSignalConnected_IsBase(true);
        return vkpassworddialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKPasswordDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnIsSignalConnected(const KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KPasswordDialog_GetDecodedMetricF(const KPasswordDialog* self, int metricA, int metricB) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        return vkpassworddialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPasswordDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KPasswordDialog_QBaseGetDecodedMetricF(const KPasswordDialog* self, int metricA, int metricB) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_GetDecodedMetricF_IsBase(true);
        return vkpassworddialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPasswordDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnGetDecodedMetricF(const KPasswordDialog* self, intptr_t slot) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog && vkpassworddialog->isVirtualKPasswordDialog) {
        vkpassworddialog->setKPasswordDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KPasswordDialog_Delete(KPasswordDialog* self) {
    delete self;
}
