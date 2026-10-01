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
#include <qdialog.h>
#include "libqdialog.h"
#include "libqdialog.hxx"

QDialog* QDialog_new(QWidget* parent) {
    return new VirtualQDialog(parent);
}

QDialog* QDialog_new2() {
    return new VirtualQDialog();
}

QDialog* QDialog_new3(QWidget* parent, int f) {
    return new VirtualQDialog(parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QDialog_MetaObject(const QDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDialog_Metacast(QDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDialog_Metacall(QDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDialog_Tr(const char* s) {
    auto _ret = QDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QDialog_Result(const QDialog* self) {
    return self->result();
}

void QDialog_SetVisible(QDialog* self, bool visible) {
    self->setVisible(visible);
}

QSize* QDialog_SizeHint(const QDialog* self) {
    return new QSize(self->sizeHint());
}

QSize* QDialog_MinimumSizeHint(const QDialog* self) {
    return new QSize(self->minimumSizeHint());
}

void QDialog_SetSizeGripEnabled(QDialog* self, bool sizeGripEnabled) {
    self->setSizeGripEnabled(sizeGripEnabled);
}

bool QDialog_IsSizeGripEnabled(const QDialog* self) {
    return self->isSizeGripEnabled();
}

void QDialog_SetModal(QDialog* self, bool modal) {
    self->setModal(modal);
}

void QDialog_SetResult(QDialog* self, int r) {
    self->setResult(static_cast<int>(r));
}

void QDialog_Finished(QDialog* self, int result) {
    self->finished(static_cast<int>(result));
}

void QDialog_Connect_Finished(QDialog* self, intptr_t slot) {
    void (*slotFunc)(QDialog*, int) = reinterpret_cast<void (*)(QDialog*, int)>(slot);
    QDialog::connect(self,
                     static_cast<void (QDialog::*)(int)>(&QDialog::finished),
                     [self, slotFunc](int result) {
                         int sigval1 = result;
                         slotFunc(self, sigval1);
                     });
}

void QDialog_Accepted(QDialog* self) {
    self->accepted();
}

void QDialog_Connect_Accepted(QDialog* self, intptr_t slot) {
    void (*slotFunc)(QDialog*) = reinterpret_cast<void (*)(QDialog*)>(slot);
    QDialog::connect(self,
                     static_cast<void (QDialog::*)()>(&QDialog::accepted),
                     [self, slotFunc]() {
                         slotFunc(self);
                     });
}

void QDialog_Rejected(QDialog* self) {
    self->rejected();
}

void QDialog_Connect_Rejected(QDialog* self, intptr_t slot) {
    void (*slotFunc)(QDialog*) = reinterpret_cast<void (*)(QDialog*)>(slot);
    QDialog::connect(self,
                     static_cast<void (QDialog::*)()>(&QDialog::rejected),
                     [self, slotFunc]() {
                         slotFunc(self);
                     });
}

void QDialog_Open(QDialog* self) {
    self->open();
}

int QDialog_Exec(QDialog* self) {
    return self->exec();
}

void QDialog_Done(QDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

void QDialog_Accept(QDialog* self) {
    self->accept();
}

void QDialog_Reject(QDialog* self) {
    self->reject();
}

void QDialog_KeyPressEvent(QDialog* self, QKeyEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->keyPressEvent(param1);
    }
}

void QDialog_CloseEvent(QDialog* self, QCloseEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->closeEvent(param1);
    }
}

void QDialog_ShowEvent(QDialog* self, QShowEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->showEvent(param1);
    }
}

void QDialog_ResizeEvent(QDialog* self, QResizeEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->resizeEvent(param1);
    }
}

void QDialog_ContextMenuEvent(QDialog* self, QContextMenuEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->contextMenuEvent(param1);
    }
}

bool QDialog_EventFilter(QDialog* self, QObject* param1, QEvent* param2) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        return vqdialog->eventFilter(param1, param2);
    }
    qFatal("Error: Protected method QDialog::eventFilter called without a directly constructed type");
}

