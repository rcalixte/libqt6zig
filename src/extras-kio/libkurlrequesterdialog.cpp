#include <KUrlRequester>
#include <KUrlRequesterDialog>
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
#include <kurlrequesterdialog.h>
#include "libkurlrequesterdialog.h"
#include "libkurlrequesterdialog.hxx"

KUrlRequesterDialog* KUrlRequesterDialog_new(const QUrl* url) {
    return new VirtualKUrlRequesterDialog(*url);
}

KUrlRequesterDialog* KUrlRequesterDialog_new2(const QUrl* url, const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKUrlRequesterDialog(*url, text_QString, parent);
}

KUrlRequesterDialog* KUrlRequesterDialog_new3(const QUrl* url, QWidget* parent) {
    return new VirtualKUrlRequesterDialog(*url, parent);
}

QMetaObject* KUrlRequesterDialog_MetaObject(const KUrlRequesterDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KUrlRequesterDialog_Metacast(KUrlRequesterDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KUrlRequesterDialog_Metacall(KUrlRequesterDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KUrlRequesterDialog_Tr(const char* s) {
    auto _ret = KUrlRequesterDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KUrlRequesterDialog_SelectedUrl(const KUrlRequesterDialog* self) {
    return new QUrl(self->selectedUrl());
}

QUrl* KUrlRequesterDialog_GetUrl() {
    return new QUrl(KUrlRequesterDialog::getUrl());
}

KUrlRequester* KUrlRequesterDialog_UrlRequester(KUrlRequesterDialog* self) {
    return self->urlRequester();
}

libqt_string KUrlRequesterDialog_Tr2(const char* s, const char* c) {
    auto _ret = KUrlRequesterDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUrlRequesterDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = KUrlRequesterDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KUrlRequesterDialog_GetUrl1(const QUrl* url) {
    return new QUrl(KUrlRequesterDialog::getUrl(*url));
}

QUrl* KUrlRequesterDialog_GetUrl2(const QUrl* url, QWidget* parent) {
    return new QUrl(KUrlRequesterDialog::getUrl(*url, parent));
}

QUrl* KUrlRequesterDialog_GetUrl3(const QUrl* url, QWidget* parent, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new QUrl(KUrlRequesterDialog::getUrl(*url, parent, title_QString));
}

// Base class handler implementation
QMetaObject* KUrlRequesterDialog_SuperMetaObject(const KUrlRequesterDialog* self) {
    return (QMetaObject*)self->KUrlRequesterDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnMetaObject(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self)))
        vkurlrequesterdialog->kurlrequesterdialog_metaobject_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KUrlRequesterDialog_SuperMetacast(KUrlRequesterDialog* self, const char* param1) {
    return self->KUrlRequesterDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnMetacast(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_metacast_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KUrlRequesterDialog_SuperMetacall(KUrlRequesterDialog* self, int param1, int param2, void** param3) {
    return self->KUrlRequesterDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnMetacall(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_metacall_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Metacall_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_SetVisible(KUrlRequesterDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KUrlRequesterDialog_SuperSetVisible(KUrlRequesterDialog* self, bool visible) {
    self->KUrlRequesterDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnSetVisible(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_setvisible_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KUrlRequesterDialog_SizeHint(const KUrlRequesterDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KUrlRequesterDialog_SuperSizeHint(const KUrlRequesterDialog* self) {
    return new QSize(self->KUrlRequesterDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnSizeHint(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self)))
        vkurlrequesterdialog->kurlrequesterdialog_sizehint_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KUrlRequesterDialog_MinimumSizeHint(const KUrlRequesterDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KUrlRequesterDialog_SuperMinimumSizeHint(const KUrlRequesterDialog* self) {
    return new QSize(self->KUrlRequesterDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnMinimumSizeHint(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self)))
        vkurlrequesterdialog->kurlrequesterdialog_minimumsizehint_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_Open(KUrlRequesterDialog* self) {
    self->open();
}

// Base class handler implementation
void KUrlRequesterDialog_SuperOpen(KUrlRequesterDialog* self) {
    self->KUrlRequesterDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnOpen(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_open_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KUrlRequesterDialog_Exec(KUrlRequesterDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KUrlRequesterDialog_SuperExec(KUrlRequesterDialog* self) {
    return self->KUrlRequesterDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnExec(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_exec_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_Done(KUrlRequesterDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KUrlRequesterDialog_SuperDone(KUrlRequesterDialog* self, int param1) {
    self->KUrlRequesterDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnDone(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_done_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_Accept(KUrlRequesterDialog* self) {
    self->accept();
}

// Base class handler implementation
void KUrlRequesterDialog_SuperAccept(KUrlRequesterDialog* self) {
    self->KUrlRequesterDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnAccept(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_accept_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_Reject(KUrlRequesterDialog* self) {
    self->reject();
}

// Base class handler implementation
void KUrlRequesterDialog_SuperReject(KUrlRequesterDialog* self) {
    self->KUrlRequesterDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnReject(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_reject_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_KeyPressEvent(KUrlRequesterDialog* self, QKeyEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperKeyPressEvent(KUrlRequesterDialog* self, QKeyEvent* param1) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnKeyPressEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_keypressevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_CloseEvent(KUrlRequesterDialog* self, QCloseEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperCloseEvent(KUrlRequesterDialog* self, QCloseEvent* param1) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnCloseEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_closeevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_ShowEvent(KUrlRequesterDialog* self, QShowEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperShowEvent(KUrlRequesterDialog* self, QShowEvent* param1) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnShowEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_showevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_ResizeEvent(KUrlRequesterDialog* self, QResizeEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperResizeEvent(KUrlRequesterDialog* self, QResizeEvent* param1) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnResizeEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_resizeevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_ContextMenuEvent(KUrlRequesterDialog* self, QContextMenuEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperContextMenuEvent(KUrlRequesterDialog* self, QContextMenuEvent* param1) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnContextMenuEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_contextmenuevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KUrlRequesterDialog_EventFilter(KUrlRequesterDialog* self, QObject* param1, QEvent* param2) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        return vkurlrequesterdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KUrlRequesterDialog_SuperEventFilter(KUrlRequesterDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        return vkurlrequesterdialog->KUrlRequesterDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnEventFilter(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_eventfilter_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KUrlRequesterDialog_DevType(const KUrlRequesterDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KUrlRequesterDialog_SuperDevType(const KUrlRequesterDialog* self) {
    return self->KUrlRequesterDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnDevType(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self)))
        vkurlrequesterdialog->kurlrequesterdialog_devtype_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KUrlRequesterDialog_HeightForWidth(const KUrlRequesterDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KUrlRequesterDialog_SuperHeightForWidth(const KUrlRequesterDialog* self, int param1) {
    return self->KUrlRequesterDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnHeightForWidth(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self)))
        vkurlrequesterdialog->kurlrequesterdialog_heightforwidth_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KUrlRequesterDialog_HasHeightForWidth(const KUrlRequesterDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KUrlRequesterDialog_SuperHasHeightForWidth(const KUrlRequesterDialog* self) {
    return self->KUrlRequesterDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnHasHeightForWidth(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self)))
        vkurlrequesterdialog->kurlrequesterdialog_hasheightforwidth_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KUrlRequesterDialog_PaintEngine(const KUrlRequesterDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KUrlRequesterDialog_SuperPaintEngine(const KUrlRequesterDialog* self) {
    return self->KUrlRequesterDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnPaintEngine(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self)))
        vkurlrequesterdialog->kurlrequesterdialog_paintengine_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KUrlRequesterDialog_Event(KUrlRequesterDialog* self, QEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        return vkurlrequesterdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KUrlRequesterDialog_SuperEvent(KUrlRequesterDialog* self, QEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        return vkurlrequesterdialog->KUrlRequesterDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_event_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_MousePressEvent(KUrlRequesterDialog* self, QMouseEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperMousePressEvent(KUrlRequesterDialog* self, QMouseEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnMousePressEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_mousepressevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_MouseReleaseEvent(KUrlRequesterDialog* self, QMouseEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperMouseReleaseEvent(KUrlRequesterDialog* self, QMouseEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnMouseReleaseEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_mousereleaseevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_MouseDoubleClickEvent(KUrlRequesterDialog* self, QMouseEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperMouseDoubleClickEvent(KUrlRequesterDialog* self, QMouseEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnMouseDoubleClickEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_MouseMoveEvent(KUrlRequesterDialog* self, QMouseEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperMouseMoveEvent(KUrlRequesterDialog* self, QMouseEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnMouseMoveEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_mousemoveevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_WheelEvent(KUrlRequesterDialog* self, QWheelEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperWheelEvent(KUrlRequesterDialog* self, QWheelEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnWheelEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_wheelevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_KeyReleaseEvent(KUrlRequesterDialog* self, QKeyEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperKeyReleaseEvent(KUrlRequesterDialog* self, QKeyEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnKeyReleaseEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_keyreleaseevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_FocusInEvent(KUrlRequesterDialog* self, QFocusEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperFocusInEvent(KUrlRequesterDialog* self, QFocusEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnFocusInEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_focusinevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_FocusOutEvent(KUrlRequesterDialog* self, QFocusEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperFocusOutEvent(KUrlRequesterDialog* self, QFocusEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnFocusOutEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_focusoutevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_EnterEvent(KUrlRequesterDialog* self, QEnterEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperEnterEvent(KUrlRequesterDialog* self, QEnterEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnEnterEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_enterevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_LeaveEvent(KUrlRequesterDialog* self, QEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperLeaveEvent(KUrlRequesterDialog* self, QEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnLeaveEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_leaveevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_PaintEvent(KUrlRequesterDialog* self, QPaintEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperPaintEvent(KUrlRequesterDialog* self, QPaintEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnPaintEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_paintevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_MoveEvent(KUrlRequesterDialog* self, QMoveEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperMoveEvent(KUrlRequesterDialog* self, QMoveEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnMoveEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_moveevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_TabletEvent(KUrlRequesterDialog* self, QTabletEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperTabletEvent(KUrlRequesterDialog* self, QTabletEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnTabletEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_tabletevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_ActionEvent(KUrlRequesterDialog* self, QActionEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperActionEvent(KUrlRequesterDialog* self, QActionEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnActionEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_actionevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_DragEnterEvent(KUrlRequesterDialog* self, QDragEnterEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperDragEnterEvent(KUrlRequesterDialog* self, QDragEnterEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnDragEnterEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_dragenterevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_DragMoveEvent(KUrlRequesterDialog* self, QDragMoveEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperDragMoveEvent(KUrlRequesterDialog* self, QDragMoveEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnDragMoveEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_dragmoveevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_DragLeaveEvent(KUrlRequesterDialog* self, QDragLeaveEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperDragLeaveEvent(KUrlRequesterDialog* self, QDragLeaveEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnDragLeaveEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_dragleaveevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_DropEvent(KUrlRequesterDialog* self, QDropEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperDropEvent(KUrlRequesterDialog* self, QDropEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnDropEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_dropevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_HideEvent(KUrlRequesterDialog* self, QHideEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperHideEvent(KUrlRequesterDialog* self, QHideEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnHideEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_hideevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KUrlRequesterDialog_NativeEvent(KUrlRequesterDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        return vkurlrequesterdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KUrlRequesterDialog_SuperNativeEvent(KUrlRequesterDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        return vkurlrequesterdialog->KUrlRequesterDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnNativeEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_nativeevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_ChangeEvent(KUrlRequesterDialog* self, QEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperChangeEvent(KUrlRequesterDialog* self, QEvent* param1) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnChangeEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_changeevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KUrlRequesterDialog_Metric(const KUrlRequesterDialog* self, int param1) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog) {
        return vkurlrequesterdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KUrlRequesterDialog_SuperMetric(const KUrlRequesterDialog* self, int param1) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self))) {
        return vkurlrequesterdialog->KUrlRequesterDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnMetric(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self)))
        vkurlrequesterdialog->kurlrequesterdialog_metric_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_InitPainter(const KUrlRequesterDialog* self, QPainter* painter) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperInitPainter(const KUrlRequesterDialog* self, QPainter* painter) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self))) {
        vkurlrequesterdialog->KUrlRequesterDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnInitPainter(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self)))
        vkurlrequesterdialog->kurlrequesterdialog_initpainter_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KUrlRequesterDialog_Redirected(const KUrlRequesterDialog* self, QPoint* offset) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog) {
        return vkurlrequesterdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KUrlRequesterDialog_SuperRedirected(const KUrlRequesterDialog* self, QPoint* offset) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self))) {
        return vkurlrequesterdialog->KUrlRequesterDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnRedirected(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self)))
        vkurlrequesterdialog->kurlrequesterdialog_redirected_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KUrlRequesterDialog_SharedPainter(const KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog) {
        return vkurlrequesterdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KUrlRequesterDialog_SuperSharedPainter(const KUrlRequesterDialog* self) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self))) {
        return vkurlrequesterdialog->KUrlRequesterDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnSharedPainter(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self)))
        vkurlrequesterdialog->kurlrequesterdialog_sharedpainter_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_InputMethodEvent(KUrlRequesterDialog* self, QInputMethodEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperInputMethodEvent(KUrlRequesterDialog* self, QInputMethodEvent* param1) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnInputMethodEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_inputmethodevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KUrlRequesterDialog_InputMethodQuery(const KUrlRequesterDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KUrlRequesterDialog_SuperInputMethodQuery(const KUrlRequesterDialog* self, int param1) {
    return new QVariant(self->KUrlRequesterDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnInputMethodQuery(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self)))
        vkurlrequesterdialog->kurlrequesterdialog_inputmethodquery_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KUrlRequesterDialog_FocusNextPrevChild(KUrlRequesterDialog* self, bool next) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        return vkurlrequesterdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KUrlRequesterDialog_SuperFocusNextPrevChild(KUrlRequesterDialog* self, bool next) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        return vkurlrequesterdialog->KUrlRequesterDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnFocusNextPrevChild(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_focusnextprevchild_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_TimerEvent(KUrlRequesterDialog* self, QTimerEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperTimerEvent(KUrlRequesterDialog* self, QTimerEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnTimerEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_timerevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_ChildEvent(KUrlRequesterDialog* self, QChildEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperChildEvent(KUrlRequesterDialog* self, QChildEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnChildEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_childevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_CustomEvent(KUrlRequesterDialog* self, QEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperCustomEvent(KUrlRequesterDialog* self, QEvent* event) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnCustomEvent(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_customevent_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_ConnectNotify(KUrlRequesterDialog* self, const QMetaMethod* signal) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperConnectNotify(KUrlRequesterDialog* self, const QMetaMethod* signal) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnConnectNotify(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_connectnotify_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequesterDialog_DisconnectNotify(KUrlRequesterDialog* self, const QMetaMethod* signal) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog) {
        vkurlrequesterdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KUrlRequesterDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequesterDialog_SuperDisconnectNotify(KUrlRequesterDialog* self, const QMetaMethod* signal) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->KUrlRequesterDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KUrlRequesterDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnDisconnectNotify(KUrlRequesterDialog* self, intptr_t slot) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self))
        vkurlrequesterdialog->kurlrequesterdialog_disconnectnotify_callback = reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KUrlRequesterDialog_AdjustPosition(KUrlRequesterDialog* self, QWidget* param1) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->VirtualKUrlRequesterDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KUrlRequesterDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KUrlRequesterDialog_UpdateMicroFocus(KUrlRequesterDialog* self) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->VirtualKUrlRequesterDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KUrlRequesterDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KUrlRequesterDialog_Create(KUrlRequesterDialog* self) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->VirtualKUrlRequesterDialog::create();
    } else
        qFatal("Error: Protected method KUrlRequesterDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KUrlRequesterDialog_Destroy(KUrlRequesterDialog* self) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        vkurlrequesterdialog->VirtualKUrlRequesterDialog::destroy();
    } else
        qFatal("Error: Protected method KUrlRequesterDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KUrlRequesterDialog_FocusNextChild(KUrlRequesterDialog* self) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        return vkurlrequesterdialog->VirtualKUrlRequesterDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KUrlRequesterDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KUrlRequesterDialog_FocusPreviousChild(KUrlRequesterDialog* self) {
    if (auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self)) {
        return vkurlrequesterdialog->VirtualKUrlRequesterDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KUrlRequesterDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KUrlRequesterDialog_Sender(const KUrlRequesterDialog* self) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self))) {
        return vkurlrequesterdialog->VirtualKUrlRequesterDialog::sender();
    } else
        qFatal("Error: Protected method KUrlRequesterDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KUrlRequesterDialog_SenderSignalIndex(const KUrlRequesterDialog* self) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self))) {
        return vkurlrequesterdialog->VirtualKUrlRequesterDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KUrlRequesterDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KUrlRequesterDialog_Receivers(const KUrlRequesterDialog* self, const char* signal) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self))) {
        return vkurlrequesterdialog->VirtualKUrlRequesterDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KUrlRequesterDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KUrlRequesterDialog_IsSignalConnected(const KUrlRequesterDialog* self, const QMetaMethod* signal) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self))) {
        return vkurlrequesterdialog->VirtualKUrlRequesterDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KUrlRequesterDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KUrlRequesterDialog_GetDecodedMetricF(const KUrlRequesterDialog* self, int metricA, int metricB) {
    if (auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self))) {
        return vkurlrequesterdialog->VirtualKUrlRequesterDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KUrlRequesterDialog::getDecodedMetricF called without a directly constructed type");
}

void KUrlRequesterDialog_Delete(KUrlRequesterDialog* self) {
    delete self;
}
