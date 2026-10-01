#include <QAction>
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
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMenu>
#include <QMenuBar>
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
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionMenuItem>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qmenubar.h>
#include "libqmenubar.h"
#include "libqmenubar.hxx"

QMenuBar* QMenuBar_new(QWidget* parent) {
    return new VirtualQMenuBar(parent);
}

QMenuBar* QMenuBar_new2() {
    return new VirtualQMenuBar();
}

QMetaObject* QMenuBar_MetaObject(const QMenuBar* self) {
    return (QMetaObject*)self->metaObject();
}

void* QMenuBar_Metacast(QMenuBar* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QMenuBar_Metacall(QMenuBar* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QMenuBar_Tr(const char* s) {
    auto _ret = QMenuBar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAction* QMenuBar_AddMenu(QMenuBar* self, QMenu* menu) {
    return self->addMenu(menu);
}

QMenu* QMenuBar_AddMenu2(QMenuBar* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return self->addMenu(title_QString);
}

QMenu* QMenuBar_AddMenu3(QMenuBar* self, const QIcon* icon, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return self->addMenu(*icon, title_QString);
}

QAction* QMenuBar_AddSeparator(QMenuBar* self) {
    return self->addSeparator();
}

QAction* QMenuBar_InsertSeparator(QMenuBar* self, QAction* before) {
    return self->insertSeparator(before);
}

QAction* QMenuBar_InsertMenu(QMenuBar* self, QAction* before, QMenu* menu) {
    return self->insertMenu(before, menu);
}

void QMenuBar_Clear(QMenuBar* self) {
    self->clear();
}

QAction* QMenuBar_ActiveAction(const QMenuBar* self) {
    return self->activeAction();
}

void QMenuBar_SetActiveAction(QMenuBar* self, QAction* action) {
    self->setActiveAction(action);
}

void QMenuBar_SetDefaultUp(QMenuBar* self, bool defaultUp) {
    self->setDefaultUp(defaultUp);
}

bool QMenuBar_IsDefaultUp(const QMenuBar* self) {
    return self->isDefaultUp();
}

QSize* QMenuBar_SizeHint(const QMenuBar* self) {
    return new QSize(self->sizeHint());
}

QSize* QMenuBar_MinimumSizeHint(const QMenuBar* self) {
    return new QSize(self->minimumSizeHint());
}

int QMenuBar_HeightForWidth(const QMenuBar* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

QRect* QMenuBar_ActionGeometry(const QMenuBar* self, QAction* param1) {
    return new QRect(self->actionGeometry(param1));
}

QAction* QMenuBar_ActionAt(const QMenuBar* self, const QPoint* param1) {
    return self->actionAt(*param1);
}

void QMenuBar_SetCornerWidget(QMenuBar* self, QWidget* w) {
    self->setCornerWidget(w);
}

QWidget* QMenuBar_CornerWidget(const QMenuBar* self) {
    return self->cornerWidget();
}

bool QMenuBar_IsNativeMenuBar(const QMenuBar* self) {
    return self->isNativeMenuBar();
}

void QMenuBar_SetNativeMenuBar(QMenuBar* self, bool nativeMenuBar) {
    self->setNativeMenuBar(nativeMenuBar);
}

void QMenuBar_SetVisible(QMenuBar* self, bool visible) {
    self->setVisible(visible);
}

void QMenuBar_Triggered(QMenuBar* self, QAction* action) {
    self->triggered(action);
}

void QMenuBar_Connect_Triggered(QMenuBar* self, intptr_t slot) {
    void (*slotFunc)(QMenuBar*, QAction*) = reinterpret_cast<void (*)(QMenuBar*, QAction*)>(slot);
    QMenuBar::connect(self,
                      static_cast<void (QMenuBar::*)(QAction*)>(&QMenuBar::triggered),
                      [self, slotFunc](QAction* action) {
                          QAction* sigval1 = action;
                          slotFunc(self, sigval1);
                      });
}

void QMenuBar_Hovered(QMenuBar* self, QAction* action) {
    self->hovered(action);
}

void QMenuBar_Connect_Hovered(QMenuBar* self, intptr_t slot) {
    void (*slotFunc)(QMenuBar*, QAction*) = reinterpret_cast<void (*)(QMenuBar*, QAction*)>(slot);
    QMenuBar::connect(self,
                      static_cast<void (QMenuBar::*)(QAction*)>(&QMenuBar::hovered),
                      [self, slotFunc](QAction* action) {
                          QAction* sigval1 = action;
                          slotFunc(self, sigval1);
                      });
}

void QMenuBar_ChangeEvent(QMenuBar* self, QEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->changeEvent(param1);
    }
}

void QMenuBar_KeyPressEvent(QMenuBar* self, QKeyEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->keyPressEvent(param1);
    }
}

void QMenuBar_MouseReleaseEvent(QMenuBar* self, QMouseEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->mouseReleaseEvent(param1);
    }
}

void QMenuBar_MousePressEvent(QMenuBar* self, QMouseEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->mousePressEvent(param1);
    }
}