libqt_string QDialog_Tr2(const char* s, const char* c) {
    auto _ret = QDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDialog_SuperMetaObject(const QDialog* self) {
    return (QMetaObject*)self->QDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMetaObject(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self)))
        vqdialog->qdialog_metaobject_callback = reinterpret_cast<VirtualQDialog::QDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDialog_SuperMetacast(QDialog* self, const char* param1) {
    return self->QDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMetacast(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_metacast_callback = reinterpret_cast<VirtualQDialog::QDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDialog_SuperMetacall(QDialog* self, int param1, int param2, void** param3) {
    return self->QDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMetacall(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_metacall_callback = reinterpret_cast<VirtualQDialog::QDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
void QDialog_SuperSetVisible(QDialog* self, bool visible) {
    self->QDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnSetVisible(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_setvisible_callback = reinterpret_cast<VirtualQDialog::QDialog_SetVisible_Callback>(slot);
}

// Base class handler implementation
QSize* QDialog_SuperSizeHint(const QDialog* self) {
    return new QSize(self->QDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnSizeHint(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self)))
        vqdialog->qdialog_sizehint_callback = reinterpret_cast<VirtualQDialog::QDialog_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QDialog_SuperMinimumSizeHint(const QDialog* self) {
    return new QSize(self->QDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMinimumSizeHint(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self)))
        vqdialog->qdialog_minimumsizehint_callback = reinterpret_cast<VirtualQDialog::QDialog_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
void QDialog_SuperOpen(QDialog* self) {
    self->QDialog::open();
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnOpen(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_open_callback = reinterpret_cast<VirtualQDialog::QDialog_Open_Callback>(slot);
}

// Base class handler implementation
int QDialog_SuperExec(QDialog* self) {
    return self->QDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnExec(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_exec_callback = reinterpret_cast<VirtualQDialog::QDialog_Exec_Callback>(slot);
}

// Base class handler implementation
void QDialog_SuperDone(QDialog* self, int param1) {
    self->QDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDone(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_done_callback = reinterpret_cast<VirtualQDialog::QDialog_Done_Callback>(slot);
}

// Base class handler implementation
void QDialog_SuperAccept(QDialog* self) {
    self->QDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnAccept(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_accept_callback = reinterpret_cast<VirtualQDialog::QDialog_Accept_Callback>(slot);
}

// Base class handler implementation
void QDialog_SuperReject(QDialog* self) {
    self->QDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnReject(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_reject_callback = reinterpret_cast<VirtualQDialog::QDialog_Reject_Callback>(slot);
}

// Base class handler implementation
void QDialog_SuperKeyPressEvent(QDialog* self, QKeyEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnKeyPressEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_keypressevent_callback = reinterpret_cast<VirtualQDialog::QDialog_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QDialog_SuperCloseEvent(QDialog* self, QCloseEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnCloseEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_closeevent_callback = reinterpret_cast<VirtualQDialog::QDialog_CloseEvent_Callback>(slot);
}

// Base class handler implementation
void QDialog_SuperShowEvent(QDialog* self, QShowEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnShowEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_showevent_callback = reinterpret_cast<VirtualQDialog::QDialog_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void QDialog_SuperResizeEvent(QDialog* self, QResizeEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnResizeEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_resizeevent_callback = reinterpret_cast<VirtualQDialog::QDialog_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QDialog_SuperContextMenuEvent(QDialog* self, QContextMenuEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnContextMenuEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_contextmenuevent_callback = reinterpret_cast<VirtualQDialog::QDialog_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
bool QDialog_SuperEventFilter(QDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        return vqdialog->QDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnEventFilter(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_eventfilter_callback = reinterpret_cast<VirtualQDialog::QDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int QDialog_DevType(const QDialog* self) {
    return self->devType();
}

// Base class handler implementation
int QDialog_SuperDevType(const QDialog* self) {
    return self->QDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDevType(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self)))
        vqdialog->qdialog_devtype_callback = reinterpret_cast<VirtualQDialog::QDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int QDialog_HeightForWidth(const QDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QDialog_SuperHeightForWidth(const QDialog* self, int param1) {
    return self->QDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnHeightForWidth(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self)))
        vqdialog->qdialog_heightforwidth_callback = reinterpret_cast<VirtualQDialog::QDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QDialog_HasHeightForWidth(const QDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QDialog_SuperHasHeightForWidth(const QDialog* self) {
    return self->QDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnHasHeightForWidth(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self)))
        vqdialog->qdialog_hasheightforwidth_callback = reinterpret_cast<VirtualQDialog::QDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QDialog_PaintEngine(const QDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QDialog_SuperPaintEngine(const QDialog* self) {
    return self->QDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnPaintEngine(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self)))
        vqdialog->qdialog_paintengine_callback = reinterpret_cast<VirtualQDialog::QDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QDialog_Event(QDialog* self, QEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        return vqdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDialog_SuperEvent(QDialog* self, QEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        return vqdialog->QDialog::event(event);
    } else
        qFatal("Error: Protected virtual method QDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_event_callback = reinterpret_cast<VirtualQDialog::QDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void QDialog_MousePressEvent(QDialog* self, QMouseEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperMousePressEvent(QDialog* self, QMouseEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMousePressEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_mousepressevent_callback = reinterpret_cast<VirtualQDialog::QDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_MouseReleaseEvent(QDialog* self, QMouseEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperMouseReleaseEvent(QDialog* self, QMouseEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMouseReleaseEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_mousereleaseevent_callback = reinterpret_cast<VirtualQDialog::QDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_MouseDoubleClickEvent(QDialog* self, QMouseEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperMouseDoubleClickEvent(QDialog* self, QMouseEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMouseDoubleClickEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualQDialog::QDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_MouseMoveEvent(QDialog* self, QMouseEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperMouseMoveEvent(QDialog* self, QMouseEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMouseMoveEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_mousemoveevent_callback = reinterpret_cast<VirtualQDialog::QDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_WheelEvent(QDialog* self, QWheelEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperWheelEvent(QDialog* self, QWheelEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnWheelEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_wheelevent_callback = reinterpret_cast<VirtualQDialog::QDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_KeyReleaseEvent(QDialog* self, QKeyEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperKeyReleaseEvent(QDialog* self, QKeyEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnKeyReleaseEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_keyreleaseevent_callback = reinterpret_cast<VirtualQDialog::QDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_FocusInEvent(QDialog* self, QFocusEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperFocusInEvent(QDialog* self, QFocusEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnFocusInEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_focusinevent_callback = reinterpret_cast<VirtualQDialog::QDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_FocusOutEvent(QDialog* self, QFocusEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperFocusOutEvent(QDialog* self, QFocusEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnFocusOutEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_focusoutevent_callback = reinterpret_cast<VirtualQDialog::QDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_EnterEvent(QDialog* self, QEnterEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperEnterEvent(QDialog* self, QEnterEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnEnterEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_enterevent_callback = reinterpret_cast<VirtualQDialog::QDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_LeaveEvent(QDialog* self, QEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperLeaveEvent(QDialog* self, QEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnLeaveEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_leaveevent_callback = reinterpret_cast<VirtualQDialog::QDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_PaintEvent(QDialog* self, QPaintEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperPaintEvent(QDialog* self, QPaintEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnPaintEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_paintevent_callback = reinterpret_cast<VirtualQDialog::QDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_MoveEvent(QDialog* self, QMoveEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperMoveEvent(QDialog* self, QMoveEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMoveEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_moveevent_callback = reinterpret_cast<VirtualQDialog::QDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_TabletEvent(QDialog* self, QTabletEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperTabletEvent(QDialog* self, QTabletEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnTabletEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_tabletevent_callback = reinterpret_cast<VirtualQDialog::QDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_ActionEvent(QDialog* self, QActionEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperActionEvent(QDialog* self, QActionEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnActionEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_actionevent_callback = reinterpret_cast<VirtualQDialog::QDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_DragEnterEvent(QDialog* self, QDragEnterEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperDragEnterEvent(QDialog* self, QDragEnterEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDragEnterEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_dragenterevent_callback = reinterpret_cast<VirtualQDialog::QDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_DragMoveEvent(QDialog* self, QDragMoveEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperDragMoveEvent(QDialog* self, QDragMoveEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDragMoveEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_dragmoveevent_callback = reinterpret_cast<VirtualQDialog::QDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_DragLeaveEvent(QDialog* self, QDragLeaveEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperDragLeaveEvent(QDialog* self, QDragLeaveEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDragLeaveEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_dragleaveevent_callback = reinterpret_cast<VirtualQDialog::QDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_DropEvent(QDialog* self, QDropEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperDropEvent(QDialog* self, QDropEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDropEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_dropevent_callback = reinterpret_cast<VirtualQDialog::QDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_HideEvent(QDialog* self, QHideEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperHideEvent(QDialog* self, QHideEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnHideEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_hideevent_callback = reinterpret_cast<VirtualQDialog::QDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QDialog_NativeEvent(QDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        return vqdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDialog_SuperNativeEvent(QDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        return vqdialog->QDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnNativeEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_nativeevent_callback = reinterpret_cast<VirtualQDialog::QDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_ChangeEvent(QDialog* self, QEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperChangeEvent(QDialog* self, QEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnChangeEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_changeevent_callback = reinterpret_cast<VirtualQDialog::QDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QDialog_Metric(const QDialog* self, int param1) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog) {
        return vqdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QDialog_SuperMetric(const QDialog* self, int param1) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return vqdialog->QDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMetric(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self)))
        vqdialog->qdialog_metric_callback = reinterpret_cast<VirtualQDialog::QDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void QDialog_InitPainter(const QDialog* self, QPainter* painter) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog) {
        vqdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperInitPainter(const QDialog* self, QPainter* painter) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->QDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnInitPainter(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self)))
        vqdialog->qdialog_initpainter_callback = reinterpret_cast<VirtualQDialog::QDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QDialog_Redirected(const QDialog* self, QPoint* offset) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog) {
        return vqdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QDialog_SuperRedirected(const QDialog* self, QPoint* offset) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return vqdialog->QDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnRedirected(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self)))
        vqdialog->qdialog_redirected_callback = reinterpret_cast<VirtualQDialog::QDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QDialog_SharedPainter(const QDialog* self) {
    auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self));
    if (vqdialog) {
        return vqdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QDialog_SuperSharedPainter(const QDialog* self) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return vqdialog->QDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnSharedPainter(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self)))
        vqdialog->qdialog_sharedpainter_callback = reinterpret_cast<VirtualQDialog::QDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QDialog_InputMethodEvent(QDialog* self, QInputMethodEvent* param1) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperInputMethodEvent(QDialog* self, QInputMethodEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnInputMethodEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_inputmethodevent_callback = reinterpret_cast<VirtualQDialog::QDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QDialog_InputMethodQuery(const QDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QDialog_SuperInputMethodQuery(const QDialog* self, int param1) {
    return new QVariant(self->QDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnInputMethodQuery(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self)))
        vqdialog->qdialog_inputmethodquery_callback = reinterpret_cast<VirtualQDialog::QDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QDialog_FocusNextPrevChild(QDialog* self, bool next) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        return vqdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDialog_SuperFocusNextPrevChild(QDialog* self, bool next) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        return vqdialog->QDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnFocusNextPrevChild(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_focusnextprevchild_callback = reinterpret_cast<VirtualQDialog::QDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QDialog_TimerEvent(QDialog* self, QTimerEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperTimerEvent(QDialog* self, QTimerEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnTimerEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_timerevent_callback = reinterpret_cast<VirtualQDialog::QDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_ChildEvent(QDialog* self, QChildEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperChildEvent(QDialog* self, QChildEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnChildEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_childevent_callback = reinterpret_cast<VirtualQDialog::QDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_CustomEvent(QDialog* self, QEvent* event) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperCustomEvent(QDialog* self, QEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnCustomEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_customevent_callback = reinterpret_cast<VirtualQDialog::QDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDialog_ConnectNotify(QDialog* self, const QMetaMethod* signal) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperConnectNotify(QDialog* self, const QMetaMethod* signal) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnConnectNotify(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_connectnotify_callback = reinterpret_cast<VirtualQDialog::QDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDialog_DisconnectNotify(QDialog* self, const QMetaMethod* signal) {
    auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
    if (vqdialog) {
        vqdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDialog_SuperDisconnectNotify(QDialog* self, const QMetaMethod* signal) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->QDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDisconnectNotify(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self))
        vqdialog->qdialog_disconnectnotify_callback = reinterpret_cast<VirtualQDialog::QDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QDialog_AdjustPosition(QDialog* self, QWidget* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->VirtualQDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method QDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QDialog_UpdateMicroFocus(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->VirtualQDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method QDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QDialog_Create(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->VirtualQDialog::create();
    } else
        qFatal("Error: Protected method QDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QDialog_Destroy(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->VirtualQDialog::destroy();
    } else
        qFatal("Error: Protected method QDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDialog_FocusNextChild(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        return vqdialog->VirtualQDialog::focusNextChild();
    } else
        qFatal("Error: Protected method QDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDialog_FocusPreviousChild(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        return vqdialog->VirtualQDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method QDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QDialog_Sender(const QDialog* self) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return vqdialog->VirtualQDialog::sender();
    } else
        qFatal("Error: Protected method QDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDialog_SenderSignalIndex(const QDialog* self) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return vqdialog->VirtualQDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDialog_Receivers(const QDialog* self, const char* signal) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return vqdialog->VirtualQDialog::receivers(signal);
    } else
        qFatal("Error: Protected method QDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDialog_IsSignalConnected(const QDialog* self, const QMetaMethod* signal) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return vqdialog->VirtualQDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QDialog_GetDecodedMetricF(const QDialog* self, int metricA, int metricB) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return vqdialog->VirtualQDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QDialog::getDecodedMetricF called without a directly constructed type");
}

void QDialog_Delete(QDialog* self) {
    delete self;
}
