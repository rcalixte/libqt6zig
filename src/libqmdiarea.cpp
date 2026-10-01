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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QMdiArea_Tr(const char* s) {
    auto _ret = QMdiArea::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QMdiArea_SizeHint(const QMdiArea* self) {
    return new QSize(self->sizeHint());
}

QSize* QMdiArea_MinimumSizeHint(const QMdiArea* self) {
    return new QSize(self->minimumSizeHint());
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
    QMdiSubWindow** _arr = static_cast<QMdiSubWindow**>(malloc(sizeof(QMdiSubWindow*) * (_ret.size())));
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
    QMdiArea::connect(self,
                      static_cast<void (QMdiArea::*)(QMdiSubWindow*)>(&QMdiArea::subWindowActivated),
                      [self, slotFunc](QMdiSubWindow* param1) {
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

void QMdiArea_SetupViewport(QMdiArea* self, QWidget* viewport) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->setupViewport(viewport);
    }
}

bool QMdiArea_Event(QMdiArea* self, QEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        return vqmdiarea->event(event);
    }
    qFatal("Error: Protected method QMdiArea::event called without a directly constructed type");
}

bool QMdiArea_EventFilter(QMdiArea* self, QObject* object, QEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        return vqmdiarea->eventFilter(object, event);
    }
    qFatal("Error: Protected method QMdiArea::eventFilter called without a directly constructed type");
}

void QMdiArea_PaintEvent(QMdiArea* self, QPaintEvent* paintEvent) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->paintEvent(paintEvent);
    }
}

void QMdiArea_ChildEvent(QMdiArea* self, QChildEvent* childEvent) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->childEvent(childEvent);
    }
}

void QMdiArea_ResizeEvent(QMdiArea* self, QResizeEvent* resizeEvent) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->resizeEvent(resizeEvent);
    }
}

void QMdiArea_TimerEvent(QMdiArea* self, QTimerEvent* timerEvent) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->timerEvent(timerEvent);
    }
}

void QMdiArea_ShowEvent(QMdiArea* self, QShowEvent* showEvent) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->showEvent(showEvent);
    }
}

bool QMdiArea_ViewportEvent(QMdiArea* self, QEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        return vqmdiarea->viewportEvent(event);
    }
    qFatal("Error: Protected method QMdiArea::viewportEvent called without a directly constructed type");
}

void QMdiArea_ScrollContentsBy(QMdiArea* self, int dx, int dy) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