void QMenuBar_MouseMoveEvent(QMenuBar* self, QMouseEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->mouseMoveEvent(param1);
    }
}

void QMenuBar_LeaveEvent(QMenuBar* self, QEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->leaveEvent(param1);
    }
}

void QMenuBar_PaintEvent(QMenuBar* self, QPaintEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->paintEvent(param1);
    }
}

void QMenuBar_ResizeEvent(QMenuBar* self, QResizeEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->resizeEvent(param1);
    }
}

void QMenuBar_ActionEvent(QMenuBar* self, QActionEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->actionEvent(param1);
    }
}

void QMenuBar_FocusOutEvent(QMenuBar* self, QFocusEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->focusOutEvent(param1);
    }
}

void QMenuBar_FocusInEvent(QMenuBar* self, QFocusEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->focusInEvent(param1);
    }
}

void QMenuBar_TimerEvent(QMenuBar* self, QTimerEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->timerEvent(param1);
    }
}

bool QMenuBar_EventFilter(QMenuBar* self, QObject* param1, QEvent* param2) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        return vqmenubar->eventFilter(param1, param2);
    }
    qFatal("Error: Protected method QMenuBar::eventFilter called without a directly constructed type");
}

bool QMenuBar_Event(QMenuBar* self, QEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        return vqmenubar->event(param1);
    }
    qFatal("Error: Protected method QMenuBar::event called without a directly constructed type");
}

void QMenuBar_InitStyleOption(const QMenuBar* self, QStyleOptionMenuItem* option, const QAction* action) {
    auto* vqmenubar = dynamic_cast<const VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->initStyleOption(option, action);
    }
}

