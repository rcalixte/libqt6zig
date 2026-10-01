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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KPasswordDialog_Tr(const char* s) {
    auto _ret = KPasswordDialog::tr(s);
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

void KPasswordDialog_SetUsername(KPasswordDialog* self, const libqt_string username) {
    QString username_QString = QString::fromUtf8(username.data, username.len);
    self->setUsername(username_QString);
}

libqt_string KPasswordDialog_Username(const KPasswordDialog* self) {
    auto _ret = self->username();
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
    auto _ret = self->domain();
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
        knownLogins_QMap.insert(knownLogins_karr_i_QString, knownLogins_varr_i_QString);
    }
    self->setKnownLogins(knownLogins_QMap);
}

void KPasswordDialog_Accept(KPasswordDialog* self) {
    self->accept();
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
    KPasswordDialog::connect(self,
                             static_cast<void (KPasswordDialog::*)(const QString&, bool)>(&KPasswordDialog::gotPassword),
                             [self, slotFunc](const QString& password, bool keep) {
                                 const auto password_ret = password;
                                 // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                 QByteArray password_b = password_ret.toUtf8();
                                 auto password_str_len = password_b.length();
                                 const char* password_str = static_cast<const char*>(malloc(password_str_len + 1));
                                 memcpy((void*)password_str, password_b.data(), password_str_len);
                                 ((char*)password_str)[password_str_len] = '\0';
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
    KPasswordDialog::connect(self,
                             static_cast<void (KPasswordDialog::*)(const QString&, const QString&, bool)>(&KPasswordDialog::gotUsernameAndPassword),
                             [self, slotFunc](const QString& username, const QString& password, bool keep) {
                                 const auto username_ret = username;
                                 // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                 QByteArray username_b = username_ret.toUtf8();
                                 auto username_str_len = username_b.length();
                                 const char* username_str = static_cast<const char*>(malloc(username_str_len + 1));
                                 memcpy((void*)username_str, username_b.data(), username_str_len);
                                 ((char*)username_str)[username_str_len] = '\0';
                                 const char* sigval1 = username_str;
                                 const auto password_ret = password;
                                 // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                 QByteArray password_b = password_ret.toUtf8();
                                 auto password_str_len = password_b.length();
                                 const char* password_str = static_cast<const char*>(malloc(password_str_len + 1));
                                 memcpy((void*)password_str, password_b.data(), password_str_len);
                                 ((char*)password_str)[password_str_len] = '\0';
                                 const char* sigval2 = password_str;
                                 bool sigval3 = keep;
                                 slotFunc(self, sigval1, sigval2, sigval3);
                                 libqt_free(username_str);
                                 libqt_free(password_str);
                             });
}

bool KPasswordDialog_CheckPassword(KPasswordDialog* self) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        return vkpassworddialog->checkPassword();
    }
    qFatal("Error: Protected method KPasswordDialog::checkPassword called without a directly constructed type");
}

