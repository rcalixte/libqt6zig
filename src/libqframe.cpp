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
#include <QFrame>
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
#include <QRect>
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
#include <qframe.h>
#include "libqframe.h"
#include "libqframe.hxx"

QFrame* QFrame_new(QWidget* parent) {
    return new VirtualQFrame(parent);
}

QFrame* QFrame_new2() {
    return new VirtualQFrame();
}

QFrame* QFrame_new3(QWidget* parent, int f) {
    return new VirtualQFrame(parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QFrame_MetaObject(const QFrame* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFrame_Metacast(QFrame* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFrame_Metacall(QFrame* self, int param1, int param2, void** param3) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQFrame*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFrame_OnMetacall(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_Metacall_Callback(reinterpret_cast<VirtualQFrame::QFrame_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QFrame_QBaseMetacall(QFrame* self, int param1, int param2, void** param3) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_Metacall_IsBase(true);
        return vqframe->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQFrame*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QFrame_Tr(const char* s) {
    QString _ret = QFrame::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QFrame_FrameStyle(const QFrame* self) {
    return self->frameStyle();
}

void QFrame_SetFrameStyle(QFrame* self, int frameStyle) {
    self->setFrameStyle(static_cast<int>(frameStyle));
}

int QFrame_FrameWidth(const QFrame* self) {
    return self->frameWidth();
}

int QFrame_FrameShape(const QFrame* self) {
    return static_cast<int>(self->frameShape());
}

void QFrame_SetFrameShape(QFrame* self, int frameShape) {
    self->setFrameShape(static_cast<QFrame::Shape>(frameShape));
}

int QFrame_FrameShadow(const QFrame* self) {
    return static_cast<int>(self->frameShadow());
}

void QFrame_SetFrameShadow(QFrame* self, int frameShadow) {
    self->setFrameShadow(static_cast<QFrame::Shadow>(frameShadow));
}

int QFrame_LineWidth(const QFrame* self) {
    return self->lineWidth();
}

void QFrame_SetLineWidth(QFrame* self, int lineWidth) {
    self->setLineWidth(static_cast<int>(lineWidth));
}

int QFrame_MidLineWidth(const QFrame* self) {
    return self->midLineWidth();
}

void QFrame_SetMidLineWidth(QFrame* self, int midLineWidth) {
    self->setMidLineWidth(static_cast<int>(midLineWidth));
}

QRect* QFrame_FrameRect(const QFrame* self) {
    return new QRect(self->frameRect());
}

void QFrame_SetFrameRect(QFrame* self, const QRect* frameRect) {
    self->setFrameRect(*frameRect);
}

libqt_string QFrame_Tr2(const char* s, const char* c) {
    QString _ret = QFrame::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFrame_Tr3(const char* s, const char* c, int n) {
    QString _ret = QFrame::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QSize* QFrame_SizeHint(const QFrame* self) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        return new QSize(vqframe->sizeHint());
    } else {
        return new QSize(((VirtualQFrame*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QFrame_QBaseSizeHint(const QFrame* self) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_SizeHint_IsBase(true);
        return new QSize(vqframe->sizeHint());
    } else {
        return new QSize(((VirtualQFrame*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnSizeHint(const QFrame* self, intptr_t slot) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_SizeHint_Callback(reinterpret_cast<VirtualQFrame::QFrame_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFrame_Event(QFrame* self, QEvent* e) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        return vqframe->event(e);
    } else {
        return ((VirtualQFrame*)self)->event(e);
    }
}

// Base class handler implementation
bool QFrame_QBaseEvent(QFrame* self, QEvent* e) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_Event_IsBase(true);
        return vqframe->event(e);
    } else {
        return ((VirtualQFrame*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_Event_Callback(reinterpret_cast<VirtualQFrame::QFrame_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_PaintEvent(QFrame* self, QPaintEvent* param1) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->paintEvent(param1);
    } else {
        ((VirtualQFrame*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void QFrame_QBasePaintEvent(QFrame* self, QPaintEvent* param1) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_PaintEvent_IsBase(true);
        vqframe->paintEvent(param1);
    } else {
        ((VirtualQFrame*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnPaintEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_PaintEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_ChangeEvent(QFrame* self, QEvent* param1) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->changeEvent(param1);
    } else {
        ((VirtualQFrame*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QFrame_QBaseChangeEvent(QFrame* self, QEvent* param1) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_ChangeEvent_IsBase(true);
        vqframe->changeEvent(param1);
    } else {
        ((VirtualQFrame*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnChangeEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_ChangeEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_InitStyleOption(const QFrame* self, QStyleOptionFrame* option) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->initStyleOption(option);
    } else {
        ((VirtualQFrame*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QFrame_QBaseInitStyleOption(const QFrame* self, QStyleOptionFrame* option) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_InitStyleOption_IsBase(true);
        vqframe->initStyleOption(option);
    } else {
        ((VirtualQFrame*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnInitStyleOption(const QFrame* self, intptr_t slot) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_InitStyleOption_Callback(reinterpret_cast<VirtualQFrame::QFrame_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QFrame_DevType(const QFrame* self) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        return vqframe->devType();
    } else {
        return self->QFrame::devType();
    }
}

// Base class handler implementation
int QFrame_QBaseDevType(const QFrame* self) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_DevType_IsBase(true);
        return vqframe->devType();
    } else {
        return self->QFrame::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnDevType(const QFrame* self, intptr_t slot) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_DevType_Callback(reinterpret_cast<VirtualQFrame::QFrame_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_SetVisible(QFrame* self, bool visible) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setVisible(visible);
    } else {
        self->QFrame::setVisible(visible);
    }
}

// Base class handler implementation
void QFrame_QBaseSetVisible(QFrame* self, bool visible) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_SetVisible_IsBase(true);
        vqframe->setVisible(visible);
    } else {
        self->QFrame::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnSetVisible(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_SetVisible_Callback(reinterpret_cast<VirtualQFrame::QFrame_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QFrame_MinimumSizeHint(const QFrame* self) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        return new QSize(vqframe->minimumSizeHint());
    } else {
        return new QSize(((VirtualQFrame*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QFrame_QBaseMinimumSizeHint(const QFrame* self) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_MinimumSizeHint_IsBase(true);
        return new QSize(vqframe->minimumSizeHint());
    } else {
        return new QSize(((VirtualQFrame*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnMinimumSizeHint(const QFrame* self, intptr_t slot) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_MinimumSizeHint_Callback(reinterpret_cast<VirtualQFrame::QFrame_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QFrame_HeightForWidth(const QFrame* self, int param1) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        return vqframe->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QFrame::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QFrame_QBaseHeightForWidth(const QFrame* self, int param1) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_HeightForWidth_IsBase(true);
        return vqframe->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QFrame::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnHeightForWidth(const QFrame* self, intptr_t slot) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_HeightForWidth_Callback(reinterpret_cast<VirtualQFrame::QFrame_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFrame_HasHeightForWidth(const QFrame* self) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        return vqframe->hasHeightForWidth();
    } else {
        return self->QFrame::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QFrame_QBaseHasHeightForWidth(const QFrame* self) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_HasHeightForWidth_IsBase(true);
        return vqframe->hasHeightForWidth();
    } else {
        return self->QFrame::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnHasHeightForWidth(const QFrame* self, intptr_t slot) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_HasHeightForWidth_Callback(reinterpret_cast<VirtualQFrame::QFrame_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QFrame_PaintEngine(const QFrame* self) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        return vqframe->paintEngine();
    } else {
        return self->QFrame::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QFrame_QBasePaintEngine(const QFrame* self) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_PaintEngine_IsBase(true);
        return vqframe->paintEngine();
    } else {
        return self->QFrame::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnPaintEngine(const QFrame* self, intptr_t slot) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_PaintEngine_Callback(reinterpret_cast<VirtualQFrame::QFrame_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_MousePressEvent(QFrame* self, QMouseEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->mousePressEvent(event);
    } else {
        ((VirtualQFrame*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseMousePressEvent(QFrame* self, QMouseEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_MousePressEvent_IsBase(true);
        vqframe->mousePressEvent(event);
    } else {
        ((VirtualQFrame*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnMousePressEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_MousePressEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_MouseReleaseEvent(QFrame* self, QMouseEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->mouseReleaseEvent(event);
    } else {
        ((VirtualQFrame*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseMouseReleaseEvent(QFrame* self, QMouseEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_MouseReleaseEvent_IsBase(true);
        vqframe->mouseReleaseEvent(event);
    } else {
        ((VirtualQFrame*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnMouseReleaseEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_MouseDoubleClickEvent(QFrame* self, QMouseEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQFrame*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseMouseDoubleClickEvent(QFrame* self, QMouseEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_MouseDoubleClickEvent_IsBase(true);
        vqframe->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQFrame*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnMouseDoubleClickEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_MouseMoveEvent(QFrame* self, QMouseEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->mouseMoveEvent(event);
    } else {
        ((VirtualQFrame*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseMouseMoveEvent(QFrame* self, QMouseEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_MouseMoveEvent_IsBase(true);
        vqframe->mouseMoveEvent(event);
    } else {
        ((VirtualQFrame*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnMouseMoveEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_MouseMoveEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_WheelEvent(QFrame* self, QWheelEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->wheelEvent(event);
    } else {
        ((VirtualQFrame*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseWheelEvent(QFrame* self, QWheelEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_WheelEvent_IsBase(true);
        vqframe->wheelEvent(event);
    } else {
        ((VirtualQFrame*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnWheelEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_WheelEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_KeyPressEvent(QFrame* self, QKeyEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->keyPressEvent(event);
    } else {
        ((VirtualQFrame*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseKeyPressEvent(QFrame* self, QKeyEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_KeyPressEvent_IsBase(true);
        vqframe->keyPressEvent(event);
    } else {
        ((VirtualQFrame*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnKeyPressEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_KeyPressEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_KeyReleaseEvent(QFrame* self, QKeyEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->keyReleaseEvent(event);
    } else {
        ((VirtualQFrame*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseKeyReleaseEvent(QFrame* self, QKeyEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_KeyReleaseEvent_IsBase(true);
        vqframe->keyReleaseEvent(event);
    } else {
        ((VirtualQFrame*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnKeyReleaseEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_FocusInEvent(QFrame* self, QFocusEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->focusInEvent(event);
    } else {
        ((VirtualQFrame*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseFocusInEvent(QFrame* self, QFocusEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_FocusInEvent_IsBase(true);
        vqframe->focusInEvent(event);
    } else {
        ((VirtualQFrame*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnFocusInEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_FocusInEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_FocusOutEvent(QFrame* self, QFocusEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->focusOutEvent(event);
    } else {
        ((VirtualQFrame*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseFocusOutEvent(QFrame* self, QFocusEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_FocusOutEvent_IsBase(true);
        vqframe->focusOutEvent(event);
    } else {
        ((VirtualQFrame*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnFocusOutEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_FocusOutEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_EnterEvent(QFrame* self, QEnterEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->enterEvent(event);
    } else {
        ((VirtualQFrame*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseEnterEvent(QFrame* self, QEnterEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_EnterEvent_IsBase(true);
        vqframe->enterEvent(event);
    } else {
        ((VirtualQFrame*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnEnterEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_EnterEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_LeaveEvent(QFrame* self, QEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->leaveEvent(event);
    } else {
        ((VirtualQFrame*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseLeaveEvent(QFrame* self, QEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_LeaveEvent_IsBase(true);
        vqframe->leaveEvent(event);
    } else {
        ((VirtualQFrame*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnLeaveEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_LeaveEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_MoveEvent(QFrame* self, QMoveEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->moveEvent(event);
    } else {
        ((VirtualQFrame*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseMoveEvent(QFrame* self, QMoveEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_MoveEvent_IsBase(true);
        vqframe->moveEvent(event);
    } else {
        ((VirtualQFrame*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnMoveEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_MoveEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_ResizeEvent(QFrame* self, QResizeEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->resizeEvent(event);
    } else {
        ((VirtualQFrame*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseResizeEvent(QFrame* self, QResizeEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_ResizeEvent_IsBase(true);
        vqframe->resizeEvent(event);
    } else {
        ((VirtualQFrame*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnResizeEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_ResizeEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_CloseEvent(QFrame* self, QCloseEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->closeEvent(event);
    } else {
        ((VirtualQFrame*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseCloseEvent(QFrame* self, QCloseEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_CloseEvent_IsBase(true);
        vqframe->closeEvent(event);
    } else {
        ((VirtualQFrame*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnCloseEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_CloseEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_ContextMenuEvent(QFrame* self, QContextMenuEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->contextMenuEvent(event);
    } else {
        ((VirtualQFrame*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseContextMenuEvent(QFrame* self, QContextMenuEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_ContextMenuEvent_IsBase(true);
        vqframe->contextMenuEvent(event);
    } else {
        ((VirtualQFrame*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnContextMenuEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_ContextMenuEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_TabletEvent(QFrame* self, QTabletEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->tabletEvent(event);
    } else {
        ((VirtualQFrame*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseTabletEvent(QFrame* self, QTabletEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_TabletEvent_IsBase(true);
        vqframe->tabletEvent(event);
    } else {
        ((VirtualQFrame*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnTabletEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_TabletEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_ActionEvent(QFrame* self, QActionEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->actionEvent(event);
    } else {
        ((VirtualQFrame*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseActionEvent(QFrame* self, QActionEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_ActionEvent_IsBase(true);
        vqframe->actionEvent(event);
    } else {
        ((VirtualQFrame*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnActionEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_ActionEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_DragEnterEvent(QFrame* self, QDragEnterEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->dragEnterEvent(event);
    } else {
        ((VirtualQFrame*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseDragEnterEvent(QFrame* self, QDragEnterEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_DragEnterEvent_IsBase(true);
        vqframe->dragEnterEvent(event);
    } else {
        ((VirtualQFrame*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnDragEnterEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_DragEnterEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_DragMoveEvent(QFrame* self, QDragMoveEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->dragMoveEvent(event);
    } else {
        ((VirtualQFrame*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseDragMoveEvent(QFrame* self, QDragMoveEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_DragMoveEvent_IsBase(true);
        vqframe->dragMoveEvent(event);
    } else {
        ((VirtualQFrame*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnDragMoveEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_DragMoveEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_DragLeaveEvent(QFrame* self, QDragLeaveEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->dragLeaveEvent(event);
    } else {
        ((VirtualQFrame*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseDragLeaveEvent(QFrame* self, QDragLeaveEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_DragLeaveEvent_IsBase(true);
        vqframe->dragLeaveEvent(event);
    } else {
        ((VirtualQFrame*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnDragLeaveEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_DragLeaveEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_DropEvent(QFrame* self, QDropEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->dropEvent(event);
    } else {
        ((VirtualQFrame*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseDropEvent(QFrame* self, QDropEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_DropEvent_IsBase(true);
        vqframe->dropEvent(event);
    } else {
        ((VirtualQFrame*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnDropEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_DropEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_ShowEvent(QFrame* self, QShowEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->showEvent(event);
    } else {
        ((VirtualQFrame*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseShowEvent(QFrame* self, QShowEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_ShowEvent_IsBase(true);
        vqframe->showEvent(event);
    } else {
        ((VirtualQFrame*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnShowEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_ShowEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_HideEvent(QFrame* self, QHideEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->hideEvent(event);
    } else {
        ((VirtualQFrame*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseHideEvent(QFrame* self, QHideEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_HideEvent_IsBase(true);
        vqframe->hideEvent(event);
    } else {
        ((VirtualQFrame*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnHideEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_HideEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFrame_NativeEvent(QFrame* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqframe && vqframe->isVirtualQFrame) {
        return vqframe->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQFrame*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QFrame_QBaseNativeEvent(QFrame* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_NativeEvent_IsBase(true);
        return vqframe->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQFrame*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnNativeEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_NativeEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QFrame_Metric(const QFrame* self, int param1) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        return vqframe->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQFrame*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QFrame_QBaseMetric(const QFrame* self, int param1) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_Metric_IsBase(true);
        return vqframe->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQFrame*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnMetric(const QFrame* self, intptr_t slot) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_Metric_Callback(reinterpret_cast<VirtualQFrame::QFrame_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_InitPainter(const QFrame* self, QPainter* painter) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->initPainter(painter);
    } else {
        ((VirtualQFrame*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QFrame_QBaseInitPainter(const QFrame* self, QPainter* painter) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_InitPainter_IsBase(true);
        vqframe->initPainter(painter);
    } else {
        ((VirtualQFrame*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnInitPainter(const QFrame* self, intptr_t slot) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_InitPainter_Callback(reinterpret_cast<VirtualQFrame::QFrame_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QFrame_Redirected(const QFrame* self, QPoint* offset) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        return vqframe->redirected(offset);
    } else {
        return ((VirtualQFrame*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QFrame_QBaseRedirected(const QFrame* self, QPoint* offset) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_Redirected_IsBase(true);
        return vqframe->redirected(offset);
    } else {
        return ((VirtualQFrame*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnRedirected(const QFrame* self, intptr_t slot) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_Redirected_Callback(reinterpret_cast<VirtualQFrame::QFrame_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QFrame_SharedPainter(const QFrame* self) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        return vqframe->sharedPainter();
    } else {
        return ((VirtualQFrame*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QFrame_QBaseSharedPainter(const QFrame* self) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_SharedPainter_IsBase(true);
        return vqframe->sharedPainter();
    } else {
        return ((VirtualQFrame*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnSharedPainter(const QFrame* self, intptr_t slot) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_SharedPainter_Callback(reinterpret_cast<VirtualQFrame::QFrame_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_InputMethodEvent(QFrame* self, QInputMethodEvent* param1) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->inputMethodEvent(param1);
    } else {
        ((VirtualQFrame*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QFrame_QBaseInputMethodEvent(QFrame* self, QInputMethodEvent* param1) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_InputMethodEvent_IsBase(true);
        vqframe->inputMethodEvent(param1);
    } else {
        ((VirtualQFrame*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnInputMethodEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_InputMethodEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QFrame_InputMethodQuery(const QFrame* self, int param1) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        return new QVariant(vqframe->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQFrame*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QFrame_QBaseInputMethodQuery(const QFrame* self, int param1) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_InputMethodQuery_IsBase(true);
        return new QVariant(vqframe->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQFrame*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnInputMethodQuery(const QFrame* self, intptr_t slot) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_InputMethodQuery_Callback(reinterpret_cast<VirtualQFrame::QFrame_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFrame_FocusNextPrevChild(QFrame* self, bool next) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        return vqframe->focusNextPrevChild(next);
    } else {
        return ((VirtualQFrame*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QFrame_QBaseFocusNextPrevChild(QFrame* self, bool next) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_FocusNextPrevChild_IsBase(true);
        return vqframe->focusNextPrevChild(next);
    } else {
        return ((VirtualQFrame*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnFocusNextPrevChild(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQFrame::QFrame_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFrame_EventFilter(QFrame* self, QObject* watched, QEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        return vqframe->eventFilter(watched, event);
    } else {
        return self->QFrame::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QFrame_QBaseEventFilter(QFrame* self, QObject* watched, QEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_EventFilter_IsBase(true);
        return vqframe->eventFilter(watched, event);
    } else {
        return self->QFrame::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnEventFilter(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_EventFilter_Callback(reinterpret_cast<VirtualQFrame::QFrame_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_TimerEvent(QFrame* self, QTimerEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->timerEvent(event);
    } else {
        ((VirtualQFrame*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseTimerEvent(QFrame* self, QTimerEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_TimerEvent_IsBase(true);
        vqframe->timerEvent(event);
    } else {
        ((VirtualQFrame*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnTimerEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_TimerEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_ChildEvent(QFrame* self, QChildEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->childEvent(event);
    } else {
        ((VirtualQFrame*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseChildEvent(QFrame* self, QChildEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_ChildEvent_IsBase(true);
        vqframe->childEvent(event);
    } else {
        ((VirtualQFrame*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnChildEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_ChildEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_CustomEvent(QFrame* self, QEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->customEvent(event);
    } else {
        ((VirtualQFrame*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QFrame_QBaseCustomEvent(QFrame* self, QEvent* event) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_CustomEvent_IsBase(true);
        vqframe->customEvent(event);
    } else {
        ((VirtualQFrame*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnCustomEvent(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_CustomEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_ConnectNotify(QFrame* self, const QMetaMethod* signal) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->connectNotify(*signal);
    } else {
        ((VirtualQFrame*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QFrame_QBaseConnectNotify(QFrame* self, const QMetaMethod* signal) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_ConnectNotify_IsBase(true);
        vqframe->connectNotify(*signal);
    } else {
        ((VirtualQFrame*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnConnectNotify(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_ConnectNotify_Callback(reinterpret_cast<VirtualQFrame::QFrame_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_DisconnectNotify(QFrame* self, const QMetaMethod* signal) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->disconnectNotify(*signal);
    } else {
        ((VirtualQFrame*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QFrame_QBaseDisconnectNotify(QFrame* self, const QMetaMethod* signal) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_DisconnectNotify_IsBase(true);
        vqframe->disconnectNotify(*signal);
    } else {
        ((VirtualQFrame*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnDisconnectNotify(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_DisconnectNotify_Callback(reinterpret_cast<VirtualQFrame::QFrame_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_DrawFrame(QFrame* self, QPainter* param1) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->drawFrame(param1);
    } else {
        ((VirtualQFrame*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QFrame_QBaseDrawFrame(QFrame* self, QPainter* param1) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_DrawFrame_IsBase(true);
        vqframe->drawFrame(param1);
    } else {
        ((VirtualQFrame*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnDrawFrame(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_DrawFrame_Callback(reinterpret_cast<VirtualQFrame::QFrame_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_UpdateMicroFocus(QFrame* self) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->updateMicroFocus();
    } else {
        ((VirtualQFrame*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QFrame_QBaseUpdateMicroFocus(QFrame* self) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_UpdateMicroFocus_IsBase(true);
        vqframe->updateMicroFocus();
    } else {
        ((VirtualQFrame*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnUpdateMicroFocus(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQFrame::QFrame_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_Create(QFrame* self) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->create();
    } else {
        ((VirtualQFrame*)self)->create();
    }
}

// Base class handler implementation
void QFrame_QBaseCreate(QFrame* self) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_Create_IsBase(true);
        vqframe->create();
    } else {
        ((VirtualQFrame*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnCreate(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_Create_Callback(reinterpret_cast<VirtualQFrame::QFrame_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QFrame_Destroy(QFrame* self) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->destroy();
    } else {
        ((VirtualQFrame*)self)->destroy();
    }
}

// Base class handler implementation
void QFrame_QBaseDestroy(QFrame* self) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_Destroy_IsBase(true);
        vqframe->destroy();
    } else {
        ((VirtualQFrame*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnDestroy(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_Destroy_Callback(reinterpret_cast<VirtualQFrame::QFrame_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFrame_FocusNextChild(QFrame* self) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        return vqframe->focusNextChild();
    } else {
        return ((VirtualQFrame*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QFrame_QBaseFocusNextChild(QFrame* self) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_FocusNextChild_IsBase(true);
        return vqframe->focusNextChild();
    } else {
        return ((VirtualQFrame*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnFocusNextChild(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_FocusNextChild_Callback(reinterpret_cast<VirtualQFrame::QFrame_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFrame_FocusPreviousChild(QFrame* self) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        return vqframe->focusPreviousChild();
    } else {
        return ((VirtualQFrame*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QFrame_QBaseFocusPreviousChild(QFrame* self) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_FocusPreviousChild_IsBase(true);
        return vqframe->focusPreviousChild();
    } else {
        return ((VirtualQFrame*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnFocusPreviousChild(QFrame* self, intptr_t slot) {
    auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_FocusPreviousChild_Callback(reinterpret_cast<VirtualQFrame::QFrame_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QFrame_Sender(const QFrame* self) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        return vqframe->sender();
    } else {
        return ((VirtualQFrame*)self)->sender();
    }
}

// Base class handler implementation
QObject* QFrame_QBaseSender(const QFrame* self) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_Sender_IsBase(true);
        return vqframe->sender();
    } else {
        return ((VirtualQFrame*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnSender(const QFrame* self, intptr_t slot) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_Sender_Callback(reinterpret_cast<VirtualQFrame::QFrame_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QFrame_SenderSignalIndex(const QFrame* self) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        return vqframe->senderSignalIndex();
    } else {
        return ((VirtualQFrame*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QFrame_QBaseSenderSignalIndex(const QFrame* self) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_SenderSignalIndex_IsBase(true);
        return vqframe->senderSignalIndex();
    } else {
        return ((VirtualQFrame*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnSenderSignalIndex(const QFrame* self, intptr_t slot) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_SenderSignalIndex_Callback(reinterpret_cast<VirtualQFrame::QFrame_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QFrame_Receivers(const QFrame* self, const char* signal) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        return vqframe->receivers(signal);
    } else {
        return ((VirtualQFrame*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QFrame_QBaseReceivers(const QFrame* self, const char* signal) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_Receivers_IsBase(true);
        return vqframe->receivers(signal);
    } else {
        return ((VirtualQFrame*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnReceivers(const QFrame* self, intptr_t slot) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_Receivers_Callback(reinterpret_cast<VirtualQFrame::QFrame_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFrame_IsSignalConnected(const QFrame* self, const QMetaMethod* signal) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        return vqframe->isSignalConnected(*signal);
    } else {
        return ((VirtualQFrame*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QFrame_QBaseIsSignalConnected(const QFrame* self, const QMetaMethod* signal) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_IsSignalConnected_IsBase(true);
        return vqframe->isSignalConnected(*signal);
    } else {
        return ((VirtualQFrame*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnIsSignalConnected(const QFrame* self, intptr_t slot) {
    auto* vqframe = const_cast<VirtualQFrame*>(dynamic_cast<const VirtualQFrame*>(self));
    if (vqframe && vqframe->isVirtualQFrame) {
        vqframe->setQFrame_IsSignalConnected_Callback(reinterpret_cast<VirtualQFrame::QFrame_IsSignalConnected_Callback>(slot));
    }
}

void QFrame_Delete(QFrame* self) {
    delete self;
}
