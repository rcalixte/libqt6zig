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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KFilePlaceEditDialog_Tr(const char* s) {
    auto _ret = KFilePlaceEditDialog::tr(s);
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
    auto _ret = self->label();
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
    auto _ret = self->icon();
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
    auto _ret = KFilePlaceEditDialog::tr(s, c);
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
    auto _ret = KFilePlaceEditDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* KFilePlaceEditDialog_SuperMetaObject(const KFilePlaceEditDialog* self) {
    return (QMetaObject*)self->KFilePlaceEditDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnMetaObject(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self)))
        vkfileplaceeditdialog->kfileplaceeditdialog_metaobject_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KFilePlaceEditDialog_SuperMetacast(KFilePlaceEditDialog* self, const char* param1) {
    return self->KFilePlaceEditDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnMetacast(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_metacast_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KFilePlaceEditDialog_SuperMetacall(KFilePlaceEditDialog* self, int param1, int param2, void** param3) {
    return self->KFilePlaceEditDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnMetacall(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_metacall_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Metacall_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_SetVisible(KFilePlaceEditDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperSetVisible(KFilePlaceEditDialog* self, bool visible) {
    self->KFilePlaceEditDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnSetVisible(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_setvisible_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KFilePlaceEditDialog_SizeHint(const KFilePlaceEditDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KFilePlaceEditDialog_SuperSizeHint(const KFilePlaceEditDialog* self) {
    return new QSize(self->KFilePlaceEditDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnSizeHint(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self)))
        vkfileplaceeditdialog->kfileplaceeditdialog_sizehint_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KFilePlaceEditDialog_MinimumSizeHint(const KFilePlaceEditDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KFilePlaceEditDialog_SuperMinimumSizeHint(const KFilePlaceEditDialog* self) {
    return new QSize(self->KFilePlaceEditDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnMinimumSizeHint(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self)))
        vkfileplaceeditdialog->kfileplaceeditdialog_minimumsizehint_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_Open(KFilePlaceEditDialog* self) {
    self->open();
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperOpen(KFilePlaceEditDialog* self) {
    self->KFilePlaceEditDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnOpen(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_open_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KFilePlaceEditDialog_Exec(KFilePlaceEditDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KFilePlaceEditDialog_SuperExec(KFilePlaceEditDialog* self) {
    return self->KFilePlaceEditDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnExec(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_exec_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_Done(KFilePlaceEditDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperDone(KFilePlaceEditDialog* self, int param1) {
    self->KFilePlaceEditDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnDone(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_done_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_Accept(KFilePlaceEditDialog* self) {
    self->accept();
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperAccept(KFilePlaceEditDialog* self) {
    self->KFilePlaceEditDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnAccept(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_accept_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_Reject(KFilePlaceEditDialog* self) {
    self->reject();
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperReject(KFilePlaceEditDialog* self) {
    self->KFilePlaceEditDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnReject(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_reject_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_KeyPressEvent(KFilePlaceEditDialog* self, QKeyEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperKeyPressEvent(KFilePlaceEditDialog* self, QKeyEvent* param1) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnKeyPressEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_keypressevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_CloseEvent(KFilePlaceEditDialog* self, QCloseEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperCloseEvent(KFilePlaceEditDialog* self, QCloseEvent* param1) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnCloseEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_closeevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_ShowEvent(KFilePlaceEditDialog* self, QShowEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperShowEvent(KFilePlaceEditDialog* self, QShowEvent* param1) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnShowEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_showevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_ResizeEvent(KFilePlaceEditDialog* self, QResizeEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperResizeEvent(KFilePlaceEditDialog* self, QResizeEvent* param1) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnResizeEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_resizeevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_ContextMenuEvent(KFilePlaceEditDialog* self, QContextMenuEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperContextMenuEvent(KFilePlaceEditDialog* self, QContextMenuEvent* param1) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnContextMenuEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_contextmenuevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlaceEditDialog_EventFilter(KFilePlaceEditDialog* self, QObject* param1, QEvent* param2) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        return vkfileplaceeditdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFilePlaceEditDialog_SuperEventFilter(KFilePlaceEditDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        return vkfileplaceeditdialog->KFilePlaceEditDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnEventFilter(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_eventfilter_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KFilePlaceEditDialog_DevType(const KFilePlaceEditDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KFilePlaceEditDialog_SuperDevType(const KFilePlaceEditDialog* self) {
    return self->KFilePlaceEditDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnDevType(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self)))
        vkfileplaceeditdialog->kfileplaceeditdialog_devtype_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KFilePlaceEditDialog_HeightForWidth(const KFilePlaceEditDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KFilePlaceEditDialog_SuperHeightForWidth(const KFilePlaceEditDialog* self, int param1) {
    return self->KFilePlaceEditDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnHeightForWidth(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self)))
        vkfileplaceeditdialog->kfileplaceeditdialog_heightforwidth_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlaceEditDialog_HasHeightForWidth(const KFilePlaceEditDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KFilePlaceEditDialog_SuperHasHeightForWidth(const KFilePlaceEditDialog* self) {
    return self->KFilePlaceEditDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnHasHeightForWidth(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self)))
        vkfileplaceeditdialog->kfileplaceeditdialog_hasheightforwidth_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KFilePlaceEditDialog_PaintEngine(const KFilePlaceEditDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KFilePlaceEditDialog_SuperPaintEngine(const KFilePlaceEditDialog* self) {
    return self->KFilePlaceEditDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnPaintEngine(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self)))
        vkfileplaceeditdialog->kfileplaceeditdialog_paintengine_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlaceEditDialog_Event(KFilePlaceEditDialog* self, QEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        return vkfileplaceeditdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFilePlaceEditDialog_SuperEvent(KFilePlaceEditDialog* self, QEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        return vkfileplaceeditdialog->KFilePlaceEditDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_event_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_MousePressEvent(KFilePlaceEditDialog* self, QMouseEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperMousePressEvent(KFilePlaceEditDialog* self, QMouseEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnMousePressEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_mousepressevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_MouseReleaseEvent(KFilePlaceEditDialog* self, QMouseEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperMouseReleaseEvent(KFilePlaceEditDialog* self, QMouseEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnMouseReleaseEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_mousereleaseevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_MouseDoubleClickEvent(KFilePlaceEditDialog* self, QMouseEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperMouseDoubleClickEvent(KFilePlaceEditDialog* self, QMouseEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnMouseDoubleClickEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_MouseMoveEvent(KFilePlaceEditDialog* self, QMouseEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperMouseMoveEvent(KFilePlaceEditDialog* self, QMouseEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnMouseMoveEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_mousemoveevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_WheelEvent(KFilePlaceEditDialog* self, QWheelEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperWheelEvent(KFilePlaceEditDialog* self, QWheelEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnWheelEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_wheelevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_KeyReleaseEvent(KFilePlaceEditDialog* self, QKeyEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperKeyReleaseEvent(KFilePlaceEditDialog* self, QKeyEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnKeyReleaseEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_keyreleaseevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_FocusInEvent(KFilePlaceEditDialog* self, QFocusEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperFocusInEvent(KFilePlaceEditDialog* self, QFocusEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnFocusInEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_focusinevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_FocusOutEvent(KFilePlaceEditDialog* self, QFocusEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperFocusOutEvent(KFilePlaceEditDialog* self, QFocusEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnFocusOutEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_focusoutevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_EnterEvent(KFilePlaceEditDialog* self, QEnterEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperEnterEvent(KFilePlaceEditDialog* self, QEnterEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnEnterEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_enterevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_LeaveEvent(KFilePlaceEditDialog* self, QEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperLeaveEvent(KFilePlaceEditDialog* self, QEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnLeaveEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_leaveevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_PaintEvent(KFilePlaceEditDialog* self, QPaintEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperPaintEvent(KFilePlaceEditDialog* self, QPaintEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnPaintEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_paintevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_MoveEvent(KFilePlaceEditDialog* self, QMoveEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperMoveEvent(KFilePlaceEditDialog* self, QMoveEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnMoveEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_moveevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_TabletEvent(KFilePlaceEditDialog* self, QTabletEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperTabletEvent(KFilePlaceEditDialog* self, QTabletEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnTabletEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_tabletevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_ActionEvent(KFilePlaceEditDialog* self, QActionEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperActionEvent(KFilePlaceEditDialog* self, QActionEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnActionEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_actionevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_DragEnterEvent(KFilePlaceEditDialog* self, QDragEnterEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperDragEnterEvent(KFilePlaceEditDialog* self, QDragEnterEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnDragEnterEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_dragenterevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_DragMoveEvent(KFilePlaceEditDialog* self, QDragMoveEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperDragMoveEvent(KFilePlaceEditDialog* self, QDragMoveEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnDragMoveEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_dragmoveevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_DragLeaveEvent(KFilePlaceEditDialog* self, QDragLeaveEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperDragLeaveEvent(KFilePlaceEditDialog* self, QDragLeaveEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnDragLeaveEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_dragleaveevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_DropEvent(KFilePlaceEditDialog* self, QDropEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperDropEvent(KFilePlaceEditDialog* self, QDropEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnDropEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_dropevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_HideEvent(KFilePlaceEditDialog* self, QHideEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperHideEvent(KFilePlaceEditDialog* self, QHideEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnHideEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_hideevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlaceEditDialog_NativeEvent(KFilePlaceEditDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        return vkfileplaceeditdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFilePlaceEditDialog_SuperNativeEvent(KFilePlaceEditDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        return vkfileplaceeditdialog->KFilePlaceEditDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnNativeEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_nativeevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_ChangeEvent(KFilePlaceEditDialog* self, QEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperChangeEvent(KFilePlaceEditDialog* self, QEvent* param1) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnChangeEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_changeevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KFilePlaceEditDialog_Metric(const KFilePlaceEditDialog* self, int param1) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog) {
        return vkfileplaceeditdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KFilePlaceEditDialog_SuperMetric(const KFilePlaceEditDialog* self, int param1) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self))) {
        return vkfileplaceeditdialog->KFilePlaceEditDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnMetric(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self)))
        vkfileplaceeditdialog->kfileplaceeditdialog_metric_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_InitPainter(const KFilePlaceEditDialog* self, QPainter* painter) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperInitPainter(const KFilePlaceEditDialog* self, QPainter* painter) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self))) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnInitPainter(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self)))
        vkfileplaceeditdialog->kfileplaceeditdialog_initpainter_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KFilePlaceEditDialog_Redirected(const KFilePlaceEditDialog* self, QPoint* offset) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog) {
        return vkfileplaceeditdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KFilePlaceEditDialog_SuperRedirected(const KFilePlaceEditDialog* self, QPoint* offset) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self))) {
        return vkfileplaceeditdialog->KFilePlaceEditDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnRedirected(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self)))
        vkfileplaceeditdialog->kfileplaceeditdialog_redirected_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KFilePlaceEditDialog_SharedPainter(const KFilePlaceEditDialog* self) {
    auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self));
    if (vkfileplaceeditdialog) {
        return vkfileplaceeditdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KFilePlaceEditDialog_SuperSharedPainter(const KFilePlaceEditDialog* self) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self))) {
        return vkfileplaceeditdialog->KFilePlaceEditDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnSharedPainter(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self)))
        vkfileplaceeditdialog->kfileplaceeditdialog_sharedpainter_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_InputMethodEvent(KFilePlaceEditDialog* self, QInputMethodEvent* param1) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperInputMethodEvent(KFilePlaceEditDialog* self, QInputMethodEvent* param1) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnInputMethodEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_inputmethodevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KFilePlaceEditDialog_InputMethodQuery(const KFilePlaceEditDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KFilePlaceEditDialog_SuperInputMethodQuery(const KFilePlaceEditDialog* self, int param1) {
    return new QVariant(self->KFilePlaceEditDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnInputMethodQuery(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self)))
        vkfileplaceeditdialog->kfileplaceeditdialog_inputmethodquery_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KFilePlaceEditDialog_FocusNextPrevChild(KFilePlaceEditDialog* self, bool next) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        return vkfileplaceeditdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFilePlaceEditDialog_SuperFocusNextPrevChild(KFilePlaceEditDialog* self, bool next) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        return vkfileplaceeditdialog->KFilePlaceEditDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnFocusNextPrevChild(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_focusnextprevchild_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_TimerEvent(KFilePlaceEditDialog* self, QTimerEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperTimerEvent(KFilePlaceEditDialog* self, QTimerEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnTimerEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_timerevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_ChildEvent(KFilePlaceEditDialog* self, QChildEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperChildEvent(KFilePlaceEditDialog* self, QChildEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnChildEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_childevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_CustomEvent(KFilePlaceEditDialog* self, QEvent* event) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperCustomEvent(KFilePlaceEditDialog* self, QEvent* event) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnCustomEvent(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_customevent_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_ConnectNotify(KFilePlaceEditDialog* self, const QMetaMethod* signal) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperConnectNotify(KFilePlaceEditDialog* self, const QMetaMethod* signal) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnConnectNotify(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_connectnotify_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KFilePlaceEditDialog_DisconnectNotify(KFilePlaceEditDialog* self, const QMetaMethod* signal) {
    auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self);
    if (vkfileplaceeditdialog) {
        vkfileplaceeditdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePlaceEditDialog_SuperDisconnectNotify(KFilePlaceEditDialog* self, const QMetaMethod* signal) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->KFilePlaceEditDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFilePlaceEditDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePlaceEditDialog_OnDisconnectNotify(KFilePlaceEditDialog* self, intptr_t slot) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self))
        vkfileplaceeditdialog->kfileplaceeditdialog_disconnectnotify_callback = reinterpret_cast<VirtualKFilePlaceEditDialog::KFilePlaceEditDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KFilePlaceEditDialog_AdjustPosition(KFilePlaceEditDialog* self, QWidget* param1) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->VirtualKFilePlaceEditDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KFilePlaceEditDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlaceEditDialog_UpdateMicroFocus(KFilePlaceEditDialog* self) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->VirtualKFilePlaceEditDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KFilePlaceEditDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlaceEditDialog_Create(KFilePlaceEditDialog* self) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->VirtualKFilePlaceEditDialog::create();
    } else
        qFatal("Error: Protected method KFilePlaceEditDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KFilePlaceEditDialog_Destroy(KFilePlaceEditDialog* self) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        vkfileplaceeditdialog->VirtualKFilePlaceEditDialog::destroy();
    } else
        qFatal("Error: Protected method KFilePlaceEditDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFilePlaceEditDialog_FocusNextChild(KFilePlaceEditDialog* self) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        return vkfileplaceeditdialog->VirtualKFilePlaceEditDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KFilePlaceEditDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFilePlaceEditDialog_FocusPreviousChild(KFilePlaceEditDialog* self) {
    if (auto* vkfileplaceeditdialog = dynamic_cast<VirtualKFilePlaceEditDialog*>(self)) {
        return vkfileplaceeditdialog->VirtualKFilePlaceEditDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KFilePlaceEditDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KFilePlaceEditDialog_Sender(const KFilePlaceEditDialog* self) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self))) {
        return vkfileplaceeditdialog->VirtualKFilePlaceEditDialog::sender();
    } else
        qFatal("Error: Protected method KFilePlaceEditDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KFilePlaceEditDialog_SenderSignalIndex(const KFilePlaceEditDialog* self) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self))) {
        return vkfileplaceeditdialog->VirtualKFilePlaceEditDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KFilePlaceEditDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KFilePlaceEditDialog_Receivers(const KFilePlaceEditDialog* self, const char* signal) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self))) {
        return vkfileplaceeditdialog->VirtualKFilePlaceEditDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KFilePlaceEditDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFilePlaceEditDialog_IsSignalConnected(const KFilePlaceEditDialog* self, const QMetaMethod* signal) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self))) {
        return vkfileplaceeditdialog->VirtualKFilePlaceEditDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KFilePlaceEditDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KFilePlaceEditDialog_GetDecodedMetricF(const KFilePlaceEditDialog* self, int metricA, int metricB) {
    if (auto* vkfileplaceeditdialog = const_cast<VirtualKFilePlaceEditDialog*>(dynamic_cast<const VirtualKFilePlaceEditDialog*>(self))) {
        return vkfileplaceeditdialog->VirtualKFilePlaceEditDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KFilePlaceEditDialog::getDecodedMetricF called without a directly constructed type");
}

void KFilePlaceEditDialog_Delete(KFilePlaceEditDialog* self) {
    delete self;
}
