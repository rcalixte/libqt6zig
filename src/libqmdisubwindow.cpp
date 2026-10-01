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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QMdiSubWindow_Tr(const char* s) {
    auto _ret = QMdiSubWindow::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QMdiSubWindow_SizeHint(const QMdiSubWindow* self) {
    return new QSize(self->sizeHint());
}

QSize* QMdiSubWindow_MinimumSizeHint(const QMdiSubWindow* self) {
    return new QSize(self->minimumSizeHint());
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
    QMdiSubWindow::connect(self,
                           static_cast<void (QMdiSubWindow::*)(Qt::WindowStates, Qt::WindowStates)>(&QMdiSubWindow::windowStateChanged),
                           [self, slotFunc](Qt::WindowStates oldState, Qt::WindowStates newState) {
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
    QMdiSubWindow::connect(self,
                           static_cast<void (QMdiSubWindow::*)()>(&QMdiSubWindow::aboutToActivate),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QMdiSubWindow_ShowSystemMenu(QMdiSubWindow* self) {
    self->showSystemMenu();
}

void QMdiSubWindow_ShowShaded(QMdiSubWindow* self) {
    self->showShaded();
}

bool QMdiSubWindow_EventFilter(QMdiSubWindow* self, QObject* object, QEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        return vqmdisubwindow->eventFilter(object, event);
    }
    qFatal("Error: Protected method QMdiSubWindow::eventFilter called without a directly constructed type");
}

bool QMdiSubWindow_Event(QMdiSubWindow* self, QEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        return vqmdisubwindow->event(event);
    }
    qFatal("Error: Protected method QMdiSubWindow::event called without a directly constructed type");
}

void QMdiSubWindow_ShowEvent(QMdiSubWindow* self, QShowEvent* showEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->showEvent(showEvent);
    }
}

void QMdiSubWindow_HideEvent(QMdiSubWindow* self, QHideEvent* hideEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->hideEvent(hideEvent);
    }
}

void QMdiSubWindow_ChangeEvent(QMdiSubWindow* self, QEvent* changeEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->changeEvent(changeEvent);
    }
}

void QMdiSubWindow_CloseEvent(QMdiSubWindow* self, QCloseEvent* closeEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->closeEvent(closeEvent);
    }
}

void QMdiSubWindow_LeaveEvent(QMdiSubWindow* self, QEvent* leaveEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->leaveEvent(leaveEvent);
    }
}

void QMdiSubWindow_ResizeEvent(QMdiSubWindow* self, QResizeEvent* resizeEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->resizeEvent(resizeEvent);
    }
}

void QMdiSubWindow_TimerEvent(QMdiSubWindow* self, QTimerEvent* timerEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->timerEvent(timerEvent);
    }
}

void QMdiSubWindow_MoveEvent(QMdiSubWindow* self, QMoveEvent* moveEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->moveEvent(moveEvent);
    }
}

void QMdiSubWindow_PaintEvent(QMdiSubWindow* self, QPaintEvent* paintEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->paintEvent(paintEvent);
    }
}

void QMdiSubWindow_MousePressEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->mousePressEvent(mouseEvent);
    }
}

void QMdiSubWindow_MouseDoubleClickEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->mouseDoubleClickEvent(mouseEvent);
    }
}

void QMdiSubWindow_MouseReleaseEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->mouseReleaseEvent(mouseEvent);
    }
}

void QMdiSubWindow_MouseMoveEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->mouseMoveEvent(mouseEvent);
    }
}

void QMdiSubWindow_KeyPressEvent(QMdiSubWindow* self, QKeyEvent* keyEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->keyPressEvent(keyEvent);
    }
}

void QMdiSubWindow_ContextMenuEvent(QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->contextMenuEvent(contextMenuEvent);
    }
}

void QMdiSubWindow_FocusInEvent(QMdiSubWindow* self, QFocusEvent* focusInEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->focusInEvent(focusInEvent);
    }
}

