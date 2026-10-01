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
#include <QErrorMessage>
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
#include <qerrormessage.h>
#include "libqerrormessage.h"
#include "libqerrormessage.hxx"

QErrorMessage* QErrorMessage_new(QWidget* parent) {
    return new VirtualQErrorMessage(parent);
}

QErrorMessage* QErrorMessage_new2() {
    return new VirtualQErrorMessage();
}

QMetaObject* QErrorMessage_MetaObject(const QErrorMessage* self) {
    return (QMetaObject*)self->metaObject();
}

void* QErrorMessage_Metacast(QErrorMessage* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QErrorMessage_Metacall(QErrorMessage* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QErrorMessage_Tr(const char* s) {
    auto _ret = QErrorMessage::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QErrorMessage* QErrorMessage_QtHandler() {
    return QErrorMessage::qtHandler();
}

void QErrorMessage_ShowMessage(QErrorMessage* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->showMessage(message_QString);
}

void QErrorMessage_ShowMessage2(QErrorMessage* self, const libqt_string message, const libqt_string typeVal) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString typeVal_QString = QString::fromUtf8(typeVal.data, typeVal.len);
    self->showMessage(message_QString, typeVal_QString);
}

void QErrorMessage_Done(QErrorMessage* self, int param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->done(static_cast<int>(param1));
    }
}

void QErrorMessage_ChangeEvent(QErrorMessage* self, QEvent* e) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->changeEvent(e);
    }
}

