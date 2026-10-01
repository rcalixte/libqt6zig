#include <KNameAndUrlInputDialog>
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
#include <knameandurlinputdialog.h>
#include "libknameandurlinputdialog.h"
#include "libknameandurlinputdialog.hxx"

KNameAndUrlInputDialog* KNameAndUrlInputDialog_new(const libqt_string nameLabel, const libqt_string urlLabel, const QUrl* startDir, QWidget* parent) {
    QString nameLabel_QString = QString::fromUtf8(nameLabel.data, nameLabel.len);
    QString urlLabel_QString = QString::fromUtf8(urlLabel.data, urlLabel.len);
    return new VirtualKNameAndUrlInputDialog(nameLabel_QString, urlLabel_QString, *startDir, parent);
}

QMetaObject* KNameAndUrlInputDialog_MetaObject(const KNameAndUrlInputDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNameAndUrlInputDialog_Metacast(KNameAndUrlInputDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNameAndUrlInputDialog_Metacall(KNameAndUrlInputDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNameAndUrlInputDialog_Tr(const char* s) {
    auto _ret = KNameAndUrlInputDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNameAndUrlInputDialog_SetSuggestedName(KNameAndUrlInputDialog* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setSuggestedName(name_QString);
}

void KNameAndUrlInputDialog_SetSuggestedUrl(KNameAndUrlInputDialog* self, const QUrl* url) {
    self->setSuggestedUrl(*url);
}

libqt_string KNameAndUrlInputDialog_Name(const KNameAndUrlInputDialog* self) {
    auto _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KNameAndUrlInputDialog_Url(const KNameAndUrlInputDialog* self) {
    return new QUrl(self->url());
}

libqt_string KNameAndUrlInputDialog_UrlText(const KNameAndUrlInputDialog* self) {
    auto _ret = self->urlText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNameAndUrlInputDialog_Tr2(const char* s, const char* c) {
    auto _ret = KNameAndUrlInputDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNameAndUrlInputDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = KNameAndUrlInputDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* KNameAndUrlInputDialog_SuperMetaObject(const KNameAndUrlInputDialog* self) {
    return (QMetaObject*)self->KNameAndUrlInputDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnMetaObject(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self)))
        vknameandurlinputdialog->knameandurlinputdialog_metaobject_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KNameAndUrlInputDialog_SuperMetacast(KNameAndUrlInputDialog* self, const char* param1) {
    return self->KNameAndUrlInputDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnMetacast(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_metacast_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KNameAndUrlInputDialog_SuperMetacall(KNameAndUrlInputDialog* self, int param1, int param2, void** param3) {
    return self->KNameAndUrlInputDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnMetacall(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_metacall_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Metacall_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_SetVisible(KNameAndUrlInputDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperSetVisible(KNameAndUrlInputDialog* self, bool visible) {
    self->KNameAndUrlInputDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnSetVisible(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_setvisible_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KNameAndUrlInputDialog_SizeHint(const KNameAndUrlInputDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KNameAndUrlInputDialog_SuperSizeHint(const KNameAndUrlInputDialog* self) {
    return new QSize(self->KNameAndUrlInputDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnSizeHint(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self)))
        vknameandurlinputdialog->knameandurlinputdialog_sizehint_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KNameAndUrlInputDialog_MinimumSizeHint(const KNameAndUrlInputDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KNameAndUrlInputDialog_SuperMinimumSizeHint(const KNameAndUrlInputDialog* self) {
    return new QSize(self->KNameAndUrlInputDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnMinimumSizeHint(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self)))
        vknameandurlinputdialog->knameandurlinputdialog_minimumsizehint_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_Open(KNameAndUrlInputDialog* self) {
    self->open();
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperOpen(KNameAndUrlInputDialog* self) {
    self->KNameAndUrlInputDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnOpen(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_open_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KNameAndUrlInputDialog_Exec(KNameAndUrlInputDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KNameAndUrlInputDialog_SuperExec(KNameAndUrlInputDialog* self) {
    return self->KNameAndUrlInputDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnExec(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_exec_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_Done(KNameAndUrlInputDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperDone(KNameAndUrlInputDialog* self, int param1) {
    self->KNameAndUrlInputDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnDone(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_done_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_Accept(KNameAndUrlInputDialog* self) {
    self->accept();
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperAccept(KNameAndUrlInputDialog* self) {
    self->KNameAndUrlInputDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnAccept(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_accept_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_Reject(KNameAndUrlInputDialog* self) {
    self->reject();
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperReject(KNameAndUrlInputDialog* self) {
    self->KNameAndUrlInputDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnReject(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_reject_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_KeyPressEvent(KNameAndUrlInputDialog* self, QKeyEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperKeyPressEvent(KNameAndUrlInputDialog* self, QKeyEvent* param1) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnKeyPressEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_keypressevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_CloseEvent(KNameAndUrlInputDialog* self, QCloseEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperCloseEvent(KNameAndUrlInputDialog* self, QCloseEvent* param1) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnCloseEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_closeevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_ShowEvent(KNameAndUrlInputDialog* self, QShowEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperShowEvent(KNameAndUrlInputDialog* self, QShowEvent* param1) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnShowEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_showevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_ResizeEvent(KNameAndUrlInputDialog* self, QResizeEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperResizeEvent(KNameAndUrlInputDialog* self, QResizeEvent* param1) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnResizeEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_resizeevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_ContextMenuEvent(KNameAndUrlInputDialog* self, QContextMenuEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperContextMenuEvent(KNameAndUrlInputDialog* self, QContextMenuEvent* param1) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnContextMenuEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_contextmenuevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KNameAndUrlInputDialog_EventFilter(KNameAndUrlInputDialog* self, QObject* param1, QEvent* param2) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        return vknameandurlinputdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNameAndUrlInputDialog_SuperEventFilter(KNameAndUrlInputDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        return vknameandurlinputdialog->KNameAndUrlInputDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnEventFilter(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_eventfilter_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KNameAndUrlInputDialog_DevType(const KNameAndUrlInputDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KNameAndUrlInputDialog_SuperDevType(const KNameAndUrlInputDialog* self) {
    return self->KNameAndUrlInputDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnDevType(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self)))
        vknameandurlinputdialog->knameandurlinputdialog_devtype_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KNameAndUrlInputDialog_HeightForWidth(const KNameAndUrlInputDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KNameAndUrlInputDialog_SuperHeightForWidth(const KNameAndUrlInputDialog* self, int param1) {
    return self->KNameAndUrlInputDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnHeightForWidth(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self)))
        vknameandurlinputdialog->knameandurlinputdialog_heightforwidth_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KNameAndUrlInputDialog_HasHeightForWidth(const KNameAndUrlInputDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KNameAndUrlInputDialog_SuperHasHeightForWidth(const KNameAndUrlInputDialog* self) {
    return self->KNameAndUrlInputDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnHasHeightForWidth(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self)))
        vknameandurlinputdialog->knameandurlinputdialog_hasheightforwidth_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KNameAndUrlInputDialog_PaintEngine(const KNameAndUrlInputDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KNameAndUrlInputDialog_SuperPaintEngine(const KNameAndUrlInputDialog* self) {
    return self->KNameAndUrlInputDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnPaintEngine(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self)))
        vknameandurlinputdialog->knameandurlinputdialog_paintengine_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KNameAndUrlInputDialog_Event(KNameAndUrlInputDialog* self, QEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        return vknameandurlinputdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNameAndUrlInputDialog_SuperEvent(KNameAndUrlInputDialog* self, QEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        return vknameandurlinputdialog->KNameAndUrlInputDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_event_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_MousePressEvent(KNameAndUrlInputDialog* self, QMouseEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperMousePressEvent(KNameAndUrlInputDialog* self, QMouseEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnMousePressEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_mousepressevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_MouseReleaseEvent(KNameAndUrlInputDialog* self, QMouseEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperMouseReleaseEvent(KNameAndUrlInputDialog* self, QMouseEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnMouseReleaseEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_mousereleaseevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_MouseDoubleClickEvent(KNameAndUrlInputDialog* self, QMouseEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperMouseDoubleClickEvent(KNameAndUrlInputDialog* self, QMouseEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnMouseDoubleClickEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_MouseMoveEvent(KNameAndUrlInputDialog* self, QMouseEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperMouseMoveEvent(KNameAndUrlInputDialog* self, QMouseEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnMouseMoveEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_mousemoveevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_WheelEvent(KNameAndUrlInputDialog* self, QWheelEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperWheelEvent(KNameAndUrlInputDialog* self, QWheelEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnWheelEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_wheelevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_KeyReleaseEvent(KNameAndUrlInputDialog* self, QKeyEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperKeyReleaseEvent(KNameAndUrlInputDialog* self, QKeyEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnKeyReleaseEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_keyreleaseevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_FocusInEvent(KNameAndUrlInputDialog* self, QFocusEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperFocusInEvent(KNameAndUrlInputDialog* self, QFocusEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnFocusInEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_focusinevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_FocusOutEvent(KNameAndUrlInputDialog* self, QFocusEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperFocusOutEvent(KNameAndUrlInputDialog* self, QFocusEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnFocusOutEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_focusoutevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_EnterEvent(KNameAndUrlInputDialog* self, QEnterEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperEnterEvent(KNameAndUrlInputDialog* self, QEnterEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnEnterEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_enterevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_LeaveEvent(KNameAndUrlInputDialog* self, QEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperLeaveEvent(KNameAndUrlInputDialog* self, QEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnLeaveEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_leaveevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_PaintEvent(KNameAndUrlInputDialog* self, QPaintEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperPaintEvent(KNameAndUrlInputDialog* self, QPaintEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnPaintEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_paintevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_MoveEvent(KNameAndUrlInputDialog* self, QMoveEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperMoveEvent(KNameAndUrlInputDialog* self, QMoveEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnMoveEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_moveevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_TabletEvent(KNameAndUrlInputDialog* self, QTabletEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperTabletEvent(KNameAndUrlInputDialog* self, QTabletEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnTabletEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_tabletevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_ActionEvent(KNameAndUrlInputDialog* self, QActionEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperActionEvent(KNameAndUrlInputDialog* self, QActionEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnActionEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_actionevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_DragEnterEvent(KNameAndUrlInputDialog* self, QDragEnterEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperDragEnterEvent(KNameAndUrlInputDialog* self, QDragEnterEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnDragEnterEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_dragenterevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_DragMoveEvent(KNameAndUrlInputDialog* self, QDragMoveEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperDragMoveEvent(KNameAndUrlInputDialog* self, QDragMoveEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnDragMoveEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_dragmoveevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_DragLeaveEvent(KNameAndUrlInputDialog* self, QDragLeaveEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperDragLeaveEvent(KNameAndUrlInputDialog* self, QDragLeaveEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnDragLeaveEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_dragleaveevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_DropEvent(KNameAndUrlInputDialog* self, QDropEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperDropEvent(KNameAndUrlInputDialog* self, QDropEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnDropEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_dropevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_HideEvent(KNameAndUrlInputDialog* self, QHideEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperHideEvent(KNameAndUrlInputDialog* self, QHideEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnHideEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_hideevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KNameAndUrlInputDialog_NativeEvent(KNameAndUrlInputDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        return vknameandurlinputdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNameAndUrlInputDialog_SuperNativeEvent(KNameAndUrlInputDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        return vknameandurlinputdialog->KNameAndUrlInputDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnNativeEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_nativeevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_ChangeEvent(KNameAndUrlInputDialog* self, QEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperChangeEvent(KNameAndUrlInputDialog* self, QEvent* param1) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnChangeEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_changeevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KNameAndUrlInputDialog_Metric(const KNameAndUrlInputDialog* self, int param1) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog) {
        return vknameandurlinputdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KNameAndUrlInputDialog_SuperMetric(const KNameAndUrlInputDialog* self, int param1) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self))) {
        return vknameandurlinputdialog->KNameAndUrlInputDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnMetric(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self)))
        vknameandurlinputdialog->knameandurlinputdialog_metric_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_InitPainter(const KNameAndUrlInputDialog* self, QPainter* painter) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperInitPainter(const KNameAndUrlInputDialog* self, QPainter* painter) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self))) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnInitPainter(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self)))
        vknameandurlinputdialog->knameandurlinputdialog_initpainter_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KNameAndUrlInputDialog_Redirected(const KNameAndUrlInputDialog* self, QPoint* offset) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog) {
        return vknameandurlinputdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KNameAndUrlInputDialog_SuperRedirected(const KNameAndUrlInputDialog* self, QPoint* offset) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self))) {
        return vknameandurlinputdialog->KNameAndUrlInputDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnRedirected(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self)))
        vknameandurlinputdialog->knameandurlinputdialog_redirected_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KNameAndUrlInputDialog_SharedPainter(const KNameAndUrlInputDialog* self) {
    auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self));
    if (vknameandurlinputdialog) {
        return vknameandurlinputdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KNameAndUrlInputDialog_SuperSharedPainter(const KNameAndUrlInputDialog* self) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self))) {
        return vknameandurlinputdialog->KNameAndUrlInputDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnSharedPainter(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self)))
        vknameandurlinputdialog->knameandurlinputdialog_sharedpainter_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_InputMethodEvent(KNameAndUrlInputDialog* self, QInputMethodEvent* param1) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperInputMethodEvent(KNameAndUrlInputDialog* self, QInputMethodEvent* param1) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnInputMethodEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_inputmethodevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KNameAndUrlInputDialog_InputMethodQuery(const KNameAndUrlInputDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KNameAndUrlInputDialog_SuperInputMethodQuery(const KNameAndUrlInputDialog* self, int param1) {
    return new QVariant(self->KNameAndUrlInputDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnInputMethodQuery(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self)))
        vknameandurlinputdialog->knameandurlinputdialog_inputmethodquery_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KNameAndUrlInputDialog_FocusNextPrevChild(KNameAndUrlInputDialog* self, bool next) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        return vknameandurlinputdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNameAndUrlInputDialog_SuperFocusNextPrevChild(KNameAndUrlInputDialog* self, bool next) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        return vknameandurlinputdialog->KNameAndUrlInputDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnFocusNextPrevChild(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_focusnextprevchild_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_TimerEvent(KNameAndUrlInputDialog* self, QTimerEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperTimerEvent(KNameAndUrlInputDialog* self, QTimerEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnTimerEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_timerevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_ChildEvent(KNameAndUrlInputDialog* self, QChildEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperChildEvent(KNameAndUrlInputDialog* self, QChildEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnChildEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_childevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_CustomEvent(KNameAndUrlInputDialog* self, QEvent* event) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperCustomEvent(KNameAndUrlInputDialog* self, QEvent* event) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnCustomEvent(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_customevent_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_ConnectNotify(KNameAndUrlInputDialog* self, const QMetaMethod* signal) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperConnectNotify(KNameAndUrlInputDialog* self, const QMetaMethod* signal) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnConnectNotify(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_connectnotify_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KNameAndUrlInputDialog_DisconnectNotify(KNameAndUrlInputDialog* self, const QMetaMethod* signal) {
    auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self);
    if (vknameandurlinputdialog) {
        vknameandurlinputdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNameAndUrlInputDialog_SuperDisconnectNotify(KNameAndUrlInputDialog* self, const QMetaMethod* signal) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->KNameAndUrlInputDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNameAndUrlInputDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNameAndUrlInputDialog_OnDisconnectNotify(KNameAndUrlInputDialog* self, intptr_t slot) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self))
        vknameandurlinputdialog->knameandurlinputdialog_disconnectnotify_callback = reinterpret_cast<VirtualKNameAndUrlInputDialog::KNameAndUrlInputDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KNameAndUrlInputDialog_AdjustPosition(KNameAndUrlInputDialog* self, QWidget* param1) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->VirtualKNameAndUrlInputDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KNameAndUrlInputDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KNameAndUrlInputDialog_UpdateMicroFocus(KNameAndUrlInputDialog* self) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->VirtualKNameAndUrlInputDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KNameAndUrlInputDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KNameAndUrlInputDialog_Create(KNameAndUrlInputDialog* self) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->VirtualKNameAndUrlInputDialog::create();
    } else
        qFatal("Error: Protected method KNameAndUrlInputDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KNameAndUrlInputDialog_Destroy(KNameAndUrlInputDialog* self) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        vknameandurlinputdialog->VirtualKNameAndUrlInputDialog::destroy();
    } else
        qFatal("Error: Protected method KNameAndUrlInputDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNameAndUrlInputDialog_FocusNextChild(KNameAndUrlInputDialog* self) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        return vknameandurlinputdialog->VirtualKNameAndUrlInputDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KNameAndUrlInputDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNameAndUrlInputDialog_FocusPreviousChild(KNameAndUrlInputDialog* self) {
    if (auto* vknameandurlinputdialog = dynamic_cast<VirtualKNameAndUrlInputDialog*>(self)) {
        return vknameandurlinputdialog->VirtualKNameAndUrlInputDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KNameAndUrlInputDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KNameAndUrlInputDialog_Sender(const KNameAndUrlInputDialog* self) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self))) {
        return vknameandurlinputdialog->VirtualKNameAndUrlInputDialog::sender();
    } else
        qFatal("Error: Protected method KNameAndUrlInputDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KNameAndUrlInputDialog_SenderSignalIndex(const KNameAndUrlInputDialog* self) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self))) {
        return vknameandurlinputdialog->VirtualKNameAndUrlInputDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KNameAndUrlInputDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KNameAndUrlInputDialog_Receivers(const KNameAndUrlInputDialog* self, const char* signal) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self))) {
        return vknameandurlinputdialog->VirtualKNameAndUrlInputDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KNameAndUrlInputDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNameAndUrlInputDialog_IsSignalConnected(const KNameAndUrlInputDialog* self, const QMetaMethod* signal) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self))) {
        return vknameandurlinputdialog->VirtualKNameAndUrlInputDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KNameAndUrlInputDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KNameAndUrlInputDialog_GetDecodedMetricF(const KNameAndUrlInputDialog* self, int metricA, int metricB) {
    if (auto* vknameandurlinputdialog = const_cast<VirtualKNameAndUrlInputDialog*>(dynamic_cast<const VirtualKNameAndUrlInputDialog*>(self))) {
        return vknameandurlinputdialog->VirtualKNameAndUrlInputDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KNameAndUrlInputDialog::getDecodedMetricF called without a directly constructed type");
}

void KNameAndUrlInputDialog_Delete(KNameAndUrlInputDialog* self) {
    delete self;
}