void QMdiSubWindow_FocusOutEvent(QMdiSubWindow* self, QFocusEvent* focusOutEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->focusOutEvent(focusOutEvent);
    }
}

void QMdiSubWindow_ChildEvent(QMdiSubWindow* self, QChildEvent* childEvent) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->childEvent(childEvent);
    }
}

libqt_string QMdiSubWindow_Tr2(const char* s, const char* c) {
    auto _ret = QMdiSubWindow::tr(s, c);
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
    auto _ret = QMdiSubWindow::tr(s, c, static_cast<int>(n));
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

// Base class handler implementation
QMetaObject* QMdiSubWindow_SuperMetaObject(const QMdiSubWindow* self) {
    return (QMetaObject*)self->QMdiSubWindow::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMetaObject(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self)))
        vqmdisubwindow->qmdisubwindow_metaobject_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QMdiSubWindow_SuperMetacast(QMdiSubWindow* self, const char* param1) {
    return self->QMdiSubWindow::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMetacast(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_metacast_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_Metacast_Callback>(slot);
}

// Base class handler implementation
int QMdiSubWindow_SuperMetacall(QMdiSubWindow* self, int param1, int param2, void** param3) {
    return self->QMdiSubWindow::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMetacall(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_metacall_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QMdiSubWindow_SuperSizeHint(const QMdiSubWindow* self) {
    return new QSize(self->QMdiSubWindow::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnSizeHint(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self)))
        vqmdisubwindow->qmdisubwindow_sizehint_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QMdiSubWindow_SuperMinimumSizeHint(const QMdiSubWindow* self) {
    return new QSize(self->QMdiSubWindow::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMinimumSizeHint(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self)))
        vqmdisubwindow->qmdisubwindow_minimumsizehint_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
bool QMdiSubWindow_SuperEventFilter(QMdiSubWindow* self, QObject* object, QEvent* event) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        return vqmdisubwindow->QMdiSubWindow::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnEventFilter(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_eventfilter_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_EventFilter_Callback>(slot);
}

// Base class handler implementation
bool QMdiSubWindow_SuperEvent(QMdiSubWindow* self, QEvent* event) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        return vqmdisubwindow->QMdiSubWindow::event(event);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_event_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_Event_Callback>(slot);
}

// Base class handler implementation
void QMdiSubWindow_SuperShowEvent(QMdiSubWindow* self, QShowEvent* showEvent) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::showEvent(showEvent);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnShowEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_showevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiSubWindow_SuperHideEvent(QMdiSubWindow* self, QHideEvent* hideEvent) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::hideEvent(hideEvent);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnHideEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_hideevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_HideEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiSubWindow_SuperChangeEvent(QMdiSubWindow* self, QEvent* changeEvent) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::changeEvent(changeEvent);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnChangeEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_changeevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiSubWindow_SuperCloseEvent(QMdiSubWindow* self, QCloseEvent* closeEvent) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::closeEvent(closeEvent);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnCloseEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_closeevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_CloseEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiSubWindow_SuperLeaveEvent(QMdiSubWindow* self, QEvent* leaveEvent) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::leaveEvent(leaveEvent);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnLeaveEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_leaveevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_LeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiSubWindow_SuperResizeEvent(QMdiSubWindow* self, QResizeEvent* resizeEvent) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::resizeEvent(resizeEvent);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnResizeEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_resizeevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiSubWindow_SuperTimerEvent(QMdiSubWindow* self, QTimerEvent* timerEvent) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::timerEvent(timerEvent);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnTimerEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_timerevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_TimerEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiSubWindow_SuperMoveEvent(QMdiSubWindow* self, QMoveEvent* moveEvent) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::moveEvent(moveEvent);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMoveEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_moveevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_MoveEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiSubWindow_SuperPaintEvent(QMdiSubWindow* self, QPaintEvent* paintEvent) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::paintEvent(paintEvent);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnPaintEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_paintevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiSubWindow_SuperMousePressEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::mousePressEvent(mouseEvent);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMousePressEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_mousepressevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiSubWindow_SuperMouseDoubleClickEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::mouseDoubleClickEvent(mouseEvent);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMouseDoubleClickEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_mousedoubleclickevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_MouseDoubleClickEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiSubWindow_SuperMouseReleaseEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::mouseReleaseEvent(mouseEvent);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMouseReleaseEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_mousereleaseevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiSubWindow_SuperMouseMoveEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::mouseMoveEvent(mouseEvent);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMouseMoveEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_mousemoveevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiSubWindow_SuperKeyPressEvent(QMdiSubWindow* self, QKeyEvent* keyEvent) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::keyPressEvent(keyEvent);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnKeyPressEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_keypressevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiSubWindow_SuperContextMenuEvent(QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::contextMenuEvent(contextMenuEvent);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnContextMenuEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_contextmenuevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiSubWindow_SuperFocusInEvent(QMdiSubWindow* self, QFocusEvent* focusInEvent) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::focusInEvent(focusInEvent);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnFocusInEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_focusinevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiSubWindow_SuperFocusOutEvent(QMdiSubWindow* self, QFocusEvent* focusOutEvent) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::focusOutEvent(focusOutEvent);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnFocusOutEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_focusoutevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiSubWindow_SuperChildEvent(QMdiSubWindow* self, QChildEvent* childEvent) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::childEvent(childEvent);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnChildEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_childevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
int QMdiSubWindow_DevType(const QMdiSubWindow* self) {
    return self->devType();
}

// Base class handler implementation
int QMdiSubWindow_SuperDevType(const QMdiSubWindow* self) {
    return self->QMdiSubWindow::devType();
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnDevType(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self)))
        vqmdisubwindow->qmdisubwindow_devtype_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_DevType_Callback>(slot);
}

// Derived class handler implementation
void QMdiSubWindow_SetVisible(QMdiSubWindow* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QMdiSubWindow_SuperSetVisible(QMdiSubWindow* self, bool visible) {
    self->QMdiSubWindow::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnSetVisible(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_setvisible_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QMdiSubWindow_HeightForWidth(const QMdiSubWindow* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QMdiSubWindow_SuperHeightForWidth(const QMdiSubWindow* self, int param1) {
    return self->QMdiSubWindow::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnHeightForWidth(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self)))
        vqmdisubwindow->qmdisubwindow_heightforwidth_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QMdiSubWindow_HasHeightForWidth(const QMdiSubWindow* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QMdiSubWindow_SuperHasHeightForWidth(const QMdiSubWindow* self) {
    return self->QMdiSubWindow::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnHasHeightForWidth(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self)))
        vqmdisubwindow->qmdisubwindow_hasheightforwidth_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QMdiSubWindow_PaintEngine(const QMdiSubWindow* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QMdiSubWindow_SuperPaintEngine(const QMdiSubWindow* self) {
    return self->QMdiSubWindow::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnPaintEngine(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self)))
        vqmdisubwindow->qmdisubwindow_paintengine_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QMdiSubWindow_WheelEvent(QMdiSubWindow* self, QWheelEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiSubWindow::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiSubWindow_SuperWheelEvent(QMdiSubWindow* self, QWheelEvent* event) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnWheelEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_wheelevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiSubWindow_KeyReleaseEvent(QMdiSubWindow* self, QKeyEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiSubWindow::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiSubWindow_SuperKeyReleaseEvent(QMdiSubWindow* self, QKeyEvent* event) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnKeyReleaseEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_keyreleaseevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiSubWindow_EnterEvent(QMdiSubWindow* self, QEnterEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiSubWindow::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiSubWindow_SuperEnterEvent(QMdiSubWindow* self, QEnterEvent* event) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnEnterEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_enterevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiSubWindow_TabletEvent(QMdiSubWindow* self, QTabletEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiSubWindow::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiSubWindow_SuperTabletEvent(QMdiSubWindow* self, QTabletEvent* event) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnTabletEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_tabletevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiSubWindow_ActionEvent(QMdiSubWindow* self, QActionEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiSubWindow::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiSubWindow_SuperActionEvent(QMdiSubWindow* self, QActionEvent* event) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnActionEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_actionevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiSubWindow_DragEnterEvent(QMdiSubWindow* self, QDragEnterEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiSubWindow::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiSubWindow_SuperDragEnterEvent(QMdiSubWindow* self, QDragEnterEvent* event) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnDragEnterEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_dragenterevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiSubWindow_DragMoveEvent(QMdiSubWindow* self, QDragMoveEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiSubWindow::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiSubWindow_SuperDragMoveEvent(QMdiSubWindow* self, QDragMoveEvent* event) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnDragMoveEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_dragmoveevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiSubWindow_DragLeaveEvent(QMdiSubWindow* self, QDragLeaveEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiSubWindow::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiSubWindow_SuperDragLeaveEvent(QMdiSubWindow* self, QDragLeaveEvent* event) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnDragLeaveEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_dragleaveevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiSubWindow_DropEvent(QMdiSubWindow* self, QDropEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiSubWindow::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiSubWindow_SuperDropEvent(QMdiSubWindow* self, QDropEvent* event) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnDropEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_dropevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool QMdiSubWindow_NativeEvent(QMdiSubWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        return vqmdisubwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QMdiSubWindow::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QMdiSubWindow_SuperNativeEvent(QMdiSubWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        return vqmdisubwindow->QMdiSubWindow::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnNativeEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_nativeevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QMdiSubWindow_Metric(const QMdiSubWindow* self, int param1) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow) {
        return vqmdisubwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QMdiSubWindow::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QMdiSubWindow_SuperMetric(const QMdiSubWindow* self, int param1) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self))) {
        return vqmdisubwindow->QMdiSubWindow::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMetric(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self)))
        vqmdisubwindow->qmdisubwindow_metric_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_Metric_Callback>(slot);
}

// Derived class handler implementation
void QMdiSubWindow_InitPainter(const QMdiSubWindow* self, QPainter* painter) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow) {
        vqmdisubwindow->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QMdiSubWindow::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiSubWindow_SuperInitPainter(const QMdiSubWindow* self, QPainter* painter) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self))) {
        vqmdisubwindow->QMdiSubWindow::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnInitPainter(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self)))
        vqmdisubwindow->qmdisubwindow_initpainter_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QMdiSubWindow_Redirected(const QMdiSubWindow* self, QPoint* offset) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow) {
        return vqmdisubwindow->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QMdiSubWindow::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QMdiSubWindow_SuperRedirected(const QMdiSubWindow* self, QPoint* offset) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self))) {
        return vqmdisubwindow->QMdiSubWindow::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnRedirected(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self)))
        vqmdisubwindow->qmdisubwindow_redirected_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QMdiSubWindow_SharedPainter(const QMdiSubWindow* self) {
    auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self));
    if (vqmdisubwindow) {
        return vqmdisubwindow->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QMdiSubWindow::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QMdiSubWindow_SuperSharedPainter(const QMdiSubWindow* self) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self))) {
        return vqmdisubwindow->QMdiSubWindow::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnSharedPainter(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self)))
        vqmdisubwindow->qmdisubwindow_sharedpainter_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QMdiSubWindow_InputMethodEvent(QMdiSubWindow* self, QInputMethodEvent* param1) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QMdiSubWindow::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiSubWindow_SuperInputMethodEvent(QMdiSubWindow* self, QInputMethodEvent* param1) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnInputMethodEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_inputmethodevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QMdiSubWindow_InputMethodQuery(const QMdiSubWindow* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QMdiSubWindow_SuperInputMethodQuery(const QMdiSubWindow* self, int param1) {
    return new QVariant(self->QMdiSubWindow::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnInputMethodQuery(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self)))
        vqmdisubwindow->qmdisubwindow_inputmethodquery_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QMdiSubWindow_FocusNextPrevChild(QMdiSubWindow* self, bool next) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        return vqmdisubwindow->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QMdiSubWindow::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QMdiSubWindow_SuperFocusNextPrevChild(QMdiSubWindow* self, bool next) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        return vqmdisubwindow->QMdiSubWindow::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnFocusNextPrevChild(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_focusnextprevchild_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QMdiSubWindow_CustomEvent(QMdiSubWindow* self, QEvent* event) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiSubWindow::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiSubWindow_SuperCustomEvent(QMdiSubWindow* self, QEvent* event) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnCustomEvent(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_customevent_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiSubWindow_ConnectNotify(QMdiSubWindow* self, const QMetaMethod* signal) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMdiSubWindow::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiSubWindow_SuperConnectNotify(QMdiSubWindow* self, const QMetaMethod* signal) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnConnectNotify(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_connectnotify_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QMdiSubWindow_DisconnectNotify(QMdiSubWindow* self, const QMetaMethod* signal) {
    auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
    if (vqmdisubwindow) {
        vqmdisubwindow->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMdiSubWindow::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiSubWindow_SuperDisconnectNotify(QMdiSubWindow* self, const QMetaMethod* signal) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->QMdiSubWindow::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMdiSubWindow::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnDisconnectNotify(QMdiSubWindow* self, intptr_t slot) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self))
        vqmdisubwindow->qmdisubwindow_disconnectnotify_callback = reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QMdiSubWindow_UpdateMicroFocus(QMdiSubWindow* self) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->VirtualQMdiSubWindow::updateMicroFocus();
    } else
        qFatal("Error: Protected method QMdiSubWindow::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QMdiSubWindow_Create(QMdiSubWindow* self) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->VirtualQMdiSubWindow::create();
    } else
        qFatal("Error: Protected method QMdiSubWindow::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QMdiSubWindow_Destroy(QMdiSubWindow* self) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        vqmdisubwindow->VirtualQMdiSubWindow::destroy();
    } else
        qFatal("Error: Protected method QMdiSubWindow::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMdiSubWindow_FocusNextChild(QMdiSubWindow* self) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        return vqmdisubwindow->VirtualQMdiSubWindow::focusNextChild();
    } else
        qFatal("Error: Protected method QMdiSubWindow::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMdiSubWindow_FocusPreviousChild(QMdiSubWindow* self) {
    if (auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self)) {
        return vqmdisubwindow->VirtualQMdiSubWindow::focusPreviousChild();
    } else
        qFatal("Error: Protected method QMdiSubWindow::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QMdiSubWindow_Sender(const QMdiSubWindow* self) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self))) {
        return vqmdisubwindow->VirtualQMdiSubWindow::sender();
    } else
        qFatal("Error: Protected method QMdiSubWindow::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QMdiSubWindow_SenderSignalIndex(const QMdiSubWindow* self) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self))) {
        return vqmdisubwindow->VirtualQMdiSubWindow::senderSignalIndex();
    } else
        qFatal("Error: Protected method QMdiSubWindow::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QMdiSubWindow_Receivers(const QMdiSubWindow* self, const char* signal) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self))) {
        return vqmdisubwindow->VirtualQMdiSubWindow::receivers(signal);
    } else
        qFatal("Error: Protected method QMdiSubWindow::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMdiSubWindow_IsSignalConnected(const QMdiSubWindow* self, const QMetaMethod* signal) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self))) {
        return vqmdisubwindow->VirtualQMdiSubWindow::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QMdiSubWindow::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QMdiSubWindow_GetDecodedMetricF(const QMdiSubWindow* self, int metricA, int metricB) {
    if (auto* vqmdisubwindow = const_cast<VirtualQMdiSubWindow*>(dynamic_cast<const VirtualQMdiSubWindow*>(self))) {
        return vqmdisubwindow->VirtualQMdiSubWindow::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QMdiSubWindow::getDecodedMetricF called without a directly constructed type");
}

void QMdiSubWindow_Delete(QMdiSubWindow* self) {
    delete self;
}
