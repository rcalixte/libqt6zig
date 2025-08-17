#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
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
#include <QMdiArea>
#include <QMdiSubWindow>
#include <QMenu>
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
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qmdisubwindow.h>
#include "libqmdisubwindow.h"
#include "libqmdisubwindow.hxx"

QMdiSubWindow* QMdiSubWindow_new(QWidget* parent) {
    return new VirtualQMdiSubWindow(parent);
}

QMdiSubWindow* QMdiSubWindow_new2() {
    return new VirtualQMdiSubWindow();
}

QMdiSubWindow* QMdiSubWindow_new3(QWidget* parent, int flags) {
    return new VirtualQMdiSubWindow(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QMdiSubWindow_MetaObject(const QMdiSubWindow* self) {
    return (QMetaObject*)self->metaObject();
}

void* QMdiSubWindow_Metacast(QMdiSubWindow* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QMdiSubWindow_Metacall(QMdiSubWindow* self, int param1, int param2, void** param3) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMdiSubWindow*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QMdiSubWindow_OnMetacall(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_Metacall_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QMdiSubWindow_QBaseMetacall(QMdiSubWindow* self, int param1, int param2, void** param3) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_Metacall_IsBase(true);
        return vqmdisubwindow->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMdiSubWindow*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QMdiSubWindow_Tr(const char* s) {
    QString _ret = QMdiSubWindow::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QMdiSubWindow_SetWidget(QMdiSubWindow* self, QWidget* widget) {
    self->setWidget(widget);
}

QWidget* QMdiSubWindow_Widget(const QMdiSubWindow* self) {
    return self->widget();
}

QWidget* QMdiSubWindow_MaximizedButtonsWidget(const QMdiSubWindow* self) {
    return self->maximizedButtonsWidget();
}

QWidget* QMdiSubWindow_MaximizedSystemMenuIconWidget(const QMdiSubWindow* self) {
    return self->maximizedSystemMenuIconWidget();
}

bool QMdiSubWindow_IsShaded(const QMdiSubWindow* self) {
    return self->isShaded();
}

void QMdiSubWindow_SetOption(QMdiSubWindow* self, int option) {
    self->setOption(static_cast<QMdiSubWindow::SubWindowOption>(option));
}

bool QMdiSubWindow_TestOption(const QMdiSubWindow* self, int param1) {
    return self->testOption(static_cast<QMdiSubWindow::SubWindowOption>(param1));
}

void QMdiSubWindow_SetKeyboardSingleStep(QMdiSubWindow* self, int step) {
    self->setKeyboardSingleStep(static_cast<int>(step));
}

int QMdiSubWindow_KeyboardSingleStep(const QMdiSubWindow* self) {
    return self->keyboardSingleStep();
}

void QMdiSubWindow_SetKeyboardPageStep(QMdiSubWindow* self, int step) {
    self->setKeyboardPageStep(static_cast<int>(step));
}

int QMdiSubWindow_KeyboardPageStep(const QMdiSubWindow* self) {
    return self->keyboardPageStep();
}

void QMdiSubWindow_SetSystemMenu(QMdiSubWindow* self, QMenu* systemMenu) {
    self->setSystemMenu(systemMenu);
}

QMenu* QMdiSubWindow_SystemMenu(const QMdiSubWindow* self) {
    return self->systemMenu();
}

QMdiArea* QMdiSubWindow_MdiArea(const QMdiSubWindow* self) {
    return self->mdiArea();
}

void QMdiSubWindow_WindowStateChanged(QMdiSubWindow* self, int oldState, int newState) {
    self->windowStateChanged(static_cast<Qt::WindowStates>(oldState), static_cast<Qt::WindowStates>(newState));
}

void QMdiSubWindow_Connect_WindowStateChanged(QMdiSubWindow* self, intptr_t slot) {
    void (*slotFunc)(QMdiSubWindow*, int, int) = reinterpret_cast<void (*)(QMdiSubWindow*, int, int)>(slot);
    QMdiSubWindow::connect(self, &QMdiSubWindow::windowStateChanged, [self, slotFunc](Qt::WindowStates oldState, Qt::WindowStates newState) {
        int sigval1 = static_cast<int>(oldState);
        int sigval2 = static_cast<int>(newState);
        slotFunc(self, sigval1, sigval2);
    });
}

void QMdiSubWindow_AboutToActivate(QMdiSubWindow* self) {
    self->aboutToActivate();
}

void QMdiSubWindow_Connect_AboutToActivate(QMdiSubWindow* self, intptr_t slot) {
    void (*slotFunc)(QMdiSubWindow*) = reinterpret_cast<void (*)(QMdiSubWindow*)>(slot);
    QMdiSubWindow::connect(self, &QMdiSubWindow::aboutToActivate, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMdiSubWindow_ShowSystemMenu(QMdiSubWindow* self) {
    self->showSystemMenu();
}

void QMdiSubWindow_ShowShaded(QMdiSubWindow* self) {
    self->showShaded();
}

libqt_string QMdiSubWindow_Tr2(const char* s, const char* c) {
    QString _ret = QMdiSubWindow::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMdiSubWindow_Tr3(const char* s, const char* c, int n) {
    QString _ret = QMdiSubWindow::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QMdiSubWindow_SetOption2(QMdiSubWindow* self, int option, bool on) {
    self->setOption(static_cast<QMdiSubWindow::SubWindowOption>(option), on);
}

// Derived class handler implementation
QSize* QMdiSubWindow_SizeHint(const QMdiSubWindow* self) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return new QSize(vqmdisubwindow->sizeHint());
    } else {
        return new QSize(((VirtualQMdiSubWindow*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QMdiSubWindow_QBaseSizeHint(const QMdiSubWindow* self) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_SizeHint_IsBase(true);
        return new QSize(vqmdisubwindow->sizeHint());
    } else {
        return new QSize(((VirtualQMdiSubWindow*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnSizeHint(const QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_SizeHint_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QMdiSubWindow_MinimumSizeHint(const QMdiSubWindow* self) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return new QSize(vqmdisubwindow->minimumSizeHint());
    } else {
        return new QSize(((VirtualQMdiSubWindow*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QMdiSubWindow_QBaseMinimumSizeHint(const QMdiSubWindow* self) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_MinimumSizeHint_IsBase(true);
        return new QSize(vqmdisubwindow->minimumSizeHint());
    } else {
        return new QSize(((VirtualQMdiSubWindow*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMinimumSizeHint(const QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_MinimumSizeHint_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiSubWindow_EventFilter(QMdiSubWindow* self, QObject* object, QEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return vqmdisubwindow->eventFilter(object, event);
    } else {
        return ((VirtualQMdiSubWindow*)self)->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QMdiSubWindow_QBaseEventFilter(QMdiSubWindow* self, QObject* object, QEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_EventFilter_IsBase(true);
        return vqmdisubwindow->eventFilter(object, event);
    } else {
        return ((VirtualQMdiSubWindow*)self)->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnEventFilter(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_EventFilter_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiSubWindow_Event(QMdiSubWindow* self, QEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return vqmdisubwindow->event(event);
    } else {
        return ((VirtualQMdiSubWindow*)self)->event(event);
    }
}

// Base class handler implementation
bool QMdiSubWindow_QBaseEvent(QMdiSubWindow* self, QEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_Event_IsBase(true);
        return vqmdisubwindow->event(event);
    } else {
        return ((VirtualQMdiSubWindow*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_Event_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_ShowEvent(QMdiSubWindow* self, QShowEvent* showEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->showEvent(showEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->showEvent(showEvent);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseShowEvent(QMdiSubWindow* self, QShowEvent* showEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_ShowEvent_IsBase(true);
        vqmdisubwindow->showEvent(showEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->showEvent(showEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnShowEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_ShowEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_HideEvent(QMdiSubWindow* self, QHideEvent* hideEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->hideEvent(hideEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->hideEvent(hideEvent);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseHideEvent(QMdiSubWindow* self, QHideEvent* hideEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_HideEvent_IsBase(true);
        vqmdisubwindow->hideEvent(hideEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->hideEvent(hideEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnHideEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_HideEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_ChangeEvent(QMdiSubWindow* self, QEvent* changeEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->changeEvent(changeEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->changeEvent(changeEvent);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseChangeEvent(QMdiSubWindow* self, QEvent* changeEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_ChangeEvent_IsBase(true);
        vqmdisubwindow->changeEvent(changeEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->changeEvent(changeEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnChangeEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_ChangeEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_CloseEvent(QMdiSubWindow* self, QCloseEvent* closeEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->closeEvent(closeEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->closeEvent(closeEvent);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseCloseEvent(QMdiSubWindow* self, QCloseEvent* closeEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_CloseEvent_IsBase(true);
        vqmdisubwindow->closeEvent(closeEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->closeEvent(closeEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnCloseEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_CloseEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_LeaveEvent(QMdiSubWindow* self, QEvent* leaveEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->leaveEvent(leaveEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->leaveEvent(leaveEvent);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseLeaveEvent(QMdiSubWindow* self, QEvent* leaveEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_LeaveEvent_IsBase(true);
        vqmdisubwindow->leaveEvent(leaveEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->leaveEvent(leaveEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnLeaveEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_LeaveEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_ResizeEvent(QMdiSubWindow* self, QResizeEvent* resizeEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->resizeEvent(resizeEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->resizeEvent(resizeEvent);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseResizeEvent(QMdiSubWindow* self, QResizeEvent* resizeEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_ResizeEvent_IsBase(true);
        vqmdisubwindow->resizeEvent(resizeEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->resizeEvent(resizeEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnResizeEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_ResizeEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_TimerEvent(QMdiSubWindow* self, QTimerEvent* timerEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->timerEvent(timerEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->timerEvent(timerEvent);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseTimerEvent(QMdiSubWindow* self, QTimerEvent* timerEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_TimerEvent_IsBase(true);
        vqmdisubwindow->timerEvent(timerEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->timerEvent(timerEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnTimerEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_TimerEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_MoveEvent(QMdiSubWindow* self, QMoveEvent* moveEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->moveEvent(moveEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->moveEvent(moveEvent);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseMoveEvent(QMdiSubWindow* self, QMoveEvent* moveEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_MoveEvent_IsBase(true);
        vqmdisubwindow->moveEvent(moveEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->moveEvent(moveEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMoveEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_MoveEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_PaintEvent(QMdiSubWindow* self, QPaintEvent* paintEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->paintEvent(paintEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->paintEvent(paintEvent);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBasePaintEvent(QMdiSubWindow* self, QPaintEvent* paintEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_PaintEvent_IsBase(true);
        vqmdisubwindow->paintEvent(paintEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->paintEvent(paintEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnPaintEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_PaintEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_MousePressEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->mousePressEvent(mouseEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->mousePressEvent(mouseEvent);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseMousePressEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_MousePressEvent_IsBase(true);
        vqmdisubwindow->mousePressEvent(mouseEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->mousePressEvent(mouseEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMousePressEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_MousePressEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_MouseDoubleClickEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->mouseDoubleClickEvent(mouseEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->mouseDoubleClickEvent(mouseEvent);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseMouseDoubleClickEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_MouseDoubleClickEvent_IsBase(true);
        vqmdisubwindow->mouseDoubleClickEvent(mouseEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->mouseDoubleClickEvent(mouseEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMouseDoubleClickEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_MouseReleaseEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->mouseReleaseEvent(mouseEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->mouseReleaseEvent(mouseEvent);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseMouseReleaseEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_MouseReleaseEvent_IsBase(true);
        vqmdisubwindow->mouseReleaseEvent(mouseEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->mouseReleaseEvent(mouseEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMouseReleaseEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_MouseMoveEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->mouseMoveEvent(mouseEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->mouseMoveEvent(mouseEvent);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseMouseMoveEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_MouseMoveEvent_IsBase(true);
        vqmdisubwindow->mouseMoveEvent(mouseEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->mouseMoveEvent(mouseEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMouseMoveEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_MouseMoveEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_KeyPressEvent(QMdiSubWindow* self, QKeyEvent* keyEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->keyPressEvent(keyEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->keyPressEvent(keyEvent);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseKeyPressEvent(QMdiSubWindow* self, QKeyEvent* keyEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_KeyPressEvent_IsBase(true);
        vqmdisubwindow->keyPressEvent(keyEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->keyPressEvent(keyEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnKeyPressEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_KeyPressEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_ContextMenuEvent(QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->contextMenuEvent(contextMenuEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->contextMenuEvent(contextMenuEvent);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseContextMenuEvent(QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_ContextMenuEvent_IsBase(true);
        vqmdisubwindow->contextMenuEvent(contextMenuEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->contextMenuEvent(contextMenuEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnContextMenuEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_ContextMenuEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_FocusInEvent(QMdiSubWindow* self, QFocusEvent* focusInEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->focusInEvent(focusInEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->focusInEvent(focusInEvent);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseFocusInEvent(QMdiSubWindow* self, QFocusEvent* focusInEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_FocusInEvent_IsBase(true);
        vqmdisubwindow->focusInEvent(focusInEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->focusInEvent(focusInEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnFocusInEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_FocusInEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_FocusOutEvent(QMdiSubWindow* self, QFocusEvent* focusOutEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->focusOutEvent(focusOutEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->focusOutEvent(focusOutEvent);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseFocusOutEvent(QMdiSubWindow* self, QFocusEvent* focusOutEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_FocusOutEvent_IsBase(true);
        vqmdisubwindow->focusOutEvent(focusOutEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->focusOutEvent(focusOutEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnFocusOutEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_FocusOutEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_ChildEvent(QMdiSubWindow* self, QChildEvent* childEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->childEvent(childEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->childEvent(childEvent);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseChildEvent(QMdiSubWindow* self, QChildEvent* childEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_ChildEvent_IsBase(true);
        vqmdisubwindow->childEvent(childEvent);
    } else {
        ((VirtualQMdiSubWindow*)self)->childEvent(childEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnChildEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_ChildEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QMdiSubWindow_DevType(const QMdiSubWindow* self) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return vqmdisubwindow->devType();
    } else {
        return self->QMdiSubWindow::devType();
    }
}

// Base class handler implementation
int QMdiSubWindow_QBaseDevType(const QMdiSubWindow* self) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_DevType_IsBase(true);
        return vqmdisubwindow->devType();
    } else {
        return self->QMdiSubWindow::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnDevType(const QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_DevType_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_SetVisible(QMdiSubWindow* self, bool visible) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setVisible(visible);
    } else {
        self->QMdiSubWindow::setVisible(visible);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseSetVisible(QMdiSubWindow* self, bool visible) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_SetVisible_IsBase(true);
        vqmdisubwindow->setVisible(visible);
    } else {
        self->QMdiSubWindow::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnSetVisible(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_SetVisible_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QMdiSubWindow_HeightForWidth(const QMdiSubWindow* self, int param1) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return vqmdisubwindow->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QMdiSubWindow::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QMdiSubWindow_QBaseHeightForWidth(const QMdiSubWindow* self, int param1) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_HeightForWidth_IsBase(true);
        return vqmdisubwindow->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QMdiSubWindow::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnHeightForWidth(const QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_HeightForWidth_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiSubWindow_HasHeightForWidth(const QMdiSubWindow* self) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return vqmdisubwindow->hasHeightForWidth();
    } else {
        return self->QMdiSubWindow::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QMdiSubWindow_QBaseHasHeightForWidth(const QMdiSubWindow* self) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_HasHeightForWidth_IsBase(true);
        return vqmdisubwindow->hasHeightForWidth();
    } else {
        return self->QMdiSubWindow::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnHasHeightForWidth(const QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_HasHeightForWidth_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QMdiSubWindow_PaintEngine(const QMdiSubWindow* self) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return vqmdisubwindow->paintEngine();
    } else {
        return self->QMdiSubWindow::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QMdiSubWindow_QBasePaintEngine(const QMdiSubWindow* self) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_PaintEngine_IsBase(true);
        return vqmdisubwindow->paintEngine();
    } else {
        return self->QMdiSubWindow::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnPaintEngine(const QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_PaintEngine_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_WheelEvent(QMdiSubWindow* self, QWheelEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->wheelEvent(event);
    } else {
        ((VirtualQMdiSubWindow*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseWheelEvent(QMdiSubWindow* self, QWheelEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_WheelEvent_IsBase(true);
        vqmdisubwindow->wheelEvent(event);
    } else {
        ((VirtualQMdiSubWindow*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnWheelEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_WheelEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_KeyReleaseEvent(QMdiSubWindow* self, QKeyEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->keyReleaseEvent(event);
    } else {
        ((VirtualQMdiSubWindow*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseKeyReleaseEvent(QMdiSubWindow* self, QKeyEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_KeyReleaseEvent_IsBase(true);
        vqmdisubwindow->keyReleaseEvent(event);
    } else {
        ((VirtualQMdiSubWindow*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnKeyReleaseEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_EnterEvent(QMdiSubWindow* self, QEnterEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->enterEvent(event);
    } else {
        ((VirtualQMdiSubWindow*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseEnterEvent(QMdiSubWindow* self, QEnterEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_EnterEvent_IsBase(true);
        vqmdisubwindow->enterEvent(event);
    } else {
        ((VirtualQMdiSubWindow*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnEnterEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_EnterEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_TabletEvent(QMdiSubWindow* self, QTabletEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->tabletEvent(event);
    } else {
        ((VirtualQMdiSubWindow*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseTabletEvent(QMdiSubWindow* self, QTabletEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_TabletEvent_IsBase(true);
        vqmdisubwindow->tabletEvent(event);
    } else {
        ((VirtualQMdiSubWindow*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnTabletEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_TabletEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_ActionEvent(QMdiSubWindow* self, QActionEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->actionEvent(event);
    } else {
        ((VirtualQMdiSubWindow*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseActionEvent(QMdiSubWindow* self, QActionEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_ActionEvent_IsBase(true);
        vqmdisubwindow->actionEvent(event);
    } else {
        ((VirtualQMdiSubWindow*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnActionEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_ActionEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_DragEnterEvent(QMdiSubWindow* self, QDragEnterEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->dragEnterEvent(event);
    } else {
        ((VirtualQMdiSubWindow*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseDragEnterEvent(QMdiSubWindow* self, QDragEnterEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_DragEnterEvent_IsBase(true);
        vqmdisubwindow->dragEnterEvent(event);
    } else {
        ((VirtualQMdiSubWindow*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnDragEnterEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_DragEnterEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_DragMoveEvent(QMdiSubWindow* self, QDragMoveEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->dragMoveEvent(event);
    } else {
        ((VirtualQMdiSubWindow*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseDragMoveEvent(QMdiSubWindow* self, QDragMoveEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_DragMoveEvent_IsBase(true);
        vqmdisubwindow->dragMoveEvent(event);
    } else {
        ((VirtualQMdiSubWindow*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnDragMoveEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_DragMoveEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_DragLeaveEvent(QMdiSubWindow* self, QDragLeaveEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->dragLeaveEvent(event);
    } else {
        ((VirtualQMdiSubWindow*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseDragLeaveEvent(QMdiSubWindow* self, QDragLeaveEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_DragLeaveEvent_IsBase(true);
        vqmdisubwindow->dragLeaveEvent(event);
    } else {
        ((VirtualQMdiSubWindow*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnDragLeaveEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_DragLeaveEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_DropEvent(QMdiSubWindow* self, QDropEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->dropEvent(event);
    } else {
        ((VirtualQMdiSubWindow*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseDropEvent(QMdiSubWindow* self, QDropEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_DropEvent_IsBase(true);
        vqmdisubwindow->dropEvent(event);
    } else {
        ((VirtualQMdiSubWindow*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnDropEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_DropEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiSubWindow_NativeEvent(QMdiSubWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return vqmdisubwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQMdiSubWindow*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QMdiSubWindow_QBaseNativeEvent(QMdiSubWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_NativeEvent_IsBase(true);
        return vqmdisubwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQMdiSubWindow*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnNativeEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_NativeEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QMdiSubWindow_Metric(const QMdiSubWindow* self, int param1) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return vqmdisubwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQMdiSubWindow*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QMdiSubWindow_QBaseMetric(const QMdiSubWindow* self, int param1) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_Metric_IsBase(true);
        return vqmdisubwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQMdiSubWindow*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMetric(const QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_Metric_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_InitPainter(const QMdiSubWindow* self, QPainter* painter) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->initPainter(painter);
    } else {
        ((VirtualQMdiSubWindow*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseInitPainter(const QMdiSubWindow* self, QPainter* painter) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_InitPainter_IsBase(true);
        vqmdisubwindow->initPainter(painter);
    } else {
        ((VirtualQMdiSubWindow*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnInitPainter(const QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_InitPainter_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QMdiSubWindow_Redirected(const QMdiSubWindow* self, QPoint* offset) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return vqmdisubwindow->redirected(offset);
    } else {
        return ((VirtualQMdiSubWindow*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QMdiSubWindow_QBaseRedirected(const QMdiSubWindow* self, QPoint* offset) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_Redirected_IsBase(true);
        return vqmdisubwindow->redirected(offset);
    } else {
        return ((VirtualQMdiSubWindow*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnRedirected(const QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_Redirected_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QMdiSubWindow_SharedPainter(const QMdiSubWindow* self) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return vqmdisubwindow->sharedPainter();
    } else {
        return ((VirtualQMdiSubWindow*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QMdiSubWindow_QBaseSharedPainter(const QMdiSubWindow* self) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_SharedPainter_IsBase(true);
        return vqmdisubwindow->sharedPainter();
    } else {
        return ((VirtualQMdiSubWindow*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnSharedPainter(const QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_SharedPainter_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_InputMethodEvent(QMdiSubWindow* self, QInputMethodEvent* param1) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->inputMethodEvent(param1);
    } else {
        ((VirtualQMdiSubWindow*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseInputMethodEvent(QMdiSubWindow* self, QInputMethodEvent* param1) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_InputMethodEvent_IsBase(true);
        vqmdisubwindow->inputMethodEvent(param1);
    } else {
        ((VirtualQMdiSubWindow*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnInputMethodEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_InputMethodEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QMdiSubWindow_InputMethodQuery(const QMdiSubWindow* self, int param1) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return new QVariant(vqmdisubwindow->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQMdiSubWindow*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QMdiSubWindow_QBaseInputMethodQuery(const QMdiSubWindow* self, int param1) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_InputMethodQuery_IsBase(true);
        return new QVariant(vqmdisubwindow->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQMdiSubWindow*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnInputMethodQuery(const QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_InputMethodQuery_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiSubWindow_FocusNextPrevChild(QMdiSubWindow* self, bool next) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return vqmdisubwindow->focusNextPrevChild(next);
    } else {
        return ((VirtualQMdiSubWindow*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QMdiSubWindow_QBaseFocusNextPrevChild(QMdiSubWindow* self, bool next) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_FocusNextPrevChild_IsBase(true);
        return vqmdisubwindow->focusNextPrevChild(next);
    } else {
        return ((VirtualQMdiSubWindow*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnFocusNextPrevChild(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_CustomEvent(QMdiSubWindow* self, QEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->customEvent(event);
    } else {
        ((VirtualQMdiSubWindow*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseCustomEvent(QMdiSubWindow* self, QEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_CustomEvent_IsBase(true);
        vqmdisubwindow->customEvent(event);
    } else {
        ((VirtualQMdiSubWindow*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnCustomEvent(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_CustomEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_ConnectNotify(QMdiSubWindow* self, const QMetaMethod* signal) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->connectNotify(*signal);
    } else {
        ((VirtualQMdiSubWindow*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseConnectNotify(QMdiSubWindow* self, const QMetaMethod* signal) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_ConnectNotify_IsBase(true);
        vqmdisubwindow->connectNotify(*signal);
    } else {
        ((VirtualQMdiSubWindow*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnConnectNotify(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_ConnectNotify_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_DisconnectNotify(QMdiSubWindow* self, const QMetaMethod* signal) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->disconnectNotify(*signal);
    } else {
        ((VirtualQMdiSubWindow*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseDisconnectNotify(QMdiSubWindow* self, const QMetaMethod* signal) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_DisconnectNotify_IsBase(true);
        vqmdisubwindow->disconnectNotify(*signal);
    } else {
        ((VirtualQMdiSubWindow*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnDisconnectNotify(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_DisconnectNotify_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_UpdateMicroFocus(QMdiSubWindow* self) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->updateMicroFocus();
    } else {
        ((VirtualQMdiSubWindow*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseUpdateMicroFocus(QMdiSubWindow* self) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_UpdateMicroFocus_IsBase(true);
        vqmdisubwindow->updateMicroFocus();
    } else {
        ((VirtualQMdiSubWindow*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnUpdateMicroFocus(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_Create(QMdiSubWindow* self) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->create();
    } else {
        ((VirtualQMdiSubWindow*)self)->create();
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseCreate(QMdiSubWindow* self) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_Create_IsBase(true);
        vqmdisubwindow->create();
    } else {
        ((VirtualQMdiSubWindow*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnCreate(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_Create_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiSubWindow_Destroy(QMdiSubWindow* self) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->destroy();
    } else {
        ((VirtualQMdiSubWindow*)self)->destroy();
    }
}

// Base class handler implementation
void QMdiSubWindow_QBaseDestroy(QMdiSubWindow* self) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_Destroy_IsBase(true);
        vqmdisubwindow->destroy();
    } else {
        ((VirtualQMdiSubWindow*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnDestroy(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_Destroy_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiSubWindow_FocusNextChild(QMdiSubWindow* self) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return vqmdisubwindow->focusNextChild();
    } else {
        return ((VirtualQMdiSubWindow*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QMdiSubWindow_QBaseFocusNextChild(QMdiSubWindow* self) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_FocusNextChild_IsBase(true);
        return vqmdisubwindow->focusNextChild();
    } else {
        return ((VirtualQMdiSubWindow*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnFocusNextChild(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_FocusNextChild_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiSubWindow_FocusPreviousChild(QMdiSubWindow* self) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return vqmdisubwindow->focusPreviousChild();
    } else {
        return ((VirtualQMdiSubWindow*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QMdiSubWindow_QBaseFocusPreviousChild(QMdiSubWindow* self) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_FocusPreviousChild_IsBase(true);
        return vqmdisubwindow->focusPreviousChild();
    } else {
        return ((VirtualQMdiSubWindow*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnFocusPreviousChild(QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_FocusPreviousChild_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QMdiSubWindow_Sender(const QMdiSubWindow* self) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return vqmdisubwindow->sender();
    } else {
        return ((VirtualQMdiSubWindow*)self)->sender();
    }
}

// Base class handler implementation
QObject* QMdiSubWindow_QBaseSender(const QMdiSubWindow* self) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_Sender_IsBase(true);
        return vqmdisubwindow->sender();
    } else {
        return ((VirtualQMdiSubWindow*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnSender(const QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_Sender_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QMdiSubWindow_SenderSignalIndex(const QMdiSubWindow* self) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return vqmdisubwindow->senderSignalIndex();
    } else {
        return ((VirtualQMdiSubWindow*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QMdiSubWindow_QBaseSenderSignalIndex(const QMdiSubWindow* self) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_SenderSignalIndex_IsBase(true);
        return vqmdisubwindow->senderSignalIndex();
    } else {
        return ((VirtualQMdiSubWindow*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnSenderSignalIndex(const QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_SenderSignalIndex_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QMdiSubWindow_Receivers(const QMdiSubWindow* self, const char* signal) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return vqmdisubwindow->receivers(signal);
    } else {
        return ((VirtualQMdiSubWindow*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QMdiSubWindow_QBaseReceivers(const QMdiSubWindow* self, const char* signal) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_Receivers_IsBase(true);
        return vqmdisubwindow->receivers(signal);
    } else {
        return ((VirtualQMdiSubWindow*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnReceivers(const QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_Receivers_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiSubWindow_IsSignalConnected(const QMdiSubWindow* self, const QMetaMethod* signal) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return vqmdisubwindow->isSignalConnected(*signal);
    } else {
        return ((VirtualQMdiSubWindow*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QMdiSubWindow_QBaseIsSignalConnected(const QMdiSubWindow* self, const QMetaMethod* signal) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_IsSignalConnected_IsBase(true);
        return vqmdisubwindow->isSignalConnected(*signal);
    } else {
        return ((VirtualQMdiSubWindow*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnIsSignalConnected(const QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_IsSignalConnected_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QMdiSubWindow_GetDecodedMetricF(const QMdiSubWindow* self, int metricA, int metricB) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        return vqmdisubwindow->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQMdiSubWindow*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QMdiSubWindow_QBaseGetDecodedMetricF(const QMdiSubWindow* self, int metricA, int metricB) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_GetDecodedMetricF_IsBase(true);
        return vqmdisubwindow->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQMdiSubWindow*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnGetDecodedMetricF(const QMdiSubWindow* self, intptr_t slot) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
        vqmdisubwindow->setQMdiSubWindow_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_GetDecodedMetricF_Callback>(slot));
    }
}

void QMdiSubWindow_Delete(QMdiSubWindow* self) {
    delete self;
}