libqt_string QMdiArea_Tr2(const char* s, const char* c) {
    auto _ret = QMdiArea::tr(s, c);
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
    auto _ret = QMdiArea::tr(s, c, static_cast<int>(n));
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
    QMdiSubWindow** _arr = static_cast<QMdiSubWindow**>(malloc(sizeof(QMdiSubWindow*) * (_ret.size())));
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

// Base class handler implementation
QMetaObject* QMdiArea_SuperMetaObject(const QMdiArea* self) {
    return (QMetaObject*)self->QMdiArea::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMetaObject(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self)))
        vqmdiarea->qmdiarea_metaobject_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QMdiArea_SuperMetacast(QMdiArea* self, const char* param1) {
    return self->QMdiArea::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMetacast(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_metacast_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_Metacast_Callback>(slot);
}

// Base class handler implementation
int QMdiArea_SuperMetacall(QMdiArea* self, int param1, int param2, void** param3) {
    return self->QMdiArea::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMetacall(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_metacall_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QMdiArea_SuperSizeHint(const QMdiArea* self) {
    return new QSize(self->QMdiArea::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnSizeHint(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self)))
        vqmdiarea->qmdiarea_sizehint_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QMdiArea_SuperMinimumSizeHint(const QMdiArea* self) {
    return new QSize(self->QMdiArea::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMinimumSizeHint(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self)))
        vqmdiarea->qmdiarea_minimumsizehint_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
void QMdiArea_SuperSetupViewport(QMdiArea* self, QWidget* viewport) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::setupViewport(viewport);
    } else
        qFatal("Error: Protected virtual method QMdiArea::setupViewport called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnSetupViewport(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_setupviewport_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_SetupViewport_Callback>(slot);
}

// Base class handler implementation
bool QMdiArea_SuperEvent(QMdiArea* self, QEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        return vqmdiarea->QMdiArea::event(event);
    } else
        qFatal("Error: Protected virtual method QMdiArea::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_event_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_Event_Callback>(slot);
}

// Base class handler implementation
bool QMdiArea_SuperEventFilter(QMdiArea* self, QObject* object, QEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        return vqmdiarea->QMdiArea::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method QMdiArea::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnEventFilter(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_eventfilter_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_EventFilter_Callback>(slot);
}

// Base class handler implementation
void QMdiArea_SuperPaintEvent(QMdiArea* self, QPaintEvent* paintEvent) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::paintEvent(paintEvent);
    } else
        qFatal("Error: Protected virtual method QMdiArea::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnPaintEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_paintevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiArea_SuperChildEvent(QMdiArea* self, QChildEvent* childEvent) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::childEvent(childEvent);
    } else
        qFatal("Error: Protected virtual method QMdiArea::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnChildEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_childevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_ChildEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiArea_SuperResizeEvent(QMdiArea* self, QResizeEvent* resizeEvent) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::resizeEvent(resizeEvent);
    } else
        qFatal("Error: Protected virtual method QMdiArea::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnResizeEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_resizeevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiArea_SuperTimerEvent(QMdiArea* self, QTimerEvent* timerEvent) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::timerEvent(timerEvent);
    } else
        qFatal("Error: Protected virtual method QMdiArea::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnTimerEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_timerevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_TimerEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiArea_SuperShowEvent(QMdiArea* self, QShowEvent* showEvent) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::showEvent(showEvent);
    } else
        qFatal("Error: Protected virtual method QMdiArea::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnShowEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_showevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_ShowEvent_Callback>(slot);
}

// Base class handler implementation
bool QMdiArea_SuperViewportEvent(QMdiArea* self, QEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        return vqmdiarea->QMdiArea::viewportEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiArea::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnViewportEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_viewportevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_ViewportEvent_Callback>(slot);
}

// Base class handler implementation
void QMdiArea_SuperScrollContentsBy(QMdiArea* self, int dx, int dy) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QMdiArea::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnScrollContentsBy(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_scrollcontentsby_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_MousePressEvent(QMdiArea* self, QMouseEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->mousePressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperMousePressEvent(QMdiArea* self, QMouseEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMdiArea::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMousePressEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_mousepressevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_MouseReleaseEvent(QMdiArea* self, QMouseEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->mouseReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperMouseReleaseEvent(QMdiArea* self, QMouseEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMdiArea::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMouseReleaseEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_mousereleaseevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_MouseDoubleClickEvent(QMdiArea* self, QMouseEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->mouseDoubleClickEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperMouseDoubleClickEvent(QMdiArea* self, QMouseEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::mouseDoubleClickEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMdiArea::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMouseDoubleClickEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_mousedoubleclickevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_MouseMoveEvent(QMdiArea* self, QMouseEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->mouseMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperMouseMoveEvent(QMdiArea* self, QMouseEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMdiArea::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMouseMoveEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_mousemoveevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_WheelEvent(QMdiArea* self, QWheelEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->wheelEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperWheelEvent(QMdiArea* self, QWheelEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMdiArea::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnWheelEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_wheelevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_ContextMenuEvent(QMdiArea* self, QContextMenuEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperContextMenuEvent(QMdiArea* self, QContextMenuEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMdiArea::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnContextMenuEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_contextmenuevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_DragEnterEvent(QMdiArea* self, QDragEnterEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->dragEnterEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperDragEnterEvent(QMdiArea* self, QDragEnterEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::dragEnterEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMdiArea::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDragEnterEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_dragenterevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_DragMoveEvent(QMdiArea* self, QDragMoveEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->dragMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperDragMoveEvent(QMdiArea* self, QDragMoveEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::dragMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMdiArea::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDragMoveEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_dragmoveevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_DragLeaveEvent(QMdiArea* self, QDragLeaveEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->dragLeaveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperDragLeaveEvent(QMdiArea* self, QDragLeaveEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::dragLeaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMdiArea::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDragLeaveEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_dragleaveevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_DropEvent(QMdiArea* self, QDropEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->dropEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperDropEvent(QMdiArea* self, QDropEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::dropEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMdiArea::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDropEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_dropevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_KeyPressEvent(QMdiArea* self, QKeyEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperKeyPressEvent(QMdiArea* self, QKeyEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMdiArea::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnKeyPressEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_keypressevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* QMdiArea_ViewportSizeHint(const QMdiArea* self) {
    return new QSize((self->*&VirtualQMdiArea::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* QMdiArea_SuperViewportSizeHint(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self)))
        return new QSize(vqmdiarea->viewportSizeHint());
    qFatal("Error: Protected virtual method QMdiArea::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnViewportSizeHint(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self)))
        vqmdiarea->qmdiarea_viewportsizehint_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_ChangeEvent(QMdiArea* self, QEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperChangeEvent(QMdiArea* self, QEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMdiArea::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnChangeEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_changeevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_InitStyleOption(const QMdiArea* self, QStyleOptionFrame* option) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea) {
        vqmdiarea->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperInitStyleOption(const QMdiArea* self, QStyleOptionFrame* option) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->QMdiArea::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QMdiArea::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnInitStyleOption(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self)))
        vqmdiarea->qmdiarea_initstyleoption_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QMdiArea_DevType(const QMdiArea* self) {
    return self->devType();
}

// Base class handler implementation
int QMdiArea_SuperDevType(const QMdiArea* self) {
    return self->QMdiArea::devType();
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDevType(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self)))
        vqmdiarea->qmdiarea_devtype_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_DevType_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_SetVisible(QMdiArea* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QMdiArea_SuperSetVisible(QMdiArea* self, bool visible) {
    self->QMdiArea::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnSetVisible(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_setvisible_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QMdiArea_HeightForWidth(const QMdiArea* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QMdiArea_SuperHeightForWidth(const QMdiArea* self, int param1) {
    return self->QMdiArea::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnHeightForWidth(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self)))
        vqmdiarea->qmdiarea_heightforwidth_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QMdiArea_HasHeightForWidth(const QMdiArea* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QMdiArea_SuperHasHeightForWidth(const QMdiArea* self) {
    return self->QMdiArea::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnHasHeightForWidth(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self)))
        vqmdiarea->qmdiarea_hasheightforwidth_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QMdiArea_PaintEngine(const QMdiArea* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QMdiArea_SuperPaintEngine(const QMdiArea* self) {
    return self->QMdiArea::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnPaintEngine(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self)))
        vqmdiarea->qmdiarea_paintengine_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_KeyReleaseEvent(QMdiArea* self, QKeyEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperKeyReleaseEvent(QMdiArea* self, QKeyEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiArea::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnKeyReleaseEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_keyreleaseevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_FocusInEvent(QMdiArea* self, QFocusEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperFocusInEvent(QMdiArea* self, QFocusEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiArea::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnFocusInEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_focusinevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_FocusOutEvent(QMdiArea* self, QFocusEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperFocusOutEvent(QMdiArea* self, QFocusEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiArea::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnFocusOutEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_focusoutevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_EnterEvent(QMdiArea* self, QEnterEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperEnterEvent(QMdiArea* self, QEnterEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiArea::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnEnterEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_enterevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_LeaveEvent(QMdiArea* self, QEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperLeaveEvent(QMdiArea* self, QEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiArea::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnLeaveEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_leaveevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_MoveEvent(QMdiArea* self, QMoveEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperMoveEvent(QMdiArea* self, QMoveEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiArea::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMoveEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_moveevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_CloseEvent(QMdiArea* self, QCloseEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperCloseEvent(QMdiArea* self, QCloseEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiArea::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnCloseEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_closeevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_TabletEvent(QMdiArea* self, QTabletEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperTabletEvent(QMdiArea* self, QTabletEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiArea::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnTabletEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_tabletevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_ActionEvent(QMdiArea* self, QActionEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperActionEvent(QMdiArea* self, QActionEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiArea::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnActionEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_actionevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_HideEvent(QMdiArea* self, QHideEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperHideEvent(QMdiArea* self, QHideEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiArea::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnHideEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_hideevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QMdiArea_NativeEvent(QMdiArea* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        return vqmdiarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QMdiArea::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QMdiArea_SuperNativeEvent(QMdiArea* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        return vqmdiarea->QMdiArea::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QMdiArea::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnNativeEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_nativeevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QMdiArea_Metric(const QMdiArea* self, int param1) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea) {
        return vqmdiarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QMdiArea::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QMdiArea_SuperMetric(const QMdiArea* self, int param1) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return vqmdiarea->QMdiArea::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QMdiArea::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMetric(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self)))
        vqmdiarea->qmdiarea_metric_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_Metric_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_InitPainter(const QMdiArea* self, QPainter* painter) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea) {
        vqmdiarea->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperInitPainter(const QMdiArea* self, QPainter* painter) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->QMdiArea::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QMdiArea::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnInitPainter(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self)))
        vqmdiarea->qmdiarea_initpainter_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QMdiArea_Redirected(const QMdiArea* self, QPoint* offset) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea) {
        return vqmdiarea->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QMdiArea_SuperRedirected(const QMdiArea* self, QPoint* offset) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return vqmdiarea->QMdiArea::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QMdiArea::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnRedirected(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self)))
        vqmdiarea->qmdiarea_redirected_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QMdiArea_SharedPainter(const QMdiArea* self) {
    auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self));
    if (vqmdiarea) {
        return vqmdiarea->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QMdiArea::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QMdiArea_SuperSharedPainter(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return vqmdiarea->QMdiArea::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QMdiArea::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnSharedPainter(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self)))
        vqmdiarea->qmdiarea_sharedpainter_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_InputMethodEvent(QMdiArea* self, QInputMethodEvent* param1) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperInputMethodEvent(QMdiArea* self, QInputMethodEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMdiArea::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnInputMethodEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_inputmethodevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QMdiArea_InputMethodQuery(const QMdiArea* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QMdiArea_SuperInputMethodQuery(const QMdiArea* self, int param1) {
    return new QVariant(self->QMdiArea::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnInputMethodQuery(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self)))
        vqmdiarea->qmdiarea_inputmethodquery_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QMdiArea_FocusNextPrevChild(QMdiArea* self, bool next) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        return vqmdiarea->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QMdiArea_SuperFocusNextPrevChild(QMdiArea* self, bool next) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        return vqmdiarea->QMdiArea::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QMdiArea::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnFocusNextPrevChild(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_focusnextprevchild_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_CustomEvent(QMdiArea* self, QEvent* event) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperCustomEvent(QMdiArea* self, QEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QMdiArea::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnCustomEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_customevent_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_ConnectNotify(QMdiArea* self, const QMetaMethod* signal) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperConnectNotify(QMdiArea* self, const QMetaMethod* signal) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMdiArea::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnConnectNotify(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_connectnotify_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QMdiArea_DisconnectNotify(QMdiArea* self, const QMetaMethod* signal) {
    auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
    if (vqmdiarea) {
        vqmdiarea->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMdiArea::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMdiArea_SuperDisconnectNotify(QMdiArea* self, const QMetaMethod* signal) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->QMdiArea::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMdiArea::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDisconnectNotify(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self))
        vqmdiarea->qmdiarea_disconnectnotify_callback = reinterpret_cast<VirtualQMdiArea::QMdiArea_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QMdiArea_SetViewportMargins(QMdiArea* self, int left, int top, int right, int bottom) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->VirtualQMdiArea::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QMdiArea::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QMdiArea_ViewportMargins(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self)))
        return new QMargins(vqmdiarea->viewportMargins());
    qFatal("Error: Protected method QMdiArea::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QMdiArea_DrawFrame(QMdiArea* self, QPainter* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->VirtualQMdiArea::drawFrame(param1);
    } else
        qFatal("Error: Protected method QMdiArea::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QMdiArea_UpdateMicroFocus(QMdiArea* self) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->VirtualQMdiArea::updateMicroFocus();
    } else
        qFatal("Error: Protected method QMdiArea::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QMdiArea_Create(QMdiArea* self) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->VirtualQMdiArea::create();
    } else
        qFatal("Error: Protected method QMdiArea::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QMdiArea_Destroy(QMdiArea* self) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->VirtualQMdiArea::destroy();
    } else
        qFatal("Error: Protected method QMdiArea::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMdiArea_FocusNextChild(QMdiArea* self) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        return vqmdiarea->VirtualQMdiArea::focusNextChild();
    } else
        qFatal("Error: Protected method QMdiArea::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMdiArea_FocusPreviousChild(QMdiArea* self) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        return vqmdiarea->VirtualQMdiArea::focusPreviousChild();
    } else
        qFatal("Error: Protected method QMdiArea::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QMdiArea_Sender(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return vqmdiarea->VirtualQMdiArea::sender();
    } else
        qFatal("Error: Protected method QMdiArea::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QMdiArea_SenderSignalIndex(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return vqmdiarea->VirtualQMdiArea::senderSignalIndex();
    } else
        qFatal("Error: Protected method QMdiArea::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QMdiArea_Receivers(const QMdiArea* self, const char* signal) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return vqmdiarea->VirtualQMdiArea::receivers(signal);
    } else
        qFatal("Error: Protected method QMdiArea::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMdiArea_IsSignalConnected(const QMdiArea* self, const QMetaMethod* signal) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return vqmdiarea->VirtualQMdiArea::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QMdiArea::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QMdiArea_GetDecodedMetricF(const QMdiArea* self, int metricA, int metricB) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return vqmdiarea->VirtualQMdiArea::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QMdiArea::getDecodedMetricF called without a directly constructed type");
}

void QMdiArea_Delete(QMdiArea* self) {
    delete self;
}
