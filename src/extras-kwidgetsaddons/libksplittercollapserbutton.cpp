#include <KSplitterCollapserButton>
#include <QAbstractButton>
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
#include <QSplitter>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionToolButton>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QToolButton>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <ksplittercollapserbutton.h>
#include "libksplittercollapserbutton.h"
#include "libksplittercollapserbutton.hxx"

KSplitterCollapserButton* KSplitterCollapserButton_new(QWidget* childWidget, QSplitter* splitter) {
    return new VirtualKSplitterCollapserButton(childWidget, splitter);
}

QMetaObject* KSplitterCollapserButton_MetaObject(const KSplitterCollapserButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSplitterCollapserButton_Metacast(KSplitterCollapserButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSplitterCollapserButton_Metacall(KSplitterCollapserButton* self, int param1, int param2, void** param3) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSplitterCollapserButton_OnMetacall(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_Metacall_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KSplitterCollapserButton_QBaseMetacall(KSplitterCollapserButton* self, int param1, int param2, void** param3) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_Metacall_IsBase(true);
        return vksplittercollapserbutton->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KSplitterCollapserButton_Tr(const char* s) {
    QString _ret = KSplitterCollapserButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KSplitterCollapserButton_IsWidgetCollapsed(const KSplitterCollapserButton* self) {
    return self->isWidgetCollapsed();
}

QSize* KSplitterCollapserButton_SizeHint(const KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = dynamic_cast<const VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualKSplitterCollapserButton*)self)->sizeHint());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSplitterCollapserButton_OnSizeHint(const KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_SizeHint_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_SizeHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* KSplitterCollapserButton_QBaseSizeHint(const KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = dynamic_cast<const VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_SizeHint_IsBase(true);
        return new QSize(vksplittercollapserbutton->sizeHint());
    } else {
        return new QSize(((VirtualKSplitterCollapserButton*)self)->sizeHint());
    }
}

void KSplitterCollapserButton_Collapse(KSplitterCollapserButton* self) {
    self->collapse();
}

void KSplitterCollapserButton_Restore(KSplitterCollapserButton* self) {
    self->restore();
}

void KSplitterCollapserButton_SetCollapsed(KSplitterCollapserButton* self, bool collapsed) {
    self->setCollapsed(collapsed);
}

bool KSplitterCollapserButton_EventFilter(KSplitterCollapserButton* self, QObject* param1, QEvent* param2) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return vksplittercollapserbutton->eventFilter(param1, param2);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void KSplitterCollapserButton_OnEventFilter(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_EventFilter_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_EventFilter_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool KSplitterCollapserButton_QBaseEventFilter(KSplitterCollapserButton* self, QObject* param1, QEvent* param2) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_EventFilter_IsBase(true);
        return vksplittercollapserbutton->eventFilter(param1, param2);
    }
    return {};
}

void KSplitterCollapserButton_PaintEvent(KSplitterCollapserButton* self, QPaintEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->paintEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSplitterCollapserButton_OnPaintEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_PaintEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_PaintEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KSplitterCollapserButton_QBasePaintEvent(KSplitterCollapserButton* self, QPaintEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_PaintEvent_IsBase(true);
        vksplittercollapserbutton->paintEvent(param1);
    }
}

void KSplitterCollapserButton_EnterEvent(KSplitterCollapserButton* self, QEnterEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->enterEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSplitterCollapserButton_OnEnterEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_EnterEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_EnterEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KSplitterCollapserButton_QBaseEnterEvent(KSplitterCollapserButton* self, QEnterEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_EnterEvent_IsBase(true);
        vksplittercollapserbutton->enterEvent(event);
    }
}

void KSplitterCollapserButton_LeaveEvent(KSplitterCollapserButton* self, QEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->leaveEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSplitterCollapserButton_OnLeaveEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_LeaveEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_LeaveEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KSplitterCollapserButton_QBaseLeaveEvent(KSplitterCollapserButton* self, QEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_LeaveEvent_IsBase(true);
        vksplittercollapserbutton->leaveEvent(event);
    }
}

void KSplitterCollapserButton_ShowEvent(KSplitterCollapserButton* self, QShowEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->showEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSplitterCollapserButton_OnShowEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_ShowEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_ShowEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KSplitterCollapserButton_QBaseShowEvent(KSplitterCollapserButton* self, QShowEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_ShowEvent_IsBase(true);
        vksplittercollapserbutton->showEvent(event);
    }
}

libqt_string KSplitterCollapserButton_Tr2(const char* s, const char* c) {
    QString _ret = KSplitterCollapserButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSplitterCollapserButton_Tr3(const char* s, const char* c, int n) {
    QString _ret = KSplitterCollapserButton::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QSize* KSplitterCollapserButton_MinimumSizeHint(const KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return new QSize(vksplittercollapserbutton->minimumSizeHint());
    } else {
        return new QSize(((VirtualKSplitterCollapserButton*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KSplitterCollapserButton_QBaseMinimumSizeHint(const KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_MinimumSizeHint_IsBase(true);
        return new QSize(vksplittercollapserbutton->minimumSizeHint());
    } else {
        return new QSize(((VirtualKSplitterCollapserButton*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnMinimumSizeHint(const KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_MinimumSizeHint_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSplitterCollapserButton_Event(KSplitterCollapserButton* self, QEvent* e) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return vksplittercollapserbutton->event(e);
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->event(e);
    }
}

// Base class handler implementation
bool KSplitterCollapserButton_QBaseEvent(KSplitterCollapserButton* self, QEvent* e) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_Event_IsBase(true);
        return vksplittercollapserbutton->event(e);
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_Event_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_MousePressEvent(KSplitterCollapserButton* self, QMouseEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->mousePressEvent(param1);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->mousePressEvent(param1);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseMousePressEvent(KSplitterCollapserButton* self, QMouseEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_MousePressEvent_IsBase(true);
        vksplittercollapserbutton->mousePressEvent(param1);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnMousePressEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_MousePressEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_MouseReleaseEvent(KSplitterCollapserButton* self, QMouseEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->mouseReleaseEvent(param1);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseMouseReleaseEvent(KSplitterCollapserButton* self, QMouseEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_MouseReleaseEvent_IsBase(true);
        vksplittercollapserbutton->mouseReleaseEvent(param1);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnMouseReleaseEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_ActionEvent(KSplitterCollapserButton* self, QActionEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->actionEvent(param1);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->actionEvent(param1);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseActionEvent(KSplitterCollapserButton* self, QActionEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_ActionEvent_IsBase(true);
        vksplittercollapserbutton->actionEvent(param1);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->actionEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnActionEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_ActionEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_TimerEvent(KSplitterCollapserButton* self, QTimerEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->timerEvent(param1);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->timerEvent(param1);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseTimerEvent(KSplitterCollapserButton* self, QTimerEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_TimerEvent_IsBase(true);
        vksplittercollapserbutton->timerEvent(param1);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnTimerEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_TimerEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_ChangeEvent(KSplitterCollapserButton* self, QEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->changeEvent(param1);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseChangeEvent(KSplitterCollapserButton* self, QEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_ChangeEvent_IsBase(true);
        vksplittercollapserbutton->changeEvent(param1);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnChangeEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_ChangeEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSplitterCollapserButton_HitButton(const KSplitterCollapserButton* self, const QPoint* pos) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return vksplittercollapserbutton->hitButton(*pos);
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->hitButton(*pos);
    }
}

// Base class handler implementation
bool KSplitterCollapserButton_QBaseHitButton(const KSplitterCollapserButton* self, const QPoint* pos) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_HitButton_IsBase(true);
        return vksplittercollapserbutton->hitButton(*pos);
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->hitButton(*pos);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnHitButton(const KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_HitButton_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_HitButton_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_CheckStateSet(KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->checkStateSet();
    } else {
        ((VirtualKSplitterCollapserButton*)self)->checkStateSet();
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseCheckStateSet(KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_CheckStateSet_IsBase(true);
        vksplittercollapserbutton->checkStateSet();
    } else {
        ((VirtualKSplitterCollapserButton*)self)->checkStateSet();
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnCheckStateSet(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_CheckStateSet_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_CheckStateSet_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_NextCheckState(KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->nextCheckState();
    } else {
        ((VirtualKSplitterCollapserButton*)self)->nextCheckState();
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseNextCheckState(KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_NextCheckState_IsBase(true);
        vksplittercollapserbutton->nextCheckState();
    } else {
        ((VirtualKSplitterCollapserButton*)self)->nextCheckState();
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnNextCheckState(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_NextCheckState_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_NextCheckState_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_InitStyleOption(const KSplitterCollapserButton* self, QStyleOptionToolButton* option) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->initStyleOption(option);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseInitStyleOption(const KSplitterCollapserButton* self, QStyleOptionToolButton* option) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_InitStyleOption_IsBase(true);
        vksplittercollapserbutton->initStyleOption(option);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnInitStyleOption(const KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_InitStyleOption_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_KeyPressEvent(KSplitterCollapserButton* self, QKeyEvent* e) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->keyPressEvent(e);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseKeyPressEvent(KSplitterCollapserButton* self, QKeyEvent* e) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_KeyPressEvent_IsBase(true);
        vksplittercollapserbutton->keyPressEvent(e);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnKeyPressEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_KeyPressEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_KeyReleaseEvent(KSplitterCollapserButton* self, QKeyEvent* e) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->keyReleaseEvent(e);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseKeyReleaseEvent(KSplitterCollapserButton* self, QKeyEvent* e) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_KeyReleaseEvent_IsBase(true);
        vksplittercollapserbutton->keyReleaseEvent(e);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnKeyReleaseEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_MouseMoveEvent(KSplitterCollapserButton* self, QMouseEvent* e) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->mouseMoveEvent(e);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseMouseMoveEvent(KSplitterCollapserButton* self, QMouseEvent* e) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_MouseMoveEvent_IsBase(true);
        vksplittercollapserbutton->mouseMoveEvent(e);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnMouseMoveEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_MouseMoveEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_FocusInEvent(KSplitterCollapserButton* self, QFocusEvent* e) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->focusInEvent(e);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseFocusInEvent(KSplitterCollapserButton* self, QFocusEvent* e) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_FocusInEvent_IsBase(true);
        vksplittercollapserbutton->focusInEvent(e);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnFocusInEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_FocusInEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_FocusOutEvent(KSplitterCollapserButton* self, QFocusEvent* e) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->focusOutEvent(e);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseFocusOutEvent(KSplitterCollapserButton* self, QFocusEvent* e) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_FocusOutEvent_IsBase(true);
        vksplittercollapserbutton->focusOutEvent(e);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnFocusOutEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_FocusOutEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KSplitterCollapserButton_DevType(const KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return vksplittercollapserbutton->devType();
    } else {
        return self->KSplitterCollapserButton::devType();
    }
}

// Base class handler implementation
int KSplitterCollapserButton_QBaseDevType(const KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_DevType_IsBase(true);
        return vksplittercollapserbutton->devType();
    } else {
        return self->KSplitterCollapserButton::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnDevType(const KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_DevType_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_SetVisible(KSplitterCollapserButton* self, bool visible) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setVisible(visible);
    } else {
        self->KSplitterCollapserButton::setVisible(visible);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseSetVisible(KSplitterCollapserButton* self, bool visible) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_SetVisible_IsBase(true);
        vksplittercollapserbutton->setVisible(visible);
    } else {
        self->KSplitterCollapserButton::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnSetVisible(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_SetVisible_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KSplitterCollapserButton_HeightForWidth(const KSplitterCollapserButton* self, int param1) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return vksplittercollapserbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KSplitterCollapserButton::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KSplitterCollapserButton_QBaseHeightForWidth(const KSplitterCollapserButton* self, int param1) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_HeightForWidth_IsBase(true);
        return vksplittercollapserbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KSplitterCollapserButton::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnHeightForWidth(const KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_HeightForWidth_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSplitterCollapserButton_HasHeightForWidth(const KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return vksplittercollapserbutton->hasHeightForWidth();
    } else {
        return self->KSplitterCollapserButton::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KSplitterCollapserButton_QBaseHasHeightForWidth(const KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_HasHeightForWidth_IsBase(true);
        return vksplittercollapserbutton->hasHeightForWidth();
    } else {
        return self->KSplitterCollapserButton::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnHasHeightForWidth(const KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_HasHeightForWidth_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KSplitterCollapserButton_PaintEngine(const KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return vksplittercollapserbutton->paintEngine();
    } else {
        return self->KSplitterCollapserButton::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KSplitterCollapserButton_QBasePaintEngine(const KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_PaintEngine_IsBase(true);
        return vksplittercollapserbutton->paintEngine();
    } else {
        return self->KSplitterCollapserButton::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnPaintEngine(const KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_PaintEngine_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_MouseDoubleClickEvent(KSplitterCollapserButton* self, QMouseEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseMouseDoubleClickEvent(KSplitterCollapserButton* self, QMouseEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_MouseDoubleClickEvent_IsBase(true);
        vksplittercollapserbutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnMouseDoubleClickEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_WheelEvent(KSplitterCollapserButton* self, QWheelEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->wheelEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseWheelEvent(KSplitterCollapserButton* self, QWheelEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_WheelEvent_IsBase(true);
        vksplittercollapserbutton->wheelEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnWheelEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_WheelEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_MoveEvent(KSplitterCollapserButton* self, QMoveEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->moveEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseMoveEvent(KSplitterCollapserButton* self, QMoveEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_MoveEvent_IsBase(true);
        vksplittercollapserbutton->moveEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnMoveEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_MoveEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_ResizeEvent(KSplitterCollapserButton* self, QResizeEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->resizeEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseResizeEvent(KSplitterCollapserButton* self, QResizeEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_ResizeEvent_IsBase(true);
        vksplittercollapserbutton->resizeEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnResizeEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_ResizeEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_CloseEvent(KSplitterCollapserButton* self, QCloseEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->closeEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseCloseEvent(KSplitterCollapserButton* self, QCloseEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_CloseEvent_IsBase(true);
        vksplittercollapserbutton->closeEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnCloseEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_CloseEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_ContextMenuEvent(KSplitterCollapserButton* self, QContextMenuEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->contextMenuEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseContextMenuEvent(KSplitterCollapserButton* self, QContextMenuEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_ContextMenuEvent_IsBase(true);
        vksplittercollapserbutton->contextMenuEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnContextMenuEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_ContextMenuEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_TabletEvent(KSplitterCollapserButton* self, QTabletEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->tabletEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseTabletEvent(KSplitterCollapserButton* self, QTabletEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_TabletEvent_IsBase(true);
        vksplittercollapserbutton->tabletEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnTabletEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_TabletEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_DragEnterEvent(KSplitterCollapserButton* self, QDragEnterEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->dragEnterEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseDragEnterEvent(KSplitterCollapserButton* self, QDragEnterEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_DragEnterEvent_IsBase(true);
        vksplittercollapserbutton->dragEnterEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnDragEnterEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_DragEnterEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_DragMoveEvent(KSplitterCollapserButton* self, QDragMoveEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->dragMoveEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseDragMoveEvent(KSplitterCollapserButton* self, QDragMoveEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_DragMoveEvent_IsBase(true);
        vksplittercollapserbutton->dragMoveEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnDragMoveEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_DragMoveEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_DragLeaveEvent(KSplitterCollapserButton* self, QDragLeaveEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->dragLeaveEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseDragLeaveEvent(KSplitterCollapserButton* self, QDragLeaveEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_DragLeaveEvent_IsBase(true);
        vksplittercollapserbutton->dragLeaveEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnDragLeaveEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_DragLeaveEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_DropEvent(KSplitterCollapserButton* self, QDropEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->dropEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseDropEvent(KSplitterCollapserButton* self, QDropEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_DropEvent_IsBase(true);
        vksplittercollapserbutton->dropEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnDropEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_DropEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_HideEvent(KSplitterCollapserButton* self, QHideEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->hideEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseHideEvent(KSplitterCollapserButton* self, QHideEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_HideEvent_IsBase(true);
        vksplittercollapserbutton->hideEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnHideEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_HideEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSplitterCollapserButton_NativeEvent(KSplitterCollapserButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return vksplittercollapserbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KSplitterCollapserButton_QBaseNativeEvent(KSplitterCollapserButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_NativeEvent_IsBase(true);
        return vksplittercollapserbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnNativeEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_NativeEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KSplitterCollapserButton_Metric(const KSplitterCollapserButton* self, int param1) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return vksplittercollapserbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KSplitterCollapserButton_QBaseMetric(const KSplitterCollapserButton* self, int param1) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_Metric_IsBase(true);
        return vksplittercollapserbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnMetric(const KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_Metric_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_InitPainter(const KSplitterCollapserButton* self, QPainter* painter) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->initPainter(painter);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseInitPainter(const KSplitterCollapserButton* self, QPainter* painter) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_InitPainter_IsBase(true);
        vksplittercollapserbutton->initPainter(painter);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnInitPainter(const KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_InitPainter_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KSplitterCollapserButton_Redirected(const KSplitterCollapserButton* self, QPoint* offset) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return vksplittercollapserbutton->redirected(offset);
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KSplitterCollapserButton_QBaseRedirected(const KSplitterCollapserButton* self, QPoint* offset) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_Redirected_IsBase(true);
        return vksplittercollapserbutton->redirected(offset);
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnRedirected(const KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_Redirected_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KSplitterCollapserButton_SharedPainter(const KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return vksplittercollapserbutton->sharedPainter();
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KSplitterCollapserButton_QBaseSharedPainter(const KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_SharedPainter_IsBase(true);
        return vksplittercollapserbutton->sharedPainter();
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnSharedPainter(const KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_SharedPainter_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_InputMethodEvent(KSplitterCollapserButton* self, QInputMethodEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->inputMethodEvent(param1);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseInputMethodEvent(KSplitterCollapserButton* self, QInputMethodEvent* param1) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_InputMethodEvent_IsBase(true);
        vksplittercollapserbutton->inputMethodEvent(param1);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnInputMethodEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_InputMethodEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KSplitterCollapserButton_InputMethodQuery(const KSplitterCollapserButton* self, int param1) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return new QVariant(vksplittercollapserbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKSplitterCollapserButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KSplitterCollapserButton_QBaseInputMethodQuery(const KSplitterCollapserButton* self, int param1) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_InputMethodQuery_IsBase(true);
        return new QVariant(vksplittercollapserbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKSplitterCollapserButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnInputMethodQuery(const KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_InputMethodQuery_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSplitterCollapserButton_FocusNextPrevChild(KSplitterCollapserButton* self, bool next) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return vksplittercollapserbutton->focusNextPrevChild(next);
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KSplitterCollapserButton_QBaseFocusNextPrevChild(KSplitterCollapserButton* self, bool next) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_FocusNextPrevChild_IsBase(true);
        return vksplittercollapserbutton->focusNextPrevChild(next);
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnFocusNextPrevChild(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_ChildEvent(KSplitterCollapserButton* self, QChildEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->childEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseChildEvent(KSplitterCollapserButton* self, QChildEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_ChildEvent_IsBase(true);
        vksplittercollapserbutton->childEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnChildEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_ChildEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_CustomEvent(KSplitterCollapserButton* self, QEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->customEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseCustomEvent(KSplitterCollapserButton* self, QEvent* event) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_CustomEvent_IsBase(true);
        vksplittercollapserbutton->customEvent(event);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnCustomEvent(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_CustomEvent_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_ConnectNotify(KSplitterCollapserButton* self, const QMetaMethod* signal) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->connectNotify(*signal);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseConnectNotify(KSplitterCollapserButton* self, const QMetaMethod* signal) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_ConnectNotify_IsBase(true);
        vksplittercollapserbutton->connectNotify(*signal);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnConnectNotify(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_ConnectNotify_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_DisconnectNotify(KSplitterCollapserButton* self, const QMetaMethod* signal) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->disconnectNotify(*signal);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseDisconnectNotify(KSplitterCollapserButton* self, const QMetaMethod* signal) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_DisconnectNotify_IsBase(true);
        vksplittercollapserbutton->disconnectNotify(*signal);
    } else {
        ((VirtualKSplitterCollapserButton*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnDisconnectNotify(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_DisconnectNotify_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_UpdateMicroFocus(KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->updateMicroFocus();
    } else {
        ((VirtualKSplitterCollapserButton*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseUpdateMicroFocus(KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_UpdateMicroFocus_IsBase(true);
        vksplittercollapserbutton->updateMicroFocus();
    } else {
        ((VirtualKSplitterCollapserButton*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnUpdateMicroFocus(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_Create(KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->create();
    } else {
        ((VirtualKSplitterCollapserButton*)self)->create();
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseCreate(KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_Create_IsBase(true);
        vksplittercollapserbutton->create();
    } else {
        ((VirtualKSplitterCollapserButton*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnCreate(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_Create_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KSplitterCollapserButton_Destroy(KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->destroy();
    } else {
        ((VirtualKSplitterCollapserButton*)self)->destroy();
    }
}

// Base class handler implementation
void KSplitterCollapserButton_QBaseDestroy(KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_Destroy_IsBase(true);
        vksplittercollapserbutton->destroy();
    } else {
        ((VirtualKSplitterCollapserButton*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnDestroy(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_Destroy_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSplitterCollapserButton_FocusNextChild(KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return vksplittercollapserbutton->focusNextChild();
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KSplitterCollapserButton_QBaseFocusNextChild(KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_FocusNextChild_IsBase(true);
        return vksplittercollapserbutton->focusNextChild();
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnFocusNextChild(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_FocusNextChild_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSplitterCollapserButton_FocusPreviousChild(KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return vksplittercollapserbutton->focusPreviousChild();
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KSplitterCollapserButton_QBaseFocusPreviousChild(KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_FocusPreviousChild_IsBase(true);
        return vksplittercollapserbutton->focusPreviousChild();
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnFocusPreviousChild(KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = dynamic_cast<VirtualKSplitterCollapserButton*>(self);
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_FocusPreviousChild_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KSplitterCollapserButton_Sender(const KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return vksplittercollapserbutton->sender();
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->sender();
    }
}

// Base class handler implementation
QObject* KSplitterCollapserButton_QBaseSender(const KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_Sender_IsBase(true);
        return vksplittercollapserbutton->sender();
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnSender(const KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_Sender_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KSplitterCollapserButton_SenderSignalIndex(const KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return vksplittercollapserbutton->senderSignalIndex();
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KSplitterCollapserButton_QBaseSenderSignalIndex(const KSplitterCollapserButton* self) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_SenderSignalIndex_IsBase(true);
        return vksplittercollapserbutton->senderSignalIndex();
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnSenderSignalIndex(const KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_SenderSignalIndex_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KSplitterCollapserButton_Receivers(const KSplitterCollapserButton* self, const char* signal) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return vksplittercollapserbutton->receivers(signal);
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KSplitterCollapserButton_QBaseReceivers(const KSplitterCollapserButton* self, const char* signal) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_Receivers_IsBase(true);
        return vksplittercollapserbutton->receivers(signal);
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnReceivers(const KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_Receivers_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSplitterCollapserButton_IsSignalConnected(const KSplitterCollapserButton* self, const QMetaMethod* signal) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return vksplittercollapserbutton->isSignalConnected(*signal);
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KSplitterCollapserButton_QBaseIsSignalConnected(const KSplitterCollapserButton* self, const QMetaMethod* signal) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_IsSignalConnected_IsBase(true);
        return vksplittercollapserbutton->isSignalConnected(*signal);
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnIsSignalConnected(const KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_IsSignalConnected_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KSplitterCollapserButton_GetDecodedMetricF(const KSplitterCollapserButton* self, int metricA, int metricB) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        return vksplittercollapserbutton->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KSplitterCollapserButton_QBaseGetDecodedMetricF(const KSplitterCollapserButton* self, int metricA, int metricB) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_GetDecodedMetricF_IsBase(true);
        return vksplittercollapserbutton->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKSplitterCollapserButton*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KSplitterCollapserButton_OnGetDecodedMetricF(const KSplitterCollapserButton* self, intptr_t slot) {
    auto* vksplittercollapserbutton = const_cast<VirtualKSplitterCollapserButton*>(dynamic_cast<const VirtualKSplitterCollapserButton*>(self));
    if (vksplittercollapserbutton && vksplittercollapserbutton->isVirtualKSplitterCollapserButton) {
        vksplittercollapserbutton->setKSplitterCollapserButton_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKSplitterCollapserButton::KSplitterCollapserButton_GetDecodedMetricF_Callback>(slot));
    }
}

void KSplitterCollapserButton_Delete(KSplitterCollapserButton* self) {
    delete self;
}
