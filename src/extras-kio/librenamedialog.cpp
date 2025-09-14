#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__RenameDialog
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDateTime>
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
#include <renamedialog.h>
#include "librenamedialog.h"
#include "librenamedialog.hxx"

KIO__RenameDialog* KIO__RenameDialog_new(QWidget* parent, const libqt_string title, const QUrl* src, const QUrl* dest, int options) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualKIORenameDialog(parent, title_QString, *src, *dest, static_cast<KIO::RenameDialog_Options>(options));
}

KIO__RenameDialog* KIO__RenameDialog_new2(QWidget* parent, const libqt_string title, const QUrl* src, const QUrl* dest, int options, unsigned long long sizeSrc) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualKIORenameDialog(parent, title_QString, *src, *dest, static_cast<KIO::RenameDialog_Options>(options), static_cast<KIO::filesize_t>(sizeSrc));
}

KIO__RenameDialog* KIO__RenameDialog_new3(QWidget* parent, const libqt_string title, const QUrl* src, const QUrl* dest, int options, unsigned long long sizeSrc, unsigned long long sizeDest) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualKIORenameDialog(parent, title_QString, *src, *dest, static_cast<KIO::RenameDialog_Options>(options), static_cast<KIO::filesize_t>(sizeSrc), static_cast<KIO::filesize_t>(sizeDest));
}

KIO__RenameDialog* KIO__RenameDialog_new4(QWidget* parent, const libqt_string title, const QUrl* src, const QUrl* dest, int options, unsigned long long sizeSrc, unsigned long long sizeDest, const QDateTime* ctimeSrc) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualKIORenameDialog(parent, title_QString, *src, *dest, static_cast<KIO::RenameDialog_Options>(options), static_cast<KIO::filesize_t>(sizeSrc), static_cast<KIO::filesize_t>(sizeDest), *ctimeSrc);
}

KIO__RenameDialog* KIO__RenameDialog_new5(QWidget* parent, const libqt_string title, const QUrl* src, const QUrl* dest, int options, unsigned long long sizeSrc, unsigned long long sizeDest, const QDateTime* ctimeSrc, const QDateTime* ctimeDest) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualKIORenameDialog(parent, title_QString, *src, *dest, static_cast<KIO::RenameDialog_Options>(options), static_cast<KIO::filesize_t>(sizeSrc), static_cast<KIO::filesize_t>(sizeDest), *ctimeSrc, *ctimeDest);
}

KIO__RenameDialog* KIO__RenameDialog_new6(QWidget* parent, const libqt_string title, const QUrl* src, const QUrl* dest, int options, unsigned long long sizeSrc, unsigned long long sizeDest, const QDateTime* ctimeSrc, const QDateTime* ctimeDest, const QDateTime* mtimeSrc) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualKIORenameDialog(parent, title_QString, *src, *dest, static_cast<KIO::RenameDialog_Options>(options), static_cast<KIO::filesize_t>(sizeSrc), static_cast<KIO::filesize_t>(sizeDest), *ctimeSrc, *ctimeDest, *mtimeSrc);
}

KIO__RenameDialog* KIO__RenameDialog_new7(QWidget* parent, const libqt_string title, const QUrl* src, const QUrl* dest, int options, unsigned long long sizeSrc, unsigned long long sizeDest, const QDateTime* ctimeSrc, const QDateTime* ctimeDest, const QDateTime* mtimeSrc, const QDateTime* mtimeDest) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualKIORenameDialog(parent, title_QString, *src, *dest, static_cast<KIO::RenameDialog_Options>(options), static_cast<KIO::filesize_t>(sizeSrc), static_cast<KIO::filesize_t>(sizeDest), *ctimeSrc, *ctimeDest, *mtimeSrc, *mtimeDest);
}