libqt_string QErrorMessage_Tr2(const char* s, const char* c) {
    auto _ret = QErrorMessage::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QErrorMessage_Tr3(const char* s, const char* c, int n) {
    auto _ret = QErrorMessage::tr(s, c, static_cast<int>(n));
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
QMetaObject* QErrorMessage_SuperMetaObject(const QErrorMessage* self) {
    return (QMetaObject*)self->QErrorMessage::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnMetaObject(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self)))
        vqerrormessage->qerrormessage_metaobject_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QErrorMessage_SuperMetacast(QErrorMessage* self, const char* param1) {
    return self->QErrorMessage::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnMetacast(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_metacast_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Metacast_Callback>(slot);
}

// Base class handler implementation
int QErrorMessage_SuperMetacall(QErrorMessage* self, int param1, int param2, void** param3) {
    return self->QErrorMessage::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnMetacall(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_metacall_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Metacall_Callback>(slot);
}

// Base class handler implementation
void QErrorMessage_SuperDone(QErrorMessage* self, int param1) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::done(static_cast<int>(param1));
    } else
        qFatal("Error: Protected virtual method QErrorMessage::done called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnDone(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_done_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Done_Callback>(slot);
}

// Base class handler implementation
void QErrorMessage_SuperChangeEvent(QErrorMessage* self, QEvent* e) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnChangeEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_changeevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_SetVisible(QErrorMessage* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QErrorMessage_SuperSetVisible(QErrorMessage* self, bool visible) {
    self->QErrorMessage::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnSetVisible(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_setvisible_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QErrorMessage_SizeHint(const QErrorMessage* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QErrorMessage_SuperSizeHint(const QErrorMessage* self) {
    return new QSize(self->QErrorMessage::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnSizeHint(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self)))
        vqerrormessage->qerrormessage_sizehint_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QErrorMessage_MinimumSizeHint(const QErrorMessage* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QErrorMessage_SuperMinimumSizeHint(const QErrorMessage* self) {
    return new QSize(self->QErrorMessage::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnMinimumSizeHint(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self)))
        vqerrormessage->qerrormessage_minimumsizehint_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_Open(QErrorMessage* self) {
    self->open();
}

// Base class handler implementation
void QErrorMessage_SuperOpen(QErrorMessage* self) {
    self->QErrorMessage::open();
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnOpen(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_open_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Open_Callback>(slot);
}

// Derived class handler implementation
int QErrorMessage_Exec(QErrorMessage* self) {
    return self->exec();
}

// Base class handler implementation
int QErrorMessage_SuperExec(QErrorMessage* self) {
    return self->QErrorMessage::exec();
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnExec(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_exec_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Exec_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_Accept(QErrorMessage* self) {
    self->accept();
}

// Base class handler implementation
void QErrorMessage_SuperAccept(QErrorMessage* self) {
    self->QErrorMessage::accept();
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnAccept(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_accept_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Accept_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_Reject(QErrorMessage* self) {
    self->reject();
}

// Base class handler implementation
void QErrorMessage_SuperReject(QErrorMessage* self) {
    self->QErrorMessage::reject();
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnReject(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_reject_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Reject_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_KeyPressEvent(QErrorMessage* self, QKeyEvent* param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperKeyPressEvent(QErrorMessage* self, QKeyEvent* param1) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnKeyPressEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_keypressevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_CloseEvent(QErrorMessage* self, QCloseEvent* param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperCloseEvent(QErrorMessage* self, QCloseEvent* param1) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnCloseEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_closeevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_ShowEvent(QErrorMessage* self, QShowEvent* param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperShowEvent(QErrorMessage* self, QShowEvent* param1) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnShowEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_showevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_ResizeEvent(QErrorMessage* self, QResizeEvent* param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperResizeEvent(QErrorMessage* self, QResizeEvent* param1) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnResizeEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_resizeevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_ContextMenuEvent(QErrorMessage* self, QContextMenuEvent* param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperContextMenuEvent(QErrorMessage* self, QContextMenuEvent* param1) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnContextMenuEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_contextmenuevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool QErrorMessage_EventFilter(QErrorMessage* self, QObject* param1, QEvent* param2) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        return vqerrormessage->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QErrorMessage_SuperEventFilter(QErrorMessage* self, QObject* param1, QEvent* param2) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        return vqerrormessage->QErrorMessage::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnEventFilter(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_eventfilter_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int QErrorMessage_DevType(const QErrorMessage* self) {
    return self->devType();
}

// Base class handler implementation
int QErrorMessage_SuperDevType(const QErrorMessage* self) {
    return self->QErrorMessage::devType();
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnDevType(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self)))
        vqerrormessage->qerrormessage_devtype_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_DevType_Callback>(slot);
}

// Derived class handler implementation
int QErrorMessage_HeightForWidth(const QErrorMessage* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QErrorMessage_SuperHeightForWidth(const QErrorMessage* self, int param1) {
    return self->QErrorMessage::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnHeightForWidth(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self)))
        vqerrormessage->qerrormessage_heightforwidth_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QErrorMessage_HasHeightForWidth(const QErrorMessage* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QErrorMessage_SuperHasHeightForWidth(const QErrorMessage* self) {
    return self->QErrorMessage::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnHasHeightForWidth(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self)))
        vqerrormessage->qerrormessage_hasheightforwidth_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QErrorMessage_PaintEngine(const QErrorMessage* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QErrorMessage_SuperPaintEngine(const QErrorMessage* self) {
    return self->QErrorMessage::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnPaintEngine(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self)))
        vqerrormessage->qerrormessage_paintengine_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QErrorMessage_Event(QErrorMessage* self, QEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        return vqerrormessage->event(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QErrorMessage_SuperEvent(QErrorMessage* self, QEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        return vqerrormessage->QErrorMessage::event(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_event_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Event_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_MousePressEvent(QErrorMessage* self, QMouseEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperMousePressEvent(QErrorMessage* self, QMouseEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnMousePressEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_mousepressevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_MouseReleaseEvent(QErrorMessage* self, QMouseEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperMouseReleaseEvent(QErrorMessage* self, QMouseEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnMouseReleaseEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_mousereleaseevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_MouseDoubleClickEvent(QErrorMessage* self, QMouseEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperMouseDoubleClickEvent(QErrorMessage* self, QMouseEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnMouseDoubleClickEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_mousedoubleclickevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_MouseMoveEvent(QErrorMessage* self, QMouseEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperMouseMoveEvent(QErrorMessage* self, QMouseEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnMouseMoveEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_mousemoveevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_WheelEvent(QErrorMessage* self, QWheelEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperWheelEvent(QErrorMessage* self, QWheelEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnWheelEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_wheelevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_KeyReleaseEvent(QErrorMessage* self, QKeyEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperKeyReleaseEvent(QErrorMessage* self, QKeyEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnKeyReleaseEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_keyreleaseevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_FocusInEvent(QErrorMessage* self, QFocusEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperFocusInEvent(QErrorMessage* self, QFocusEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnFocusInEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_focusinevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_FocusOutEvent(QErrorMessage* self, QFocusEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperFocusOutEvent(QErrorMessage* self, QFocusEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnFocusOutEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_focusoutevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_EnterEvent(QErrorMessage* self, QEnterEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperEnterEvent(QErrorMessage* self, QEnterEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnEnterEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_enterevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_LeaveEvent(QErrorMessage* self, QEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperLeaveEvent(QErrorMessage* self, QEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnLeaveEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_leaveevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_PaintEvent(QErrorMessage* self, QPaintEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperPaintEvent(QErrorMessage* self, QPaintEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnPaintEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_paintevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_MoveEvent(QErrorMessage* self, QMoveEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperMoveEvent(QErrorMessage* self, QMoveEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnMoveEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_moveevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_TabletEvent(QErrorMessage* self, QTabletEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperTabletEvent(QErrorMessage* self, QTabletEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnTabletEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_tabletevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_ActionEvent(QErrorMessage* self, QActionEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperActionEvent(QErrorMessage* self, QActionEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnActionEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_actionevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_DragEnterEvent(QErrorMessage* self, QDragEnterEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperDragEnterEvent(QErrorMessage* self, QDragEnterEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnDragEnterEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_dragenterevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_DragMoveEvent(QErrorMessage* self, QDragMoveEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperDragMoveEvent(QErrorMessage* self, QDragMoveEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnDragMoveEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_dragmoveevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_DragLeaveEvent(QErrorMessage* self, QDragLeaveEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperDragLeaveEvent(QErrorMessage* self, QDragLeaveEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnDragLeaveEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_dragleaveevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_DropEvent(QErrorMessage* self, QDropEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperDropEvent(QErrorMessage* self, QDropEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnDropEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_dropevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_HideEvent(QErrorMessage* self, QHideEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperHideEvent(QErrorMessage* self, QHideEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnHideEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_hideevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QErrorMessage_NativeEvent(QErrorMessage* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        return vqerrormessage->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QErrorMessage_SuperNativeEvent(QErrorMessage* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        return vqerrormessage->QErrorMessage::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QErrorMessage::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnNativeEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_nativeevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QErrorMessage_Metric(const QErrorMessage* self, int param1) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage) {
        return vqerrormessage->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QErrorMessage_SuperMetric(const QErrorMessage* self, int param1) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self))) {
        return vqerrormessage->QErrorMessage::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QErrorMessage::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnMetric(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self)))
        vqerrormessage->qerrormessage_metric_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Metric_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_InitPainter(const QErrorMessage* self, QPainter* painter) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage) {
        vqerrormessage->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperInitPainter(const QErrorMessage* self, QPainter* painter) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self))) {
        vqerrormessage->QErrorMessage::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnInitPainter(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self)))
        vqerrormessage->qerrormessage_initpainter_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QErrorMessage_Redirected(const QErrorMessage* self, QPoint* offset) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage) {
        return vqerrormessage->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QErrorMessage_SuperRedirected(const QErrorMessage* self, QPoint* offset) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self))) {
        return vqerrormessage->QErrorMessage::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnRedirected(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self)))
        vqerrormessage->qerrormessage_redirected_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QErrorMessage_SharedPainter(const QErrorMessage* self) {
    auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self));
    if (vqerrormessage) {
        return vqerrormessage->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QErrorMessage_SuperSharedPainter(const QErrorMessage* self) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self))) {
        return vqerrormessage->QErrorMessage::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QErrorMessage::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnSharedPainter(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self)))
        vqerrormessage->qerrormessage_sharedpainter_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_InputMethodEvent(QErrorMessage* self, QInputMethodEvent* param1) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperInputMethodEvent(QErrorMessage* self, QInputMethodEvent* param1) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnInputMethodEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_inputmethodevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QErrorMessage_InputMethodQuery(const QErrorMessage* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QErrorMessage_SuperInputMethodQuery(const QErrorMessage* self, int param1) {
    return new QVariant(self->QErrorMessage::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnInputMethodQuery(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self)))
        vqerrormessage->qerrormessage_inputmethodquery_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QErrorMessage_FocusNextPrevChild(QErrorMessage* self, bool next) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        return vqerrormessage->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QErrorMessage_SuperFocusNextPrevChild(QErrorMessage* self, bool next) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        return vqerrormessage->QErrorMessage::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnFocusNextPrevChild(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_focusnextprevchild_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_TimerEvent(QErrorMessage* self, QTimerEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperTimerEvent(QErrorMessage* self, QTimerEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnTimerEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_timerevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_ChildEvent(QErrorMessage* self, QChildEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperChildEvent(QErrorMessage* self, QChildEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnChildEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_childevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_CustomEvent(QErrorMessage* self, QEvent* event) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperCustomEvent(QErrorMessage* self, QEvent* event) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnCustomEvent(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_customevent_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_ConnectNotify(QErrorMessage* self, const QMetaMethod* signal) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperConnectNotify(QErrorMessage* self, const QMetaMethod* signal) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnConnectNotify(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_connectnotify_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QErrorMessage_DisconnectNotify(QErrorMessage* self, const QMetaMethod* signal) {
    auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self);
    if (vqerrormessage) {
        vqerrormessage->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QErrorMessage::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QErrorMessage_SuperDisconnectNotify(QErrorMessage* self, const QMetaMethod* signal) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->QErrorMessage::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QErrorMessage::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QErrorMessage_OnDisconnectNotify(QErrorMessage* self, intptr_t slot) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self))
        vqerrormessage->qerrormessage_disconnectnotify_callback = reinterpret_cast<VirtualQErrorMessage::QErrorMessage_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QErrorMessage_AdjustPosition(QErrorMessage* self, QWidget* param1) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->VirtualQErrorMessage::adjustPosition(param1);
    } else
        qFatal("Error: Protected method QErrorMessage::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QErrorMessage_UpdateMicroFocus(QErrorMessage* self) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->VirtualQErrorMessage::updateMicroFocus();
    } else
        qFatal("Error: Protected method QErrorMessage::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QErrorMessage_Create(QErrorMessage* self) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->VirtualQErrorMessage::create();
    } else
        qFatal("Error: Protected method QErrorMessage::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QErrorMessage_Destroy(QErrorMessage* self) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        vqerrormessage->VirtualQErrorMessage::destroy();
    } else
        qFatal("Error: Protected method QErrorMessage::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QErrorMessage_FocusNextChild(QErrorMessage* self) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        return vqerrormessage->VirtualQErrorMessage::focusNextChild();
    } else
        qFatal("Error: Protected method QErrorMessage::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QErrorMessage_FocusPreviousChild(QErrorMessage* self) {
    if (auto* vqerrormessage = dynamic_cast<VirtualQErrorMessage*>(self)) {
        return vqerrormessage->VirtualQErrorMessage::focusPreviousChild();
    } else
        qFatal("Error: Protected method QErrorMessage::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QErrorMessage_Sender(const QErrorMessage* self) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self))) {
        return vqerrormessage->VirtualQErrorMessage::sender();
    } else
        qFatal("Error: Protected method QErrorMessage::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QErrorMessage_SenderSignalIndex(const QErrorMessage* self) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self))) {
        return vqerrormessage->VirtualQErrorMessage::senderSignalIndex();
    } else
        qFatal("Error: Protected method QErrorMessage::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QErrorMessage_Receivers(const QErrorMessage* self, const char* signal) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self))) {
        return vqerrormessage->VirtualQErrorMessage::receivers(signal);
    } else
        qFatal("Error: Protected method QErrorMessage::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QErrorMessage_IsSignalConnected(const QErrorMessage* self, const QMetaMethod* signal) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self))) {
        return vqerrormessage->VirtualQErrorMessage::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QErrorMessage::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QErrorMessage_GetDecodedMetricF(const QErrorMessage* self, int metricA, int metricB) {
    if (auto* vqerrormessage = const_cast<VirtualQErrorMessage*>(dynamic_cast<const VirtualQErrorMessage*>(self))) {
        return vqerrormessage->VirtualQErrorMessage::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QErrorMessage::getDecodedMetricF called without a directly constructed type");
}

void QErrorMessage_Delete(QErrorMessage* self) {
    delete self;
}
