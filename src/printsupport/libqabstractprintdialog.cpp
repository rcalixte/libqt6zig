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
#include <QList>
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
#include <qabstractprintdialog.h>
#include "libqabstractprintdialog.h"
#include "libqabstractprintdialog.hxx"

QAbstractPrintDialog* QAbstractPrintDialog_new(QPrinter* printer) {
    return new VirtualQAbstractPrintDialog(printer);
}

QAbstractPrintDialog* QAbstractPrintDialog_new2(QPrinter* printer, QWidget* parent) {
    return new VirtualQAbstractPrintDialog(printer, parent);
}

QMetaObject* QAbstractPrintDialog_MetaObject(const QAbstractPrintDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractPrintDialog_Metacast(QAbstractPrintDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractPrintDialog_Metacall(QAbstractPrintDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractPrintDialog_Tr(const char* s) {
    auto _ret = QAbstractPrintDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractPrintDialog_SetOptionTabs(QAbstractPrintDialog* self, const libqt_list /* of QWidget* */ tabs) {
    QList<QWidget*> tabs_QList;
    tabs_QList.reserve(tabs.len);
    QWidget** tabs_arr = static_cast<QWidget**>(tabs.data);
    for (size_t i = 0; i < tabs.len; ++i) {
        tabs_QList.push_back(tabs_arr[i]);
    }
    self->setOptionTabs(tabs_QList);
}

void QAbstractPrintDialog_SetPrintRange(QAbstractPrintDialog* self, int range) {
    self->setPrintRange(static_cast<QAbstractPrintDialog::PrintRange>(range));
}

int QAbstractPrintDialog_PrintRange(const QAbstractPrintDialog* self) {
    return static_cast<int>(self->printRange());
}

void QAbstractPrintDialog_SetMinMax(QAbstractPrintDialog* self, int min, int max) {
    self->setMinMax(static_cast<int>(min), static_cast<int>(max));
}

int QAbstractPrintDialog_MinPage(const QAbstractPrintDialog* self) {
    return self->minPage();
}

int QAbstractPrintDialog_MaxPage(const QAbstractPrintDialog* self) {
    return self->maxPage();
}

void QAbstractPrintDialog_SetFromTo(QAbstractPrintDialog* self, int fromPage, int toPage) {
    self->setFromTo(static_cast<int>(fromPage), static_cast<int>(toPage));
}

int QAbstractPrintDialog_FromPage(const QAbstractPrintDialog* self) {
    return self->fromPage();
}

int QAbstractPrintDialog_ToPage(const QAbstractPrintDialog* self) {
    return self->toPage();
}

QPrinter* QAbstractPrintDialog_Printer(const QAbstractPrintDialog* self) {
    return self->printer();
}

libqt_string QAbstractPrintDialog_Tr2(const char* s, const char* c) {
    auto _ret = QAbstractPrintDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractPrintDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAbstractPrintDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAbstractPrintDialog_SuperMetaObject(const QAbstractPrintDialog* self) {
    return (QMetaObject*)self->QAbstractPrintDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnMetaObject(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self)))
        vqabstractprintdialog->qabstractprintdialog_metaobject_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAbstractPrintDialog_SuperMetacast(QAbstractPrintDialog* self, const char* param1) {
    return self->QAbstractPrintDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnMetacast(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_metacast_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAbstractPrintDialog_SuperMetacall(QAbstractPrintDialog* self, int param1, int param2, void** param3) {
    return self->QAbstractPrintDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnMetacall(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_metacall_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Metacall_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_SetVisible(QAbstractPrintDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QAbstractPrintDialog_SuperSetVisible(QAbstractPrintDialog* self, bool visible) {
    self->QAbstractPrintDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnSetVisible(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_setvisible_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QAbstractPrintDialog_SizeHint(const QAbstractPrintDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QAbstractPrintDialog_SuperSizeHint(const QAbstractPrintDialog* self) {
    return new QSize(self->QAbstractPrintDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnSizeHint(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self)))
        vqabstractprintdialog->qabstractprintdialog_sizehint_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QAbstractPrintDialog_MinimumSizeHint(const QAbstractPrintDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QAbstractPrintDialog_SuperMinimumSizeHint(const QAbstractPrintDialog* self) {
    return new QSize(self->QAbstractPrintDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnMinimumSizeHint(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self)))
        vqabstractprintdialog->qabstractprintdialog_minimumsizehint_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_Open(QAbstractPrintDialog* self) {
    self->open();
}

// Base class handler implementation
void QAbstractPrintDialog_SuperOpen(QAbstractPrintDialog* self) {
    self->QAbstractPrintDialog::open();
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnOpen(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_open_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int QAbstractPrintDialog_Exec(QAbstractPrintDialog* self) {
    return self->exec();
}

// Base class handler implementation
int QAbstractPrintDialog_SuperExec(QAbstractPrintDialog* self) {
    return self->QAbstractPrintDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnExec(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_exec_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_Done(QAbstractPrintDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void QAbstractPrintDialog_SuperDone(QAbstractPrintDialog* self, int param1) {
    self->QAbstractPrintDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnDone(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_done_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_Accept(QAbstractPrintDialog* self) {
    self->accept();
}

// Base class handler implementation
void QAbstractPrintDialog_SuperAccept(QAbstractPrintDialog* self) {
    self->QAbstractPrintDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnAccept(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_accept_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_Reject(QAbstractPrintDialog* self) {
    self->reject();
}

// Base class handler implementation
void QAbstractPrintDialog_SuperReject(QAbstractPrintDialog* self) {
    self->QAbstractPrintDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnReject(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_reject_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_KeyPressEvent(QAbstractPrintDialog* self, QKeyEvent* param1) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperKeyPressEvent(QAbstractPrintDialog* self, QKeyEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnKeyPressEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_keypressevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_CloseEvent(QAbstractPrintDialog* self, QCloseEvent* param1) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperCloseEvent(QAbstractPrintDialog* self, QCloseEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnCloseEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_closeevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_ShowEvent(QAbstractPrintDialog* self, QShowEvent* param1) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperShowEvent(QAbstractPrintDialog* self, QShowEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnShowEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_showevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_ResizeEvent(QAbstractPrintDialog* self, QResizeEvent* param1) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperResizeEvent(QAbstractPrintDialog* self, QResizeEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnResizeEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_resizeevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_ContextMenuEvent(QAbstractPrintDialog* self, QContextMenuEvent* param1) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperContextMenuEvent(QAbstractPrintDialog* self, QContextMenuEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnContextMenuEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_contextmenuevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractPrintDialog_EventFilter(QAbstractPrintDialog* self, QObject* param1, QEvent* param2) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        return vqabstractprintdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QAbstractPrintDialog_SuperEventFilter(QAbstractPrintDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        return vqabstractprintdialog->QAbstractPrintDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnEventFilter(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_eventfilter_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int QAbstractPrintDialog_DevType(const QAbstractPrintDialog* self) {
    return self->devType();
}

// Base class handler implementation
int QAbstractPrintDialog_SuperDevType(const QAbstractPrintDialog* self) {
    return self->QAbstractPrintDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnDevType(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self)))
        vqabstractprintdialog->qabstractprintdialog_devtype_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int QAbstractPrintDialog_HeightForWidth(const QAbstractPrintDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QAbstractPrintDialog_SuperHeightForWidth(const QAbstractPrintDialog* self, int param1) {
    return self->QAbstractPrintDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnHeightForWidth(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self)))
        vqabstractprintdialog->qabstractprintdialog_heightforwidth_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractPrintDialog_HasHeightForWidth(const QAbstractPrintDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QAbstractPrintDialog_SuperHasHeightForWidth(const QAbstractPrintDialog* self) {
    return self->QAbstractPrintDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnHasHeightForWidth(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self)))
        vqabstractprintdialog->qabstractprintdialog_hasheightforwidth_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QAbstractPrintDialog_PaintEngine(const QAbstractPrintDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QAbstractPrintDialog_SuperPaintEngine(const QAbstractPrintDialog* self) {
    return self->QAbstractPrintDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnPaintEngine(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self)))
        vqabstractprintdialog->qabstractprintdialog_paintengine_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractPrintDialog_Event(QAbstractPrintDialog* self, QEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        return vqabstractprintdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QAbstractPrintDialog_SuperEvent(QAbstractPrintDialog* self, QEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        return vqabstractprintdialog->QAbstractPrintDialog::event(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_event_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_MousePressEvent(QAbstractPrintDialog* self, QMouseEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperMousePressEvent(QAbstractPrintDialog* self, QMouseEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnMousePressEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_mousepressevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_MouseReleaseEvent(QAbstractPrintDialog* self, QMouseEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperMouseReleaseEvent(QAbstractPrintDialog* self, QMouseEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnMouseReleaseEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_mousereleaseevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_MouseDoubleClickEvent(QAbstractPrintDialog* self, QMouseEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperMouseDoubleClickEvent(QAbstractPrintDialog* self, QMouseEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnMouseDoubleClickEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_MouseMoveEvent(QAbstractPrintDialog* self, QMouseEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperMouseMoveEvent(QAbstractPrintDialog* self, QMouseEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnMouseMoveEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_mousemoveevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_WheelEvent(QAbstractPrintDialog* self, QWheelEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperWheelEvent(QAbstractPrintDialog* self, QWheelEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnWheelEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_wheelevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_KeyReleaseEvent(QAbstractPrintDialog* self, QKeyEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperKeyReleaseEvent(QAbstractPrintDialog* self, QKeyEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnKeyReleaseEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_keyreleaseevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_FocusInEvent(QAbstractPrintDialog* self, QFocusEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperFocusInEvent(QAbstractPrintDialog* self, QFocusEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnFocusInEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_focusinevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_FocusOutEvent(QAbstractPrintDialog* self, QFocusEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperFocusOutEvent(QAbstractPrintDialog* self, QFocusEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnFocusOutEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_focusoutevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_EnterEvent(QAbstractPrintDialog* self, QEnterEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperEnterEvent(QAbstractPrintDialog* self, QEnterEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnEnterEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_enterevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_LeaveEvent(QAbstractPrintDialog* self, QEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperLeaveEvent(QAbstractPrintDialog* self, QEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnLeaveEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_leaveevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_PaintEvent(QAbstractPrintDialog* self, QPaintEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperPaintEvent(QAbstractPrintDialog* self, QPaintEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnPaintEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_paintevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_MoveEvent(QAbstractPrintDialog* self, QMoveEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperMoveEvent(QAbstractPrintDialog* self, QMoveEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnMoveEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_moveevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_TabletEvent(QAbstractPrintDialog* self, QTabletEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperTabletEvent(QAbstractPrintDialog* self, QTabletEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnTabletEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_tabletevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_ActionEvent(QAbstractPrintDialog* self, QActionEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperActionEvent(QAbstractPrintDialog* self, QActionEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnActionEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_actionevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_DragEnterEvent(QAbstractPrintDialog* self, QDragEnterEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperDragEnterEvent(QAbstractPrintDialog* self, QDragEnterEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnDragEnterEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_dragenterevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_DragMoveEvent(QAbstractPrintDialog* self, QDragMoveEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperDragMoveEvent(QAbstractPrintDialog* self, QDragMoveEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnDragMoveEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_dragmoveevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_DragLeaveEvent(QAbstractPrintDialog* self, QDragLeaveEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperDragLeaveEvent(QAbstractPrintDialog* self, QDragLeaveEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnDragLeaveEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_dragleaveevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_DropEvent(QAbstractPrintDialog* self, QDropEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperDropEvent(QAbstractPrintDialog* self, QDropEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnDropEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_dropevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_HideEvent(QAbstractPrintDialog* self, QHideEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperHideEvent(QAbstractPrintDialog* self, QHideEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnHideEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_hideevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractPrintDialog_NativeEvent(QAbstractPrintDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        return vqabstractprintdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QAbstractPrintDialog_SuperNativeEvent(QAbstractPrintDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        return vqabstractprintdialog->QAbstractPrintDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnNativeEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_nativeevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_ChangeEvent(QAbstractPrintDialog* self, QEvent* param1) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperChangeEvent(QAbstractPrintDialog* self, QEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnChangeEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_changeevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QAbstractPrintDialog_Metric(const QAbstractPrintDialog* self, int param1) {
    auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self));
    if (vqabstractprintdialog) {
        return vqabstractprintdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QAbstractPrintDialog_SuperMetric(const QAbstractPrintDialog* self, int param1) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return vqabstractprintdialog->QAbstractPrintDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnMetric(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self)))
        vqabstractprintdialog->qabstractprintdialog_metric_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_InitPainter(const QAbstractPrintDialog* self, QPainter* painter) {
    auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self));
    if (vqabstractprintdialog) {
        vqabstractprintdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperInitPainter(const QAbstractPrintDialog* self, QPainter* painter) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->QAbstractPrintDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnInitPainter(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self)))
        vqabstractprintdialog->qabstractprintdialog_initpainter_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QAbstractPrintDialog_Redirected(const QAbstractPrintDialog* self, QPoint* offset) {
    auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self));
    if (vqabstractprintdialog) {
        return vqabstractprintdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QAbstractPrintDialog_SuperRedirected(const QAbstractPrintDialog* self, QPoint* offset) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return vqabstractprintdialog->QAbstractPrintDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnRedirected(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self)))
        vqabstractprintdialog->qabstractprintdialog_redirected_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QAbstractPrintDialog_SharedPainter(const QAbstractPrintDialog* self) {
    auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self));
    if (vqabstractprintdialog) {
        return vqabstractprintdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QAbstractPrintDialog_SuperSharedPainter(const QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return vqabstractprintdialog->QAbstractPrintDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnSharedPainter(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self)))
        vqabstractprintdialog->qabstractprintdialog_sharedpainter_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_InputMethodEvent(QAbstractPrintDialog* self, QInputMethodEvent* param1) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperInputMethodEvent(QAbstractPrintDialog* self, QInputMethodEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnInputMethodEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_inputmethodevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QAbstractPrintDialog_InputMethodQuery(const QAbstractPrintDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QAbstractPrintDialog_SuperInputMethodQuery(const QAbstractPrintDialog* self, int param1) {
    return new QVariant(self->QAbstractPrintDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnInputMethodQuery(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self)))
        vqabstractprintdialog->qabstractprintdialog_inputmethodquery_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractPrintDialog_FocusNextPrevChild(QAbstractPrintDialog* self, bool next) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        return vqabstractprintdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QAbstractPrintDialog_SuperFocusNextPrevChild(QAbstractPrintDialog* self, bool next) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        return vqabstractprintdialog->QAbstractPrintDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnFocusNextPrevChild(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_focusnextprevchild_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_TimerEvent(QAbstractPrintDialog* self, QTimerEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperTimerEvent(QAbstractPrintDialog* self, QTimerEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnTimerEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_timerevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_ChildEvent(QAbstractPrintDialog* self, QChildEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperChildEvent(QAbstractPrintDialog* self, QChildEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnChildEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_childevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_CustomEvent(QAbstractPrintDialog* self, QEvent* event) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperCustomEvent(QAbstractPrintDialog* self, QEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnCustomEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_customevent_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_ConnectNotify(QAbstractPrintDialog* self, const QMetaMethod* signal) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperConnectNotify(QAbstractPrintDialog* self, const QMetaMethod* signal) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnConnectNotify(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_connectnotify_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAbstractPrintDialog_DisconnectNotify(QAbstractPrintDialog* self, const QMetaMethod* signal) {
    auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self);
    if (vqabstractprintdialog) {
        vqabstractprintdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractPrintDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractPrintDialog_SuperDisconnectNotify(QAbstractPrintDialog* self, const QMetaMethod* signal) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->QAbstractPrintDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractPrintDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnDisconnectNotify(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self))
        vqabstractprintdialog->qabstractprintdialog_disconnectnotify_callback = reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QAbstractPrintDialog_AdjustPosition(QAbstractPrintDialog* self, QWidget* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->VirtualQAbstractPrintDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method QAbstractPrintDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractPrintDialog_UpdateMicroFocus(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->VirtualQAbstractPrintDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method QAbstractPrintDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractPrintDialog_Create(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->VirtualQAbstractPrintDialog::create();
    } else
        qFatal("Error: Protected method QAbstractPrintDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractPrintDialog_Destroy(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->VirtualQAbstractPrintDialog::destroy();
    } else
        qFatal("Error: Protected method QAbstractPrintDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractPrintDialog_FocusNextChild(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        return vqabstractprintdialog->VirtualQAbstractPrintDialog::focusNextChild();
    } else
        qFatal("Error: Protected method QAbstractPrintDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractPrintDialog_FocusPreviousChild(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        return vqabstractprintdialog->VirtualQAbstractPrintDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method QAbstractPrintDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QAbstractPrintDialog_Sender(const QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return vqabstractprintdialog->VirtualQAbstractPrintDialog::sender();
    } else
        qFatal("Error: Protected method QAbstractPrintDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractPrintDialog_SenderSignalIndex(const QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return vqabstractprintdialog->VirtualQAbstractPrintDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAbstractPrintDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractPrintDialog_Receivers(const QAbstractPrintDialog* self, const char* signal) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return vqabstractprintdialog->VirtualQAbstractPrintDialog::receivers(signal);
    } else
        qFatal("Error: Protected method QAbstractPrintDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractPrintDialog_IsSignalConnected(const QAbstractPrintDialog* self, const QMetaMethod* signal) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return vqabstractprintdialog->VirtualQAbstractPrintDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAbstractPrintDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QAbstractPrintDialog_GetDecodedMetricF(const QAbstractPrintDialog* self, int metricA, int metricB) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return vqabstractprintdialog->VirtualQAbstractPrintDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QAbstractPrintDialog::getDecodedMetricF called without a directly constructed type");
}

void QAbstractPrintDialog_Delete(QAbstractPrintDialog* self) {
    delete self;
}
