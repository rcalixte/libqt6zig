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
#include <QPrintPreviewDialog>
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
#include <qprintpreviewdialog.h>
#include "libqprintpreviewdialog.h"
#include "libqprintpreviewdialog.hxx"

QPrintPreviewDialog* QPrintPreviewDialog_new(QWidget* parent) {
    return new VirtualQPrintPreviewDialog(parent);
}

QPrintPreviewDialog* QPrintPreviewDialog_new2() {
    return new VirtualQPrintPreviewDialog();
}

QPrintPreviewDialog* QPrintPreviewDialog_new3(QPrinter* printer) {
    return new VirtualQPrintPreviewDialog(printer);
}

QPrintPreviewDialog* QPrintPreviewDialog_new4(QWidget* parent, int flags) {
    return new VirtualQPrintPreviewDialog(parent, static_cast<Qt::WindowFlags>(flags));
}

QPrintPreviewDialog* QPrintPreviewDialog_new5(QPrinter* printer, QWidget* parent) {
    return new VirtualQPrintPreviewDialog(printer, parent);
}

QPrintPreviewDialog* QPrintPreviewDialog_new6(QPrinter* printer, QWidget* parent, int flags) {
    return new VirtualQPrintPreviewDialog(printer, parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QPrintPreviewDialog_MetaObject(const QPrintPreviewDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPrintPreviewDialog_Metacast(QPrintPreviewDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPrintPreviewDialog_Metacall(QPrintPreviewDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPrintPreviewDialog_Tr(const char* s) {
    auto _ret = QPrintPreviewDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QPrinter* QPrintPreviewDialog_Printer(QPrintPreviewDialog* self) {
    return self->printer();
}

void QPrintPreviewDialog_SetVisible(QPrintPreviewDialog* self, bool visible) {
    self->setVisible(visible);
}

void QPrintPreviewDialog_Done(QPrintPreviewDialog* self, int result) {
    self->done(static_cast<int>(result));
}

void QPrintPreviewDialog_PaintRequested(QPrintPreviewDialog* self, QPrinter* printer) {
    self->paintRequested(printer);
}

void QPrintPreviewDialog_Connect_PaintRequested(QPrintPreviewDialog* self, intptr_t slot) {
    void (*slotFunc)(QPrintPreviewDialog*, QPrinter*) = reinterpret_cast<void (*)(QPrintPreviewDialog*, QPrinter*)>(slot);
    QPrintPreviewDialog::connect(self,
                                 static_cast<void (QPrintPreviewDialog::*)(QPrinter*)>(&QPrintPreviewDialog::paintRequested),
                                 [self, slotFunc](QPrinter* printer) {
                                     QPrinter* sigval1 = printer;
                                     slotFunc(self, sigval1);
                                 });
}

libqt_string QPrintPreviewDialog_Tr2(const char* s, const char* c) {
    auto _ret = QPrintPreviewDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPrintPreviewDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPrintPreviewDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPrintPreviewDialog_SuperMetaObject(const QPrintPreviewDialog* self) {
    return (QMetaObject*)self->QPrintPreviewDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMetaObject(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self)))
        vqprintpreviewdialog->qprintpreviewdialog_metaobject_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPrintPreviewDialog_SuperMetacast(QPrintPreviewDialog* self, const char* param1) {
    return self->QPrintPreviewDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMetacast(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_metacast_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPrintPreviewDialog_SuperMetacall(QPrintPreviewDialog* self, int param1, int param2, void** param3) {
    return self->QPrintPreviewDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMetacall(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_metacall_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
void QPrintPreviewDialog_SuperSetVisible(QPrintPreviewDialog* self, bool visible) {
    self->QPrintPreviewDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnSetVisible(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_setvisible_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_SetVisible_Callback>(slot);
}

// Base class handler implementation
void QPrintPreviewDialog_SuperDone(QPrintPreviewDialog* self, int result) {
    self->QPrintPreviewDialog::done(static_cast<int>(result));
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDone(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_done_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Done_Callback>(slot);
}

// Derived class handler implementation
QSize* QPrintPreviewDialog_SizeHint(const QPrintPreviewDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QPrintPreviewDialog_SuperSizeHint(const QPrintPreviewDialog* self) {
    return new QSize(self->QPrintPreviewDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnSizeHint(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self)))
        vqprintpreviewdialog->qprintpreviewdialog_sizehint_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QPrintPreviewDialog_MinimumSizeHint(const QPrintPreviewDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QPrintPreviewDialog_SuperMinimumSizeHint(const QPrintPreviewDialog* self) {
    return new QSize(self->QPrintPreviewDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMinimumSizeHint(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self)))
        vqprintpreviewdialog->qprintpreviewdialog_minimumsizehint_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_Open(QPrintPreviewDialog* self) {
    self->open();
}

// Base class handler implementation
void QPrintPreviewDialog_SuperOpen(QPrintPreviewDialog* self) {
    self->QPrintPreviewDialog::open();
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnOpen(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_open_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int QPrintPreviewDialog_Exec(QPrintPreviewDialog* self) {
    return self->exec();
}

// Base class handler implementation
int QPrintPreviewDialog_SuperExec(QPrintPreviewDialog* self) {
    return self->QPrintPreviewDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnExec(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_exec_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_Accept(QPrintPreviewDialog* self) {
    self->accept();
}

// Base class handler implementation
void QPrintPreviewDialog_SuperAccept(QPrintPreviewDialog* self) {
    self->QPrintPreviewDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnAccept(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_accept_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_Reject(QPrintPreviewDialog* self) {
    self->reject();
}

// Base class handler implementation
void QPrintPreviewDialog_SuperReject(QPrintPreviewDialog* self) {
    self->QPrintPreviewDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnReject(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_reject_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_KeyPressEvent(QPrintPreviewDialog* self, QKeyEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperKeyPressEvent(QPrintPreviewDialog* self, QKeyEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnKeyPressEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_keypressevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_CloseEvent(QPrintPreviewDialog* self, QCloseEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperCloseEvent(QPrintPreviewDialog* self, QCloseEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnCloseEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_closeevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_ShowEvent(QPrintPreviewDialog* self, QShowEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperShowEvent(QPrintPreviewDialog* self, QShowEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnShowEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_showevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_ResizeEvent(QPrintPreviewDialog* self, QResizeEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperResizeEvent(QPrintPreviewDialog* self, QResizeEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnResizeEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_resizeevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_ContextMenuEvent(QPrintPreviewDialog* self, QContextMenuEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperContextMenuEvent(QPrintPreviewDialog* self, QContextMenuEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnContextMenuEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_contextmenuevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool QPrintPreviewDialog_EventFilter(QPrintPreviewDialog* self, QObject* param1, QEvent* param2) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        return vqprintpreviewdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPrintPreviewDialog_SuperEventFilter(QPrintPreviewDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        return vqprintpreviewdialog->QPrintPreviewDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnEventFilter(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_eventfilter_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int QPrintPreviewDialog_DevType(const QPrintPreviewDialog* self) {
    return self->devType();
}

// Base class handler implementation
int QPrintPreviewDialog_SuperDevType(const QPrintPreviewDialog* self) {
    return self->QPrintPreviewDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDevType(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self)))
        vqprintpreviewdialog->qprintpreviewdialog_devtype_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int QPrintPreviewDialog_HeightForWidth(const QPrintPreviewDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QPrintPreviewDialog_SuperHeightForWidth(const QPrintPreviewDialog* self, int param1) {
    return self->QPrintPreviewDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnHeightForWidth(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self)))
        vqprintpreviewdialog->qprintpreviewdialog_heightforwidth_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QPrintPreviewDialog_HasHeightForWidth(const QPrintPreviewDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QPrintPreviewDialog_SuperHasHeightForWidth(const QPrintPreviewDialog* self) {
    return self->QPrintPreviewDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnHasHeightForWidth(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self)))
        vqprintpreviewdialog->qprintpreviewdialog_hasheightforwidth_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QPrintPreviewDialog_PaintEngine(const QPrintPreviewDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QPrintPreviewDialog_SuperPaintEngine(const QPrintPreviewDialog* self) {
    return self->QPrintPreviewDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnPaintEngine(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self)))
        vqprintpreviewdialog->qprintpreviewdialog_paintengine_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QPrintPreviewDialog_Event(QPrintPreviewDialog* self, QEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        return vqprintpreviewdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPrintPreviewDialog_SuperEvent(QPrintPreviewDialog* self, QEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        return vqprintpreviewdialog->QPrintPreviewDialog::event(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_event_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_MousePressEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperMousePressEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMousePressEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_mousepressevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_MouseReleaseEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperMouseReleaseEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMouseReleaseEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_mousereleaseevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_MouseDoubleClickEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperMouseDoubleClickEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMouseDoubleClickEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_MouseMoveEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperMouseMoveEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMouseMoveEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_mousemoveevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_WheelEvent(QPrintPreviewDialog* self, QWheelEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperWheelEvent(QPrintPreviewDialog* self, QWheelEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnWheelEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_wheelevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_KeyReleaseEvent(QPrintPreviewDialog* self, QKeyEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperKeyReleaseEvent(QPrintPreviewDialog* self, QKeyEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnKeyReleaseEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_keyreleaseevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_FocusInEvent(QPrintPreviewDialog* self, QFocusEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperFocusInEvent(QPrintPreviewDialog* self, QFocusEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnFocusInEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_focusinevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_FocusOutEvent(QPrintPreviewDialog* self, QFocusEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperFocusOutEvent(QPrintPreviewDialog* self, QFocusEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnFocusOutEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_focusoutevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_EnterEvent(QPrintPreviewDialog* self, QEnterEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperEnterEvent(QPrintPreviewDialog* self, QEnterEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnEnterEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_enterevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_LeaveEvent(QPrintPreviewDialog* self, QEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperLeaveEvent(QPrintPreviewDialog* self, QEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnLeaveEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_leaveevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_PaintEvent(QPrintPreviewDialog* self, QPaintEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperPaintEvent(QPrintPreviewDialog* self, QPaintEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnPaintEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_paintevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_MoveEvent(QPrintPreviewDialog* self, QMoveEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperMoveEvent(QPrintPreviewDialog* self, QMoveEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMoveEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_moveevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_TabletEvent(QPrintPreviewDialog* self, QTabletEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperTabletEvent(QPrintPreviewDialog* self, QTabletEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnTabletEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_tabletevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_ActionEvent(QPrintPreviewDialog* self, QActionEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperActionEvent(QPrintPreviewDialog* self, QActionEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnActionEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_actionevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_DragEnterEvent(QPrintPreviewDialog* self, QDragEnterEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperDragEnterEvent(QPrintPreviewDialog* self, QDragEnterEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDragEnterEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_dragenterevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_DragMoveEvent(QPrintPreviewDialog* self, QDragMoveEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperDragMoveEvent(QPrintPreviewDialog* self, QDragMoveEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDragMoveEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_dragmoveevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_DragLeaveEvent(QPrintPreviewDialog* self, QDragLeaveEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperDragLeaveEvent(QPrintPreviewDialog* self, QDragLeaveEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDragLeaveEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_dragleaveevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_DropEvent(QPrintPreviewDialog* self, QDropEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperDropEvent(QPrintPreviewDialog* self, QDropEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDropEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_dropevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_HideEvent(QPrintPreviewDialog* self, QHideEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperHideEvent(QPrintPreviewDialog* self, QHideEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnHideEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_hideevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QPrintPreviewDialog_NativeEvent(QPrintPreviewDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        return vqprintpreviewdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPrintPreviewDialog_SuperNativeEvent(QPrintPreviewDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        return vqprintpreviewdialog->QPrintPreviewDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnNativeEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_nativeevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_ChangeEvent(QPrintPreviewDialog* self, QEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperChangeEvent(QPrintPreviewDialog* self, QEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnChangeEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_changeevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QPrintPreviewDialog_Metric(const QPrintPreviewDialog* self, int param1) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog) {
        return vqprintpreviewdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QPrintPreviewDialog_SuperMetric(const QPrintPreviewDialog* self, int param1) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return vqprintpreviewdialog->QPrintPreviewDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMetric(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self)))
        vqprintpreviewdialog->qprintpreviewdialog_metric_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_InitPainter(const QPrintPreviewDialog* self, QPainter* painter) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperInitPainter(const QPrintPreviewDialog* self, QPainter* painter) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->QPrintPreviewDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnInitPainter(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self)))
        vqprintpreviewdialog->qprintpreviewdialog_initpainter_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QPrintPreviewDialog_Redirected(const QPrintPreviewDialog* self, QPoint* offset) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog) {
        return vqprintpreviewdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QPrintPreviewDialog_SuperRedirected(const QPrintPreviewDialog* self, QPoint* offset) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return vqprintpreviewdialog->QPrintPreviewDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnRedirected(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self)))
        vqprintpreviewdialog->qprintpreviewdialog_redirected_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QPrintPreviewDialog_SharedPainter(const QPrintPreviewDialog* self) {
    auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self));
    if (vqprintpreviewdialog) {
        return vqprintpreviewdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QPrintPreviewDialog_SuperSharedPainter(const QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return vqprintpreviewdialog->QPrintPreviewDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnSharedPainter(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self)))
        vqprintpreviewdialog->qprintpreviewdialog_sharedpainter_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_InputMethodEvent(QPrintPreviewDialog* self, QInputMethodEvent* param1) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperInputMethodEvent(QPrintPreviewDialog* self, QInputMethodEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnInputMethodEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_inputmethodevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QPrintPreviewDialog_InputMethodQuery(const QPrintPreviewDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QPrintPreviewDialog_SuperInputMethodQuery(const QPrintPreviewDialog* self, int param1) {
    return new QVariant(self->QPrintPreviewDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnInputMethodQuery(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self)))
        vqprintpreviewdialog->qprintpreviewdialog_inputmethodquery_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QPrintPreviewDialog_FocusNextPrevChild(QPrintPreviewDialog* self, bool next) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        return vqprintpreviewdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPrintPreviewDialog_SuperFocusNextPrevChild(QPrintPreviewDialog* self, bool next) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        return vqprintpreviewdialog->QPrintPreviewDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnFocusNextPrevChild(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_focusnextprevchild_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_TimerEvent(QPrintPreviewDialog* self, QTimerEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperTimerEvent(QPrintPreviewDialog* self, QTimerEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnTimerEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_timerevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_ChildEvent(QPrintPreviewDialog* self, QChildEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperChildEvent(QPrintPreviewDialog* self, QChildEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnChildEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_childevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_CustomEvent(QPrintPreviewDialog* self, QEvent* event) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperCustomEvent(QPrintPreviewDialog* self, QEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnCustomEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_customevent_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_ConnectNotify(QPrintPreviewDialog* self, const QMetaMethod* signal) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperConnectNotify(QPrintPreviewDialog* self, const QMetaMethod* signal) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnConnectNotify(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_connectnotify_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPrintPreviewDialog_DisconnectNotify(QPrintPreviewDialog* self, const QMetaMethod* signal) {
    auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self);
    if (vqprintpreviewdialog) {
        vqprintpreviewdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPrintPreviewDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintPreviewDialog_SuperDisconnectNotify(QPrintPreviewDialog* self, const QMetaMethod* signal) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->QPrintPreviewDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPrintPreviewDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDisconnectNotify(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self))
        vqprintpreviewdialog->qprintpreviewdialog_disconnectnotify_callback = reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QPrintPreviewDialog_AdjustPosition(QPrintPreviewDialog* self, QWidget* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->VirtualQPrintPreviewDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method QPrintPreviewDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QPrintPreviewDialog_UpdateMicroFocus(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->VirtualQPrintPreviewDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method QPrintPreviewDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QPrintPreviewDialog_Create(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->VirtualQPrintPreviewDialog::create();
    } else
        qFatal("Error: Protected method QPrintPreviewDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QPrintPreviewDialog_Destroy(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->VirtualQPrintPreviewDialog::destroy();
    } else
        qFatal("Error: Protected method QPrintPreviewDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPrintPreviewDialog_FocusNextChild(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        return vqprintpreviewdialog->VirtualQPrintPreviewDialog::focusNextChild();
    } else
        qFatal("Error: Protected method QPrintPreviewDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPrintPreviewDialog_FocusPreviousChild(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        return vqprintpreviewdialog->VirtualQPrintPreviewDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method QPrintPreviewDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPrintPreviewDialog_Sender(const QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return vqprintpreviewdialog->VirtualQPrintPreviewDialog::sender();
    } else
        qFatal("Error: Protected method QPrintPreviewDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPrintPreviewDialog_SenderSignalIndex(const QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return vqprintpreviewdialog->VirtualQPrintPreviewDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPrintPreviewDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPrintPreviewDialog_Receivers(const QPrintPreviewDialog* self, const char* signal) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return vqprintpreviewdialog->VirtualQPrintPreviewDialog::receivers(signal);
    } else
        qFatal("Error: Protected method QPrintPreviewDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPrintPreviewDialog_IsSignalConnected(const QPrintPreviewDialog* self, const QMetaMethod* signal) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return vqprintpreviewdialog->VirtualQPrintPreviewDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPrintPreviewDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QPrintPreviewDialog_GetDecodedMetricF(const QPrintPreviewDialog* self, int metricA, int metricB) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return vqprintpreviewdialog->VirtualQPrintPreviewDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QPrintPreviewDialog::getDecodedMetricF called without a directly constructed type");
}

void QPrintPreviewDialog_Delete(QPrintPreviewDialog* self) {
    delete self;
}
