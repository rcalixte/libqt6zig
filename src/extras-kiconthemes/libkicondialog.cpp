#include <KIconDialog>
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
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kicondialog.h>
#include "libkicondialog.h"
#include "libkicondialog.hxx"

KIconDialog* KIconDialog_new(QWidget* parent) {
    return new VirtualKIconDialog(parent);
}

KIconDialog* KIconDialog_new2() {
    return new VirtualKIconDialog();
}

QMetaObject* KIconDialog_MetaObject(const KIconDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIconDialog_Metacast(KIconDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIconDialog_Metacall(KIconDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIconDialog_Tr(const char* s) {
    auto _ret = KIconDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIconDialog_SetStrictIconSize(KIconDialog* self, bool policy) {
    self->setStrictIconSize(policy);
}

bool KIconDialog_StrictIconSize(const KIconDialog* self) {
    return self->strictIconSize();
}

void KIconDialog_SetCustomLocation(KIconDialog* self, const libqt_string location) {
    QString location_QString = QString::fromUtf8(location.data, location.len);
    self->setCustomLocation(location_QString);
}

void KIconDialog_SetIconSize(KIconDialog* self, int size) {
    self->setIconSize(static_cast<int>(size));
}

int KIconDialog_IconSize(const KIconDialog* self) {
    return self->iconSize();
}

void KIconDialog_SetSelectedIcon(KIconDialog* self, const libqt_string iconName) {
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    self->setSelectedIcon(iconName_QString);
}

void KIconDialog_Setup(KIconDialog* self, int group) {
    self->setup(static_cast<KIconLoader::Group>(group));
}

libqt_string KIconDialog_OpenDialog(KIconDialog* self) {
    auto _ret = self->openDialog();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIconDialog_ShowDialog(KIconDialog* self) {
    self->showDialog();
}

libqt_string KIconDialog_GetIcon() {
    auto _ret = KIconDialog::getIcon();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIconDialog_NewIconName(KIconDialog* self, const libqt_string iconName) {
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    self->newIconName(iconName_QString);
}

void KIconDialog_Connect_NewIconName(KIconDialog* self, intptr_t slot) {
    void (*slotFunc)(KIconDialog*, const char*) = reinterpret_cast<void (*)(KIconDialog*, const char*)>(slot);
    KIconDialog::connect(self,
                         static_cast<void (KIconDialog::*)(const QString&)>(&KIconDialog::newIconName),
                         [self, slotFunc](const QString& iconName) {
                             const auto iconName_ret = iconName;
                             // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                             QByteArray iconName_b = iconName_ret.toUtf8();
                             auto iconName_str_len = iconName_b.length();
                             const char* iconName_str = static_cast<const char*>(malloc(iconName_str_len + 1));
                             memcpy((void*)iconName_str, iconName_b.data(), iconName_str_len);
                             ((char*)iconName_str)[iconName_str_len] = '\0';
                             const char* sigval1 = iconName_str;
                             slotFunc(self, sigval1);
                             libqt_free(iconName_str);
                         });
}

void KIconDialog_ShowEvent(KIconDialog* self, QShowEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->showEvent(event);
    }
}

libqt_string KIconDialog_Tr2(const char* s, const char* c) {
    auto _ret = KIconDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIconDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = KIconDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIconDialog_Setup2(KIconDialog* self, int group, int context) {
    self->setup(static_cast<KIconLoader::Group>(group), static_cast<KIconLoader::Context>(context));
}

void KIconDialog_Setup3(KIconDialog* self, int group, int context, bool strictIconSize) {
    self->setup(static_cast<KIconLoader::Group>(group), static_cast<KIconLoader::Context>(context), strictIconSize);
}

void KIconDialog_Setup4(KIconDialog* self, int group, int context, bool strictIconSize, int iconSize) {
    self->setup(static_cast<KIconLoader::Group>(group), static_cast<KIconLoader::Context>(context), strictIconSize, static_cast<int>(iconSize));
}

void KIconDialog_Setup5(KIconDialog* self, int group, int context, bool strictIconSize, int iconSize, bool user) {
    self->setup(static_cast<KIconLoader::Group>(group), static_cast<KIconLoader::Context>(context), strictIconSize, static_cast<int>(iconSize), user);
}

void KIconDialog_Setup6(KIconDialog* self, int group, int context, bool strictIconSize, int iconSize, bool user, bool lockUser) {
    self->setup(static_cast<KIconLoader::Group>(group), static_cast<KIconLoader::Context>(context), strictIconSize, static_cast<int>(iconSize), user, lockUser);
}

void KIconDialog_Setup7(KIconDialog* self, int group, int context, bool strictIconSize, int iconSize, bool user, bool lockUser, bool lockCustomDir) {
    self->setup(static_cast<KIconLoader::Group>(group), static_cast<KIconLoader::Context>(context), strictIconSize, static_cast<int>(iconSize), user, lockUser, lockCustomDir);
}

libqt_string KIconDialog_GetIcon1(int group) {
    auto _ret = KIconDialog::getIcon(static_cast<KIconLoader::Group>(group));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIconDialog_GetIcon2(int group, int context) {
    auto _ret = KIconDialog::getIcon(static_cast<KIconLoader::Group>(group), static_cast<KIconLoader::Context>(context));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIconDialog_GetIcon3(int group, int context, bool strictIconSize) {
    auto _ret = KIconDialog::getIcon(static_cast<KIconLoader::Group>(group), static_cast<KIconLoader::Context>(context), strictIconSize);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIconDialog_GetIcon4(int group, int context, bool strictIconSize, int iconSize) {
    auto _ret = KIconDialog::getIcon(static_cast<KIconLoader::Group>(group), static_cast<KIconLoader::Context>(context), strictIconSize, static_cast<int>(iconSize));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIconDialog_GetIcon5(int group, int context, bool strictIconSize, int iconSize, bool user) {
    auto _ret = KIconDialog::getIcon(static_cast<KIconLoader::Group>(group), static_cast<KIconLoader::Context>(context), strictIconSize, static_cast<int>(iconSize), user);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIconDialog_GetIcon6(int group, int context, bool strictIconSize, int iconSize, bool user, QWidget* parent) {
    auto _ret = KIconDialog::getIcon(static_cast<KIconLoader::Group>(group), static_cast<KIconLoader::Context>(context), strictIconSize, static_cast<int>(iconSize), user, parent);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIconDialog_GetIcon7(int group, int context, bool strictIconSize, int iconSize, bool user, QWidget* parent, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    auto _ret = KIconDialog::getIcon(static_cast<KIconLoader::Group>(group), static_cast<KIconLoader::Context>(context), strictIconSize, static_cast<int>(iconSize), user, parent, title_QString);
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
QMetaObject* KIconDialog_SuperMetaObject(const KIconDialog* self) {
    return (QMetaObject*)self->KIconDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnMetaObject(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self)))
        vkicondialog->kicondialog_metaobject_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KIconDialog_SuperMetacast(KIconDialog* self, const char* param1) {
    return self->KIconDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnMetacast(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_metacast_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KIconDialog_SuperMetacall(KIconDialog* self, int param1, int param2, void** param3) {
    return self->KIconDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnMetacall(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_metacall_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
void KIconDialog_SuperShowEvent(KIconDialog* self, QShowEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnShowEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_showevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_SetVisible(KIconDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KIconDialog_SuperSetVisible(KIconDialog* self, bool visible) {
    self->KIconDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnSetVisible(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_setvisible_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KIconDialog_SizeHint(const KIconDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KIconDialog_SuperSizeHint(const KIconDialog* self) {
    return new QSize(self->KIconDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnSizeHint(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self)))
        vkicondialog->kicondialog_sizehint_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KIconDialog_MinimumSizeHint(const KIconDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KIconDialog_SuperMinimumSizeHint(const KIconDialog* self) {
    return new QSize(self->KIconDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnMinimumSizeHint(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self)))
        vkicondialog->kicondialog_minimumsizehint_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_Open(KIconDialog* self) {
    self->open();
}

// Base class handler implementation
void KIconDialog_SuperOpen(KIconDialog* self) {
    self->KIconDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnOpen(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_open_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KIconDialog_Exec(KIconDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KIconDialog_SuperExec(KIconDialog* self) {
    return self->KIconDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnExec(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_exec_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_Done(KIconDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KIconDialog_SuperDone(KIconDialog* self, int param1) {
    self->KIconDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnDone(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_done_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_Accept(KIconDialog* self) {
    self->accept();
}

// Base class handler implementation
void KIconDialog_SuperAccept(KIconDialog* self) {
    self->KIconDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnAccept(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_accept_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_Reject(KIconDialog* self) {
    self->reject();
}

// Base class handler implementation
void KIconDialog_SuperReject(KIconDialog* self) {
    self->KIconDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnReject(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_reject_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_KeyPressEvent(KIconDialog* self, QKeyEvent* param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperKeyPressEvent(KIconDialog* self, QKeyEvent* param1) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIconDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnKeyPressEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_keypressevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_CloseEvent(KIconDialog* self, QCloseEvent* param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperCloseEvent(KIconDialog* self, QCloseEvent* param1) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIconDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnCloseEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_closeevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_ResizeEvent(KIconDialog* self, QResizeEvent* param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperResizeEvent(KIconDialog* self, QResizeEvent* param1) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIconDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnResizeEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_resizeevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_ContextMenuEvent(KIconDialog* self, QContextMenuEvent* param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperContextMenuEvent(KIconDialog* self, QContextMenuEvent* param1) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIconDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnContextMenuEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_contextmenuevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KIconDialog_EventFilter(KIconDialog* self, QObject* param1, QEvent* param2) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        return vkicondialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIconDialog_SuperEventFilter(KIconDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        return vkicondialog->KIconDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KIconDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnEventFilter(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_eventfilter_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KIconDialog_DevType(const KIconDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KIconDialog_SuperDevType(const KIconDialog* self) {
    return self->KIconDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnDevType(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self)))
        vkicondialog->kicondialog_devtype_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KIconDialog_HeightForWidth(const KIconDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KIconDialog_SuperHeightForWidth(const KIconDialog* self, int param1) {
    return self->KIconDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnHeightForWidth(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self)))
        vkicondialog->kicondialog_heightforwidth_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KIconDialog_HasHeightForWidth(const KIconDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KIconDialog_SuperHasHeightForWidth(const KIconDialog* self) {
    return self->KIconDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnHasHeightForWidth(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self)))
        vkicondialog->kicondialog_hasheightforwidth_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KIconDialog_PaintEngine(const KIconDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KIconDialog_SuperPaintEngine(const KIconDialog* self) {
    return self->KIconDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnPaintEngine(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self)))
        vkicondialog->kicondialog_paintengine_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KIconDialog_Event(KIconDialog* self, QEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        return vkicondialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIconDialog_SuperEvent(KIconDialog* self, QEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        return vkicondialog->KIconDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_event_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_MousePressEvent(KIconDialog* self, QMouseEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperMousePressEvent(KIconDialog* self, QMouseEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnMousePressEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_mousepressevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_MouseReleaseEvent(KIconDialog* self, QMouseEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperMouseReleaseEvent(KIconDialog* self, QMouseEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnMouseReleaseEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_mousereleaseevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_MouseDoubleClickEvent(KIconDialog* self, QMouseEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperMouseDoubleClickEvent(KIconDialog* self, QMouseEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnMouseDoubleClickEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_MouseMoveEvent(KIconDialog* self, QMouseEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperMouseMoveEvent(KIconDialog* self, QMouseEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnMouseMoveEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_mousemoveevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_WheelEvent(KIconDialog* self, QWheelEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperWheelEvent(KIconDialog* self, QWheelEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnWheelEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_wheelevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_KeyReleaseEvent(KIconDialog* self, QKeyEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperKeyReleaseEvent(KIconDialog* self, QKeyEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnKeyReleaseEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_keyreleaseevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_FocusInEvent(KIconDialog* self, QFocusEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperFocusInEvent(KIconDialog* self, QFocusEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnFocusInEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_focusinevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_FocusOutEvent(KIconDialog* self, QFocusEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperFocusOutEvent(KIconDialog* self, QFocusEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnFocusOutEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_focusoutevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_EnterEvent(KIconDialog* self, QEnterEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperEnterEvent(KIconDialog* self, QEnterEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnEnterEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_enterevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_LeaveEvent(KIconDialog* self, QEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperLeaveEvent(KIconDialog* self, QEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnLeaveEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_leaveevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_PaintEvent(KIconDialog* self, QPaintEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperPaintEvent(KIconDialog* self, QPaintEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnPaintEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_paintevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_MoveEvent(KIconDialog* self, QMoveEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperMoveEvent(KIconDialog* self, QMoveEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnMoveEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_moveevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_TabletEvent(KIconDialog* self, QTabletEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperTabletEvent(KIconDialog* self, QTabletEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnTabletEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_tabletevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_ActionEvent(KIconDialog* self, QActionEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperActionEvent(KIconDialog* self, QActionEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnActionEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_actionevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_DragEnterEvent(KIconDialog* self, QDragEnterEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperDragEnterEvent(KIconDialog* self, QDragEnterEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnDragEnterEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_dragenterevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_DragMoveEvent(KIconDialog* self, QDragMoveEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperDragMoveEvent(KIconDialog* self, QDragMoveEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnDragMoveEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_dragmoveevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_DragLeaveEvent(KIconDialog* self, QDragLeaveEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperDragLeaveEvent(KIconDialog* self, QDragLeaveEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnDragLeaveEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_dragleaveevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_DropEvent(KIconDialog* self, QDropEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperDropEvent(KIconDialog* self, QDropEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnDropEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_dropevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_HideEvent(KIconDialog* self, QHideEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperHideEvent(KIconDialog* self, QHideEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnHideEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_hideevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KIconDialog_NativeEvent(KIconDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        return vkicondialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KIconDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIconDialog_SuperNativeEvent(KIconDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        return vkicondialog->KIconDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KIconDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnNativeEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_nativeevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_ChangeEvent(KIconDialog* self, QEvent* param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperChangeEvent(KIconDialog* self, QEvent* param1) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIconDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnChangeEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_changeevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KIconDialog_Metric(const KIconDialog* self, int param1) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog) {
        return vkicondialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KIconDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KIconDialog_SuperMetric(const KIconDialog* self, int param1) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self))) {
        return vkicondialog->KIconDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KIconDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnMetric(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self)))
        vkicondialog->kicondialog_metric_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_InitPainter(const KIconDialog* self, QPainter* painter) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog) {
        vkicondialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperInitPainter(const KIconDialog* self, QPainter* painter) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self))) {
        vkicondialog->KIconDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KIconDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnInitPainter(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self)))
        vkicondialog->kicondialog_initpainter_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KIconDialog_Redirected(const KIconDialog* self, QPoint* offset) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog) {
        return vkicondialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KIconDialog_SuperRedirected(const KIconDialog* self, QPoint* offset) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self))) {
        return vkicondialog->KIconDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KIconDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnRedirected(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self)))
        vkicondialog->kicondialog_redirected_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KIconDialog_SharedPainter(const KIconDialog* self) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog) {
        return vkicondialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KIconDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KIconDialog_SuperSharedPainter(const KIconDialog* self) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self))) {
        return vkicondialog->KIconDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KIconDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnSharedPainter(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self)))
        vkicondialog->kicondialog_sharedpainter_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_InputMethodEvent(KIconDialog* self, QInputMethodEvent* param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperInputMethodEvent(KIconDialog* self, QInputMethodEvent* param1) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIconDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnInputMethodEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_inputmethodevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KIconDialog_InputMethodQuery(const KIconDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KIconDialog_SuperInputMethodQuery(const KIconDialog* self, int param1) {
    return new QVariant(self->KIconDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnInputMethodQuery(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self)))
        vkicondialog->kicondialog_inputmethodquery_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KIconDialog_FocusNextPrevChild(KIconDialog* self, bool next) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        return vkicondialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIconDialog_SuperFocusNextPrevChild(KIconDialog* self, bool next) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        return vkicondialog->KIconDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KIconDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnFocusNextPrevChild(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_focusnextprevchild_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_TimerEvent(KIconDialog* self, QTimerEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperTimerEvent(KIconDialog* self, QTimerEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnTimerEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_timerevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_ChildEvent(KIconDialog* self, QChildEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperChildEvent(KIconDialog* self, QChildEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnChildEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_childevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_CustomEvent(KIconDialog* self, QEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperCustomEvent(KIconDialog* self, QEvent* event) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KIconDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnCustomEvent(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_customevent_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_ConnectNotify(KIconDialog* self, const QMetaMethod* signal) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperConnectNotify(KIconDialog* self, const QMetaMethod* signal) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIconDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnConnectNotify(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_connectnotify_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KIconDialog_DisconnectNotify(KIconDialog* self, const QMetaMethod* signal) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog) {
        vkicondialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIconDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIconDialog_SuperDisconnectNotify(KIconDialog* self, const QMetaMethod* signal) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->KIconDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIconDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnDisconnectNotify(KIconDialog* self, intptr_t slot) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self))
        vkicondialog->kicondialog_disconnectnotify_callback = reinterpret_cast<VirtualKIconDialog::KIconDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KIconDialog_SlotOk(KIconDialog* self) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->VirtualKIconDialog::slotOk();
    } else
        qFatal("Error: Protected method KIconDialog::slotOk called without a directly constructed type");
}

// Derived class protected handler implementation
void KIconDialog_AdjustPosition(KIconDialog* self, QWidget* param1) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->VirtualKIconDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KIconDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KIconDialog_UpdateMicroFocus(KIconDialog* self) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->VirtualKIconDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KIconDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KIconDialog_Create(KIconDialog* self) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->VirtualKIconDialog::create();
    } else
        qFatal("Error: Protected method KIconDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KIconDialog_Destroy(KIconDialog* self) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        vkicondialog->VirtualKIconDialog::destroy();
    } else
        qFatal("Error: Protected method KIconDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIconDialog_FocusNextChild(KIconDialog* self) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        return vkicondialog->VirtualKIconDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KIconDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIconDialog_FocusPreviousChild(KIconDialog* self) {
    if (auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self)) {
        return vkicondialog->VirtualKIconDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KIconDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KIconDialog_Sender(const KIconDialog* self) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self))) {
        return vkicondialog->VirtualKIconDialog::sender();
    } else
        qFatal("Error: Protected method KIconDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KIconDialog_SenderSignalIndex(const KIconDialog* self) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self))) {
        return vkicondialog->VirtualKIconDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KIconDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KIconDialog_Receivers(const KIconDialog* self, const char* signal) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self))) {
        return vkicondialog->VirtualKIconDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KIconDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIconDialog_IsSignalConnected(const KIconDialog* self, const QMetaMethod* signal) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self))) {
        return vkicondialog->VirtualKIconDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KIconDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KIconDialog_GetDecodedMetricF(const KIconDialog* self, int metricA, int metricB) {
    if (auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self))) {
        return vkicondialog->VirtualKIconDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KIconDialog::getDecodedMetricF called without a directly constructed type");
}

void KIconDialog_Delete(KIconDialog* self) {
    delete self;
}