libqt_string QMenuBar_Tr2(const char* s, const char* c) {
    auto _ret = QMenuBar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMenuBar_Tr3(const char* s, const char* c, int n) {
    auto _ret = QMenuBar::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QMenuBar_SetCornerWidget2(QMenuBar* self, QWidget* w, int corner) {
    self->setCornerWidget(w, static_cast<Qt::Corner>(corner));
}

QWidget* QMenuBar_CornerWidget1(const QMenuBar* self, int corner) {
    return self->cornerWidget(static_cast<Qt::Corner>(corner));
}

// Base class handler implementation
QMetaObject* QMenuBar_SuperMetaObject(const QMenuBar* self) {
    return (QMetaObject*)self->QMenuBar::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMetaObject(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self)))
        vqmenubar->qmenubar_metaobject_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QMenuBar_SuperMetacast(QMenuBar* self, const char* param1) {
    return self->QMenuBar::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMetacast(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_metacast_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_Metacast_Callback>(slot);
}

// Base class handler implementation
int QMenuBar_SuperMetacall(QMenuBar* self, int param1, int param2, void** param3) {
    return self->QMenuBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMetacall(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_metacall_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QMenuBar_SuperSizeHint(const QMenuBar* self) {
    return new QSize(self->QMenuBar::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnSizeHint(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self)))
        vqmenubar->qmenubar_sizehint_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QMenuBar_SuperMinimumSizeHint(const QMenuBar* self) {
    return new QSize(self->QMenuBar::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMinimumSizeHint(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self)))
        vqmenubar->qmenubar_minimumsizehint_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
int QMenuBar_SuperHeightForWidth(const QMenuBar* self, int param1) {
    return self->QMenuBar::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnHeightForWidth(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self)))
        vqmenubar->qmenubar_heightforwidth_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_HeightForWidth_Callback>(slot);
}

// Base class handler implementation
void QMenuBar_SuperSetVisible(QMenuBar* self, bool visible) {
    self->QMenuBar::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnSetVisible(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_setvisible_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_SetVisible_Callback>(slot);
}

// Base class handler implementation
void QMenuBar_SuperChangeEvent(QMenuBar* self, QEvent* param1) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenuBar::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnChangeEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_changeevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QMenuBar_SuperKeyPressEvent(QMenuBar* self, QKeyEvent* param1) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenuBar::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnKeyPressEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_keypressevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QMenuBar_SuperMouseReleaseEvent(QMenuBar* self, QMouseEvent* param1) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenuBar::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMouseReleaseEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_mousereleaseevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QMenuBar_SuperMousePressEvent(QMenuBar* self, QMouseEvent* param1) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenuBar::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMousePressEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_mousepressevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QMenuBar_SuperMouseMoveEvent(QMenuBar* self, QMouseEvent* param1) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenuBar::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMouseMoveEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_mousemoveevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QMenuBar_SuperLeaveEvent(QMenuBar* self, QEvent* param1) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::leaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenuBar::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnLeaveEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_leaveevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_LeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QMenuBar_SuperPaintEvent(QMenuBar* self, QPaintEvent* param1) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenuBar::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnPaintEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_paintevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QMenuBar_SuperResizeEvent(QMenuBar* self, QResizeEvent* param1) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenuBar::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnResizeEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_resizeevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QMenuBar_SuperActionEvent(QMenuBar* self, QActionEvent* param1) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::actionEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenuBar::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnActionEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_actionevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_ActionEvent_Callback>(slot);
}

// Base class handler implementation
void QMenuBar_SuperFocusOutEvent(QMenuBar* self, QFocusEvent* param1) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::focusOutEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenuBar::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnFocusOutEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_focusoutevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void QMenuBar_SuperFocusInEvent(QMenuBar* self, QFocusEvent* param1) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenuBar::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnFocusInEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_focusinevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void QMenuBar_SuperTimerEvent(QMenuBar* self, QTimerEvent* param1) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenuBar::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnTimerEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_timerevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_TimerEvent_Callback>(slot);
}

// Base class handler implementation
bool QMenuBar_SuperEventFilter(QMenuBar* self, QObject* param1, QEvent* param2) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        return vqmenubar->QMenuBar::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QMenuBar::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnEventFilter(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_eventfilter_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_EventFilter_Callback>(slot);
}

// Base class handler implementation
bool QMenuBar_SuperEvent(QMenuBar* self, QEvent* param1) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        return vqmenubar->QMenuBar::event(param1);
    } else
        qFatal("Error: Protected virtual method QMenuBar::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_event_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_Event_Callback>(slot);
}

// Base class handler implementation
void QMenuBar_SuperInitStyleOption(const QMenuBar* self, QStyleOptionMenuItem* option, const QAction* action) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self))) {
        vqmenubar->QMenuBar::initStyleOption(option, action);
    } else
        qFatal("Error: Protected virtual method QMenuBar::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnInitStyleOption(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self)))
        vqmenubar->qmenubar_initstyleoption_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QMenuBar_DevType(const QMenuBar* self) {
    return self->devType();
}

// Base class handler implementation
int QMenuBar_SuperDevType(const QMenuBar* self) {
    return self->QMenuBar::devType();
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnDevType(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self)))
        vqmenubar->qmenubar_devtype_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_DevType_Callback>(slot);
}

