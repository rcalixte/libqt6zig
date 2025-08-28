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
#include <QFocusFrame>
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
#include <QByteArray>
#include <cstring>
#include <QStyleOption>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qfocusframe.h>
#include "libqfocusframe.h"
#include "libqfocusframe.hxx"

QFocusFrame* QFocusFrame_new(QWidget* parent) {
    return new VirtualQFocusFrame(parent);
}

QFocusFrame* QFocusFrame_new2() {
    return new VirtualQFocusFrame();
}

QMetaObject* QFocusFrame_MetaObject(const QFocusFrame* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFocusFrame_Metacast(QFocusFrame* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFocusFrame_Metacall(QFocusFrame* self, int param1, int param2, void** param3) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQFocusFrame*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFocusFrame_OnMetacall(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_Metacall_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QFocusFrame_QBaseMetacall(QFocusFrame* self, int param1, int param2, void** param3) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_Metacall_IsBase(true);
        return vqfocusframe->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQFocusFrame*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QFocusFrame_Tr(const char* s) {
    QString _ret = QFocusFrame::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFocusFrame_SetWidget(QFocusFrame* self, QWidget* widget) {
    self->setWidget(widget);
}

QWidget* QFocusFrame_Widget(const QFocusFrame* self) {
    return self->widget();
}

bool QFocusFrame_Event(QFocusFrame* self, QEvent* e) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return vqfocusframe->event(e);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QFocusFrame_OnEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_Event_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Event_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QFocusFrame_QBaseEvent(QFocusFrame* self, QEvent* e) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_Event_IsBase(true);
        return vqfocusframe->event(e);
    }
    return {};
}

bool QFocusFrame_EventFilter(QFocusFrame* self, QObject* param1, QEvent* param2) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return vqfocusframe->eventFilter(param1, param2);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QFocusFrame_OnEventFilter(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_EventFilter_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_EventFilter_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QFocusFrame_QBaseEventFilter(QFocusFrame* self, QObject* param1, QEvent* param2) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_EventFilter_IsBase(true);
        return vqfocusframe->eventFilter(param1, param2);
    }
    return {};
}

void QFocusFrame_PaintEvent(QFocusFrame* self, QPaintEvent* param1) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->paintEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFocusFrame_OnPaintEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_PaintEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_PaintEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QFocusFrame_QBasePaintEvent(QFocusFrame* self, QPaintEvent* param1) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_PaintEvent_IsBase(true);
        vqfocusframe->paintEvent(param1);
    }
}