libqt_string KPasswordDialog_Tr2(const char* s, const char* c) {
    auto _ret = KPasswordDialog::tr(s, c);
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
    auto _ret = KPasswordDialog::tr(s, c, static_cast<int>(n));
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

// Base class handler implementation
QMetaObject* KPasswordDialog_SuperMetaObject(const KPasswordDialog* self) {
    return (QMetaObject*)self->KPasswordDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnMetaObject(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self)))
        vkpassworddialog->kpassworddialog_metaobject_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KPasswordDialog_SuperMetacast(KPasswordDialog* self, const char* param1) {
    return self->KPasswordDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnMetacast(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_metacast_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KPasswordDialog_SuperMetacall(KPasswordDialog* self, int param1, int param2, void** param3) {
    return self->KPasswordDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnMetacall(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_metacall_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
void KPasswordDialog_SuperAccept(KPasswordDialog* self) {
    self->KPasswordDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnAccept(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_accept_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Accept_Callback>(slot);
}

// Base class handler implementation
bool KPasswordDialog_SuperCheckPassword(KPasswordDialog* self) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        return vkpassworddialog->KPasswordDialog::checkPassword();
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::checkPassword called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnCheckPassword(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_checkpassword_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_CheckPassword_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_SetVisible(KPasswordDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KPasswordDialog_SuperSetVisible(KPasswordDialog* self, bool visible) {
    self->KPasswordDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnSetVisible(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_setvisible_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KPasswordDialog_SizeHint(const KPasswordDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KPasswordDialog_SuperSizeHint(const KPasswordDialog* self) {
    return new QSize(self->KPasswordDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnSizeHint(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self)))
        vkpassworddialog->kpassworddialog_sizehint_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KPasswordDialog_MinimumSizeHint(const KPasswordDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KPasswordDialog_SuperMinimumSizeHint(const KPasswordDialog* self) {
    return new QSize(self->KPasswordDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnMinimumSizeHint(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self)))
        vkpassworddialog->kpassworddialog_minimumsizehint_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_Open(KPasswordDialog* self) {
    self->open();
}

// Base class handler implementation
void KPasswordDialog_SuperOpen(KPasswordDialog* self) {
    self->KPasswordDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnOpen(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_open_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KPasswordDialog_Exec(KPasswordDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KPasswordDialog_SuperExec(KPasswordDialog* self) {
    return self->KPasswordDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnExec(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_exec_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_Done(KPasswordDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KPasswordDialog_SuperDone(KPasswordDialog* self, int param1) {
    self->KPasswordDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnDone(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_done_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_Reject(KPasswordDialog* self) {
    self->reject();
}

// Base class handler implementation
void KPasswordDialog_SuperReject(KPasswordDialog* self) {
    self->KPasswordDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnReject(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_reject_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_KeyPressEvent(KPasswordDialog* self, QKeyEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperKeyPressEvent(KPasswordDialog* self, QKeyEvent* param1) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnKeyPressEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_keypressevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_CloseEvent(KPasswordDialog* self, QCloseEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperCloseEvent(KPasswordDialog* self, QCloseEvent* param1) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnCloseEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_closeevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_ShowEvent(KPasswordDialog* self, QShowEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperShowEvent(KPasswordDialog* self, QShowEvent* param1) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnShowEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_showevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_ResizeEvent(KPasswordDialog* self, QResizeEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperResizeEvent(KPasswordDialog* self, QResizeEvent* param1) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnResizeEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_resizeevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_ContextMenuEvent(KPasswordDialog* self, QContextMenuEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperContextMenuEvent(KPasswordDialog* self, QContextMenuEvent* param1) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnContextMenuEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_contextmenuevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KPasswordDialog_EventFilter(KPasswordDialog* self, QObject* param1, QEvent* param2) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        return vkpassworddialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPasswordDialog_SuperEventFilter(KPasswordDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        return vkpassworddialog->KPasswordDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnEventFilter(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_eventfilter_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KPasswordDialog_DevType(const KPasswordDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KPasswordDialog_SuperDevType(const KPasswordDialog* self) {
    return self->KPasswordDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnDevType(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self)))
        vkpassworddialog->kpassworddialog_devtype_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KPasswordDialog_HeightForWidth(const KPasswordDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KPasswordDialog_SuperHeightForWidth(const KPasswordDialog* self, int param1) {
    return self->KPasswordDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnHeightForWidth(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self)))
        vkpassworddialog->kpassworddialog_heightforwidth_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KPasswordDialog_HasHeightForWidth(const KPasswordDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KPasswordDialog_SuperHasHeightForWidth(const KPasswordDialog* self) {
    return self->KPasswordDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnHasHeightForWidth(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self)))
        vkpassworddialog->kpassworddialog_hasheightforwidth_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KPasswordDialog_PaintEngine(const KPasswordDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KPasswordDialog_SuperPaintEngine(const KPasswordDialog* self) {
    return self->KPasswordDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnPaintEngine(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self)))
        vkpassworddialog->kpassworddialog_paintengine_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KPasswordDialog_Event(KPasswordDialog* self, QEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        return vkpassworddialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPasswordDialog_SuperEvent(KPasswordDialog* self, QEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        return vkpassworddialog->KPasswordDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_event_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_MousePressEvent(KPasswordDialog* self, QMouseEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperMousePressEvent(KPasswordDialog* self, QMouseEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnMousePressEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_mousepressevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_MouseReleaseEvent(KPasswordDialog* self, QMouseEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperMouseReleaseEvent(KPasswordDialog* self, QMouseEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnMouseReleaseEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_mousereleaseevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_MouseDoubleClickEvent(KPasswordDialog* self, QMouseEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperMouseDoubleClickEvent(KPasswordDialog* self, QMouseEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnMouseDoubleClickEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_MouseMoveEvent(KPasswordDialog* self, QMouseEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperMouseMoveEvent(KPasswordDialog* self, QMouseEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnMouseMoveEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_mousemoveevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_WheelEvent(KPasswordDialog* self, QWheelEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperWheelEvent(KPasswordDialog* self, QWheelEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnWheelEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_wheelevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_KeyReleaseEvent(KPasswordDialog* self, QKeyEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperKeyReleaseEvent(KPasswordDialog* self, QKeyEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnKeyReleaseEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_keyreleaseevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_FocusInEvent(KPasswordDialog* self, QFocusEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperFocusInEvent(KPasswordDialog* self, QFocusEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnFocusInEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_focusinevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_FocusOutEvent(KPasswordDialog* self, QFocusEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperFocusOutEvent(KPasswordDialog* self, QFocusEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnFocusOutEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_focusoutevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_EnterEvent(KPasswordDialog* self, QEnterEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperEnterEvent(KPasswordDialog* self, QEnterEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnEnterEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_enterevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_LeaveEvent(KPasswordDialog* self, QEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperLeaveEvent(KPasswordDialog* self, QEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnLeaveEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_leaveevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_PaintEvent(KPasswordDialog* self, QPaintEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperPaintEvent(KPasswordDialog* self, QPaintEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnPaintEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_paintevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_MoveEvent(KPasswordDialog* self, QMoveEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperMoveEvent(KPasswordDialog* self, QMoveEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnMoveEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_moveevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_TabletEvent(KPasswordDialog* self, QTabletEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperTabletEvent(KPasswordDialog* self, QTabletEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnTabletEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_tabletevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_ActionEvent(KPasswordDialog* self, QActionEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperActionEvent(KPasswordDialog* self, QActionEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnActionEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_actionevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_DragEnterEvent(KPasswordDialog* self, QDragEnterEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperDragEnterEvent(KPasswordDialog* self, QDragEnterEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnDragEnterEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_dragenterevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_DragMoveEvent(KPasswordDialog* self, QDragMoveEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperDragMoveEvent(KPasswordDialog* self, QDragMoveEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnDragMoveEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_dragmoveevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_DragLeaveEvent(KPasswordDialog* self, QDragLeaveEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperDragLeaveEvent(KPasswordDialog* self, QDragLeaveEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnDragLeaveEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_dragleaveevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_DropEvent(KPasswordDialog* self, QDropEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperDropEvent(KPasswordDialog* self, QDropEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnDropEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_dropevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_HideEvent(KPasswordDialog* self, QHideEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperHideEvent(KPasswordDialog* self, QHideEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnHideEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_hideevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KPasswordDialog_NativeEvent(KPasswordDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        return vkpassworddialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPasswordDialog_SuperNativeEvent(KPasswordDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        return vkpassworddialog->KPasswordDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnNativeEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_nativeevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_ChangeEvent(KPasswordDialog* self, QEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperChangeEvent(KPasswordDialog* self, QEvent* param1) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnChangeEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_changeevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KPasswordDialog_Metric(const KPasswordDialog* self, int param1) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog) {
        return vkpassworddialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KPasswordDialog_SuperMetric(const KPasswordDialog* self, int param1) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self))) {
        return vkpassworddialog->KPasswordDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnMetric(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self)))
        vkpassworddialog->kpassworddialog_metric_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_InitPainter(const KPasswordDialog* self, QPainter* painter) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog) {
        vkpassworddialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperInitPainter(const KPasswordDialog* self, QPainter* painter) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self))) {
        vkpassworddialog->KPasswordDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnInitPainter(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self)))
        vkpassworddialog->kpassworddialog_initpainter_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KPasswordDialog_Redirected(const KPasswordDialog* self, QPoint* offset) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog) {
        return vkpassworddialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KPasswordDialog_SuperRedirected(const KPasswordDialog* self, QPoint* offset) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self))) {
        return vkpassworddialog->KPasswordDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnRedirected(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self)))
        vkpassworddialog->kpassworddialog_redirected_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KPasswordDialog_SharedPainter(const KPasswordDialog* self) {
    auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self));
    if (vkpassworddialog) {
        return vkpassworddialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KPasswordDialog_SuperSharedPainter(const KPasswordDialog* self) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self))) {
        return vkpassworddialog->KPasswordDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnSharedPainter(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self)))
        vkpassworddialog->kpassworddialog_sharedpainter_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_InputMethodEvent(KPasswordDialog* self, QInputMethodEvent* param1) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperInputMethodEvent(KPasswordDialog* self, QInputMethodEvent* param1) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnInputMethodEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_inputmethodevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KPasswordDialog_InputMethodQuery(const KPasswordDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KPasswordDialog_SuperInputMethodQuery(const KPasswordDialog* self, int param1) {
    return new QVariant(self->KPasswordDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnInputMethodQuery(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self)))
        vkpassworddialog->kpassworddialog_inputmethodquery_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KPasswordDialog_FocusNextPrevChild(KPasswordDialog* self, bool next) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        return vkpassworddialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPasswordDialog_SuperFocusNextPrevChild(KPasswordDialog* self, bool next) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        return vkpassworddialog->KPasswordDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnFocusNextPrevChild(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_focusnextprevchild_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_TimerEvent(KPasswordDialog* self, QTimerEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperTimerEvent(KPasswordDialog* self, QTimerEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnTimerEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_timerevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_ChildEvent(KPasswordDialog* self, QChildEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperChildEvent(KPasswordDialog* self, QChildEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnChildEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_childevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_CustomEvent(KPasswordDialog* self, QEvent* event) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperCustomEvent(KPasswordDialog* self, QEvent* event) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnCustomEvent(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_customevent_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_ConnectNotify(KPasswordDialog* self, const QMetaMethod* signal) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperConnectNotify(KPasswordDialog* self, const QMetaMethod* signal) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnConnectNotify(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_connectnotify_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KPasswordDialog_DisconnectNotify(KPasswordDialog* self, const QMetaMethod* signal) {
    auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self);
    if (vkpassworddialog) {
        vkpassworddialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPasswordDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordDialog_SuperDisconnectNotify(KPasswordDialog* self, const QMetaMethod* signal) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->KPasswordDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPasswordDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordDialog_OnDisconnectNotify(KPasswordDialog* self, intptr_t slot) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self))
        vkpassworddialog->kpassworddialog_disconnectnotify_callback = reinterpret_cast<VirtualKPasswordDialog::KPasswordDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KPasswordDialog_AdjustPosition(KPasswordDialog* self, QWidget* param1) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->VirtualKPasswordDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KPasswordDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KPasswordDialog_UpdateMicroFocus(KPasswordDialog* self) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->VirtualKPasswordDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KPasswordDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KPasswordDialog_Create(KPasswordDialog* self) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->VirtualKPasswordDialog::create();
    } else
        qFatal("Error: Protected method KPasswordDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KPasswordDialog_Destroy(KPasswordDialog* self) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        vkpassworddialog->VirtualKPasswordDialog::destroy();
    } else
        qFatal("Error: Protected method KPasswordDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPasswordDialog_FocusNextChild(KPasswordDialog* self) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        return vkpassworddialog->VirtualKPasswordDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KPasswordDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPasswordDialog_FocusPreviousChild(KPasswordDialog* self) {
    if (auto* vkpassworddialog = dynamic_cast<VirtualKPasswordDialog*>(self)) {
        return vkpassworddialog->VirtualKPasswordDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KPasswordDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KPasswordDialog_Sender(const KPasswordDialog* self) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self))) {
        return vkpassworddialog->VirtualKPasswordDialog::sender();
    } else
        qFatal("Error: Protected method KPasswordDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KPasswordDialog_SenderSignalIndex(const KPasswordDialog* self) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self))) {
        return vkpassworddialog->VirtualKPasswordDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KPasswordDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KPasswordDialog_Receivers(const KPasswordDialog* self, const char* signal) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self))) {
        return vkpassworddialog->VirtualKPasswordDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KPasswordDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPasswordDialog_IsSignalConnected(const KPasswordDialog* self, const QMetaMethod* signal) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self))) {
        return vkpassworddialog->VirtualKPasswordDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KPasswordDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KPasswordDialog_GetDecodedMetricF(const KPasswordDialog* self, int metricA, int metricB) {
    if (auto* vkpassworddialog = const_cast<VirtualKPasswordDialog*>(dynamic_cast<const VirtualKPasswordDialog*>(self))) {
        return vkpassworddialog->VirtualKPasswordDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KPasswordDialog::getDecodedMetricF called without a directly constructed type");
}

void KPasswordDialog_Delete(KPasswordDialog* self) {
    delete self;
}
