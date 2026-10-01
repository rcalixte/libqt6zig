#include <KFileCustomDialog>
#include <KFileWidget>
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
#include <kfilecustomdialog.h>
#include "libkfilecustomdialog.h"
#include "libkfilecustomdialog.hxx"

KFileCustomDialog* KFileCustomDialog_new(QWidget* parent) {
    return new VirtualKFileCustomDialog(parent);
}

KFileCustomDialog* KFileCustomDialog_new2() {
    return new VirtualKFileCustomDialog();
}

KFileCustomDialog* KFileCustomDialog_new3(const QUrl* startDir) {
    return new VirtualKFileCustomDialog(*startDir);
}

KFileCustomDialog* KFileCustomDialog_new4(const QUrl* startDir, QWidget* parent) {
    return new VirtualKFileCustomDialog(*startDir, parent);
}

QMetaObject* KFileCustomDialog_MetaObject(const KFileCustomDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFileCustomDialog_Metacast(KFileCustomDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFileCustomDialog_Metacall(KFileCustomDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KFileCustomDialog_Tr(const char* s) {
    auto _ret = KFileCustomDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFileCustomDialog_SetUrl(KFileCustomDialog* self, const QUrl* url) {
    self->setUrl(*url);
}

void KFileCustomDialog_SetCustomWidget(KFileCustomDialog* self, QWidget* widget) {
    self->setCustomWidget(widget);
}

KFileWidget* KFileCustomDialog_FileWidget(const KFileCustomDialog* self) {
    return self->fileWidget();
}

void KFileCustomDialog_SetOperationMode(KFileCustomDialog* self, int op) {
    self->setOperationMode(static_cast<KFileWidget::OperationMode>(op));
}

void KFileCustomDialog_Accept(KFileCustomDialog* self) {
    self->accept();
}

libqt_string KFileCustomDialog_Tr2(const char* s, const char* c) {
    auto _ret = KFileCustomDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFileCustomDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = KFileCustomDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* KFileCustomDialog_SuperMetaObject(const KFileCustomDialog* self) {
    return (QMetaObject*)self->KFileCustomDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnMetaObject(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self)))
        vkfilecustomdialog->kfilecustomdialog_metaobject_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KFileCustomDialog_SuperMetacast(KFileCustomDialog* self, const char* param1) {
    return self->KFileCustomDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnMetacast(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_metacast_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KFileCustomDialog_SuperMetacall(KFileCustomDialog* self, int param1, int param2, void** param3) {
    return self->KFileCustomDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnMetacall(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_metacall_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
void KFileCustomDialog_SuperAccept(KFileCustomDialog* self) {
    self->KFileCustomDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnAccept(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_accept_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_SetVisible(KFileCustomDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KFileCustomDialog_SuperSetVisible(KFileCustomDialog* self, bool visible) {
    self->KFileCustomDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnSetVisible(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_setvisible_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KFileCustomDialog_SizeHint(const KFileCustomDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KFileCustomDialog_SuperSizeHint(const KFileCustomDialog* self) {
    return new QSize(self->KFileCustomDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnSizeHint(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self)))
        vkfilecustomdialog->kfilecustomdialog_sizehint_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KFileCustomDialog_MinimumSizeHint(const KFileCustomDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KFileCustomDialog_SuperMinimumSizeHint(const KFileCustomDialog* self) {
    return new QSize(self->KFileCustomDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnMinimumSizeHint(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self)))
        vkfilecustomdialog->kfilecustomdialog_minimumsizehint_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_Open(KFileCustomDialog* self) {
    self->open();
}

// Base class handler implementation
void KFileCustomDialog_SuperOpen(KFileCustomDialog* self) {
    self->KFileCustomDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnOpen(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_open_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KFileCustomDialog_Exec(KFileCustomDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KFileCustomDialog_SuperExec(KFileCustomDialog* self) {
    return self->KFileCustomDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnExec(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_exec_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_Done(KFileCustomDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KFileCustomDialog_SuperDone(KFileCustomDialog* self, int param1) {
    self->KFileCustomDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnDone(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_done_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_Reject(KFileCustomDialog* self) {
    self->reject();
}

// Base class handler implementation
void KFileCustomDialog_SuperReject(KFileCustomDialog* self) {
    self->KFileCustomDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnReject(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_reject_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_KeyPressEvent(KFileCustomDialog* self, QKeyEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperKeyPressEvent(KFileCustomDialog* self, QKeyEvent* param1) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnKeyPressEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_keypressevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_CloseEvent(KFileCustomDialog* self, QCloseEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperCloseEvent(KFileCustomDialog* self, QCloseEvent* param1) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnCloseEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_closeevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_ShowEvent(KFileCustomDialog* self, QShowEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperShowEvent(KFileCustomDialog* self, QShowEvent* param1) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnShowEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_showevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_ResizeEvent(KFileCustomDialog* self, QResizeEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperResizeEvent(KFileCustomDialog* self, QResizeEvent* param1) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnResizeEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_resizeevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_ContextMenuEvent(KFileCustomDialog* self, QContextMenuEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperContextMenuEvent(KFileCustomDialog* self, QContextMenuEvent* param1) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnContextMenuEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_contextmenuevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KFileCustomDialog_EventFilter(KFileCustomDialog* self, QObject* param1, QEvent* param2) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        return vkfilecustomdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFileCustomDialog_SuperEventFilter(KFileCustomDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        return vkfilecustomdialog->KFileCustomDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnEventFilter(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_eventfilter_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KFileCustomDialog_DevType(const KFileCustomDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KFileCustomDialog_SuperDevType(const KFileCustomDialog* self) {
    return self->KFileCustomDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnDevType(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self)))
        vkfilecustomdialog->kfilecustomdialog_devtype_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KFileCustomDialog_HeightForWidth(const KFileCustomDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KFileCustomDialog_SuperHeightForWidth(const KFileCustomDialog* self, int param1) {
    return self->KFileCustomDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnHeightForWidth(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self)))
        vkfilecustomdialog->kfilecustomdialog_heightforwidth_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KFileCustomDialog_HasHeightForWidth(const KFileCustomDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KFileCustomDialog_SuperHasHeightForWidth(const KFileCustomDialog* self) {
    return self->KFileCustomDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnHasHeightForWidth(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self)))
        vkfilecustomdialog->kfilecustomdialog_hasheightforwidth_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KFileCustomDialog_PaintEngine(const KFileCustomDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KFileCustomDialog_SuperPaintEngine(const KFileCustomDialog* self) {
    return self->KFileCustomDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnPaintEngine(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self)))
        vkfilecustomdialog->kfilecustomdialog_paintengine_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KFileCustomDialog_Event(KFileCustomDialog* self, QEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        return vkfilecustomdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFileCustomDialog_SuperEvent(KFileCustomDialog* self, QEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        return vkfilecustomdialog->KFileCustomDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_event_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_MousePressEvent(KFileCustomDialog* self, QMouseEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperMousePressEvent(KFileCustomDialog* self, QMouseEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnMousePressEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_mousepressevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_MouseReleaseEvent(KFileCustomDialog* self, QMouseEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperMouseReleaseEvent(KFileCustomDialog* self, QMouseEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnMouseReleaseEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_mousereleaseevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_MouseDoubleClickEvent(KFileCustomDialog* self, QMouseEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperMouseDoubleClickEvent(KFileCustomDialog* self, QMouseEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnMouseDoubleClickEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_MouseMoveEvent(KFileCustomDialog* self, QMouseEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperMouseMoveEvent(KFileCustomDialog* self, QMouseEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnMouseMoveEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_mousemoveevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_WheelEvent(KFileCustomDialog* self, QWheelEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperWheelEvent(KFileCustomDialog* self, QWheelEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnWheelEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_wheelevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_KeyReleaseEvent(KFileCustomDialog* self, QKeyEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperKeyReleaseEvent(KFileCustomDialog* self, QKeyEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnKeyReleaseEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_keyreleaseevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_FocusInEvent(KFileCustomDialog* self, QFocusEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperFocusInEvent(KFileCustomDialog* self, QFocusEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnFocusInEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_focusinevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_FocusOutEvent(KFileCustomDialog* self, QFocusEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperFocusOutEvent(KFileCustomDialog* self, QFocusEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnFocusOutEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_focusoutevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_EnterEvent(KFileCustomDialog* self, QEnterEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperEnterEvent(KFileCustomDialog* self, QEnterEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnEnterEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_enterevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_LeaveEvent(KFileCustomDialog* self, QEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperLeaveEvent(KFileCustomDialog* self, QEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnLeaveEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_leaveevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_PaintEvent(KFileCustomDialog* self, QPaintEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperPaintEvent(KFileCustomDialog* self, QPaintEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnPaintEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_paintevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_MoveEvent(KFileCustomDialog* self, QMoveEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperMoveEvent(KFileCustomDialog* self, QMoveEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnMoveEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_moveevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_TabletEvent(KFileCustomDialog* self, QTabletEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperTabletEvent(KFileCustomDialog* self, QTabletEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnTabletEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_tabletevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_ActionEvent(KFileCustomDialog* self, QActionEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperActionEvent(KFileCustomDialog* self, QActionEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnActionEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_actionevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_DragEnterEvent(KFileCustomDialog* self, QDragEnterEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperDragEnterEvent(KFileCustomDialog* self, QDragEnterEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnDragEnterEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_dragenterevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_DragMoveEvent(KFileCustomDialog* self, QDragMoveEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperDragMoveEvent(KFileCustomDialog* self, QDragMoveEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnDragMoveEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_dragmoveevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_DragLeaveEvent(KFileCustomDialog* self, QDragLeaveEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperDragLeaveEvent(KFileCustomDialog* self, QDragLeaveEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnDragLeaveEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_dragleaveevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_DropEvent(KFileCustomDialog* self, QDropEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperDropEvent(KFileCustomDialog* self, QDropEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnDropEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_dropevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_HideEvent(KFileCustomDialog* self, QHideEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperHideEvent(KFileCustomDialog* self, QHideEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnHideEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_hideevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KFileCustomDialog_NativeEvent(KFileCustomDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        return vkfilecustomdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFileCustomDialog_SuperNativeEvent(KFileCustomDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        return vkfilecustomdialog->KFileCustomDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnNativeEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_nativeevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_ChangeEvent(KFileCustomDialog* self, QEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperChangeEvent(KFileCustomDialog* self, QEvent* param1) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnChangeEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_changeevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KFileCustomDialog_Metric(const KFileCustomDialog* self, int param1) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog) {
        return vkfilecustomdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KFileCustomDialog_SuperMetric(const KFileCustomDialog* self, int param1) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self))) {
        return vkfilecustomdialog->KFileCustomDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnMetric(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self)))
        vkfilecustomdialog->kfilecustomdialog_metric_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_InitPainter(const KFileCustomDialog* self, QPainter* painter) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog) {
        vkfilecustomdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperInitPainter(const KFileCustomDialog* self, QPainter* painter) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self))) {
        vkfilecustomdialog->KFileCustomDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnInitPainter(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self)))
        vkfilecustomdialog->kfilecustomdialog_initpainter_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KFileCustomDialog_Redirected(const KFileCustomDialog* self, QPoint* offset) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog) {
        return vkfilecustomdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KFileCustomDialog_SuperRedirected(const KFileCustomDialog* self, QPoint* offset) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self))) {
        return vkfilecustomdialog->KFileCustomDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnRedirected(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self)))
        vkfilecustomdialog->kfilecustomdialog_redirected_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KFileCustomDialog_SharedPainter(const KFileCustomDialog* self) {
    auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self));
    if (vkfilecustomdialog) {
        return vkfilecustomdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KFileCustomDialog_SuperSharedPainter(const KFileCustomDialog* self) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self))) {
        return vkfilecustomdialog->KFileCustomDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnSharedPainter(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self)))
        vkfilecustomdialog->kfilecustomdialog_sharedpainter_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_InputMethodEvent(KFileCustomDialog* self, QInputMethodEvent* param1) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperInputMethodEvent(KFileCustomDialog* self, QInputMethodEvent* param1) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnInputMethodEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_inputmethodevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KFileCustomDialog_InputMethodQuery(const KFileCustomDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KFileCustomDialog_SuperInputMethodQuery(const KFileCustomDialog* self, int param1) {
    return new QVariant(self->KFileCustomDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnInputMethodQuery(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self)))
        vkfilecustomdialog->kfilecustomdialog_inputmethodquery_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KFileCustomDialog_FocusNextPrevChild(KFileCustomDialog* self, bool next) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        return vkfilecustomdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFileCustomDialog_SuperFocusNextPrevChild(KFileCustomDialog* self, bool next) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        return vkfilecustomdialog->KFileCustomDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnFocusNextPrevChild(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_focusnextprevchild_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_TimerEvent(KFileCustomDialog* self, QTimerEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperTimerEvent(KFileCustomDialog* self, QTimerEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnTimerEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_timerevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_ChildEvent(KFileCustomDialog* self, QChildEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperChildEvent(KFileCustomDialog* self, QChildEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnChildEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_childevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_CustomEvent(KFileCustomDialog* self, QEvent* event) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperCustomEvent(KFileCustomDialog* self, QEvent* event) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnCustomEvent(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_customevent_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_ConnectNotify(KFileCustomDialog* self, const QMetaMethod* signal) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperConnectNotify(KFileCustomDialog* self, const QMetaMethod* signal) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnConnectNotify(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_connectnotify_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KFileCustomDialog_DisconnectNotify(KFileCustomDialog* self, const QMetaMethod* signal) {
    auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self);
    if (vkfilecustomdialog) {
        vkfilecustomdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFileCustomDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileCustomDialog_SuperDisconnectNotify(KFileCustomDialog* self, const QMetaMethod* signal) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->KFileCustomDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFileCustomDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileCustomDialog_OnDisconnectNotify(KFileCustomDialog* self, intptr_t slot) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self))
        vkfilecustomdialog->kfilecustomdialog_disconnectnotify_callback = reinterpret_cast<VirtualKFileCustomDialog::KFileCustomDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KFileCustomDialog_AdjustPosition(KFileCustomDialog* self, QWidget* param1) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->VirtualKFileCustomDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KFileCustomDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KFileCustomDialog_UpdateMicroFocus(KFileCustomDialog* self) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->VirtualKFileCustomDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KFileCustomDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KFileCustomDialog_Create(KFileCustomDialog* self) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->VirtualKFileCustomDialog::create();
    } else
        qFatal("Error: Protected method KFileCustomDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KFileCustomDialog_Destroy(KFileCustomDialog* self) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        vkfilecustomdialog->VirtualKFileCustomDialog::destroy();
    } else
        qFatal("Error: Protected method KFileCustomDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFileCustomDialog_FocusNextChild(KFileCustomDialog* self) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        return vkfilecustomdialog->VirtualKFileCustomDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KFileCustomDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFileCustomDialog_FocusPreviousChild(KFileCustomDialog* self) {
    if (auto* vkfilecustomdialog = dynamic_cast<VirtualKFileCustomDialog*>(self)) {
        return vkfilecustomdialog->VirtualKFileCustomDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KFileCustomDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KFileCustomDialog_Sender(const KFileCustomDialog* self) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self))) {
        return vkfilecustomdialog->VirtualKFileCustomDialog::sender();
    } else
        qFatal("Error: Protected method KFileCustomDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KFileCustomDialog_SenderSignalIndex(const KFileCustomDialog* self) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self))) {
        return vkfilecustomdialog->VirtualKFileCustomDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KFileCustomDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KFileCustomDialog_Receivers(const KFileCustomDialog* self, const char* signal) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self))) {
        return vkfilecustomdialog->VirtualKFileCustomDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KFileCustomDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFileCustomDialog_IsSignalConnected(const KFileCustomDialog* self, const QMetaMethod* signal) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self))) {
        return vkfilecustomdialog->VirtualKFileCustomDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KFileCustomDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KFileCustomDialog_GetDecodedMetricF(const KFileCustomDialog* self, int metricA, int metricB) {
    if (auto* vkfilecustomdialog = const_cast<VirtualKFileCustomDialog*>(dynamic_cast<const VirtualKFileCustomDialog*>(self))) {
        return vkfilecustomdialog->VirtualKFileCustomDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KFileCustomDialog::getDecodedMetricF called without a directly constructed type");
}

void KFileCustomDialog_Delete(KFileCustomDialog* self) {
    delete self;
}
