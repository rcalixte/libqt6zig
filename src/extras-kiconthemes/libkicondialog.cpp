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
#include <QByteArray>
#include <cstring>
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
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKIconDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KIconDialog_Tr(const char* s) {
    QString _ret = KIconDialog::tr(s);
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
    QString _ret = self->openDialog();
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
    QString _ret = KIconDialog::getIcon();
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
    KIconDialog::connect(self, &KIconDialog::newIconName, [self, slotFunc](const QString& iconName) {
        const QString iconName_ret = iconName;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray iconName_b = iconName_ret.toUtf8();
        const char* iconName_str = static_cast<const char*>(malloc(iconName_b.length() + 1));
        memcpy((void*)iconName_str, iconName_b.data(), iconName_b.length());
        ((char*)iconName_str)[iconName_b.length()] = '\0';
        const char* sigval1 = iconName_str;
        slotFunc(self, sigval1);
        libqt_free(iconName_str);
    });
}

void KIconDialog_ShowEvent(KIconDialog* self, QShowEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->showEvent(event);
    }
}

libqt_string KIconDialog_Tr2(const char* s, const char* c) {
    QString _ret = KIconDialog::tr(s, c);
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
    QString _ret = KIconDialog::tr(s, c, static_cast<int>(n));
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
    QString _ret = KIconDialog::getIcon(static_cast<KIconLoader::Group>(group));
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
    QString _ret = KIconDialog::getIcon(static_cast<KIconLoader::Group>(group), static_cast<KIconLoader::Context>(context));
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
    QString _ret = KIconDialog::getIcon(static_cast<KIconLoader::Group>(group), static_cast<KIconLoader::Context>(context), strictIconSize);
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
    QString _ret = KIconDialog::getIcon(static_cast<KIconLoader::Group>(group), static_cast<KIconLoader::Context>(context), strictIconSize, static_cast<int>(iconSize));
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
    QString _ret = KIconDialog::getIcon(static_cast<KIconLoader::Group>(group), static_cast<KIconLoader::Context>(context), strictIconSize, static_cast<int>(iconSize), user);
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
    QString _ret = KIconDialog::getIcon(static_cast<KIconLoader::Group>(group), static_cast<KIconLoader::Context>(context), strictIconSize, static_cast<int>(iconSize), user, parent);
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
    QString _ret = KIconDialog::getIcon(static_cast<KIconLoader::Group>(group), static_cast<KIconLoader::Context>(context), strictIconSize, static_cast<int>(iconSize), user, parent, title_QString);
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
int KIconDialog_QBaseMetacall(KIconDialog* self, int param1, int param2, void** param3) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Metacall_IsBase(true);
        return vkicondialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIconDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnMetacall(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Metacall_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KIconDialog_QBaseShowEvent(KIconDialog* self, QShowEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_ShowEvent_IsBase(true);
        vkicondialog->showEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnShowEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_ShowEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_SetVisible(KIconDialog* self, bool visible) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setVisible(visible);
    } else {
        self->KIconDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KIconDialog_QBaseSetVisible(KIconDialog* self, bool visible) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_SetVisible_IsBase(true);
        vkicondialog->setVisible(visible);
    } else {
        self->KIconDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnSetVisible(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_SetVisible_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KIconDialog_SizeHint(const KIconDialog* self) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return new QSize(vkicondialog->sizeHint());
    } else {
        return new QSize(((VirtualKIconDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KIconDialog_QBaseSizeHint(const KIconDialog* self) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_SizeHint_IsBase(true);
        return new QSize(vkicondialog->sizeHint());
    } else {
        return new QSize(((VirtualKIconDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnSizeHint(const KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_SizeHint_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KIconDialog_MinimumSizeHint(const KIconDialog* self) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return new QSize(vkicondialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKIconDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KIconDialog_QBaseMinimumSizeHint(const KIconDialog* self) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkicondialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKIconDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnMinimumSizeHint(const KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_Open(KIconDialog* self) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->open();
    } else {
        self->KIconDialog::open();
    }
}

// Base class handler implementation
void KIconDialog_QBaseOpen(KIconDialog* self) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Open_IsBase(true);
        vkicondialog->open();
    } else {
        self->KIconDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnOpen(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Open_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KIconDialog_Exec(KIconDialog* self) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return vkicondialog->exec();
    } else {
        return self->KIconDialog::exec();
    }
}

// Base class handler implementation
int KIconDialog_QBaseExec(KIconDialog* self) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Exec_IsBase(true);
        return vkicondialog->exec();
    } else {
        return self->KIconDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnExec(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Exec_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_Done(KIconDialog* self, int param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->done(static_cast<int>(param1));
    } else {
        self->KIconDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KIconDialog_QBaseDone(KIconDialog* self, int param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Done_IsBase(true);
        vkicondialog->done(static_cast<int>(param1));
    } else {
        self->KIconDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnDone(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Done_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_Accept(KIconDialog* self) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->accept();
    } else {
        self->KIconDialog::accept();
    }
}

// Base class handler implementation
void KIconDialog_QBaseAccept(KIconDialog* self) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Accept_IsBase(true);
        vkicondialog->accept();
    } else {
        self->KIconDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnAccept(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Accept_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_Reject(KIconDialog* self) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->reject();
    } else {
        self->KIconDialog::reject();
    }
}

// Base class handler implementation
void KIconDialog_QBaseReject(KIconDialog* self) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Reject_IsBase(true);
        vkicondialog->reject();
    } else {
        self->KIconDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnReject(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Reject_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_KeyPressEvent(KIconDialog* self, QKeyEvent* param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->keyPressEvent(param1);
    } else {
        ((VirtualKIconDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KIconDialog_QBaseKeyPressEvent(KIconDialog* self, QKeyEvent* param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_KeyPressEvent_IsBase(true);
        vkicondialog->keyPressEvent(param1);
    } else {
        ((VirtualKIconDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnKeyPressEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_CloseEvent(KIconDialog* self, QCloseEvent* param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->closeEvent(param1);
    } else {
        ((VirtualKIconDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KIconDialog_QBaseCloseEvent(KIconDialog* self, QCloseEvent* param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_CloseEvent_IsBase(true);
        vkicondialog->closeEvent(param1);
    } else {
        ((VirtualKIconDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnCloseEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_CloseEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_ResizeEvent(KIconDialog* self, QResizeEvent* param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->resizeEvent(param1);
    } else {
        ((VirtualKIconDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KIconDialog_QBaseResizeEvent(KIconDialog* self, QResizeEvent* param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_ResizeEvent_IsBase(true);
        vkicondialog->resizeEvent(param1);
    } else {
        ((VirtualKIconDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnResizeEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_ContextMenuEvent(KIconDialog* self, QContextMenuEvent* param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->contextMenuEvent(param1);
    } else {
        ((VirtualKIconDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KIconDialog_QBaseContextMenuEvent(KIconDialog* self, QContextMenuEvent* param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_ContextMenuEvent_IsBase(true);
        vkicondialog->contextMenuEvent(param1);
    } else {
        ((VirtualKIconDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnContextMenuEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIconDialog_EventFilter(KIconDialog* self, QObject* param1, QEvent* param2) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return vkicondialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKIconDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KIconDialog_QBaseEventFilter(KIconDialog* self, QObject* param1, QEvent* param2) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_EventFilter_IsBase(true);
        return vkicondialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKIconDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnEventFilter(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_EventFilter_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KIconDialog_DevType(const KIconDialog* self) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return vkicondialog->devType();
    } else {
        return self->KIconDialog::devType();
    }
}

// Base class handler implementation
int KIconDialog_QBaseDevType(const KIconDialog* self) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_DevType_IsBase(true);
        return vkicondialog->devType();
    } else {
        return self->KIconDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnDevType(const KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_DevType_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KIconDialog_HeightForWidth(const KIconDialog* self, int param1) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return vkicondialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KIconDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KIconDialog_QBaseHeightForWidth(const KIconDialog* self, int param1) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_HeightForWidth_IsBase(true);
        return vkicondialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KIconDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnHeightForWidth(const KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIconDialog_HasHeightForWidth(const KIconDialog* self) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return vkicondialog->hasHeightForWidth();
    } else {
        return self->KIconDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KIconDialog_QBaseHasHeightForWidth(const KIconDialog* self) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_HasHeightForWidth_IsBase(true);
        return vkicondialog->hasHeightForWidth();
    } else {
        return self->KIconDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnHasHeightForWidth(const KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KIconDialog_PaintEngine(const KIconDialog* self) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return vkicondialog->paintEngine();
    } else {
        return self->KIconDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KIconDialog_QBasePaintEngine(const KIconDialog* self) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_PaintEngine_IsBase(true);
        return vkicondialog->paintEngine();
    } else {
        return self->KIconDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnPaintEngine(const KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_PaintEngine_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIconDialog_Event(KIconDialog* self, QEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return vkicondialog->event(event);
    } else {
        return ((VirtualKIconDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KIconDialog_QBaseEvent(KIconDialog* self, QEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Event_IsBase(true);
        return vkicondialog->event(event);
    } else {
        return ((VirtualKIconDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Event_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_MousePressEvent(KIconDialog* self, QMouseEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->mousePressEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseMousePressEvent(KIconDialog* self, QMouseEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_MousePressEvent_IsBase(true);
        vkicondialog->mousePressEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnMousePressEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_MouseReleaseEvent(KIconDialog* self, QMouseEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseMouseReleaseEvent(KIconDialog* self, QMouseEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_MouseReleaseEvent_IsBase(true);
        vkicondialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnMouseReleaseEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_MouseDoubleClickEvent(KIconDialog* self, QMouseEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseMouseDoubleClickEvent(KIconDialog* self, QMouseEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_MouseDoubleClickEvent_IsBase(true);
        vkicondialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnMouseDoubleClickEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_MouseMoveEvent(KIconDialog* self, QMouseEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->mouseMoveEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseMouseMoveEvent(KIconDialog* self, QMouseEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_MouseMoveEvent_IsBase(true);
        vkicondialog->mouseMoveEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnMouseMoveEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_WheelEvent(KIconDialog* self, QWheelEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->wheelEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseWheelEvent(KIconDialog* self, QWheelEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_WheelEvent_IsBase(true);
        vkicondialog->wheelEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnWheelEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_WheelEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_KeyReleaseEvent(KIconDialog* self, QKeyEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->keyReleaseEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseKeyReleaseEvent(KIconDialog* self, QKeyEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_KeyReleaseEvent_IsBase(true);
        vkicondialog->keyReleaseEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnKeyReleaseEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_FocusInEvent(KIconDialog* self, QFocusEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->focusInEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseFocusInEvent(KIconDialog* self, QFocusEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_FocusInEvent_IsBase(true);
        vkicondialog->focusInEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnFocusInEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_FocusOutEvent(KIconDialog* self, QFocusEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->focusOutEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseFocusOutEvent(KIconDialog* self, QFocusEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_FocusOutEvent_IsBase(true);
        vkicondialog->focusOutEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnFocusOutEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_EnterEvent(KIconDialog* self, QEnterEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->enterEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseEnterEvent(KIconDialog* self, QEnterEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_EnterEvent_IsBase(true);
        vkicondialog->enterEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnEnterEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_EnterEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_LeaveEvent(KIconDialog* self, QEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->leaveEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseLeaveEvent(KIconDialog* self, QEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_LeaveEvent_IsBase(true);
        vkicondialog->leaveEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnLeaveEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_PaintEvent(KIconDialog* self, QPaintEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->paintEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBasePaintEvent(KIconDialog* self, QPaintEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_PaintEvent_IsBase(true);
        vkicondialog->paintEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnPaintEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_PaintEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_MoveEvent(KIconDialog* self, QMoveEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->moveEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseMoveEvent(KIconDialog* self, QMoveEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_MoveEvent_IsBase(true);
        vkicondialog->moveEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnMoveEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_MoveEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_TabletEvent(KIconDialog* self, QTabletEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->tabletEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseTabletEvent(KIconDialog* self, QTabletEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_TabletEvent_IsBase(true);
        vkicondialog->tabletEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnTabletEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_TabletEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_ActionEvent(KIconDialog* self, QActionEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->actionEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseActionEvent(KIconDialog* self, QActionEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_ActionEvent_IsBase(true);
        vkicondialog->actionEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnActionEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_ActionEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_DragEnterEvent(KIconDialog* self, QDragEnterEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->dragEnterEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseDragEnterEvent(KIconDialog* self, QDragEnterEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_DragEnterEvent_IsBase(true);
        vkicondialog->dragEnterEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnDragEnterEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_DragMoveEvent(KIconDialog* self, QDragMoveEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->dragMoveEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseDragMoveEvent(KIconDialog* self, QDragMoveEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_DragMoveEvent_IsBase(true);
        vkicondialog->dragMoveEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnDragMoveEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_DragLeaveEvent(KIconDialog* self, QDragLeaveEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->dragLeaveEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseDragLeaveEvent(KIconDialog* self, QDragLeaveEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_DragLeaveEvent_IsBase(true);
        vkicondialog->dragLeaveEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnDragLeaveEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_DropEvent(KIconDialog* self, QDropEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->dropEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseDropEvent(KIconDialog* self, QDropEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_DropEvent_IsBase(true);
        vkicondialog->dropEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnDropEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_DropEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_HideEvent(KIconDialog* self, QHideEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->hideEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseHideEvent(KIconDialog* self, QHideEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_HideEvent_IsBase(true);
        vkicondialog->hideEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnHideEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_HideEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIconDialog_NativeEvent(KIconDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return vkicondialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKIconDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KIconDialog_QBaseNativeEvent(KIconDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_NativeEvent_IsBase(true);
        return vkicondialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKIconDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnNativeEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_NativeEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_ChangeEvent(KIconDialog* self, QEvent* param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->changeEvent(param1);
    } else {
        ((VirtualKIconDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KIconDialog_QBaseChangeEvent(KIconDialog* self, QEvent* param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_ChangeEvent_IsBase(true);
        vkicondialog->changeEvent(param1);
    } else {
        ((VirtualKIconDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnChangeEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KIconDialog_Metric(const KIconDialog* self, int param1) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return vkicondialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKIconDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KIconDialog_QBaseMetric(const KIconDialog* self, int param1) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Metric_IsBase(true);
        return vkicondialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKIconDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnMetric(const KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Metric_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_InitPainter(const KIconDialog* self, QPainter* painter) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->initPainter(painter);
    } else {
        ((VirtualKIconDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KIconDialog_QBaseInitPainter(const KIconDialog* self, QPainter* painter) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_InitPainter_IsBase(true);
        vkicondialog->initPainter(painter);
    } else {
        ((VirtualKIconDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnInitPainter(const KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_InitPainter_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KIconDialog_Redirected(const KIconDialog* self, QPoint* offset) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return vkicondialog->redirected(offset);
    } else {
        return ((VirtualKIconDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KIconDialog_QBaseRedirected(const KIconDialog* self, QPoint* offset) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Redirected_IsBase(true);
        return vkicondialog->redirected(offset);
    } else {
        return ((VirtualKIconDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnRedirected(const KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Redirected_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KIconDialog_SharedPainter(const KIconDialog* self) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return vkicondialog->sharedPainter();
    } else {
        return ((VirtualKIconDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KIconDialog_QBaseSharedPainter(const KIconDialog* self) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_SharedPainter_IsBase(true);
        return vkicondialog->sharedPainter();
    } else {
        return ((VirtualKIconDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnSharedPainter(const KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_SharedPainter_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_InputMethodEvent(KIconDialog* self, QInputMethodEvent* param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->inputMethodEvent(param1);
    } else {
        ((VirtualKIconDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KIconDialog_QBaseInputMethodEvent(KIconDialog* self, QInputMethodEvent* param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_InputMethodEvent_IsBase(true);
        vkicondialog->inputMethodEvent(param1);
    } else {
        ((VirtualKIconDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnInputMethodEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KIconDialog_InputMethodQuery(const KIconDialog* self, int param1) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return new QVariant(vkicondialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKIconDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KIconDialog_QBaseInputMethodQuery(const KIconDialog* self, int param1) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkicondialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKIconDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnInputMethodQuery(const KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIconDialog_FocusNextPrevChild(KIconDialog* self, bool next) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return vkicondialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKIconDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KIconDialog_QBaseFocusNextPrevChild(KIconDialog* self, bool next) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_FocusNextPrevChild_IsBase(true);
        return vkicondialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKIconDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnFocusNextPrevChild(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_TimerEvent(KIconDialog* self, QTimerEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->timerEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseTimerEvent(KIconDialog* self, QTimerEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_TimerEvent_IsBase(true);
        vkicondialog->timerEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnTimerEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_TimerEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_ChildEvent(KIconDialog* self, QChildEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->childEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseChildEvent(KIconDialog* self, QChildEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_ChildEvent_IsBase(true);
        vkicondialog->childEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnChildEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_ChildEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_CustomEvent(KIconDialog* self, QEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->customEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIconDialog_QBaseCustomEvent(KIconDialog* self, QEvent* event) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_CustomEvent_IsBase(true);
        vkicondialog->customEvent(event);
    } else {
        ((VirtualKIconDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnCustomEvent(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_CustomEvent_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_ConnectNotify(KIconDialog* self, const QMetaMethod* signal) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->connectNotify(*signal);
    } else {
        ((VirtualKIconDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIconDialog_QBaseConnectNotify(KIconDialog* self, const QMetaMethod* signal) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_ConnectNotify_IsBase(true);
        vkicondialog->connectNotify(*signal);
    } else {
        ((VirtualKIconDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnConnectNotify(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_DisconnectNotify(KIconDialog* self, const QMetaMethod* signal) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->disconnectNotify(*signal);
    } else {
        ((VirtualKIconDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIconDialog_QBaseDisconnectNotify(KIconDialog* self, const QMetaMethod* signal) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_DisconnectNotify_IsBase(true);
        vkicondialog->disconnectNotify(*signal);
    } else {
        ((VirtualKIconDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnDisconnectNotify(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_SlotOk(KIconDialog* self) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->slotOk();
    } else {
        ((VirtualKIconDialog*)self)->slotOk();
    }
}

// Base class handler implementation
void KIconDialog_QBaseSlotOk(KIconDialog* self) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_SlotOk_IsBase(true);
        vkicondialog->slotOk();
    } else {
        ((VirtualKIconDialog*)self)->slotOk();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnSlotOk(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_SlotOk_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_SlotOk_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_AdjustPosition(KIconDialog* self, QWidget* param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->adjustPosition(param1);
    } else {
        ((VirtualKIconDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KIconDialog_QBaseAdjustPosition(KIconDialog* self, QWidget* param1) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_AdjustPosition_IsBase(true);
        vkicondialog->adjustPosition(param1);
    } else {
        ((VirtualKIconDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnAdjustPosition(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_UpdateMicroFocus(KIconDialog* self) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->updateMicroFocus();
    } else {
        ((VirtualKIconDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KIconDialog_QBaseUpdateMicroFocus(KIconDialog* self) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_UpdateMicroFocus_IsBase(true);
        vkicondialog->updateMicroFocus();
    } else {
        ((VirtualKIconDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnUpdateMicroFocus(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_Create(KIconDialog* self) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->create();
    } else {
        ((VirtualKIconDialog*)self)->create();
    }
}

// Base class handler implementation
void KIconDialog_QBaseCreate(KIconDialog* self) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Create_IsBase(true);
        vkicondialog->create();
    } else {
        ((VirtualKIconDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnCreate(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Create_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconDialog_Destroy(KIconDialog* self) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->destroy();
    } else {
        ((VirtualKIconDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KIconDialog_QBaseDestroy(KIconDialog* self) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Destroy_IsBase(true);
        vkicondialog->destroy();
    } else {
        ((VirtualKIconDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnDestroy(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Destroy_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIconDialog_FocusNextChild(KIconDialog* self) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return vkicondialog->focusNextChild();
    } else {
        return ((VirtualKIconDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KIconDialog_QBaseFocusNextChild(KIconDialog* self) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_FocusNextChild_IsBase(true);
        return vkicondialog->focusNextChild();
    } else {
        return ((VirtualKIconDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnFocusNextChild(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIconDialog_FocusPreviousChild(KIconDialog* self) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return vkicondialog->focusPreviousChild();
    } else {
        return ((VirtualKIconDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KIconDialog_QBaseFocusPreviousChild(KIconDialog* self) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_FocusPreviousChild_IsBase(true);
        return vkicondialog->focusPreviousChild();
    } else {
        return ((VirtualKIconDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnFocusPreviousChild(KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = dynamic_cast<VirtualKIconDialog*>(self);
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIconDialog_Sender(const KIconDialog* self) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return vkicondialog->sender();
    } else {
        return ((VirtualKIconDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIconDialog_QBaseSender(const KIconDialog* self) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Sender_IsBase(true);
        return vkicondialog->sender();
    } else {
        return ((VirtualKIconDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnSender(const KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Sender_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIconDialog_SenderSignalIndex(const KIconDialog* self) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return vkicondialog->senderSignalIndex();
    } else {
        return ((VirtualKIconDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIconDialog_QBaseSenderSignalIndex(const KIconDialog* self) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_SenderSignalIndex_IsBase(true);
        return vkicondialog->senderSignalIndex();
    } else {
        return ((VirtualKIconDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnSenderSignalIndex(const KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIconDialog_Receivers(const KIconDialog* self, const char* signal) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return vkicondialog->receivers(signal);
    } else {
        return ((VirtualKIconDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIconDialog_QBaseReceivers(const KIconDialog* self, const char* signal) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Receivers_IsBase(true);
        return vkicondialog->receivers(signal);
    } else {
        return ((VirtualKIconDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnReceivers(const KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_Receivers_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIconDialog_IsSignalConnected(const KIconDialog* self, const QMetaMethod* signal) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return vkicondialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKIconDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIconDialog_QBaseIsSignalConnected(const KIconDialog* self, const QMetaMethod* signal) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_IsSignalConnected_IsBase(true);
        return vkicondialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKIconDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnIsSignalConnected(const KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KIconDialog_GetDecodedMetricF(const KIconDialog* self, int metricA, int metricB) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        return vkicondialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKIconDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KIconDialog_QBaseGetDecodedMetricF(const KIconDialog* self, int metricA, int metricB) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_GetDecodedMetricF_IsBase(true);
        return vkicondialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKIconDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KIconDialog_OnGetDecodedMetricF(const KIconDialog* self, intptr_t slot) {
    auto* vkicondialog = const_cast<VirtualKIconDialog*>(dynamic_cast<const VirtualKIconDialog*>(self));
    if (vkicondialog && vkicondialog->isVirtualKIconDialog) {
        vkicondialog->setKIconDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKIconDialog::KIconDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KIconDialog_Delete(KIconDialog* self) {
    delete self;
}
