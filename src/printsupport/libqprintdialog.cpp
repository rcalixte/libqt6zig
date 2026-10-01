#include <QAbstractPrintDialog>
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
#include <QPrintDialog>
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
#include <qprintdialog.h>
#include "libqprintdialog.h"
#include "libqprintdialog.hxx"

QPrintDialog* QPrintDialog_new(QWidget* parent) {
    return new VirtualQPrintDialog(parent);
}

QPrintDialog* QPrintDialog_new2(QPrinter* printer) {
    return new VirtualQPrintDialog(printer);
}

QPrintDialog* QPrintDialog_new3() {
    return new VirtualQPrintDialog();
}

QPrintDialog* QPrintDialog_new4(QPrinter* printer, QWidget* parent) {
    return new VirtualQPrintDialog(printer, parent);
}

QMetaObject* QPrintDialog_MetaObject(const QPrintDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPrintDialog_Metacast(QPrintDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPrintDialog_Metacall(QPrintDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPrintDialog_Tr(const char* s) {
    auto _ret = QPrintDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QPrintDialog_Exec(QPrintDialog* self) {
    return self->exec();
}

void QPrintDialog_Accept(QPrintDialog* self) {
    self->accept();
}

void QPrintDialog_Done(QPrintDialog* self, int result) {
    self->done(static_cast<int>(result));
}

void QPrintDialog_SetOption(QPrintDialog* self, int option) {
    self->setOption(static_cast<QAbstractPrintDialog::PrintDialogOption>(option));
}

bool QPrintDialog_TestOption(const QPrintDialog* self, int option) {
    return self->testOption(static_cast<QAbstractPrintDialog::PrintDialogOption>(option));
}

void QPrintDialog_SetOptions(QPrintDialog* self, int options) {
    self->setOptions(static_cast<QAbstractPrintDialog::PrintDialogOptions>(options));
}

int QPrintDialog_Options(const QPrintDialog* self) {
    return static_cast<int>(self->options());
}

void QPrintDialog_SetVisible(QPrintDialog* self, bool visible) {
    self->setVisible(visible);
}

void QPrintDialog_Accepted(QPrintDialog* self, QPrinter* printer) {
    self->accepted(printer);
}

void QPrintDialog_Connect_Accepted(QPrintDialog* self, intptr_t slot) {
    void (*slotFunc)(QPrintDialog*, QPrinter*) = reinterpret_cast<void (*)(QPrintDialog*, QPrinter*)>(slot);
    QPrintDialog::connect(self,
                          static_cast<void (QPrintDialog::*)(QPrinter*)>(&QPrintDialog::accepted),
                          [self, slotFunc](QPrinter* printer) {
                              QPrinter* sigval1 = printer;
                              slotFunc(self, sigval1);
                          });
}

libqt_string QPrintDialog_Tr2(const char* s, const char* c) {
    auto _ret = QPrintDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPrintDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPrintDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPrintDialog_SetOption2(QPrintDialog* self, int option, bool on) {
    self->setOption(static_cast<QAbstractPrintDialog::PrintDialogOption>(option), on);
}

// Base class handler implementation
QMetaObject* QPrintDialog_SuperMetaObject(const QPrintDialog* self) {
    return (QMetaObject*)self->QPrintDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnMetaObject(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self)))
        vqprintdialog->qprintdialog_metaobject_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPrintDialog_SuperMetacast(QPrintDialog* self, const char* param1) {
    return self->QPrintDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnMetacast(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_metacast_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPrintDialog_SuperMetacall(QPrintDialog* self, int param1, int param2, void** param3) {
    return self->QPrintDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnMetacall(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_metacall_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
int QPrintDialog_SuperExec(QPrintDialog* self) {
    return self->QPrintDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnExec(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_exec_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Exec_Callback>(slot);
}

// Base class handler implementation
void QPrintDialog_SuperAccept(QPrintDialog* self) {
    self->QPrintDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnAccept(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_accept_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Accept_Callback>(slot);
}

// Base class handler implementation
void QPrintDialog_SuperDone(QPrintDialog* self, int result) {
    self->QPrintDialog::done(static_cast<int>(result));
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnDone(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_done_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Done_Callback>(slot);
}

// Base class handler implementation
void QPrintDialog_SuperSetVisible(QPrintDialog* self, bool visible) {
    self->QPrintDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnSetVisible(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_setvisible_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QPrintDialog_SizeHint(const QPrintDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QPrintDialog_SuperSizeHint(const QPrintDialog* self) {
    return new QSize(self->QPrintDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnSizeHint(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self)))
        vqprintdialog->qprintdialog_sizehint_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QPrintDialog_MinimumSizeHint(const QPrintDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QPrintDialog_SuperMinimumSizeHint(const QPrintDialog* self) {
    return new QSize(self->QPrintDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnMinimumSizeHint(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self)))
        vqprintdialog->qprintdialog_minimumsizehint_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_Open(QPrintDialog* self) {
    self->open();
}

// Base class handler implementation
void QPrintDialog_SuperOpen(QPrintDialog* self) {
    self->QPrintDialog::open();
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnOpen(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_open_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Open_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_Reject(QPrintDialog* self) {
    self->reject();
}

// Base class handler implementation
void QPrintDialog_SuperReject(QPrintDialog* self) {
    self->QPrintDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnReject(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_reject_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_KeyPressEvent(QPrintDialog* self, QKeyEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperKeyPressEvent(QPrintDialog* self, QKeyEvent* param1) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnKeyPressEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_keypressevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_CloseEvent(QPrintDialog* self, QCloseEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperCloseEvent(QPrintDialog* self, QCloseEvent* param1) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnCloseEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_closeevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_ShowEvent(QPrintDialog* self, QShowEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperShowEvent(QPrintDialog* self, QShowEvent* param1) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnShowEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_showevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_ResizeEvent(QPrintDialog* self, QResizeEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperResizeEvent(QPrintDialog* self, QResizeEvent* param1) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnResizeEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_resizeevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_ContextMenuEvent(QPrintDialog* self, QContextMenuEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperContextMenuEvent(QPrintDialog* self, QContextMenuEvent* param1) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnContextMenuEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_contextmenuevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool QPrintDialog_EventFilter(QPrintDialog* self, QObject* param1, QEvent* param2) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        return vqprintdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPrintDialog_SuperEventFilter(QPrintDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        return vqprintdialog->QPrintDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnEventFilter(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_eventfilter_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int QPrintDialog_DevType(const QPrintDialog* self) {
    return self->devType();
}

// Base class handler implementation
int QPrintDialog_SuperDevType(const QPrintDialog* self) {
    return self->QPrintDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnDevType(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self)))
        vqprintdialog->qprintdialog_devtype_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int QPrintDialog_HeightForWidth(const QPrintDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QPrintDialog_SuperHeightForWidth(const QPrintDialog* self, int param1) {
    return self->QPrintDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnHeightForWidth(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self)))
        vqprintdialog->qprintdialog_heightforwidth_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QPrintDialog_HasHeightForWidth(const QPrintDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QPrintDialog_SuperHasHeightForWidth(const QPrintDialog* self) {
    return self->QPrintDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnHasHeightForWidth(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self)))
        vqprintdialog->qprintdialog_hasheightforwidth_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QPrintDialog_PaintEngine(const QPrintDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QPrintDialog_SuperPaintEngine(const QPrintDialog* self) {
    return self->QPrintDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnPaintEngine(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self)))
        vqprintdialog->qprintdialog_paintengine_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QPrintDialog_Event(QPrintDialog* self, QEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        return vqprintdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPrintDialog_SuperEvent(QPrintDialog* self, QEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        return vqprintdialog->QPrintDialog::event(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_event_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_MousePressEvent(QPrintDialog* self, QMouseEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperMousePressEvent(QPrintDialog* self, QMouseEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnMousePressEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_mousepressevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_MouseReleaseEvent(QPrintDialog* self, QMouseEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperMouseReleaseEvent(QPrintDialog* self, QMouseEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnMouseReleaseEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_mousereleaseevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_MouseDoubleClickEvent(QPrintDialog* self, QMouseEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperMouseDoubleClickEvent(QPrintDialog* self, QMouseEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnMouseDoubleClickEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_MouseMoveEvent(QPrintDialog* self, QMouseEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperMouseMoveEvent(QPrintDialog* self, QMouseEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnMouseMoveEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_mousemoveevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_WheelEvent(QPrintDialog* self, QWheelEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperWheelEvent(QPrintDialog* self, QWheelEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnWheelEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_wheelevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_KeyReleaseEvent(QPrintDialog* self, QKeyEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperKeyReleaseEvent(QPrintDialog* self, QKeyEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnKeyReleaseEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_keyreleaseevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_FocusInEvent(QPrintDialog* self, QFocusEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperFocusInEvent(QPrintDialog* self, QFocusEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnFocusInEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_focusinevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_FocusOutEvent(QPrintDialog* self, QFocusEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperFocusOutEvent(QPrintDialog* self, QFocusEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnFocusOutEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_focusoutevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_EnterEvent(QPrintDialog* self, QEnterEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperEnterEvent(QPrintDialog* self, QEnterEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnEnterEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_enterevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_LeaveEvent(QPrintDialog* self, QEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperLeaveEvent(QPrintDialog* self, QEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnLeaveEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_leaveevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_PaintEvent(QPrintDialog* self, QPaintEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperPaintEvent(QPrintDialog* self, QPaintEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnPaintEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_paintevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_MoveEvent(QPrintDialog* self, QMoveEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperMoveEvent(QPrintDialog* self, QMoveEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnMoveEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_moveevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_TabletEvent(QPrintDialog* self, QTabletEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperTabletEvent(QPrintDialog* self, QTabletEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnTabletEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_tabletevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_ActionEvent(QPrintDialog* self, QActionEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperActionEvent(QPrintDialog* self, QActionEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnActionEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_actionevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_DragEnterEvent(QPrintDialog* self, QDragEnterEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperDragEnterEvent(QPrintDialog* self, QDragEnterEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnDragEnterEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_dragenterevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_DragMoveEvent(QPrintDialog* self, QDragMoveEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperDragMoveEvent(QPrintDialog* self, QDragMoveEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnDragMoveEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_dragmoveevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_DragLeaveEvent(QPrintDialog* self, QDragLeaveEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperDragLeaveEvent(QPrintDialog* self, QDragLeaveEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnDragLeaveEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_dragleaveevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_DropEvent(QPrintDialog* self, QDropEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperDropEvent(QPrintDialog* self, QDropEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnDropEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_dropevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_HideEvent(QPrintDialog* self, QHideEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperHideEvent(QPrintDialog* self, QHideEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnHideEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_hideevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QPrintDialog_NativeEvent(QPrintDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        return vqprintdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPrintDialog_SuperNativeEvent(QPrintDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        return vqprintdialog->QPrintDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QPrintDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnNativeEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_nativeevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_ChangeEvent(QPrintDialog* self, QEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperChangeEvent(QPrintDialog* self, QEvent* param1) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnChangeEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_changeevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QPrintDialog_Metric(const QPrintDialog* self, int param1) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog) {
        return vqprintdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QPrintDialog_SuperMetric(const QPrintDialog* self, int param1) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self))) {
        return vqprintdialog->QPrintDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QPrintDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnMetric(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self)))
        vqprintdialog->qprintdialog_metric_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_InitPainter(const QPrintDialog* self, QPainter* painter) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog) {
        vqprintdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperInitPainter(const QPrintDialog* self, QPainter* painter) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self))) {
        vqprintdialog->QPrintDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnInitPainter(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self)))
        vqprintdialog->qprintdialog_initpainter_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QPrintDialog_Redirected(const QPrintDialog* self, QPoint* offset) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog) {
        return vqprintdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QPrintDialog_SuperRedirected(const QPrintDialog* self, QPoint* offset) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self))) {
        return vqprintdialog->QPrintDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnRedirected(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self)))
        vqprintdialog->qprintdialog_redirected_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QPrintDialog_SharedPainter(const QPrintDialog* self) {
    auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self));
    if (vqprintdialog) {
        return vqprintdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QPrintDialog_SuperSharedPainter(const QPrintDialog* self) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self))) {
        return vqprintdialog->QPrintDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QPrintDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnSharedPainter(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self)))
        vqprintdialog->qprintdialog_sharedpainter_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_InputMethodEvent(QPrintDialog* self, QInputMethodEvent* param1) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperInputMethodEvent(QPrintDialog* self, QInputMethodEvent* param1) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnInputMethodEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_inputmethodevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QPrintDialog_InputMethodQuery(const QPrintDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QPrintDialog_SuperInputMethodQuery(const QPrintDialog* self, int param1) {
    return new QVariant(self->QPrintDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnInputMethodQuery(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self)))
        vqprintdialog->qprintdialog_inputmethodquery_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QPrintDialog_FocusNextPrevChild(QPrintDialog* self, bool next) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        return vqprintdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPrintDialog_SuperFocusNextPrevChild(QPrintDialog* self, bool next) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        return vqprintdialog->QPrintDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnFocusNextPrevChild(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_focusnextprevchild_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_TimerEvent(QPrintDialog* self, QTimerEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperTimerEvent(QPrintDialog* self, QTimerEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnTimerEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_timerevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_ChildEvent(QPrintDialog* self, QChildEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperChildEvent(QPrintDialog* self, QChildEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnChildEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_childevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_CustomEvent(QPrintDialog* self, QEvent* event) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperCustomEvent(QPrintDialog* self, QEvent* event) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnCustomEvent(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_customevent_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_ConnectNotify(QPrintDialog* self, const QMetaMethod* signal) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperConnectNotify(QPrintDialog* self, const QMetaMethod* signal) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnConnectNotify(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_connectnotify_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPrintDialog_DisconnectNotify(QPrintDialog* self, const QMetaMethod* signal) {
    auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self);
    if (vqprintdialog) {
        vqprintdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPrintDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrintDialog_SuperDisconnectNotify(QPrintDialog* self, const QMetaMethod* signal) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->QPrintDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPrintDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrintDialog_OnDisconnectNotify(QPrintDialog* self, intptr_t slot) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self))
        vqprintdialog->qprintdialog_disconnectnotify_callback = reinterpret_cast<VirtualQPrintDialog::QPrintDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QPrintDialog_AdjustPosition(QPrintDialog* self, QWidget* param1) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->VirtualQPrintDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method QPrintDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QPrintDialog_UpdateMicroFocus(QPrintDialog* self) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->VirtualQPrintDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method QPrintDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QPrintDialog_Create(QPrintDialog* self) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->VirtualQPrintDialog::create();
    } else
        qFatal("Error: Protected method QPrintDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QPrintDialog_Destroy(QPrintDialog* self) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        vqprintdialog->VirtualQPrintDialog::destroy();
    } else
        qFatal("Error: Protected method QPrintDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPrintDialog_FocusNextChild(QPrintDialog* self) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        return vqprintdialog->VirtualQPrintDialog::focusNextChild();
    } else
        qFatal("Error: Protected method QPrintDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPrintDialog_FocusPreviousChild(QPrintDialog* self) {
    if (auto* vqprintdialog = dynamic_cast<VirtualQPrintDialog*>(self)) {
        return vqprintdialog->VirtualQPrintDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method QPrintDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPrintDialog_Sender(const QPrintDialog* self) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self))) {
        return vqprintdialog->VirtualQPrintDialog::sender();
    } else
        qFatal("Error: Protected method QPrintDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPrintDialog_SenderSignalIndex(const QPrintDialog* self) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self))) {
        return vqprintdialog->VirtualQPrintDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPrintDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPrintDialog_Receivers(const QPrintDialog* self, const char* signal) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self))) {
        return vqprintdialog->VirtualQPrintDialog::receivers(signal);
    } else
        qFatal("Error: Protected method QPrintDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPrintDialog_IsSignalConnected(const QPrintDialog* self, const QMetaMethod* signal) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self))) {
        return vqprintdialog->VirtualQPrintDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPrintDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QPrintDialog_GetDecodedMetricF(const QPrintDialog* self, int metricA, int metricB) {
    if (auto* vqprintdialog = const_cast<VirtualQPrintDialog*>(dynamic_cast<const VirtualQPrintDialog*>(self))) {
        return vqprintdialog->VirtualQPrintDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QPrintDialog::getDecodedMetricF called without a directly constructed type");
}

void QPrintDialog_Delete(QPrintDialog* self) {
    delete self;
}
