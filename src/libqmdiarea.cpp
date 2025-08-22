#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QBrush>
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
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMargins>
#include <QMdiArea>
#include <QMdiSubWindow>
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
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qmdiarea.h>
#include "libqmdiarea.h"
#include "libqmdiarea.hxx"

QMdiArea* QMdiArea_new(QWidget* parent) {
    return new VirtualQMdiArea(parent);
}

QMdiArea* QMdiArea_new2() {
    return new VirtualQMdiArea();
}

QMetaObject* QMdiArea_MetaObject(const QMdiArea* self) {
    return (QMetaObject*)self->metaObject();
}

void* QMdiArea_Metacast(QMdiArea* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QMdiArea_Metacall(QMdiArea* self, int param1, int param2, void** param3) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMdiArea*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QMdiArea_OnMetacall(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_Metacall_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QMdiArea_QBaseMetacall(QMdiArea* self, int param1, int param2, void** param3) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_Metacall_IsBase(true);
        return vqmdiarea->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMdiArea*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QMdiArea_Tr(const char* s) {
    QString _ret = QMdiArea::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QMdiSubWindow* QMdiArea_CurrentSubWindow(const QMdiArea* self) {
    return self->currentSubWindow();
}

QMdiSubWindow* QMdiArea_ActiveSubWindow(const QMdiArea* self) {
    return self->activeSubWindow();
}

libqt_list /* of QMdiSubWindow* */ QMdiArea_SubWindowList(const QMdiArea* self) {
    QList<QMdiSubWindow*> _ret = self->subWindowList();
    // Convert QList<> from C++ memory to manually-managed C memory
    QMdiSubWindow** _arr = static_cast<QMdiSubWindow**>(malloc(sizeof(QMdiSubWindow*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QMdiSubWindow* QMdiArea_AddSubWindow(QMdiArea* self, QWidget* widget) {
    return self->addSubWindow(widget);
}

void QMdiArea_RemoveSubWindow(QMdiArea* self, QWidget* widget) {
    self->removeSubWindow(widget);
}

QBrush* QMdiArea_Background(const QMdiArea* self) {
    return new QBrush(self->background());
}

void QMdiArea_SetBackground(QMdiArea* self, const QBrush* background) {
    self->setBackground(*background);
}

int QMdiArea_ActivationOrder(const QMdiArea* self) {
    return static_cast<int>(self->activationOrder());
}

void QMdiArea_SetActivationOrder(QMdiArea* self, int order) {
    self->setActivationOrder(static_cast<QMdiArea::WindowOrder>(order));
}

void QMdiArea_SetOption(QMdiArea* self, int option) {
    self->setOption(static_cast<QMdiArea::AreaOption>(option));
}

bool QMdiArea_TestOption(const QMdiArea* self, int opton) {
    return self->testOption(static_cast<QMdiArea::AreaOption>(opton));
}

void QMdiArea_SetViewMode(QMdiArea* self, int mode) {
    self->setViewMode(static_cast<QMdiArea::ViewMode>(mode));
}

int QMdiArea_ViewMode(const QMdiArea* self) {
    return static_cast<int>(self->viewMode());
}

bool QMdiArea_DocumentMode(const QMdiArea* self) {
    return self->documentMode();
}

void QMdiArea_SetDocumentMode(QMdiArea* self, bool enabled) {
    self->setDocumentMode(enabled);
}

void QMdiArea_SetTabsClosable(QMdiArea* self, bool closable) {
    self->setTabsClosable(closable);
}

bool QMdiArea_TabsClosable(const QMdiArea* self) {
    return self->tabsClosable();
}

void QMdiArea_SetTabsMovable(QMdiArea* self, bool movable) {
    self->setTabsMovable(movable);
}

bool QMdiArea_TabsMovable(const QMdiArea* self) {
    return self->tabsMovable();
}

void QMdiArea_SetTabShape(QMdiArea* self, int shape) {
    self->setTabShape(static_cast<QTabWidget::TabShape>(shape));
}

int QMdiArea_TabShape(const QMdiArea* self) {
    return static_cast<int>(self->tabShape());
}

void QMdiArea_SetTabPosition(QMdiArea* self, int position) {
    self->setTabPosition(static_cast<QTabWidget::TabPosition>(position));
}

int QMdiArea_TabPosition(const QMdiArea* self) {
    return static_cast<int>(self->tabPosition());
}

void QMdiArea_SubWindowActivated(QMdiArea* self, QMdiSubWindow* param1) {
    self->subWindowActivated(param1);
}

void QMdiArea_Connect_SubWindowActivated(QMdiArea* self, intptr_t slot) {
    void (*slotFunc)(QMdiArea*, QMdiSubWindow*) = reinterpret_cast<void (*)(QMdiArea*, QMdiSubWindow*)>(slot);
    QMdiArea::connect(self, &QMdiArea::subWindowActivated, [self, slotFunc](QMdiSubWindow* param1) {
        QMdiSubWindow* sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QMdiArea_SetActiveSubWindow(QMdiArea* self, QMdiSubWindow* window) {
    self->setActiveSubWindow(window);
}

void QMdiArea_TileSubWindows(QMdiArea* self) {
    self->tileSubWindows();
}

void QMdiArea_CascadeSubWindows(QMdiArea* self) {
    self->cascadeSubWindows();
}

void QMdiArea_CloseActiveSubWindow(QMdiArea* self) {
    self->closeActiveSubWindow();
}

void QMdiArea_CloseAllSubWindows(QMdiArea* self) {
    self->closeAllSubWindows();
}

void QMdiArea_ActivateNextSubWindow(QMdiArea* self) {
    self->activateNextSubWindow();
}

void QMdiArea_ActivatePreviousSubWindow(QMdiArea* self) {
    self->activatePreviousSubWindow();
}

libqt_string QMdiArea_Tr2(const char* s, const char* c) {
    QString _ret = QMdiArea::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMdiArea_Tr3(const char* s, const char* c, int n) {
    QString _ret = QMdiArea::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QMdiSubWindow* */ QMdiArea_SubWindowList1(const QMdiArea* self, int order) {
    QList<QMdiSubWindow*> _ret = self->subWindowList(static_cast<QMdiArea::WindowOrder>(order));
    // Convert QList<> from C++ memory to manually-managed C memory
    QMdiSubWindow** _arr = static_cast<QMdiSubWindow**>(malloc(sizeof(QMdiSubWindow*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QMdiSubWindow* QMdiArea_AddSubWindow2(QMdiArea* self, QWidget* widget, int flags) {
    return self->addSubWindow(widget, static_cast<Qt::WindowFlags>(flags));
}

void QMdiArea_SetOption2(QMdiArea* self, int option, bool on) {
    self->setOption(static_cast<QMdiArea::AreaOption>(option), on);
}

// Derived class handler implementation
QSize* QMdiArea_SizeHint(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return new QSize(vqmdiarea->sizeHint());
    } else {
        return new QSize(((VirtualQMdiArea*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QMdiArea_QBaseSizeHint(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_SizeHint_IsBase(true);
        return new QSize(vqmdiarea->sizeHint());
    } else {
        return new QSize(((VirtualQMdiArea*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnSizeHint(const QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_SizeHint_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QMdiArea_MinimumSizeHint(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return new QSize(vqmdiarea->minimumSizeHint());
    } else {
        return new QSize(((VirtualQMdiArea*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QMdiArea_QBaseMinimumSizeHint(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_MinimumSizeHint_IsBase(true);
        return new QSize(vqmdiarea->minimumSizeHint());
    } else {
        return new QSize(((VirtualQMdiArea*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMinimumSizeHint(const QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_MinimumSizeHint_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_SetupViewport(QMdiArea* self, QWidget* viewport) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setupViewport(viewport);
    } else {
        ((VirtualQMdiArea*)self)->setupViewport(viewport);
    }
}

// Base class handler implementation
void QMdiArea_QBaseSetupViewport(QMdiArea* self, QWidget* viewport) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_SetupViewport_IsBase(true);
        vqmdiarea->setupViewport(viewport);
    } else {
        ((VirtualQMdiArea*)self)->setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnSetupViewport(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_SetupViewport_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiArea_Event(QMdiArea* self, QEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return vqmdiarea->event(event);
    } else {
        return ((VirtualQMdiArea*)self)->event(event);
    }
}

// Base class handler implementation
bool QMdiArea_QBaseEvent(QMdiArea* self, QEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_Event_IsBase(true);
        return vqmdiarea->event(event);
    } else {
        return ((VirtualQMdiArea*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_Event_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiArea_EventFilter(QMdiArea* self, QObject* object, QEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return vqmdiarea->eventFilter(object, event);
    } else {
        return ((VirtualQMdiArea*)self)->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QMdiArea_QBaseEventFilter(QMdiArea* self, QObject* object, QEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_EventFilter_IsBase(true);
        return vqmdiarea->eventFilter(object, event);
    } else {
        return ((VirtualQMdiArea*)self)->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnEventFilter(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_EventFilter_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_PaintEvent(QMdiArea* self, QPaintEvent* paintEvent) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->paintEvent(paintEvent);
    } else {
        ((VirtualQMdiArea*)self)->paintEvent(paintEvent);
    }
}

// Base class handler implementation
void QMdiArea_QBasePaintEvent(QMdiArea* self, QPaintEvent* paintEvent) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_PaintEvent_IsBase(true);
        vqmdiarea->paintEvent(paintEvent);
    } else {
        ((VirtualQMdiArea*)self)->paintEvent(paintEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnPaintEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_PaintEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_ChildEvent(QMdiArea* self, QChildEvent* childEvent) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->childEvent(childEvent);
    } else {
        ((VirtualQMdiArea*)self)->childEvent(childEvent);
    }
}

// Base class handler implementation
void QMdiArea_QBaseChildEvent(QMdiArea* self, QChildEvent* childEvent) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ChildEvent_IsBase(true);
        vqmdiarea->childEvent(childEvent);
    } else {
        ((VirtualQMdiArea*)self)->childEvent(childEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnChildEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ChildEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_ResizeEvent(QMdiArea* self, QResizeEvent* resizeEvent) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->resizeEvent(resizeEvent);
    } else {
        ((VirtualQMdiArea*)self)->resizeEvent(resizeEvent);
    }
}

// Base class handler implementation
void QMdiArea_QBaseResizeEvent(QMdiArea* self, QResizeEvent* resizeEvent) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ResizeEvent_IsBase(true);
        vqmdiarea->resizeEvent(resizeEvent);
    } else {
        ((VirtualQMdiArea*)self)->resizeEvent(resizeEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnResizeEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ResizeEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_TimerEvent(QMdiArea* self, QTimerEvent* timerEvent) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->timerEvent(timerEvent);
    } else {
        ((VirtualQMdiArea*)self)->timerEvent(timerEvent);
    }
}

// Base class handler implementation
void QMdiArea_QBaseTimerEvent(QMdiArea* self, QTimerEvent* timerEvent) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_TimerEvent_IsBase(true);
        vqmdiarea->timerEvent(timerEvent);
    } else {
        ((VirtualQMdiArea*)self)->timerEvent(timerEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnTimerEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_TimerEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_ShowEvent(QMdiArea* self, QShowEvent* showEvent) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->showEvent(showEvent);
    } else {
        ((VirtualQMdiArea*)self)->showEvent(showEvent);
    }
}

// Base class handler implementation
void QMdiArea_QBaseShowEvent(QMdiArea* self, QShowEvent* showEvent) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ShowEvent_IsBase(true);
        vqmdiarea->showEvent(showEvent);
    } else {
        ((VirtualQMdiArea*)self)->showEvent(showEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnShowEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ShowEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiArea_ViewportEvent(QMdiArea* self, QEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return vqmdiarea->viewportEvent(event);
    } else {
        return ((VirtualQMdiArea*)self)->viewportEvent(event);
    }
}

// Base class handler implementation
bool QMdiArea_QBaseViewportEvent(QMdiArea* self, QEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ViewportEvent_IsBase(true);
        return vqmdiarea->viewportEvent(event);
    } else {
        return ((VirtualQMdiArea*)self)->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnViewportEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ViewportEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_ScrollContentsBy(QMdiArea* self, int dx, int dy) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQMdiArea*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QMdiArea_QBaseScrollContentsBy(QMdiArea* self, int dx, int dy) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ScrollContentsBy_IsBase(true);
        vqmdiarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQMdiArea*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnScrollContentsBy(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ScrollContentsBy_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_MousePressEvent(QMdiArea* self, QMouseEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->mousePressEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->mousePressEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseMousePressEvent(QMdiArea* self, QMouseEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_MousePressEvent_IsBase(true);
        vqmdiarea->mousePressEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMousePressEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_MousePressEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_MouseReleaseEvent(QMdiArea* self, QMouseEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->mouseReleaseEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseMouseReleaseEvent(QMdiArea* self, QMouseEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_MouseReleaseEvent_IsBase(true);
        vqmdiarea->mouseReleaseEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMouseReleaseEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_MouseDoubleClickEvent(QMdiArea* self, QMouseEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->mouseDoubleClickEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseMouseDoubleClickEvent(QMdiArea* self, QMouseEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_MouseDoubleClickEvent_IsBase(true);
        vqmdiarea->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->mouseDoubleClickEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMouseDoubleClickEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_MouseMoveEvent(QMdiArea* self, QMouseEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->mouseMoveEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseMouseMoveEvent(QMdiArea* self, QMouseEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_MouseMoveEvent_IsBase(true);
        vqmdiarea->mouseMoveEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMouseMoveEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_MouseMoveEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_WheelEvent(QMdiArea* self, QWheelEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->wheelEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->wheelEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseWheelEvent(QMdiArea* self, QWheelEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_WheelEvent_IsBase(true);
        vqmdiarea->wheelEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnWheelEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_WheelEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_ContextMenuEvent(QMdiArea* self, QContextMenuEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->contextMenuEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseContextMenuEvent(QMdiArea* self, QContextMenuEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ContextMenuEvent_IsBase(true);
        vqmdiarea->contextMenuEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnContextMenuEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ContextMenuEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_DragEnterEvent(QMdiArea* self, QDragEnterEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->dragEnterEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->dragEnterEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseDragEnterEvent(QMdiArea* self, QDragEnterEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_DragEnterEvent_IsBase(true);
        vqmdiarea->dragEnterEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->dragEnterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDragEnterEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_DragEnterEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_DragMoveEvent(QMdiArea* self, QDragMoveEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->dragMoveEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->dragMoveEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseDragMoveEvent(QMdiArea* self, QDragMoveEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_DragMoveEvent_IsBase(true);
        vqmdiarea->dragMoveEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->dragMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDragMoveEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_DragMoveEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_DragLeaveEvent(QMdiArea* self, QDragLeaveEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->dragLeaveEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->dragLeaveEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseDragLeaveEvent(QMdiArea* self, QDragLeaveEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_DragLeaveEvent_IsBase(true);
        vqmdiarea->dragLeaveEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->dragLeaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDragLeaveEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_DragLeaveEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_DropEvent(QMdiArea* self, QDropEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->dropEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->dropEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseDropEvent(QMdiArea* self, QDropEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_DropEvent_IsBase(true);
        vqmdiarea->dropEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDropEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_DropEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_KeyPressEvent(QMdiArea* self, QKeyEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->keyPressEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseKeyPressEvent(QMdiArea* self, QKeyEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_KeyPressEvent_IsBase(true);
        vqmdiarea->keyPressEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnKeyPressEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_KeyPressEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QMdiArea_ViewportSizeHint(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return new QSize(vqmdiarea->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QMdiArea_QBaseViewportSizeHint(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ViewportSizeHint_IsBase(true);
        return new QSize(vqmdiarea->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnViewportSizeHint(const QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ViewportSizeHint_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_ChangeEvent(QMdiArea* self, QEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->changeEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseChangeEvent(QMdiArea* self, QEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ChangeEvent_IsBase(true);
        vqmdiarea->changeEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnChangeEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ChangeEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_InitStyleOption(const QMdiArea* self, QStyleOptionFrame* option) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->initStyleOption(option);
    } else {
        ((VirtualQMdiArea*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QMdiArea_QBaseInitStyleOption(const QMdiArea* self, QStyleOptionFrame* option) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_InitStyleOption_IsBase(true);
        vqmdiarea->initStyleOption(option);
    } else {
        ((VirtualQMdiArea*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnInitStyleOption(const QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_InitStyleOption_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QMdiArea_DevType(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return vqmdiarea->devType();
    } else {
        return self->QMdiArea::devType();
    }
}

// Base class handler implementation
int QMdiArea_QBaseDevType(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_DevType_IsBase(true);
        return vqmdiarea->devType();
    } else {
        return self->QMdiArea::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDevType(const QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_DevType_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_SetVisible(QMdiArea* self, bool visible) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setVisible(visible);
    } else {
        self->QMdiArea::setVisible(visible);
    }
}

// Base class handler implementation
void QMdiArea_QBaseSetVisible(QMdiArea* self, bool visible) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_SetVisible_IsBase(true);
        vqmdiarea->setVisible(visible);
    } else {
        self->QMdiArea::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnSetVisible(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_SetVisible_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QMdiArea_HeightForWidth(const QMdiArea* self, int param1) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return vqmdiarea->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QMdiArea::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QMdiArea_QBaseHeightForWidth(const QMdiArea* self, int param1) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_HeightForWidth_IsBase(true);
        return vqmdiarea->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QMdiArea::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnHeightForWidth(const QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_HeightForWidth_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiArea_HasHeightForWidth(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return vqmdiarea->hasHeightForWidth();
    } else {
        return self->QMdiArea::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QMdiArea_QBaseHasHeightForWidth(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_HasHeightForWidth_IsBase(true);
        return vqmdiarea->hasHeightForWidth();
    } else {
        return self->QMdiArea::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnHasHeightForWidth(const QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_HasHeightForWidth_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QMdiArea_PaintEngine(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return vqmdiarea->paintEngine();
    } else {
        return self->QMdiArea::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QMdiArea_QBasePaintEngine(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_PaintEngine_IsBase(true);
        return vqmdiarea->paintEngine();
    } else {
        return self->QMdiArea::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnPaintEngine(const QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_PaintEngine_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_KeyReleaseEvent(QMdiArea* self, QKeyEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->keyReleaseEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseKeyReleaseEvent(QMdiArea* self, QKeyEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_KeyReleaseEvent_IsBase(true);
        vqmdiarea->keyReleaseEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnKeyReleaseEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_FocusInEvent(QMdiArea* self, QFocusEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->focusInEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseFocusInEvent(QMdiArea* self, QFocusEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_FocusInEvent_IsBase(true);
        vqmdiarea->focusInEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnFocusInEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_FocusInEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_FocusOutEvent(QMdiArea* self, QFocusEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->focusOutEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseFocusOutEvent(QMdiArea* self, QFocusEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_FocusOutEvent_IsBase(true);
        vqmdiarea->focusOutEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnFocusOutEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_FocusOutEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_EnterEvent(QMdiArea* self, QEnterEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->enterEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseEnterEvent(QMdiArea* self, QEnterEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_EnterEvent_IsBase(true);
        vqmdiarea->enterEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnEnterEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_EnterEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_LeaveEvent(QMdiArea* self, QEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->leaveEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseLeaveEvent(QMdiArea* self, QEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_LeaveEvent_IsBase(true);
        vqmdiarea->leaveEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnLeaveEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_LeaveEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_MoveEvent(QMdiArea* self, QMoveEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->moveEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseMoveEvent(QMdiArea* self, QMoveEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_MoveEvent_IsBase(true);
        vqmdiarea->moveEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMoveEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_MoveEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_CloseEvent(QMdiArea* self, QCloseEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->closeEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseCloseEvent(QMdiArea* self, QCloseEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_CloseEvent_IsBase(true);
        vqmdiarea->closeEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnCloseEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_CloseEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_TabletEvent(QMdiArea* self, QTabletEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->tabletEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseTabletEvent(QMdiArea* self, QTabletEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_TabletEvent_IsBase(true);
        vqmdiarea->tabletEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnTabletEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_TabletEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_ActionEvent(QMdiArea* self, QActionEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->actionEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseActionEvent(QMdiArea* self, QActionEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ActionEvent_IsBase(true);
        vqmdiarea->actionEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnActionEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ActionEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_HideEvent(QMdiArea* self, QHideEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->hideEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseHideEvent(QMdiArea* self, QHideEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_HideEvent_IsBase(true);
        vqmdiarea->hideEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnHideEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_HideEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiArea_NativeEvent(QMdiArea* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return vqmdiarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQMdiArea*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QMdiArea_QBaseNativeEvent(QMdiArea* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_NativeEvent_IsBase(true);
        return vqmdiarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQMdiArea*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnNativeEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_NativeEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QMdiArea_Metric(const QMdiArea* self, int param1) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return vqmdiarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQMdiArea*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QMdiArea_QBaseMetric(const QMdiArea* self, int param1) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_Metric_IsBase(true);
        return vqmdiarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQMdiArea*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMetric(const QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_Metric_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_InitPainter(const QMdiArea* self, QPainter* painter) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->initPainter(painter);
    } else {
        ((VirtualQMdiArea*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QMdiArea_QBaseInitPainter(const QMdiArea* self, QPainter* painter) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_InitPainter_IsBase(true);
        vqmdiarea->initPainter(painter);
    } else {
        ((VirtualQMdiArea*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnInitPainter(const QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_InitPainter_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QMdiArea_Redirected(const QMdiArea* self, QPoint* offset) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return vqmdiarea->redirected(offset);
    } else {
        return ((VirtualQMdiArea*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QMdiArea_QBaseRedirected(const QMdiArea* self, QPoint* offset) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_Redirected_IsBase(true);
        return vqmdiarea->redirected(offset);
    } else {
        return ((VirtualQMdiArea*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnRedirected(const QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_Redirected_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QMdiArea_SharedPainter(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return vqmdiarea->sharedPainter();
    } else {
        return ((VirtualQMdiArea*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QMdiArea_QBaseSharedPainter(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_SharedPainter_IsBase(true);
        return vqmdiarea->sharedPainter();
    } else {
        return ((VirtualQMdiArea*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnSharedPainter(const QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_SharedPainter_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_InputMethodEvent(QMdiArea* self, QInputMethodEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->inputMethodEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseInputMethodEvent(QMdiArea* self, QInputMethodEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_InputMethodEvent_IsBase(true);
        vqmdiarea->inputMethodEvent(param1);
    } else {
        ((VirtualQMdiArea*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnInputMethodEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_InputMethodEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QMdiArea_InputMethodQuery(const QMdiArea* self, int param1) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return new QVariant(vqmdiarea->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQMdiArea*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QMdiArea_QBaseInputMethodQuery(const QMdiArea* self, int param1) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_InputMethodQuery_IsBase(true);
        return new QVariant(vqmdiarea->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQMdiArea*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnInputMethodQuery(const QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_InputMethodQuery_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiArea_FocusNextPrevChild(QMdiArea* self, bool next) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return vqmdiarea->focusNextPrevChild(next);
    } else {
        return ((VirtualQMdiArea*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QMdiArea_QBaseFocusNextPrevChild(QMdiArea* self, bool next) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_FocusNextPrevChild_IsBase(true);
        return vqmdiarea->focusNextPrevChild(next);
    } else {
        return ((VirtualQMdiArea*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnFocusNextPrevChild(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_CustomEvent(QMdiArea* self, QEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->customEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseCustomEvent(QMdiArea* self, QEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_CustomEvent_IsBase(true);
        vqmdiarea->customEvent(event);
    } else {
        ((VirtualQMdiArea*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnCustomEvent(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_CustomEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_ConnectNotify(QMdiArea* self, const QMetaMethod* signal) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->connectNotify(*signal);
    } else {
        ((VirtualQMdiArea*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QMdiArea_QBaseConnectNotify(QMdiArea* self, const QMetaMethod* signal) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ConnectNotify_IsBase(true);
        vqmdiarea->connectNotify(*signal);
    } else {
        ((VirtualQMdiArea*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnConnectNotify(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ConnectNotify_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_DisconnectNotify(QMdiArea* self, const QMetaMethod* signal) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->disconnectNotify(*signal);
    } else {
        ((VirtualQMdiArea*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QMdiArea_QBaseDisconnectNotify(QMdiArea* self, const QMetaMethod* signal) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_DisconnectNotify_IsBase(true);
        vqmdiarea->disconnectNotify(*signal);
    } else {
        ((VirtualQMdiArea*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDisconnectNotify(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_DisconnectNotify_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_SetViewportMargins(QMdiArea* self, int left, int top, int right, int bottom) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQMdiArea*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QMdiArea_QBaseSetViewportMargins(QMdiArea* self, int left, int top, int right, int bottom) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_SetViewportMargins_IsBase(true);
        vqmdiarea->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQMdiArea*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnSetViewportMargins(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_SetViewportMargins_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QMdiArea_ViewportMargins(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return new QMargins(vqmdiarea->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QMdiArea_QBaseViewportMargins(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ViewportMargins_IsBase(true);
        return new QMargins(vqmdiarea->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnViewportMargins(const QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_ViewportMargins_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_DrawFrame(QMdiArea* self, QPainter* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->drawFrame(param1);
    } else {
        ((VirtualQMdiArea*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseDrawFrame(QMdiArea* self, QPainter* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_DrawFrame_IsBase(true);
        vqmdiarea->drawFrame(param1);
    } else {
        ((VirtualQMdiArea*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDrawFrame(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_DrawFrame_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_UpdateMicroFocus(QMdiArea* self) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->updateMicroFocus();
    } else {
        ((VirtualQMdiArea*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QMdiArea_QBaseUpdateMicroFocus(QMdiArea* self) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_UpdateMicroFocus_IsBase(true);
        vqmdiarea->updateMicroFocus();
    } else {
        ((VirtualQMdiArea*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnUpdateMicroFocus(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_Create(QMdiArea* self) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->create();
    } else {
        ((VirtualQMdiArea*)self)->create();
    }
}

// Base class handler implementation
void QMdiArea_QBaseCreate(QMdiArea* self) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_Create_IsBase(true);
        vqmdiarea->create();
    } else {
        ((VirtualQMdiArea*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnCreate(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_Create_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_Destroy(QMdiArea* self) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->destroy();
    } else {
        ((VirtualQMdiArea*)self)->destroy();
    }
}

// Base class handler implementation
void QMdiArea_QBaseDestroy(QMdiArea* self) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_Destroy_IsBase(true);
        vqmdiarea->destroy();
    } else {
        ((VirtualQMdiArea*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDestroy(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_Destroy_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiArea_FocusNextChild(QMdiArea* self) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return vqmdiarea->focusNextChild();
    } else {
        return ((VirtualQMdiArea*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QMdiArea_QBaseFocusNextChild(QMdiArea* self) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_FocusNextChild_IsBase(true);
        return vqmdiarea->focusNextChild();
    } else {
        return ((VirtualQMdiArea*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnFocusNextChild(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_FocusNextChild_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiArea_FocusPreviousChild(QMdiArea* self) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return vqmdiarea->focusPreviousChild();
    } else {
        return ((VirtualQMdiArea*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QMdiArea_QBaseFocusPreviousChild(QMdiArea* self) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_FocusPreviousChild_IsBase(true);
        return vqmdiarea->focusPreviousChild();
    } else {
        return ((VirtualQMdiArea*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnFocusPreviousChild(QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_FocusPreviousChild_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QMdiArea_Sender(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return vqmdiarea->sender();
    } else {
        return ((VirtualQMdiArea*)self)->sender();
    }
}

// Base class handler implementation
QObject* QMdiArea_QBaseSender(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_Sender_IsBase(true);
        return vqmdiarea->sender();
    } else {
        return ((VirtualQMdiArea*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnSender(const QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_Sender_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QMdiArea_SenderSignalIndex(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return vqmdiarea->senderSignalIndex();
    } else {
        return ((VirtualQMdiArea*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QMdiArea_QBaseSenderSignalIndex(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_SenderSignalIndex_IsBase(true);
        return vqmdiarea->senderSignalIndex();
    } else {
        return ((VirtualQMdiArea*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnSenderSignalIndex(const QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_SenderSignalIndex_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QMdiArea_Receivers(const QMdiArea* self, const char* signal) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return vqmdiarea->receivers(signal);
    } else {
        return ((VirtualQMdiArea*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QMdiArea_QBaseReceivers(const QMdiArea* self, const char* signal) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_Receivers_IsBase(true);
        return vqmdiarea->receivers(signal);
    } else {
        return ((VirtualQMdiArea*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnReceivers(const QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_Receivers_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiArea_IsSignalConnected(const QMdiArea* self, const QMetaMethod* signal) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return vqmdiarea->isSignalConnected(*signal);
    } else {
        return ((VirtualQMdiArea*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QMdiArea_QBaseIsSignalConnected(const QMdiArea* self, const QMetaMethod* signal) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_IsSignalConnected_IsBase(true);
        return vqmdiarea->isSignalConnected(*signal);
    } else {
        return ((VirtualQMdiArea*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnIsSignalConnected(const QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_IsSignalConnected_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QMdiArea_GetDecodedMetricF(const QMdiArea* self, int metricA, int metricB) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        return vqmdiarea->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQMdiArea*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QMdiArea_QBaseGetDecodedMetricF(const QMdiArea* self, int metricA, int metricB) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_GetDecodedMetricF_IsBase(true);
        return vqmdiarea->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQMdiArea*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnGetDecodedMetricF(const QMdiArea* self, intptr_t slot) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
        vqmdiarea->setQMdiArea_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_GetDecodedMetricF_Callback>(slot));
    }
}

void QMdiArea_Delete(QMdiArea* self) {
    delete self;
}
