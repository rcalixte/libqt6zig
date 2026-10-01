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
#include <QPageSetupDialog>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QPrinter>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qpagesetupdialog.h>
#include "libqpagesetupdialog.h"
#include "libqpagesetupdialog.hxx"

QPageSetupDialog* QPageSetupDialog_new(QWidget* parent) {
    return new VirtualQPageSetupDialog(parent);
}

QPageSetupDialog* QPageSetupDialog_new2(QPrinter* printer) {
    return new VirtualQPageSetupDialog(printer);
}

QPageSetupDialog* QPageSetupDialog_new3() {
    return new VirtualQPageSetupDialog();
}

QPageSetupDialog* QPageSetupDialog_new4(QPrinter* printer, QWidget* parent) {
    return new VirtualQPageSetupDialog(printer, parent);
}

QMetaObject* QPageSetupDialog_MetaObject(const QPageSetupDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPageSetupDialog_Metacast(QPageSetupDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPageSetupDialog_Metacall(QPageSetupDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPageSetupDialog_Tr(const char* s) {
    auto _ret = QPageSetupDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QPageSetupDialog_Exec(QPageSetupDialog* self) {
    return self->exec();
}

void QPageSetupDialog_Done(QPageSetupDialog* self, int result) {
    self->done(static_cast<int>(result));
}

QPrinter* QPageSetupDialog_Printer(QPageSetupDialog* self) {
    return self->printer();
}

libqt_string QPageSetupDialog_Tr2(const char* s, const char* c) {
    auto _ret = QPageSetupDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPageSetupDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPageSetupDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPageSetupDialog_SuperMetaObject(const QPageSetupDialog* self) {
    return (QMetaObject*)self->QPageSetupDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnMetaObject(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self)))
        vqpagesetupdialog->qpagesetupdialog_metaobject_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPageSetupDialog_SuperMetacast(QPageSetupDialog* self, const char* param1) {
    return self->QPageSetupDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnMetacast(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_metacast_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPageSetupDialog_SuperMetacall(QPageSetupDialog* self, int param1, int param2, void** param3) {
    return self->QPageSetupDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnMetacall(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_metacall_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
int QPageSetupDialog_SuperExec(QPageSetupDialog* self) {
    return self->QPageSetupDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnExec(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_exec_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Exec_Callback>(slot);
}

// Base class handler implementation
void QPageSetupDialog_SuperDone(QPageSetupDialog* self, int result) {
    self->QPageSetupDialog::done(static_cast<int>(result));
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnDone(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_done_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_SetVisible(QPageSetupDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QPageSetupDialog_SuperSetVisible(QPageSetupDialog* self, bool visible) {
    self->QPageSetupDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnSetVisible(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_setvisible_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QPageSetupDialog_SizeHint(const QPageSetupDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QPageSetupDialog_SuperSizeHint(const QPageSetupDialog* self) {
    return new QSize(self->QPageSetupDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnSizeHint(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self)))
        vqpagesetupdialog->qpagesetupdialog_sizehint_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QPageSetupDialog_MinimumSizeHint(const QPageSetupDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QPageSetupDialog_SuperMinimumSizeHint(const QPageSetupDialog* self) {
    return new QSize(self->QPageSetupDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnMinimumSizeHint(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self)))
        vqpagesetupdialog->qpagesetupdialog_minimumsizehint_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_Open(QPageSetupDialog* self) {
    self->open();
}

// Base class handler implementation
void QPageSetupDialog_SuperOpen(QPageSetupDialog* self) {
    self->QPageSetupDialog::open();
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnOpen(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_open_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Open_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_Accept(QPageSetupDialog* self) {
    self->accept();
}

// Base class handler implementation
void QPageSetupDialog_SuperAccept(QPageSetupDialog* self) {
    self->QPageSetupDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnAccept(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_accept_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_Reject(QPageSetupDialog* self) {
    self->reject();
}

// Base class handler implementation
void QPageSetupDialog_SuperReject(QPageSetupDialog* self) {
    self->QPageSetupDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnReject(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_reject_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_KeyPressEvent(QPageSetupDialog* self, QKeyEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperKeyPressEvent(QPageSetupDialog* self, QKeyEvent* param1) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnKeyPressEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_keypressevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_CloseEvent(QPageSetupDialog* self, QCloseEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperCloseEvent(QPageSetupDialog* self, QCloseEvent* param1) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnCloseEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_closeevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_ShowEvent(QPageSetupDialog* self, QShowEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperShowEvent(QPageSetupDialog* self, QShowEvent* param1) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnShowEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_showevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_ResizeEvent(QPageSetupDialog* self, QResizeEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperResizeEvent(QPageSetupDialog* self, QResizeEvent* param1) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnResizeEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_resizeevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_ContextMenuEvent(QPageSetupDialog* self, QContextMenuEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperContextMenuEvent(QPageSetupDialog* self, QContextMenuEvent* param1) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnContextMenuEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_contextmenuevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool QPageSetupDialog_EventFilter(QPageSetupDialog* self, QObject* param1, QEvent* param2) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        return vqpagesetupdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPageSetupDialog_SuperEventFilter(QPageSetupDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        return vqpagesetupdialog->QPageSetupDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnEventFilter(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_eventfilter_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int QPageSetupDialog_DevType(const QPageSetupDialog* self) {
    return self->devType();
}

// Base class handler implementation
int QPageSetupDialog_SuperDevType(const QPageSetupDialog* self) {
    return self->QPageSetupDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnDevType(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self)))
        vqpagesetupdialog->qpagesetupdialog_devtype_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int QPageSetupDialog_HeightForWidth(const QPageSetupDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QPageSetupDialog_SuperHeightForWidth(const QPageSetupDialog* self, int param1) {
    return self->QPageSetupDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnHeightForWidth(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self)))
        vqpagesetupdialog->qpagesetupdialog_heightforwidth_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QPageSetupDialog_HasHeightForWidth(const QPageSetupDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QPageSetupDialog_SuperHasHeightForWidth(const QPageSetupDialog* self) {
    return self->QPageSetupDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnHasHeightForWidth(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self)))
        vqpagesetupdialog->qpagesetupdialog_hasheightforwidth_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QPageSetupDialog_PaintEngine(const QPageSetupDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QPageSetupDialog_SuperPaintEngine(const QPageSetupDialog* self) {
    return self->QPageSetupDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnPaintEngine(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self)))
        vqpagesetupdialog->qpagesetupdialog_paintengine_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QPageSetupDialog_Event(QPageSetupDialog* self, QEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        return vqpagesetupdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPageSetupDialog_SuperEvent(QPageSetupDialog* self, QEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        return vqpagesetupdialog->QPageSetupDialog::event(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_event_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_MousePressEvent(QPageSetupDialog* self, QMouseEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperMousePressEvent(QPageSetupDialog* self, QMouseEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnMousePressEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_mousepressevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_MouseReleaseEvent(QPageSetupDialog* self, QMouseEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperMouseReleaseEvent(QPageSetupDialog* self, QMouseEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnMouseReleaseEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_mousereleaseevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_MouseDoubleClickEvent(QPageSetupDialog* self, QMouseEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperMouseDoubleClickEvent(QPageSetupDialog* self, QMouseEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnMouseDoubleClickEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_MouseMoveEvent(QPageSetupDialog* self, QMouseEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperMouseMoveEvent(QPageSetupDialog* self, QMouseEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnMouseMoveEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_mousemoveevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_WheelEvent(QPageSetupDialog* self, QWheelEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperWheelEvent(QPageSetupDialog* self, QWheelEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnWheelEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_wheelevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_KeyReleaseEvent(QPageSetupDialog* self, QKeyEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperKeyReleaseEvent(QPageSetupDialog* self, QKeyEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnKeyReleaseEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_keyreleaseevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_FocusInEvent(QPageSetupDialog* self, QFocusEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperFocusInEvent(QPageSetupDialog* self, QFocusEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnFocusInEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_focusinevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_FocusOutEvent(QPageSetupDialog* self, QFocusEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperFocusOutEvent(QPageSetupDialog* self, QFocusEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnFocusOutEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_focusoutevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_EnterEvent(QPageSetupDialog* self, QEnterEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperEnterEvent(QPageSetupDialog* self, QEnterEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnEnterEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_enterevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_LeaveEvent(QPageSetupDialog* self, QEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperLeaveEvent(QPageSetupDialog* self, QEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnLeaveEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_leaveevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_PaintEvent(QPageSetupDialog* self, QPaintEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperPaintEvent(QPageSetupDialog* self, QPaintEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnPaintEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_paintevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_MoveEvent(QPageSetupDialog* self, QMoveEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperMoveEvent(QPageSetupDialog* self, QMoveEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnMoveEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_moveevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_TabletEvent(QPageSetupDialog* self, QTabletEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperTabletEvent(QPageSetupDialog* self, QTabletEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnTabletEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_tabletevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_ActionEvent(QPageSetupDialog* self, QActionEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperActionEvent(QPageSetupDialog* self, QActionEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnActionEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_actionevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_DragEnterEvent(QPageSetupDialog* self, QDragEnterEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperDragEnterEvent(QPageSetupDialog* self, QDragEnterEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnDragEnterEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_dragenterevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_DragMoveEvent(QPageSetupDialog* self, QDragMoveEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperDragMoveEvent(QPageSetupDialog* self, QDragMoveEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnDragMoveEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_dragmoveevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_DragLeaveEvent(QPageSetupDialog* self, QDragLeaveEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperDragLeaveEvent(QPageSetupDialog* self, QDragLeaveEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnDragLeaveEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_dragleaveevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_DropEvent(QPageSetupDialog* self, QDropEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperDropEvent(QPageSetupDialog* self, QDropEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnDropEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_dropevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_HideEvent(QPageSetupDialog* self, QHideEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperHideEvent(QPageSetupDialog* self, QHideEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnHideEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_hideevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QPageSetupDialog_NativeEvent(QPageSetupDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        return vqpagesetupdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPageSetupDialog_SuperNativeEvent(QPageSetupDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        return vqpagesetupdialog->QPageSetupDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnNativeEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_nativeevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_ChangeEvent(QPageSetupDialog* self, QEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperChangeEvent(QPageSetupDialog* self, QEvent* param1) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnChangeEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_changeevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QPageSetupDialog_Metric(const QPageSetupDialog* self, int param1) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog) {
        return vqpagesetupdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QPageSetupDialog_SuperMetric(const QPageSetupDialog* self, int param1) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self))) {
        return vqpagesetupdialog->QPageSetupDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnMetric(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self)))
        vqpagesetupdialog->qpagesetupdialog_metric_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_InitPainter(const QPageSetupDialog* self, QPainter* painter) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog) {
        vqpagesetupdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperInitPainter(const QPageSetupDialog* self, QPainter* painter) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self))) {
        vqpagesetupdialog->QPageSetupDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnInitPainter(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self)))
        vqpagesetupdialog->qpagesetupdialog_initpainter_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QPageSetupDialog_Redirected(const QPageSetupDialog* self, QPoint* offset) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog) {
        return vqpagesetupdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QPageSetupDialog_SuperRedirected(const QPageSetupDialog* self, QPoint* offset) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self))) {
        return vqpagesetupdialog->QPageSetupDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnRedirected(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self)))
        vqpagesetupdialog->qpagesetupdialog_redirected_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QPageSetupDialog_SharedPainter(const QPageSetupDialog* self) {
    auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self));
    if (vqpagesetupdialog) {
        return vqpagesetupdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QPageSetupDialog_SuperSharedPainter(const QPageSetupDialog* self) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self))) {
        return vqpagesetupdialog->QPageSetupDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnSharedPainter(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self)))
        vqpagesetupdialog->qpagesetupdialog_sharedpainter_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_InputMethodEvent(QPageSetupDialog* self, QInputMethodEvent* param1) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperInputMethodEvent(QPageSetupDialog* self, QInputMethodEvent* param1) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnInputMethodEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_inputmethodevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QPageSetupDialog_InputMethodQuery(const QPageSetupDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QPageSetupDialog_SuperInputMethodQuery(const QPageSetupDialog* self, int param1) {
    return new QVariant(self->QPageSetupDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnInputMethodQuery(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self)))
        vqpagesetupdialog->qpagesetupdialog_inputmethodquery_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QPageSetupDialog_FocusNextPrevChild(QPageSetupDialog* self, bool next) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        return vqpagesetupdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPageSetupDialog_SuperFocusNextPrevChild(QPageSetupDialog* self, bool next) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        return vqpagesetupdialog->QPageSetupDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnFocusNextPrevChild(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_focusnextprevchild_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_TimerEvent(QPageSetupDialog* self, QTimerEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperTimerEvent(QPageSetupDialog* self, QTimerEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnTimerEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_timerevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_ChildEvent(QPageSetupDialog* self, QChildEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperChildEvent(QPageSetupDialog* self, QChildEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnChildEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_childevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_CustomEvent(QPageSetupDialog* self, QEvent* event) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperCustomEvent(QPageSetupDialog* self, QEvent* event) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnCustomEvent(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_customevent_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_ConnectNotify(QPageSetupDialog* self, const QMetaMethod* signal) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperConnectNotify(QPageSetupDialog* self, const QMetaMethod* signal) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnConnectNotify(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_connectnotify_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPageSetupDialog_DisconnectNotify(QPageSetupDialog* self, const QMetaMethod* signal) {
    auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self);
    if (vqpagesetupdialog) {
        vqpagesetupdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPageSetupDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPageSetupDialog_SuperDisconnectNotify(QPageSetupDialog* self, const QMetaMethod* signal) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->QPageSetupDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPageSetupDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPageSetupDialog_OnDisconnectNotify(QPageSetupDialog* self, intptr_t slot) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self))
        vqpagesetupdialog->qpagesetupdialog_disconnectnotify_callback = reinterpret_cast<VirtualQPageSetupDialog::QPageSetupDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QPageSetupDialog_AdjustPosition(QPageSetupDialog* self, QWidget* param1) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->VirtualQPageSetupDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method QPageSetupDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QPageSetupDialog_UpdateMicroFocus(QPageSetupDialog* self) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->VirtualQPageSetupDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method QPageSetupDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QPageSetupDialog_Create(QPageSetupDialog* self) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->VirtualQPageSetupDialog::create();
    } else
        qFatal("Error: Protected method QPageSetupDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QPageSetupDialog_Destroy(QPageSetupDialog* self) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        vqpagesetupdialog->VirtualQPageSetupDialog::destroy();
    } else
        qFatal("Error: Protected method QPageSetupDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPageSetupDialog_FocusNextChild(QPageSetupDialog* self) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        return vqpagesetupdialog->VirtualQPageSetupDialog::focusNextChild();
    } else
        qFatal("Error: Protected method QPageSetupDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPageSetupDialog_FocusPreviousChild(QPageSetupDialog* self) {
    if (auto* vqpagesetupdialog = dynamic_cast<VirtualQPageSetupDialog*>(self)) {
        return vqpagesetupdialog->VirtualQPageSetupDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method QPageSetupDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPageSetupDialog_Sender(const QPageSetupDialog* self) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self))) {
        return vqpagesetupdialog->VirtualQPageSetupDialog::sender();
    } else
        qFatal("Error: Protected method QPageSetupDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPageSetupDialog_SenderSignalIndex(const QPageSetupDialog* self) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self))) {
        return vqpagesetupdialog->VirtualQPageSetupDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPageSetupDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPageSetupDialog_Receivers(const QPageSetupDialog* self, const char* signal) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self))) {
        return vqpagesetupdialog->VirtualQPageSetupDialog::receivers(signal);
    } else
        qFatal("Error: Protected method QPageSetupDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPageSetupDialog_IsSignalConnected(const QPageSetupDialog* self, const QMetaMethod* signal) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self))) {
        return vqpagesetupdialog->VirtualQPageSetupDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPageSetupDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QPageSetupDialog_GetDecodedMetricF(const QPageSetupDialog* self, int metricA, int metricB) {
    if (auto* vqpagesetupdialog = const_cast<VirtualQPageSetupDialog*>(dynamic_cast<const VirtualQPageSetupDialog*>(self))) {
        return vqpagesetupdialog->VirtualQPageSetupDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QPageSetupDialog::getDecodedMetricF called without a directly constructed type");
}

void QPageSetupDialog_Delete(QPageSetupDialog* self) {
    delete self;
}
