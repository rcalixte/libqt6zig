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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__RenameDialog_Tr(const char* s) {
    auto _ret = KIO::RenameDialog::tr(s);
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
    auto _ret = KIO::RenameDialog::tr(s, c);
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
    auto _ret = KIO::RenameDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* KIO__RenameDialog_SuperMetaObject(const KIO__RenameDialog* self) {
    return (QMetaObject*)self->KIO::RenameDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnMetaObject(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self)))
        vkiorenamedialog->kio__renamedialog_metaobject_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KIO__RenameDialog_SuperMetacast(KIO__RenameDialog* self, const char* param1) {
    return self->KIO::RenameDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnMetacast(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_metacast_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KIO__RenameDialog_SuperMetacall(KIO__RenameDialog* self, int param1, int param2, void** param3) {
    return self->KIO::RenameDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnMetacall(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_metacall_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Metacall_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_SetVisible(KIO__RenameDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KIO__RenameDialog_SuperSetVisible(KIO__RenameDialog* self, bool visible) {
    self->KIO::RenameDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnSetVisible(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_setvisible_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KIO__RenameDialog_SizeHint(const KIO__RenameDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KIO__RenameDialog_SuperSizeHint(const KIO__RenameDialog* self) {
    return new QSize(self->KIO::RenameDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnSizeHint(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self)))
        vkiorenamedialog->kio__renamedialog_sizehint_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KIO__RenameDialog_MinimumSizeHint(const KIO__RenameDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KIO__RenameDialog_SuperMinimumSizeHint(const KIO__RenameDialog* self) {
    return new QSize(self->KIO::RenameDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnMinimumSizeHint(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self)))
        vkiorenamedialog->kio__renamedialog_minimumsizehint_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_Open(KIO__RenameDialog* self) {
    self->open();
}

// Base class handler implementation
void KIO__RenameDialog_SuperOpen(KIO__RenameDialog* self) {
    self->KIO::RenameDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnOpen(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_open_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KIO__RenameDialog_Exec(KIO__RenameDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KIO__RenameDialog_SuperExec(KIO__RenameDialog* self) {
    return self->KIO::RenameDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnExec(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_exec_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_Done(KIO__RenameDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KIO__RenameDialog_SuperDone(KIO__RenameDialog* self, int param1) {
    self->KIO::RenameDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnDone(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_done_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_Accept(KIO__RenameDialog* self) {
    self->accept();
}

// Base class handler implementation
void KIO__RenameDialog_SuperAccept(KIO__RenameDialog* self) {
    self->KIO::RenameDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnAccept(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_accept_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_Reject(KIO__RenameDialog* self) {
    self->reject();
}

// Base class handler implementation
void KIO__RenameDialog_SuperReject(KIO__RenameDialog* self) {
    self->KIO::RenameDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnReject(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_reject_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_KeyPressEvent(KIO__RenameDialog* self, QKeyEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperKeyPressEvent(KIO__RenameDialog* self, QKeyEvent* param1) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnKeyPressEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_keypressevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_CloseEvent(KIO__RenameDialog* self, QCloseEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperCloseEvent(KIO__RenameDialog* self, QCloseEvent* param1) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnCloseEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_closeevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_ShowEvent(KIO__RenameDialog* self, QShowEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperShowEvent(KIO__RenameDialog* self, QShowEvent* param1) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnShowEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_showevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_ResizeEvent(KIO__RenameDialog* self, QResizeEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperResizeEvent(KIO__RenameDialog* self, QResizeEvent* param1) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnResizeEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_resizeevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_ContextMenuEvent(KIO__RenameDialog* self, QContextMenuEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperContextMenuEvent(KIO__RenameDialog* self, QContextMenuEvent* param1) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnContextMenuEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_contextmenuevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KIO__RenameDialog_EventFilter(KIO__RenameDialog* self, QObject* param1, QEvent* param2) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        return vkiorenamedialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__RenameDialog_SuperEventFilter(KIO__RenameDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        return vkiorenamedialog->KIO::RenameDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnEventFilter(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_eventfilter_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KIO__RenameDialog_DevType(const KIO__RenameDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KIO__RenameDialog_SuperDevType(const KIO__RenameDialog* self) {
    return self->KIO::RenameDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnDevType(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self)))
        vkiorenamedialog->kio__renamedialog_devtype_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KIO__RenameDialog_HeightForWidth(const KIO__RenameDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KIO__RenameDialog_SuperHeightForWidth(const KIO__RenameDialog* self, int param1) {
    return self->KIO::RenameDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnHeightForWidth(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self)))
        vkiorenamedialog->kio__renamedialog_heightforwidth_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KIO__RenameDialog_HasHeightForWidth(const KIO__RenameDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KIO__RenameDialog_SuperHasHeightForWidth(const KIO__RenameDialog* self) {
    return self->KIO::RenameDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnHasHeightForWidth(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self)))
        vkiorenamedialog->kio__renamedialog_hasheightforwidth_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KIO__RenameDialog_PaintEngine(const KIO__RenameDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KIO__RenameDialog_SuperPaintEngine(const KIO__RenameDialog* self) {
    return self->KIO::RenameDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnPaintEngine(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self)))
        vkiorenamedialog->kio__renamedialog_paintengine_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KIO__RenameDialog_Event(KIO__RenameDialog* self, QEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        return vkiorenamedialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__RenameDialog_SuperEvent(KIO__RenameDialog* self, QEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        return vkiorenamedialog->KIO::RenameDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_event_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_MousePressEvent(KIO__RenameDialog* self, QMouseEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperMousePressEvent(KIO__RenameDialog* self, QMouseEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnMousePressEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_mousepressevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_MouseReleaseEvent(KIO__RenameDialog* self, QMouseEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperMouseReleaseEvent(KIO__RenameDialog* self, QMouseEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnMouseReleaseEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_mousereleaseevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_MouseDoubleClickEvent(KIO__RenameDialog* self, QMouseEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperMouseDoubleClickEvent(KIO__RenameDialog* self, QMouseEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnMouseDoubleClickEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_MouseMoveEvent(KIO__RenameDialog* self, QMouseEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperMouseMoveEvent(KIO__RenameDialog* self, QMouseEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnMouseMoveEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_mousemoveevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_WheelEvent(KIO__RenameDialog* self, QWheelEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperWheelEvent(KIO__RenameDialog* self, QWheelEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnWheelEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_wheelevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_KeyReleaseEvent(KIO__RenameDialog* self, QKeyEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperKeyReleaseEvent(KIO__RenameDialog* self, QKeyEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnKeyReleaseEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_keyreleaseevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_FocusInEvent(KIO__RenameDialog* self, QFocusEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperFocusInEvent(KIO__RenameDialog* self, QFocusEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnFocusInEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_focusinevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_FocusOutEvent(KIO__RenameDialog* self, QFocusEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperFocusOutEvent(KIO__RenameDialog* self, QFocusEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnFocusOutEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_focusoutevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_EnterEvent(KIO__RenameDialog* self, QEnterEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperEnterEvent(KIO__RenameDialog* self, QEnterEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnEnterEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_enterevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_LeaveEvent(KIO__RenameDialog* self, QEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperLeaveEvent(KIO__RenameDialog* self, QEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnLeaveEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_leaveevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_PaintEvent(KIO__RenameDialog* self, QPaintEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperPaintEvent(KIO__RenameDialog* self, QPaintEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnPaintEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_paintevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_MoveEvent(KIO__RenameDialog* self, QMoveEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperMoveEvent(KIO__RenameDialog* self, QMoveEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnMoveEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_moveevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_TabletEvent(KIO__RenameDialog* self, QTabletEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperTabletEvent(KIO__RenameDialog* self, QTabletEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnTabletEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_tabletevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_ActionEvent(KIO__RenameDialog* self, QActionEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperActionEvent(KIO__RenameDialog* self, QActionEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnActionEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_actionevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_DragEnterEvent(KIO__RenameDialog* self, QDragEnterEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperDragEnterEvent(KIO__RenameDialog* self, QDragEnterEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnDragEnterEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_dragenterevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_DragMoveEvent(KIO__RenameDialog* self, QDragMoveEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperDragMoveEvent(KIO__RenameDialog* self, QDragMoveEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnDragMoveEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_dragmoveevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_DragLeaveEvent(KIO__RenameDialog* self, QDragLeaveEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperDragLeaveEvent(KIO__RenameDialog* self, QDragLeaveEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnDragLeaveEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_dragleaveevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_DropEvent(KIO__RenameDialog* self, QDropEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperDropEvent(KIO__RenameDialog* self, QDropEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnDropEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_dropevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_HideEvent(KIO__RenameDialog* self, QHideEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperHideEvent(KIO__RenameDialog* self, QHideEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnHideEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_hideevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KIO__RenameDialog_NativeEvent(KIO__RenameDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        return vkiorenamedialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__RenameDialog_SuperNativeEvent(KIO__RenameDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        return vkiorenamedialog->KIO::RenameDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnNativeEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_nativeevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_ChangeEvent(KIO__RenameDialog* self, QEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperChangeEvent(KIO__RenameDialog* self, QEvent* param1) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnChangeEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_changeevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KIO__RenameDialog_Metric(const KIO__RenameDialog* self, int param1) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog) {
        return vkiorenamedialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KIO__RenameDialog_SuperMetric(const KIO__RenameDialog* self, int param1) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self))) {
        return vkiorenamedialog->KIO::RenameDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnMetric(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self)))
        vkiorenamedialog->kio__renamedialog_metric_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_InitPainter(const KIO__RenameDialog* self, QPainter* painter) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog) {
        vkiorenamedialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperInitPainter(const KIO__RenameDialog* self, QPainter* painter) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self))) {
        vkiorenamedialog->KIO::RenameDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnInitPainter(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self)))
        vkiorenamedialog->kio__renamedialog_initpainter_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KIO__RenameDialog_Redirected(const KIO__RenameDialog* self, QPoint* offset) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog) {
        return vkiorenamedialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KIO__RenameDialog_SuperRedirected(const KIO__RenameDialog* self, QPoint* offset) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self))) {
        return vkiorenamedialog->KIO::RenameDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnRedirected(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self)))
        vkiorenamedialog->kio__renamedialog_redirected_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KIO__RenameDialog_SharedPainter(const KIO__RenameDialog* self) {
    auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self));
    if (vkiorenamedialog) {
        return vkiorenamedialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KIO__RenameDialog_SuperSharedPainter(const KIO__RenameDialog* self) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self))) {
        return vkiorenamedialog->KIO::RenameDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnSharedPainter(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self)))
        vkiorenamedialog->kio__renamedialog_sharedpainter_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_InputMethodEvent(KIO__RenameDialog* self, QInputMethodEvent* param1) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperInputMethodEvent(KIO__RenameDialog* self, QInputMethodEvent* param1) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnInputMethodEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_inputmethodevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KIO__RenameDialog_InputMethodQuery(const KIO__RenameDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KIO__RenameDialog_SuperInputMethodQuery(const KIO__RenameDialog* self, int param1) {
    return new QVariant(self->KIO::RenameDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnInputMethodQuery(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self)))
        vkiorenamedialog->kio__renamedialog_inputmethodquery_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KIO__RenameDialog_FocusNextPrevChild(KIO__RenameDialog* self, bool next) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        return vkiorenamedialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__RenameDialog_SuperFocusNextPrevChild(KIO__RenameDialog* self, bool next) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        return vkiorenamedialog->KIO::RenameDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnFocusNextPrevChild(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_focusnextprevchild_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_TimerEvent(KIO__RenameDialog* self, QTimerEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperTimerEvent(KIO__RenameDialog* self, QTimerEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnTimerEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_timerevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_ChildEvent(KIO__RenameDialog* self, QChildEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperChildEvent(KIO__RenameDialog* self, QChildEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnChildEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_childevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_CustomEvent(KIO__RenameDialog* self, QEvent* event) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperCustomEvent(KIO__RenameDialog* self, QEvent* event) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnCustomEvent(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_customevent_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_ConnectNotify(KIO__RenameDialog* self, const QMetaMethod* signal) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperConnectNotify(KIO__RenameDialog* self, const QMetaMethod* signal) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnConnectNotify(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_connectnotify_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameDialog_DisconnectNotify(KIO__RenameDialog* self, const QMetaMethod* signal) {
    auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self);
    if (vkiorenamedialog) {
        vkiorenamedialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameDialog_SuperDisconnectNotify(KIO__RenameDialog* self, const QMetaMethod* signal) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->KIO::RenameDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::RenameDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameDialog_OnDisconnectNotify(KIO__RenameDialog* self, intptr_t slot) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self))
        vkiorenamedialog->kio__renamedialog_disconnectnotify_callback = reinterpret_cast<VirtualKIORenameDialog::KIO__RenameDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KIO__RenameDialog_EnableRenameButton(KIO__RenameDialog* self, const libqt_string param1) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        QString param1_QString = QString::fromUtf8(param1.data, param1.len);
        vkiorenamedialog->VirtualKIORenameDialog::enableRenameButton(param1_QString);
    } else
        qFatal("Error: Protected method KIO::RenameDialog::enableRenameButton called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__RenameDialog_AdjustPosition(KIO__RenameDialog* self, QWidget* param1) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->VirtualKIORenameDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KIO::RenameDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__RenameDialog_UpdateMicroFocus(KIO__RenameDialog* self) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->VirtualKIORenameDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KIO::RenameDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__RenameDialog_Create(KIO__RenameDialog* self) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->VirtualKIORenameDialog::create();
    } else
        qFatal("Error: Protected method KIO::RenameDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__RenameDialog_Destroy(KIO__RenameDialog* self) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        vkiorenamedialog->VirtualKIORenameDialog::destroy();
    } else
        qFatal("Error: Protected method KIO::RenameDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__RenameDialog_FocusNextChild(KIO__RenameDialog* self) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        return vkiorenamedialog->VirtualKIORenameDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KIO::RenameDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__RenameDialog_FocusPreviousChild(KIO__RenameDialog* self) {
    if (auto* vkiorenamedialog = dynamic_cast<VirtualKIORenameDialog*>(self)) {
        return vkiorenamedialog->VirtualKIORenameDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KIO::RenameDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KIO__RenameDialog_Sender(const KIO__RenameDialog* self) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self))) {
        return vkiorenamedialog->VirtualKIORenameDialog::sender();
    } else
        qFatal("Error: Protected method KIO::RenameDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__RenameDialog_SenderSignalIndex(const KIO__RenameDialog* self) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self))) {
        return vkiorenamedialog->VirtualKIORenameDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KIO::RenameDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__RenameDialog_Receivers(const KIO__RenameDialog* self, const char* signal) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self))) {
        return vkiorenamedialog->VirtualKIORenameDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KIO::RenameDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__RenameDialog_IsSignalConnected(const KIO__RenameDialog* self, const QMetaMethod* signal) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self))) {
        return vkiorenamedialog->VirtualKIORenameDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KIO::RenameDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KIO__RenameDialog_GetDecodedMetricF(const KIO__RenameDialog* self, int metricA, int metricB) {
    if (auto* vkiorenamedialog = const_cast<VirtualKIORenameDialog*>(dynamic_cast<const VirtualKIORenameDialog*>(self))) {
        return vkiorenamedialog->VirtualKIORenameDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KIO::RenameDialog::getDecodedMetricF called without a directly constructed type");
}

void KIO__RenameDialog_Delete(KIO__RenameDialog* self) {
    delete self;
}