void QFocusFrame_InitStyleOption(const QFocusFrame* self, QStyleOption* option) {
    auto* vqfocusframe = dynamic_cast<const VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->initStyleOption(option);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFocusFrame_OnInitStyleOption(const QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_InitStyleOption_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_InitStyleOption_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QFocusFrame_QBaseInitStyleOption(const QFocusFrame* self, QStyleOption* option) {
    auto* vqfocusframe = dynamic_cast<const VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_InitStyleOption_IsBase(true);
        vqfocusframe->initStyleOption(option);
    }
}

libqt_string QFocusFrame_Tr2(const char* s, const char* c) {
    QString _ret = QFocusFrame::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFocusFrame_Tr3(const char* s, const char* c, int n) {
    QString _ret = QFocusFrame::tr(s, c, static_cast<int>(n));
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
int QFocusFrame_DevType(const QFocusFrame* self) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return vqfocusframe->devType();
    } else {
        return self->QFocusFrame::devType();
    }
}

// Base class handler implementation
int QFocusFrame_QBaseDevType(const QFocusFrame* self) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_DevType_IsBase(true);
        return vqfocusframe->devType();
    } else {
        return self->QFocusFrame::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnDevType(const QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_DevType_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_SetVisible(QFocusFrame* self, bool visible) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setVisible(visible);
    } else {
        self->QFocusFrame::setVisible(visible);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseSetVisible(QFocusFrame* self, bool visible) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_SetVisible_IsBase(true);
        vqfocusframe->setVisible(visible);
    } else {
        self->QFocusFrame::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnSetVisible(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_SetVisible_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QFocusFrame_SizeHint(const QFocusFrame* self) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return new QSize(vqfocusframe->sizeHint());
    } else {
        return new QSize(((VirtualQFocusFrame*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QFocusFrame_QBaseSizeHint(const QFocusFrame* self) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_SizeHint_IsBase(true);
        return new QSize(vqfocusframe->sizeHint());
    } else {
        return new QSize(((VirtualQFocusFrame*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnSizeHint(const QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_SizeHint_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QFocusFrame_MinimumSizeHint(const QFocusFrame* self) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return new QSize(vqfocusframe->minimumSizeHint());
    } else {
        return new QSize(((VirtualQFocusFrame*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QFocusFrame_QBaseMinimumSizeHint(const QFocusFrame* self) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_MinimumSizeHint_IsBase(true);
        return new QSize(vqfocusframe->minimumSizeHint());
    } else {
        return new QSize(((VirtualQFocusFrame*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMinimumSizeHint(const QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_MinimumSizeHint_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QFocusFrame_HeightForWidth(const QFocusFrame* self, int param1) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return vqfocusframe->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QFocusFrame::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QFocusFrame_QBaseHeightForWidth(const QFocusFrame* self, int param1) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_HeightForWidth_IsBase(true);
        return vqfocusframe->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QFocusFrame::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnHeightForWidth(const QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_HeightForWidth_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFocusFrame_HasHeightForWidth(const QFocusFrame* self) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return vqfocusframe->hasHeightForWidth();
    } else {
        return self->QFocusFrame::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QFocusFrame_QBaseHasHeightForWidth(const QFocusFrame* self) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_HasHeightForWidth_IsBase(true);
        return vqfocusframe->hasHeightForWidth();
    } else {
        return self->QFocusFrame::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnHasHeightForWidth(const QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_HasHeightForWidth_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QFocusFrame_PaintEngine(const QFocusFrame* self) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return vqfocusframe->paintEngine();
    } else {
        return self->QFocusFrame::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QFocusFrame_QBasePaintEngine(const QFocusFrame* self) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_PaintEngine_IsBase(true);
        return vqfocusframe->paintEngine();
    } else {
        return self->QFocusFrame::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnPaintEngine(const QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_PaintEngine_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_MousePressEvent(QFocusFrame* self, QMouseEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->mousePressEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseMousePressEvent(QFocusFrame* self, QMouseEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_MousePressEvent_IsBase(true);
        vqfocusframe->mousePressEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMousePressEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_MousePressEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_MouseReleaseEvent(QFocusFrame* self, QMouseEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->mouseReleaseEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseMouseReleaseEvent(QFocusFrame* self, QMouseEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_MouseReleaseEvent_IsBase(true);
        vqfocusframe->mouseReleaseEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMouseReleaseEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_MouseDoubleClickEvent(QFocusFrame* self, QMouseEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseMouseDoubleClickEvent(QFocusFrame* self, QMouseEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_MouseDoubleClickEvent_IsBase(true);
        vqfocusframe->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMouseDoubleClickEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_MouseMoveEvent(QFocusFrame* self, QMouseEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->mouseMoveEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseMouseMoveEvent(QFocusFrame* self, QMouseEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_MouseMoveEvent_IsBase(true);
        vqfocusframe->mouseMoveEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMouseMoveEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_MouseMoveEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_WheelEvent(QFocusFrame* self, QWheelEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->wheelEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseWheelEvent(QFocusFrame* self, QWheelEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_WheelEvent_IsBase(true);
        vqfocusframe->wheelEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnWheelEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_WheelEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_KeyPressEvent(QFocusFrame* self, QKeyEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->keyPressEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseKeyPressEvent(QFocusFrame* self, QKeyEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_KeyPressEvent_IsBase(true);
        vqfocusframe->keyPressEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnKeyPressEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_KeyPressEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_KeyReleaseEvent(QFocusFrame* self, QKeyEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->keyReleaseEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseKeyReleaseEvent(QFocusFrame* self, QKeyEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_KeyReleaseEvent_IsBase(true);
        vqfocusframe->keyReleaseEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnKeyReleaseEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_FocusInEvent(QFocusFrame* self, QFocusEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->focusInEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseFocusInEvent(QFocusFrame* self, QFocusEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_FocusInEvent_IsBase(true);
        vqfocusframe->focusInEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnFocusInEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_FocusInEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_FocusOutEvent(QFocusFrame* self, QFocusEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->focusOutEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseFocusOutEvent(QFocusFrame* self, QFocusEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_FocusOutEvent_IsBase(true);
        vqfocusframe->focusOutEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnFocusOutEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_FocusOutEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_EnterEvent(QFocusFrame* self, QEnterEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->enterEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseEnterEvent(QFocusFrame* self, QEnterEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_EnterEvent_IsBase(true);
        vqfocusframe->enterEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnEnterEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_EnterEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_LeaveEvent(QFocusFrame* self, QEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->leaveEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseLeaveEvent(QFocusFrame* self, QEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_LeaveEvent_IsBase(true);
        vqfocusframe->leaveEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnLeaveEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_LeaveEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_MoveEvent(QFocusFrame* self, QMoveEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->moveEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseMoveEvent(QFocusFrame* self, QMoveEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_MoveEvent_IsBase(true);
        vqfocusframe->moveEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMoveEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_MoveEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_ResizeEvent(QFocusFrame* self, QResizeEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->resizeEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseResizeEvent(QFocusFrame* self, QResizeEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_ResizeEvent_IsBase(true);
        vqfocusframe->resizeEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnResizeEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_ResizeEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_CloseEvent(QFocusFrame* self, QCloseEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->closeEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseCloseEvent(QFocusFrame* self, QCloseEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_CloseEvent_IsBase(true);
        vqfocusframe->closeEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnCloseEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_CloseEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_ContextMenuEvent(QFocusFrame* self, QContextMenuEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->contextMenuEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseContextMenuEvent(QFocusFrame* self, QContextMenuEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_ContextMenuEvent_IsBase(true);
        vqfocusframe->contextMenuEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnContextMenuEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_ContextMenuEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_TabletEvent(QFocusFrame* self, QTabletEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->tabletEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseTabletEvent(QFocusFrame* self, QTabletEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_TabletEvent_IsBase(true);
        vqfocusframe->tabletEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnTabletEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_TabletEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_ActionEvent(QFocusFrame* self, QActionEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->actionEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseActionEvent(QFocusFrame* self, QActionEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_ActionEvent_IsBase(true);
        vqfocusframe->actionEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnActionEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_ActionEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_DragEnterEvent(QFocusFrame* self, QDragEnterEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->dragEnterEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseDragEnterEvent(QFocusFrame* self, QDragEnterEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_DragEnterEvent_IsBase(true);
        vqfocusframe->dragEnterEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnDragEnterEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_DragEnterEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_DragMoveEvent(QFocusFrame* self, QDragMoveEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->dragMoveEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseDragMoveEvent(QFocusFrame* self, QDragMoveEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_DragMoveEvent_IsBase(true);
        vqfocusframe->dragMoveEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnDragMoveEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_DragMoveEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_DragLeaveEvent(QFocusFrame* self, QDragLeaveEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->dragLeaveEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseDragLeaveEvent(QFocusFrame* self, QDragLeaveEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_DragLeaveEvent_IsBase(true);
        vqfocusframe->dragLeaveEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnDragLeaveEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_DragLeaveEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_DropEvent(QFocusFrame* self, QDropEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->dropEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseDropEvent(QFocusFrame* self, QDropEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_DropEvent_IsBase(true);
        vqfocusframe->dropEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnDropEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_DropEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_ShowEvent(QFocusFrame* self, QShowEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->showEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseShowEvent(QFocusFrame* self, QShowEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_ShowEvent_IsBase(true);
        vqfocusframe->showEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnShowEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_ShowEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_HideEvent(QFocusFrame* self, QHideEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->hideEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseHideEvent(QFocusFrame* self, QHideEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_HideEvent_IsBase(true);
        vqfocusframe->hideEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnHideEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_HideEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFocusFrame_NativeEvent(QFocusFrame* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return vqfocusframe->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQFocusFrame*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QFocusFrame_QBaseNativeEvent(QFocusFrame* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_NativeEvent_IsBase(true);
        return vqfocusframe->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQFocusFrame*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnNativeEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_NativeEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_ChangeEvent(QFocusFrame* self, QEvent* param1) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->changeEvent(param1);
    } else {
        ((VirtualQFocusFrame*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseChangeEvent(QFocusFrame* self, QEvent* param1) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_ChangeEvent_IsBase(true);
        vqfocusframe->changeEvent(param1);
    } else {
        ((VirtualQFocusFrame*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnChangeEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_ChangeEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QFocusFrame_Metric(const QFocusFrame* self, int param1) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return vqfocusframe->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQFocusFrame*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QFocusFrame_QBaseMetric(const QFocusFrame* self, int param1) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_Metric_IsBase(true);
        return vqfocusframe->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQFocusFrame*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMetric(const QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_Metric_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_InitPainter(const QFocusFrame* self, QPainter* painter) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->initPainter(painter);
    } else {
        ((VirtualQFocusFrame*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseInitPainter(const QFocusFrame* self, QPainter* painter) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_InitPainter_IsBase(true);
        vqfocusframe->initPainter(painter);
    } else {
        ((VirtualQFocusFrame*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnInitPainter(const QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_InitPainter_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QFocusFrame_Redirected(const QFocusFrame* self, QPoint* offset) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return vqfocusframe->redirected(offset);
    } else {
        return ((VirtualQFocusFrame*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QFocusFrame_QBaseRedirected(const QFocusFrame* self, QPoint* offset) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_Redirected_IsBase(true);
        return vqfocusframe->redirected(offset);
    } else {
        return ((VirtualQFocusFrame*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnRedirected(const QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_Redirected_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QFocusFrame_SharedPainter(const QFocusFrame* self) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return vqfocusframe->sharedPainter();
    } else {
        return ((VirtualQFocusFrame*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QFocusFrame_QBaseSharedPainter(const QFocusFrame* self) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_SharedPainter_IsBase(true);
        return vqfocusframe->sharedPainter();
    } else {
        return ((VirtualQFocusFrame*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnSharedPainter(const QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_SharedPainter_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_InputMethodEvent(QFocusFrame* self, QInputMethodEvent* param1) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->inputMethodEvent(param1);
    } else {
        ((VirtualQFocusFrame*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseInputMethodEvent(QFocusFrame* self, QInputMethodEvent* param1) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_InputMethodEvent_IsBase(true);
        vqfocusframe->inputMethodEvent(param1);
    } else {
        ((VirtualQFocusFrame*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnInputMethodEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_InputMethodEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QFocusFrame_InputMethodQuery(const QFocusFrame* self, int param1) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return new QVariant(vqfocusframe->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQFocusFrame*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QFocusFrame_QBaseInputMethodQuery(const QFocusFrame* self, int param1) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_InputMethodQuery_IsBase(true);
        return new QVariant(vqfocusframe->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQFocusFrame*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnInputMethodQuery(const QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_InputMethodQuery_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFocusFrame_FocusNextPrevChild(QFocusFrame* self, bool next) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return vqfocusframe->focusNextPrevChild(next);
    } else {
        return ((VirtualQFocusFrame*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QFocusFrame_QBaseFocusNextPrevChild(QFocusFrame* self, bool next) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_FocusNextPrevChild_IsBase(true);
        return vqfocusframe->focusNextPrevChild(next);
    } else {
        return ((VirtualQFocusFrame*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnFocusNextPrevChild(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_TimerEvent(QFocusFrame* self, QTimerEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->timerEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseTimerEvent(QFocusFrame* self, QTimerEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_TimerEvent_IsBase(true);
        vqfocusframe->timerEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnTimerEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_TimerEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_ChildEvent(QFocusFrame* self, QChildEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->childEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseChildEvent(QFocusFrame* self, QChildEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_ChildEvent_IsBase(true);
        vqfocusframe->childEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnChildEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_ChildEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_CustomEvent(QFocusFrame* self, QEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->customEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseCustomEvent(QFocusFrame* self, QEvent* event) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_CustomEvent_IsBase(true);
        vqfocusframe->customEvent(event);
    } else {
        ((VirtualQFocusFrame*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnCustomEvent(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_CustomEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_ConnectNotify(QFocusFrame* self, const QMetaMethod* signal) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->connectNotify(*signal);
    } else {
        ((VirtualQFocusFrame*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseConnectNotify(QFocusFrame* self, const QMetaMethod* signal) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_ConnectNotify_IsBase(true);
        vqfocusframe->connectNotify(*signal);
    } else {
        ((VirtualQFocusFrame*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnConnectNotify(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_ConnectNotify_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_DisconnectNotify(QFocusFrame* self, const QMetaMethod* signal) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->disconnectNotify(*signal);
    } else {
        ((VirtualQFocusFrame*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseDisconnectNotify(QFocusFrame* self, const QMetaMethod* signal) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_DisconnectNotify_IsBase(true);
        vqfocusframe->disconnectNotify(*signal);
    } else {
        ((VirtualQFocusFrame*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnDisconnectNotify(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_DisconnectNotify_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_UpdateMicroFocus(QFocusFrame* self) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->updateMicroFocus();
    } else {
        ((VirtualQFocusFrame*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QFocusFrame_QBaseUpdateMicroFocus(QFocusFrame* self) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_UpdateMicroFocus_IsBase(true);
        vqfocusframe->updateMicroFocus();
    } else {
        ((VirtualQFocusFrame*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnUpdateMicroFocus(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_Create(QFocusFrame* self) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->create();
    } else {
        ((VirtualQFocusFrame*)self)->create();
    }
}

// Base class handler implementation
void QFocusFrame_QBaseCreate(QFocusFrame* self) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_Create_IsBase(true);
        vqfocusframe->create();
    } else {
        ((VirtualQFocusFrame*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnCreate(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_Create_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_Destroy(QFocusFrame* self) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->destroy();
    } else {
        ((VirtualQFocusFrame*)self)->destroy();
    }
}

// Base class handler implementation
void QFocusFrame_QBaseDestroy(QFocusFrame* self) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_Destroy_IsBase(true);
        vqfocusframe->destroy();
    } else {
        ((VirtualQFocusFrame*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnDestroy(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_Destroy_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFocusFrame_FocusNextChild(QFocusFrame* self) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return vqfocusframe->focusNextChild();
    } else {
        return ((VirtualQFocusFrame*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QFocusFrame_QBaseFocusNextChild(QFocusFrame* self) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_FocusNextChild_IsBase(true);
        return vqfocusframe->focusNextChild();
    } else {
        return ((VirtualQFocusFrame*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnFocusNextChild(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_FocusNextChild_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFocusFrame_FocusPreviousChild(QFocusFrame* self) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return vqfocusframe->focusPreviousChild();
    } else {
        return ((VirtualQFocusFrame*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QFocusFrame_QBaseFocusPreviousChild(QFocusFrame* self) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_FocusPreviousChild_IsBase(true);
        return vqfocusframe->focusPreviousChild();
    } else {
        return ((VirtualQFocusFrame*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnFocusPreviousChild(QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_FocusPreviousChild_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QFocusFrame_Sender(const QFocusFrame* self) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return vqfocusframe->sender();
    } else {
        return ((VirtualQFocusFrame*)self)->sender();
    }
}

// Base class handler implementation
QObject* QFocusFrame_QBaseSender(const QFocusFrame* self) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_Sender_IsBase(true);
        return vqfocusframe->sender();
    } else {
        return ((VirtualQFocusFrame*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnSender(const QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_Sender_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QFocusFrame_SenderSignalIndex(const QFocusFrame* self) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return vqfocusframe->senderSignalIndex();
    } else {
        return ((VirtualQFocusFrame*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QFocusFrame_QBaseSenderSignalIndex(const QFocusFrame* self) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_SenderSignalIndex_IsBase(true);
        return vqfocusframe->senderSignalIndex();
    } else {
        return ((VirtualQFocusFrame*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnSenderSignalIndex(const QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_SenderSignalIndex_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QFocusFrame_Receivers(const QFocusFrame* self, const char* signal) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return vqfocusframe->receivers(signal);
    } else {
        return ((VirtualQFocusFrame*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QFocusFrame_QBaseReceivers(const QFocusFrame* self, const char* signal) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_Receivers_IsBase(true);
        return vqfocusframe->receivers(signal);
    } else {
        return ((VirtualQFocusFrame*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnReceivers(const QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_Receivers_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFocusFrame_IsSignalConnected(const QFocusFrame* self, const QMetaMethod* signal) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return vqfocusframe->isSignalConnected(*signal);
    } else {
        return ((VirtualQFocusFrame*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QFocusFrame_QBaseIsSignalConnected(const QFocusFrame* self, const QMetaMethod* signal) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_IsSignalConnected_IsBase(true);
        return vqfocusframe->isSignalConnected(*signal);
    } else {
        return ((VirtualQFocusFrame*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnIsSignalConnected(const QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_IsSignalConnected_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QFocusFrame_GetDecodedMetricF(const QFocusFrame* self, int metricA, int metricB) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        return vqfocusframe->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQFocusFrame*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QFocusFrame_QBaseGetDecodedMetricF(const QFocusFrame* self, int metricA, int metricB) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_GetDecodedMetricF_IsBase(true);
        return vqfocusframe->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQFocusFrame*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnGetDecodedMetricF(const QFocusFrame* self, intptr_t slot) {
    auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self));
    if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
        vqfocusframe->setQFocusFrame_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_GetDecodedMetricF_Callback>(slot));
    }
}

void QFocusFrame_Delete(QFocusFrame* self) {
    delete self;
}