// Derived class handler implementation
bool QMenuBar_HasHeightForWidth(const QMenuBar* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QMenuBar_SuperHasHeightForWidth(const QMenuBar* self) {
    return self->QMenuBar::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnHasHeightForWidth(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self)))
        vqmenubar->qmenubar_hasheightforwidth_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QMenuBar_PaintEngine(const QMenuBar* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QMenuBar_SuperPaintEngine(const QMenuBar* self) {
    return self->QMenuBar::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnPaintEngine(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self)))
        vqmenubar->qmenubar_paintengine_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QMenuBar_MouseDoubleClickEvent(QMenuBar* self, QMouseEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenuBar_SuperMouseDoubleClickEvent(QMenuBar* self, QMouseEvent* event) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenuBar::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMouseDoubleClickEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_mousedoubleclickevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenuBar_WheelEvent(QMenuBar* self, QWheelEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenuBar_SuperWheelEvent(QMenuBar* self, QWheelEvent* event) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenuBar::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnWheelEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_wheelevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenuBar_KeyReleaseEvent(QMenuBar* self, QKeyEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenuBar_SuperKeyReleaseEvent(QMenuBar* self, QKeyEvent* event) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenuBar::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnKeyReleaseEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_keyreleaseevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenuBar_EnterEvent(QMenuBar* self, QEnterEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenuBar_SuperEnterEvent(QMenuBar* self, QEnterEvent* event) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenuBar::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnEnterEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_enterevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenuBar_MoveEvent(QMenuBar* self, QMoveEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenuBar_SuperMoveEvent(QMenuBar* self, QMoveEvent* event) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenuBar::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMoveEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_moveevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenuBar_CloseEvent(QMenuBar* self, QCloseEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenuBar_SuperCloseEvent(QMenuBar* self, QCloseEvent* event) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenuBar::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnCloseEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_closeevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenuBar_ContextMenuEvent(QMenuBar* self, QContextMenuEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenuBar_SuperContextMenuEvent(QMenuBar* self, QContextMenuEvent* event) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenuBar::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnContextMenuEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_contextmenuevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenuBar_TabletEvent(QMenuBar* self, QTabletEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenuBar_SuperTabletEvent(QMenuBar* self, QTabletEvent* event) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenuBar::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnTabletEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_tabletevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenuBar_DragEnterEvent(QMenuBar* self, QDragEnterEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenuBar_SuperDragEnterEvent(QMenuBar* self, QDragEnterEvent* event) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenuBar::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnDragEnterEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_dragenterevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenuBar_DragMoveEvent(QMenuBar* self, QDragMoveEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenuBar_SuperDragMoveEvent(QMenuBar* self, QDragMoveEvent* event) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenuBar::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnDragMoveEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_dragmoveevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenuBar_DragLeaveEvent(QMenuBar* self, QDragLeaveEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenuBar_SuperDragLeaveEvent(QMenuBar* self, QDragLeaveEvent* event) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenuBar::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnDragLeaveEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_dragleaveevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenuBar_DropEvent(QMenuBar* self, QDropEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenuBar_SuperDropEvent(QMenuBar* self, QDropEvent* event) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenuBar::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnDropEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_dropevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenuBar_ShowEvent(QMenuBar* self, QShowEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenuBar_SuperShowEvent(QMenuBar* self, QShowEvent* event) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenuBar::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnShowEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_showevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenuBar_HideEvent(QMenuBar* self, QHideEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenuBar_SuperHideEvent(QMenuBar* self, QHideEvent* event) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenuBar::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnHideEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_hideevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QMenuBar_NativeEvent(QMenuBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        return vqmenubar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QMenuBar::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QMenuBar_SuperNativeEvent(QMenuBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        return vqmenubar->QMenuBar::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QMenuBar::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnNativeEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_nativeevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QMenuBar_Metric(const QMenuBar* self, int param1) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar) {
        return vqmenubar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QMenuBar::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QMenuBar_SuperMetric(const QMenuBar* self, int param1) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self))) {
        return vqmenubar->QMenuBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QMenuBar::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMetric(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self)))
        vqmenubar->qmenubar_metric_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_Metric_Callback>(slot);
}

// Derived class handler implementation
void QMenuBar_InitPainter(const QMenuBar* self, QPainter* painter) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar) {
        vqmenubar->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenuBar_SuperInitPainter(const QMenuBar* self, QPainter* painter) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self))) {
        vqmenubar->QMenuBar::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QMenuBar::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnInitPainter(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self)))
        vqmenubar->qmenubar_initpainter_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QMenuBar_Redirected(const QMenuBar* self, QPoint* offset) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar) {
        return vqmenubar->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QMenuBar_SuperRedirected(const QMenuBar* self, QPoint* offset) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self))) {
        return vqmenubar->QMenuBar::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QMenuBar::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnRedirected(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self)))
        vqmenubar->qmenubar_redirected_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QMenuBar_SharedPainter(const QMenuBar* self) {
    auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self));
    if (vqmenubar) {
        return vqmenubar->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QMenuBar::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QMenuBar_SuperSharedPainter(const QMenuBar* self) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self))) {
        return vqmenubar->QMenuBar::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QMenuBar::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnSharedPainter(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self)))
        vqmenubar->qmenubar_sharedpainter_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QMenuBar_InputMethodEvent(QMenuBar* self, QInputMethodEvent* param1) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenuBar_SuperInputMethodEvent(QMenuBar* self, QInputMethodEvent* param1) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMenuBar::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnInputMethodEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_inputmethodevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QMenuBar_InputMethodQuery(const QMenuBar* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QMenuBar_SuperInputMethodQuery(const QMenuBar* self, int param1) {
    return new QVariant(self->QMenuBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnInputMethodQuery(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self)))
        vqmenubar->qmenubar_inputmethodquery_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QMenuBar_FocusNextPrevChild(QMenuBar* self, bool next) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        return vqmenubar->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QMenuBar_SuperFocusNextPrevChild(QMenuBar* self, bool next) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        return vqmenubar->QMenuBar::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QMenuBar::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnFocusNextPrevChild(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_focusnextprevchild_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QMenuBar_ChildEvent(QMenuBar* self, QChildEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenuBar_SuperChildEvent(QMenuBar* self, QChildEvent* event) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenuBar::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnChildEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_childevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenuBar_CustomEvent(QMenuBar* self, QEvent* event) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenuBar_SuperCustomEvent(QMenuBar* self, QEvent* event) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QMenuBar::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnCustomEvent(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_customevent_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QMenuBar_ConnectNotify(QMenuBar* self, const QMetaMethod* signal) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenuBar_SuperConnectNotify(QMenuBar* self, const QMetaMethod* signal) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMenuBar::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnConnectNotify(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_connectnotify_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QMenuBar_DisconnectNotify(QMenuBar* self, const QMetaMethod* signal) {
    auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
    if (vqmenubar) {
        vqmenubar->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMenuBar::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMenuBar_SuperDisconnectNotify(QMenuBar* self, const QMetaMethod* signal) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->QMenuBar::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMenuBar::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnDisconnectNotify(QMenuBar* self, intptr_t slot) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self))
        vqmenubar->qmenubar_disconnectnotify_callback = reinterpret_cast<VirtualQMenuBar::QMenuBar_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QMenuBar_UpdateMicroFocus(QMenuBar* self) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->VirtualQMenuBar::updateMicroFocus();
    } else
        qFatal("Error: Protected method QMenuBar::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QMenuBar_Create(QMenuBar* self) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->VirtualQMenuBar::create();
    } else
        qFatal("Error: Protected method QMenuBar::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QMenuBar_Destroy(QMenuBar* self) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        vqmenubar->VirtualQMenuBar::destroy();
    } else
        qFatal("Error: Protected method QMenuBar::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMenuBar_FocusNextChild(QMenuBar* self) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        return vqmenubar->VirtualQMenuBar::focusNextChild();
    } else
        qFatal("Error: Protected method QMenuBar::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMenuBar_FocusPreviousChild(QMenuBar* self) {
    if (auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self)) {
        return vqmenubar->VirtualQMenuBar::focusPreviousChild();
    } else
        qFatal("Error: Protected method QMenuBar::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QMenuBar_Sender(const QMenuBar* self) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self))) {
        return vqmenubar->VirtualQMenuBar::sender();
    } else
        qFatal("Error: Protected method QMenuBar::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QMenuBar_SenderSignalIndex(const QMenuBar* self) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self))) {
        return vqmenubar->VirtualQMenuBar::senderSignalIndex();
    } else
        qFatal("Error: Protected method QMenuBar::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QMenuBar_Receivers(const QMenuBar* self, const char* signal) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self))) {
        return vqmenubar->VirtualQMenuBar::receivers(signal);
    } else
        qFatal("Error: Protected method QMenuBar::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMenuBar_IsSignalConnected(const QMenuBar* self, const QMetaMethod* signal) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self))) {
        return vqmenubar->VirtualQMenuBar::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QMenuBar::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QMenuBar_GetDecodedMetricF(const QMenuBar* self, int metricA, int metricB) {
    if (auto* vqmenubar = const_cast<VirtualQMenuBar*>(dynamic_cast<const VirtualQMenuBar*>(self))) {
        return vqmenubar->VirtualQMenuBar::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QMenuBar::getDecodedMetricF called without a directly constructed type");
}

void QMenuBar_Delete(QMenuBar* self) {
    delete self;
}