QMetaObject* KIO__RenameDialog_MetaObject(const KIO__RenameDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__RenameDialog_Metacast(KIO__RenameDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__RenameDialog_Metacall(KIO__RenameDialog* self, int param1, int param2, void** param3) {
    auto* vkio__renamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkio__renamedialog && vkio__renamedialog->isVirtualKIORenameDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKIORenameDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KIO__RenameDialog_Tr(const char* s) {
    QString _ret = KIO::RenameDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KIO__RenameDialog_NewDestUrl(KIO__RenameDialog* self) {
    return new QUrl(self->newDestUrl());
}

QUrl* KIO__RenameDialog_AutoDestUrl(const KIO__RenameDialog* self) {
    return new QUrl(self->autoDestUrl());
}

void KIO__RenameDialog_CancelPressed(KIO__RenameDialog* self) {
    self->cancelPressed();
}

void KIO__RenameDialog_RenamePressed(KIO__RenameDialog* self) {
    self->renamePressed();
}

void KIO__RenameDialog_SkipPressed(KIO__RenameDialog* self) {
    self->skipPressed();
}

void KIO__RenameDialog_OverwritePressed(KIO__RenameDialog* self) {
    self->overwritePressed();
}

void KIO__RenameDialog_OverwriteAllPressed(KIO__RenameDialog* self) {
    self->overwriteAllPressed();
}

void KIO__RenameDialog_OverwriteWhenOlderPressed(KIO__RenameDialog* self) {
    self->overwriteWhenOlderPressed();
}

void KIO__RenameDialog_ResumePressed(KIO__RenameDialog* self) {
    self->resumePressed();
}

void KIO__RenameDialog_ResumeAllPressed(KIO__RenameDialog* self) {
    self->resumeAllPressed();
}

void KIO__RenameDialog_SuggestNewNamePressed(KIO__RenameDialog* self) {
    self->suggestNewNamePressed();
}

libqt_string KIO__RenameDialog_Tr2(const char* s, const char* c) {
    QString _ret = KIO::RenameDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__RenameDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::RenameDialog::tr(s, c, static_cast<int>(n));
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
int KIO__RenameDialog_QBaseMetacall(KIO__RenameDialog* self, int param1, int param2, void** param3) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Metacall_IsBase(true);
        return vkiorenamedialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIO::RenameDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnMetacall(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Metacall_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_SetVisible(KIO__RenameDialog* self, bool visible) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setVisible(visible);
    } else {
        self->KIO::RenameDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseSetVisible(KIO__RenameDialog* self, bool visible) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_SetVisible_IsBase(true);
        vkiorenamedialog->setVisible(visible);
    } else {
        self->KIO::RenameDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnSetVisible(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_SetVisible_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KIO__RenameDialog_SizeHint(const KIO__RenameDialog* self) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return new QSize(vkiorenamedialog->sizeHint());
    } else {
        return new QSize(((VirtualKIORenameDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KIO__RenameDialog_QBaseSizeHint(const KIO__RenameDialog* self) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_SizeHint_IsBase(true);
        return new QSize(vkiorenamedialog->sizeHint());
    } else {
        return new QSize(((VirtualKIORenameDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnSizeHint(const KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_SizeHint_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KIO__RenameDialog_MinimumSizeHint(const KIO__RenameDialog* self) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return new QSize(vkiorenamedialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKIORenameDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KIO__RenameDialog_QBaseMinimumSizeHint(const KIO__RenameDialog* self) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkiorenamedialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKIORenameDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnMinimumSizeHint(const KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_Open(KIO__RenameDialog* self) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->open();
    } else {
        self->KIO::RenameDialog::open();
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseOpen(KIO__RenameDialog* self) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Open_IsBase(true);
        vkiorenamedialog->open();
    } else {
        self->KIO::RenameDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnOpen(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Open_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__RenameDialog_Exec(KIO__RenameDialog* self) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return vkiorenamedialog->exec();
    } else {
        return self->KIO::RenameDialog::exec();
    }
}

// Base class handler implementation
int KIO__RenameDialog_QBaseExec(KIO__RenameDialog* self) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Exec_IsBase(true);
        return vkiorenamedialog->exec();
    } else {
        return self->KIO::RenameDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnExec(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Exec_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_Done(KIO__RenameDialog* self, int param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->done(static_cast<int>(param1));
    } else {
        self->KIO::RenameDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseDone(KIO__RenameDialog* self, int param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Done_IsBase(true);
        vkiorenamedialog->done(static_cast<int>(param1));
    } else {
        self->KIO::RenameDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnDone(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Done_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_Accept(KIO__RenameDialog* self) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->accept();
    } else {
        self->KIO::RenameDialog::accept();
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseAccept(KIO__RenameDialog* self) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Accept_IsBase(true);
        vkiorenamedialog->accept();
    } else {
        self->KIO::RenameDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnAccept(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Accept_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_Reject(KIO__RenameDialog* self) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->reject();
    } else {
        self->KIO::RenameDialog::reject();
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseReject(KIO__RenameDialog* self) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Reject_IsBase(true);
        vkiorenamedialog->reject();
    } else {
        self->KIO::RenameDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnReject(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Reject_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_KeyPressEvent(KIO__RenameDialog* self, QKeyEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->keyPressEvent(param1);
    } else {
        ((VirtualKIORenameDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseKeyPressEvent(KIO__RenameDialog* self, QKeyEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_KeyPressEvent_IsBase(true);
        vkiorenamedialog->keyPressEvent(param1);
    } else {
        ((VirtualKIORenameDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnKeyPressEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_CloseEvent(KIO__RenameDialog* self, QCloseEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->closeEvent(param1);
    } else {
        ((VirtualKIORenameDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseCloseEvent(KIO__RenameDialog* self, QCloseEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_CloseEvent_IsBase(true);
        vkiorenamedialog->closeEvent(param1);
    } else {
        ((VirtualKIORenameDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnCloseEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_CloseEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_ShowEvent(KIO__RenameDialog* self, QShowEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->showEvent(param1);
    } else {
        ((VirtualKIORenameDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseShowEvent(KIO__RenameDialog* self, QShowEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_ShowEvent_IsBase(true);
        vkiorenamedialog->showEvent(param1);
    } else {
        ((VirtualKIORenameDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnShowEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_ShowEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_ResizeEvent(KIO__RenameDialog* self, QResizeEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->resizeEvent(param1);
    } else {
        ((VirtualKIORenameDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseResizeEvent(KIO__RenameDialog* self, QResizeEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_ResizeEvent_IsBase(true);
        vkiorenamedialog->resizeEvent(param1);
    } else {
        ((VirtualKIORenameDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnResizeEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_ContextMenuEvent(KIO__RenameDialog* self, QContextMenuEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->contextMenuEvent(param1);
    } else {
        ((VirtualKIORenameDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseContextMenuEvent(KIO__RenameDialog* self, QContextMenuEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_ContextMenuEvent_IsBase(true);
        vkiorenamedialog->contextMenuEvent(param1);
    } else {
        ((VirtualKIORenameDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnContextMenuEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__RenameDialog_EventFilter(KIO__RenameDialog* self, QObject* param1, QEvent* param2) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return vkiorenamedialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKIORenameDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KIO__RenameDialog_QBaseEventFilter(KIO__RenameDialog* self, QObject* param1, QEvent* param2) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_EventFilter_IsBase(true);
        return vkiorenamedialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKIORenameDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnEventFilter(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_EventFilter_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__RenameDialog_DevType(const KIO__RenameDialog* self) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return vkiorenamedialog->devType();
    } else {
        return self->KIO::RenameDialog::devType();
    }
}

// Base class handler implementation
int KIO__RenameDialog_QBaseDevType(const KIO__RenameDialog* self) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_DevType_IsBase(true);
        return vkiorenamedialog->devType();
    } else {
        return self->KIO::RenameDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnDevType(const KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_DevType_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__RenameDialog_HeightForWidth(const KIO__RenameDialog* self, int param1) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return vkiorenamedialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KIO::RenameDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KIO__RenameDialog_QBaseHeightForWidth(const KIO__RenameDialog* self, int param1) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_HeightForWidth_IsBase(true);
        return vkiorenamedialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KIO::RenameDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnHeightForWidth(const KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__RenameDialog_HasHeightForWidth(const KIO__RenameDialog* self) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return vkiorenamedialog->hasHeightForWidth();
    } else {
        return self->KIO::RenameDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KIO__RenameDialog_QBaseHasHeightForWidth(const KIO__RenameDialog* self) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_HasHeightForWidth_IsBase(true);
        return vkiorenamedialog->hasHeightForWidth();
    } else {
        return self->KIO::RenameDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnHasHeightForWidth(const KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KIO__RenameDialog_PaintEngine(const KIO__RenameDialog* self) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return vkiorenamedialog->paintEngine();
    } else {
        return self->KIO::RenameDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KIO__RenameDialog_QBasePaintEngine(const KIO__RenameDialog* self) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_PaintEngine_IsBase(true);
        return vkiorenamedialog->paintEngine();
    } else {
        return self->KIO::RenameDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnPaintEngine(const KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_PaintEngine_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__RenameDialog_Event(KIO__RenameDialog* self, QEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return vkiorenamedialog->event(event);
    } else {
        return ((VirtualKIORenameDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KIO__RenameDialog_QBaseEvent(KIO__RenameDialog* self, QEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Event_IsBase(true);
        return vkiorenamedialog->event(event);
    } else {
        return ((VirtualKIORenameDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Event_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_MousePressEvent(KIO__RenameDialog* self, QMouseEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->mousePressEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseMousePressEvent(KIO__RenameDialog* self, QMouseEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_MousePressEvent_IsBase(true);
        vkiorenamedialog->mousePressEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnMousePressEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_MouseReleaseEvent(KIO__RenameDialog* self, QMouseEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseMouseReleaseEvent(KIO__RenameDialog* self, QMouseEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_MouseReleaseEvent_IsBase(true);
        vkiorenamedialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnMouseReleaseEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_MouseDoubleClickEvent(KIO__RenameDialog* self, QMouseEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseMouseDoubleClickEvent(KIO__RenameDialog* self, QMouseEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_MouseDoubleClickEvent_IsBase(true);
        vkiorenamedialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnMouseDoubleClickEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_MouseMoveEvent(KIO__RenameDialog* self, QMouseEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->mouseMoveEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseMouseMoveEvent(KIO__RenameDialog* self, QMouseEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_MouseMoveEvent_IsBase(true);
        vkiorenamedialog->mouseMoveEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnMouseMoveEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_WheelEvent(KIO__RenameDialog* self, QWheelEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->wheelEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseWheelEvent(KIO__RenameDialog* self, QWheelEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_WheelEvent_IsBase(true);
        vkiorenamedialog->wheelEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnWheelEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_WheelEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_KeyReleaseEvent(KIO__RenameDialog* self, QKeyEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->keyReleaseEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseKeyReleaseEvent(KIO__RenameDialog* self, QKeyEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_KeyReleaseEvent_IsBase(true);
        vkiorenamedialog->keyReleaseEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnKeyReleaseEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_FocusInEvent(KIO__RenameDialog* self, QFocusEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->focusInEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseFocusInEvent(KIO__RenameDialog* self, QFocusEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_FocusInEvent_IsBase(true);
        vkiorenamedialog->focusInEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnFocusInEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_FocusOutEvent(KIO__RenameDialog* self, QFocusEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->focusOutEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseFocusOutEvent(KIO__RenameDialog* self, QFocusEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_FocusOutEvent_IsBase(true);
        vkiorenamedialog->focusOutEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnFocusOutEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_EnterEvent(KIO__RenameDialog* self, QEnterEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->enterEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseEnterEvent(KIO__RenameDialog* self, QEnterEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_EnterEvent_IsBase(true);
        vkiorenamedialog->enterEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnEnterEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_EnterEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_LeaveEvent(KIO__RenameDialog* self, QEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->leaveEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseLeaveEvent(KIO__RenameDialog* self, QEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_LeaveEvent_IsBase(true);
        vkiorenamedialog->leaveEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnLeaveEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_PaintEvent(KIO__RenameDialog* self, QPaintEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->paintEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBasePaintEvent(KIO__RenameDialog* self, QPaintEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_PaintEvent_IsBase(true);
        vkiorenamedialog->paintEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnPaintEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_PaintEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_MoveEvent(KIO__RenameDialog* self, QMoveEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->moveEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseMoveEvent(KIO__RenameDialog* self, QMoveEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_MoveEvent_IsBase(true);
        vkiorenamedialog->moveEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnMoveEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_MoveEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_TabletEvent(KIO__RenameDialog* self, QTabletEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->tabletEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseTabletEvent(KIO__RenameDialog* self, QTabletEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_TabletEvent_IsBase(true);
        vkiorenamedialog->tabletEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnTabletEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_TabletEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_ActionEvent(KIO__RenameDialog* self, QActionEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->actionEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseActionEvent(KIO__RenameDialog* self, QActionEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_ActionEvent_IsBase(true);
        vkiorenamedialog->actionEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnActionEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_ActionEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_DragEnterEvent(KIO__RenameDialog* self, QDragEnterEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->dragEnterEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseDragEnterEvent(KIO__RenameDialog* self, QDragEnterEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_DragEnterEvent_IsBase(true);
        vkiorenamedialog->dragEnterEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnDragEnterEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_DragMoveEvent(KIO__RenameDialog* self, QDragMoveEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->dragMoveEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseDragMoveEvent(KIO__RenameDialog* self, QDragMoveEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_DragMoveEvent_IsBase(true);
        vkiorenamedialog->dragMoveEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnDragMoveEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_DragLeaveEvent(KIO__RenameDialog* self, QDragLeaveEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->dragLeaveEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseDragLeaveEvent(KIO__RenameDialog* self, QDragLeaveEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_DragLeaveEvent_IsBase(true);
        vkiorenamedialog->dragLeaveEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnDragLeaveEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_DropEvent(KIO__RenameDialog* self, QDropEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->dropEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseDropEvent(KIO__RenameDialog* self, QDropEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_DropEvent_IsBase(true);
        vkiorenamedialog->dropEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnDropEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_DropEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_HideEvent(KIO__RenameDialog* self, QHideEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->hideEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseHideEvent(KIO__RenameDialog* self, QHideEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_HideEvent_IsBase(true);
        vkiorenamedialog->hideEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnHideEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_HideEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__RenameDialog_NativeEvent(KIO__RenameDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return vkiorenamedialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKIORenameDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KIO__RenameDialog_QBaseNativeEvent(KIO__RenameDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_NativeEvent_IsBase(true);
        return vkiorenamedialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKIORenameDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnNativeEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_NativeEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_ChangeEvent(KIO__RenameDialog* self, QEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->changeEvent(param1);
    } else {
        ((VirtualKIORenameDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseChangeEvent(KIO__RenameDialog* self, QEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_ChangeEvent_IsBase(true);
        vkiorenamedialog->changeEvent(param1);
    } else {
        ((VirtualKIORenameDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnChangeEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__RenameDialog_Metric(const KIO__RenameDialog* self, int param1) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return vkiorenamedialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKIORenameDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KIO__RenameDialog_QBaseMetric(const KIO__RenameDialog* self, int param1) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Metric_IsBase(true);
        return vkiorenamedialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKIORenameDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnMetric(const KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Metric_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_InitPainter(const KIO__RenameDialog* self, QPainter* painter) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->initPainter(painter);
    } else {
        ((VirtualKIORenameDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseInitPainter(const KIO__RenameDialog* self, QPainter* painter) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_InitPainter_IsBase(true);
        vkiorenamedialog->initPainter(painter);
    } else {
        ((VirtualKIORenameDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnInitPainter(const KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_InitPainter_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KIO__RenameDialog_Redirected(const KIO__RenameDialog* self, QPoint* offset) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return vkiorenamedialog->redirected(offset);
    } else {
        return ((VirtualKIORenameDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KIO__RenameDialog_QBaseRedirected(const KIO__RenameDialog* self, QPoint* offset) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Redirected_IsBase(true);
        return vkiorenamedialog->redirected(offset);
    } else {
        return ((VirtualKIORenameDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnRedirected(const KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Redirected_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KIO__RenameDialog_SharedPainter(const KIO__RenameDialog* self) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return vkiorenamedialog->sharedPainter();
    } else {
        return ((VirtualKIORenameDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KIO__RenameDialog_QBaseSharedPainter(const KIO__RenameDialog* self) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_SharedPainter_IsBase(true);
        return vkiorenamedialog->sharedPainter();
    } else {
        return ((VirtualKIORenameDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnSharedPainter(const KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_SharedPainter_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_InputMethodEvent(KIO__RenameDialog* self, QInputMethodEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->inputMethodEvent(param1);
    } else {
        ((VirtualKIORenameDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseInputMethodEvent(KIO__RenameDialog* self, QInputMethodEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_InputMethodEvent_IsBase(true);
        vkiorenamedialog->inputMethodEvent(param1);
    } else {
        ((VirtualKIORenameDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnInputMethodEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KIO__RenameDialog_InputMethodQuery(const KIO__RenameDialog* self, int param1) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return new QVariant(vkiorenamedialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKIORenameDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KIO__RenameDialog_QBaseInputMethodQuery(const KIO__RenameDialog* self, int param1) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkiorenamedialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKIORenameDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnInputMethodQuery(const KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__RenameDialog_FocusNextPrevChild(KIO__RenameDialog* self, bool next) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return vkiorenamedialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKIORenameDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KIO__RenameDialog_QBaseFocusNextPrevChild(KIO__RenameDialog* self, bool next) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_FocusNextPrevChild_IsBase(true);
        return vkiorenamedialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKIORenameDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnFocusNextPrevChild(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_TimerEvent(KIO__RenameDialog* self, QTimerEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->timerEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseTimerEvent(KIO__RenameDialog* self, QTimerEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_TimerEvent_IsBase(true);
        vkiorenamedialog->timerEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnTimerEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_TimerEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_ChildEvent(KIO__RenameDialog* self, QChildEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->childEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseChildEvent(KIO__RenameDialog* self, QChildEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_ChildEvent_IsBase(true);
        vkiorenamedialog->childEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnChildEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_ChildEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_CustomEvent(KIO__RenameDialog* self, QEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->customEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseCustomEvent(KIO__RenameDialog* self, QEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_CustomEvent_IsBase(true);
        vkiorenamedialog->customEvent(event);
    } else {
        ((VirtualKIORenameDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnCustomEvent(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_CustomEvent_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_ConnectNotify(KIO__RenameDialog* self, const QMetaMethod* signal) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->connectNotify(*signal);
    } else {
        ((VirtualKIORenameDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseConnectNotify(KIO__RenameDialog* self, const QMetaMethod* signal) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_ConnectNotify_IsBase(true);
        vkiorenamedialog->connectNotify(*signal);
    } else {
        ((VirtualKIORenameDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnConnectNotify(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_DisconnectNotify(KIO__RenameDialog* self, const QMetaMethod* signal) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->disconnectNotify(*signal);
    } else {
        ((VirtualKIORenameDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseDisconnectNotify(KIO__RenameDialog* self, const QMetaMethod* signal) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_DisconnectNotify_IsBase(true);
        vkiorenamedialog->disconnectNotify(*signal);
    } else {
        ((VirtualKIORenameDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnDisconnectNotify(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_EnableRenameButton(KIO__RenameDialog* self, const libqt_string param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->enableRenameButton(param1_QString);
    } else {
        ((VirtualKIORenameDialog*)self)->enableRenameButton(param1_QString);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseEnableRenameButton(KIO__RenameDialog* self, const libqt_string param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_EnableRenameButton_IsBase(true);
        vkiorenamedialog->enableRenameButton(param1_QString);
    } else {
        ((VirtualKIORenameDialog*)self)->enableRenameButton(param1_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnEnableRenameButton(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_EnableRenameButton_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_EnableRenameButton_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_AdjustPosition(KIO__RenameDialog* self, QWidget* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->adjustPosition(param1);
    } else {
        ((VirtualKIORenameDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseAdjustPosition(KIO__RenameDialog* self, QWidget* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_AdjustPosition_IsBase(true);
        vkiorenamedialog->adjustPosition(param1);
    } else {
        ((VirtualKIORenameDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnAdjustPosition(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_UpdateMicroFocus(KIO__RenameDialog* self) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->updateMicroFocus();
    } else {
        ((VirtualKIORenameDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseUpdateMicroFocus(KIO__RenameDialog* self) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_UpdateMicroFocus_IsBase(true);
        vkiorenamedialog->updateMicroFocus();
    } else {
        ((VirtualKIORenameDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnUpdateMicroFocus(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_Create(KIO__RenameDialog* self) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->create();
    } else {
        ((VirtualKIORenameDialog*)self)->create();
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseCreate(KIO__RenameDialog* self) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Create_IsBase(true);
        vkiorenamedialog->create();
    } else {
        ((VirtualKIORenameDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnCreate(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Create_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameDialog_Destroy(KIO__RenameDialog* self) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->destroy();
    } else {
        ((VirtualKIORenameDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KIO__RenameDialog_QBaseDestroy(KIO__RenameDialog* self) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Destroy_IsBase(true);
        vkiorenamedialog->destroy();
    } else {
        ((VirtualKIORenameDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnDestroy(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Destroy_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__RenameDialog_FocusNextChild(KIO__RenameDialog* self) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return vkiorenamedialog->focusNextChild();
    } else {
        return ((VirtualKIORenameDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KIO__RenameDialog_QBaseFocusNextChild(KIO__RenameDialog* self) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_FocusNextChild_IsBase(true);
        return vkiorenamedialog->focusNextChild();
    } else {
        return ((VirtualKIORenameDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnFocusNextChild(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__RenameDialog_FocusPreviousChild(KIO__RenameDialog* self) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return vkiorenamedialog->focusPreviousChild();
    } else {
        return ((VirtualKIORenameDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KIO__RenameDialog_QBaseFocusPreviousChild(KIO__RenameDialog* self) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_FocusPreviousChild_IsBase(true);
        return vkiorenamedialog->focusPreviousChild();
    } else {
        return ((VirtualKIORenameDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnFocusPreviousChild(KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIO__RenameDialog_Sender(const KIO__RenameDialog* self) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return vkiorenamedialog->sender();
    } else {
        return ((VirtualKIORenameDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIO__RenameDialog_QBaseSender(const KIO__RenameDialog* self) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Sender_IsBase(true);
        return vkiorenamedialog->sender();
    } else {
        return ((VirtualKIORenameDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnSender(const KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Sender_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__RenameDialog_SenderSignalIndex(const KIO__RenameDialog* self) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return vkiorenamedialog->senderSignalIndex();
    } else {
        return ((VirtualKIORenameDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIO__RenameDialog_QBaseSenderSignalIndex(const KIO__RenameDialog* self) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_SenderSignalIndex_IsBase(true);
        return vkiorenamedialog->senderSignalIndex();
    } else {
        return ((VirtualKIORenameDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnSenderSignalIndex(const KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__RenameDialog_Receivers(const KIO__RenameDialog* self, const char* signal) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return vkiorenamedialog->receivers(signal);
    } else {
        return ((VirtualKIORenameDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIO__RenameDialog_QBaseReceivers(const KIO__RenameDialog* self, const char* signal) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Receivers_IsBase(true);
        return vkiorenamedialog->receivers(signal);
    } else {
        return ((VirtualKIORenameDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnReceivers(const KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_Receivers_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__RenameDialog_IsSignalConnected(const KIO__RenameDialog* self, const QMetaMethod* signal) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return vkiorenamedialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKIORenameDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIO__RenameDialog_QBaseIsSignalConnected(const KIO__RenameDialog* self, const QMetaMethod* signal) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_IsSignalConnected_IsBase(true);
        return vkiorenamedialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKIORenameDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnIsSignalConnected(const KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KIO__RenameDialog_GetDecodedMetricF(const KIO__RenameDialog* self, int metricA, int metricB) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        return vkiorenamedialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKIORenameDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KIO__RenameDialog_QBaseGetDecodedMetricF(const KIO__RenameDialog* self, int metricA, int metricB) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_GetDecodedMetricF_IsBase(true);
        return vkiorenamedialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKIORenameDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnGetDecodedMetricF(const KIO__RenameDialog* self, intptr_t slot) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog && vkiorenamedialog->isVirtualKIORenameDialog) {
        vkiorenamedialog->setKIO__RenameDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KIO__RenameDialog_Delete(KIO__RenameDialog* self) {
    delete self;
}
