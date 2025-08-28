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
#include <QSizeGrip>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qsizegrip.h>
#include "libqsizegrip.h"
#include "libqsizegrip.hxx"

QSizeGrip* QSizeGrip_new(QWidget* parent) {
    return new VirtualQSizeGrip(parent);
}

QMetaObject* QSizeGrip_MetaObject(const QSizeGrip* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSizeGrip_Metacast(QSizeGrip* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSizeGrip_Metacall(QSizeGrip* self, int param1, int param2, void** param3) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSizeGrip*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSizeGrip_Tr(const char* s) {
    QString _ret = QSizeGrip::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QSizeGrip_SizeHint(const QSizeGrip* self) {
    auto* vqsizegrip = dynamic_cast<const VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualQSizeGrip*)self)->sizeHint());
    }
}

void QSizeGrip_SetVisible(QSizeGrip* self, bool visible) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        self->setVisible(visible);
    } else {
        ((VirtualQSizeGrip*)self)->setVisible(visible);
    }
}

void QSizeGrip_PaintEvent(QSizeGrip* self, QPaintEvent* param1) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->paintEvent(param1);
    }
}

void QSizeGrip_MousePressEvent(QSizeGrip* self, QMouseEvent* param1) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->mousePressEvent(param1);
    }
}

void QSizeGrip_MouseMoveEvent(QSizeGrip* self, QMouseEvent* param1) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->mouseMoveEvent(param1);
    }
}

void QSizeGrip_MouseReleaseEvent(QSizeGrip* self, QMouseEvent* mouseEvent) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->mouseReleaseEvent(mouseEvent);
    }
}

void QSizeGrip_MoveEvent(QSizeGrip* self, QMoveEvent* moveEvent) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->moveEvent(moveEvent);
    }
}

void QSizeGrip_ShowEvent(QSizeGrip* self, QShowEvent* showEvent) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->showEvent(showEvent);
    }
}

void QSizeGrip_HideEvent(QSizeGrip* self, QHideEvent* hideEvent) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->hideEvent(hideEvent);
    }
}

bool QSizeGrip_EventFilter(QSizeGrip* self, QObject* param1, QEvent* param2) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return vqsizegrip->eventFilter(param1, param2);
    }
    return {};
}

bool QSizeGrip_Event(QSizeGrip* self, QEvent* param1) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return vqsizegrip->event(param1);
    }
    return {};
}

libqt_string QSizeGrip_Tr2(const char* s, const char* c) {
    QString _ret = QSizeGrip::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSizeGrip_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSizeGrip::tr(s, c, static_cast<int>(n));
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
int QSizeGrip_QBaseMetacall(QSizeGrip* self, int param1, int param2, void** param3) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_Metacall_IsBase(true);
        return vqsizegrip->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QSizeGrip::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMetacall(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_Metacall_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* QSizeGrip_QBaseSizeHint(const QSizeGrip* self) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_SizeHint_IsBase(true);
        return new QSize(vqsizegrip->sizeHint());
    } else {
        return new QSize(((VirtualQSizeGrip*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnSizeHint(const QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_SizeHint_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_SizeHint_Callback>(slot));
    }
}

// Base class handler implementation
void QSizeGrip_QBaseSetVisible(QSizeGrip* self, bool visible) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_SetVisible_IsBase(true);
        vqsizegrip->setVisible(visible);
    } else {
        self->QSizeGrip::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnSetVisible(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_SetVisible_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_SetVisible_Callback>(slot));
    }
}

// Base class handler implementation
void QSizeGrip_QBasePaintEvent(QSizeGrip* self, QPaintEvent* param1) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_PaintEvent_IsBase(true);
        vqsizegrip->paintEvent(param1);
    } else {
        ((VirtualQSizeGrip*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnPaintEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_PaintEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_PaintEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QSizeGrip_QBaseMousePressEvent(QSizeGrip* self, QMouseEvent* param1) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_MousePressEvent_IsBase(true);
        vqsizegrip->mousePressEvent(param1);
    } else {
        ((VirtualQSizeGrip*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMousePressEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_MousePressEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MousePressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QSizeGrip_QBaseMouseMoveEvent(QSizeGrip* self, QMouseEvent* param1) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_MouseMoveEvent_IsBase(true);
        vqsizegrip->mouseMoveEvent(param1);
    } else {
        ((VirtualQSizeGrip*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMouseMoveEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_MouseMoveEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MouseMoveEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QSizeGrip_QBaseMouseReleaseEvent(QSizeGrip* self, QMouseEvent* mouseEvent) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_MouseReleaseEvent_IsBase(true);
        vqsizegrip->mouseReleaseEvent(mouseEvent);
    } else {
        ((VirtualQSizeGrip*)self)->mouseReleaseEvent(mouseEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMouseReleaseEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MouseReleaseEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QSizeGrip_QBaseMoveEvent(QSizeGrip* self, QMoveEvent* moveEvent) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_MoveEvent_IsBase(true);
        vqsizegrip->moveEvent(moveEvent);
    } else {
        ((VirtualQSizeGrip*)self)->moveEvent(moveEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMoveEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_MoveEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MoveEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QSizeGrip_QBaseShowEvent(QSizeGrip* self, QShowEvent* showEvent) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_ShowEvent_IsBase(true);
        vqsizegrip->showEvent(showEvent);
    } else {
        ((VirtualQSizeGrip*)self)->showEvent(showEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnShowEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_ShowEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ShowEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QSizeGrip_QBaseHideEvent(QSizeGrip* self, QHideEvent* hideEvent) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_HideEvent_IsBase(true);
        vqsizegrip->hideEvent(hideEvent);
    } else {
        ((VirtualQSizeGrip*)self)->hideEvent(hideEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnHideEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_HideEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_HideEvent_Callback>(slot));
    }
}

// Base class handler implementation
bool QSizeGrip_QBaseEventFilter(QSizeGrip* self, QObject* param1, QEvent* param2) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_EventFilter_IsBase(true);
        return vqsizegrip->eventFilter(param1, param2);
    } else {
        return ((VirtualQSizeGrip*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnEventFilter(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_EventFilter_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_EventFilter_Callback>(slot));
    }
}

// Base class handler implementation
bool QSizeGrip_QBaseEvent(QSizeGrip* self, QEvent* param1) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_Event_IsBase(true);
        return vqsizegrip->event(param1);
    } else {
        return ((VirtualQSizeGrip*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_Event_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Event_Callback>(slot));
    }
}

// Derived class handler implementation
int QSizeGrip_DevType(const QSizeGrip* self) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return vqsizegrip->devType();
    } else {
        return self->QSizeGrip::devType();
    }
}

// Base class handler implementation
int QSizeGrip_QBaseDevType(const QSizeGrip* self) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_DevType_IsBase(true);
        return vqsizegrip->devType();
    } else {
        return self->QSizeGrip::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnDevType(const QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_DevType_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QSizeGrip_MinimumSizeHint(const QSizeGrip* self) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return new QSize(vqsizegrip->minimumSizeHint());
    } else {
        return new QSize(((VirtualQSizeGrip*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QSizeGrip_QBaseMinimumSizeHint(const QSizeGrip* self) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_MinimumSizeHint_IsBase(true);
        return new QSize(vqsizegrip->minimumSizeHint());
    } else {
        return new QSize(((VirtualQSizeGrip*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMinimumSizeHint(const QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_MinimumSizeHint_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QSizeGrip_HeightForWidth(const QSizeGrip* self, int param1) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return vqsizegrip->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QSizeGrip::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QSizeGrip_QBaseHeightForWidth(const QSizeGrip* self, int param1) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_HeightForWidth_IsBase(true);
        return vqsizegrip->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QSizeGrip::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnHeightForWidth(const QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_HeightForWidth_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSizeGrip_HasHeightForWidth(const QSizeGrip* self) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return vqsizegrip->hasHeightForWidth();
    } else {
        return self->QSizeGrip::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QSizeGrip_QBaseHasHeightForWidth(const QSizeGrip* self) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_HasHeightForWidth_IsBase(true);
        return vqsizegrip->hasHeightForWidth();
    } else {
        return self->QSizeGrip::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnHasHeightForWidth(const QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_HasHeightForWidth_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QSizeGrip_PaintEngine(const QSizeGrip* self) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return vqsizegrip->paintEngine();
    } else {
        return self->QSizeGrip::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QSizeGrip_QBasePaintEngine(const QSizeGrip* self) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_PaintEngine_IsBase(true);
        return vqsizegrip->paintEngine();
    } else {
        return self->QSizeGrip::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnPaintEngine(const QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_PaintEngine_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_MouseDoubleClickEvent(QSizeGrip* self, QMouseEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseMouseDoubleClickEvent(QSizeGrip* self, QMouseEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_MouseDoubleClickEvent_IsBase(true);
        vqsizegrip->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMouseDoubleClickEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_WheelEvent(QSizeGrip* self, QWheelEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->wheelEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseWheelEvent(QSizeGrip* self, QWheelEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_WheelEvent_IsBase(true);
        vqsizegrip->wheelEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnWheelEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_WheelEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_KeyPressEvent(QSizeGrip* self, QKeyEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->keyPressEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseKeyPressEvent(QSizeGrip* self, QKeyEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_KeyPressEvent_IsBase(true);
        vqsizegrip->keyPressEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnKeyPressEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_KeyPressEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_KeyReleaseEvent(QSizeGrip* self, QKeyEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->keyReleaseEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseKeyReleaseEvent(QSizeGrip* self, QKeyEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_KeyReleaseEvent_IsBase(true);
        vqsizegrip->keyReleaseEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnKeyReleaseEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_FocusInEvent(QSizeGrip* self, QFocusEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->focusInEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseFocusInEvent(QSizeGrip* self, QFocusEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_FocusInEvent_IsBase(true);
        vqsizegrip->focusInEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnFocusInEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_FocusInEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_FocusOutEvent(QSizeGrip* self, QFocusEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->focusOutEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseFocusOutEvent(QSizeGrip* self, QFocusEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_FocusOutEvent_IsBase(true);
        vqsizegrip->focusOutEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnFocusOutEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_FocusOutEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_EnterEvent(QSizeGrip* self, QEnterEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->enterEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseEnterEvent(QSizeGrip* self, QEnterEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_EnterEvent_IsBase(true);
        vqsizegrip->enterEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnEnterEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_EnterEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_LeaveEvent(QSizeGrip* self, QEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->leaveEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseLeaveEvent(QSizeGrip* self, QEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_LeaveEvent_IsBase(true);
        vqsizegrip->leaveEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnLeaveEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_LeaveEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_ResizeEvent(QSizeGrip* self, QResizeEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->resizeEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseResizeEvent(QSizeGrip* self, QResizeEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_ResizeEvent_IsBase(true);
        vqsizegrip->resizeEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnResizeEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_ResizeEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_CloseEvent(QSizeGrip* self, QCloseEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->closeEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseCloseEvent(QSizeGrip* self, QCloseEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_CloseEvent_IsBase(true);
        vqsizegrip->closeEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnCloseEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_CloseEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_ContextMenuEvent(QSizeGrip* self, QContextMenuEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->contextMenuEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseContextMenuEvent(QSizeGrip* self, QContextMenuEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_ContextMenuEvent_IsBase(true);
        vqsizegrip->contextMenuEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnContextMenuEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_ContextMenuEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_TabletEvent(QSizeGrip* self, QTabletEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->tabletEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseTabletEvent(QSizeGrip* self, QTabletEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_TabletEvent_IsBase(true);
        vqsizegrip->tabletEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnTabletEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_TabletEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_ActionEvent(QSizeGrip* self, QActionEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->actionEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseActionEvent(QSizeGrip* self, QActionEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_ActionEvent_IsBase(true);
        vqsizegrip->actionEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnActionEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_ActionEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_DragEnterEvent(QSizeGrip* self, QDragEnterEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->dragEnterEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseDragEnterEvent(QSizeGrip* self, QDragEnterEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_DragEnterEvent_IsBase(true);
        vqsizegrip->dragEnterEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnDragEnterEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_DragEnterEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_DragMoveEvent(QSizeGrip* self, QDragMoveEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->dragMoveEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseDragMoveEvent(QSizeGrip* self, QDragMoveEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_DragMoveEvent_IsBase(true);
        vqsizegrip->dragMoveEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnDragMoveEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_DragMoveEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_DragLeaveEvent(QSizeGrip* self, QDragLeaveEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->dragLeaveEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseDragLeaveEvent(QSizeGrip* self, QDragLeaveEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_DragLeaveEvent_IsBase(true);
        vqsizegrip->dragLeaveEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnDragLeaveEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_DragLeaveEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_DropEvent(QSizeGrip* self, QDropEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->dropEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseDropEvent(QSizeGrip* self, QDropEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_DropEvent_IsBase(true);
        vqsizegrip->dropEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnDropEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_DropEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSizeGrip_NativeEvent(QSizeGrip* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return vqsizegrip->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQSizeGrip*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QSizeGrip_QBaseNativeEvent(QSizeGrip* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_NativeEvent_IsBase(true);
        return vqsizegrip->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQSizeGrip*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnNativeEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_NativeEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_ChangeEvent(QSizeGrip* self, QEvent* param1) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->changeEvent(param1);
    } else {
        ((VirtualQSizeGrip*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseChangeEvent(QSizeGrip* self, QEvent* param1) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_ChangeEvent_IsBase(true);
        vqsizegrip->changeEvent(param1);
    } else {
        ((VirtualQSizeGrip*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnChangeEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_ChangeEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QSizeGrip_Metric(const QSizeGrip* self, int param1) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return vqsizegrip->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQSizeGrip*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QSizeGrip_QBaseMetric(const QSizeGrip* self, int param1) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_Metric_IsBase(true);
        return vqsizegrip->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQSizeGrip*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMetric(const QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_Metric_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_InitPainter(const QSizeGrip* self, QPainter* painter) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->initPainter(painter);
    } else {
        ((VirtualQSizeGrip*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseInitPainter(const QSizeGrip* self, QPainter* painter) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_InitPainter_IsBase(true);
        vqsizegrip->initPainter(painter);
    } else {
        ((VirtualQSizeGrip*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnInitPainter(const QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_InitPainter_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QSizeGrip_Redirected(const QSizeGrip* self, QPoint* offset) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return vqsizegrip->redirected(offset);
    } else {
        return ((VirtualQSizeGrip*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QSizeGrip_QBaseRedirected(const QSizeGrip* self, QPoint* offset) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_Redirected_IsBase(true);
        return vqsizegrip->redirected(offset);
    } else {
        return ((VirtualQSizeGrip*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnRedirected(const QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_Redirected_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QSizeGrip_SharedPainter(const QSizeGrip* self) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return vqsizegrip->sharedPainter();
    } else {
        return ((VirtualQSizeGrip*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QSizeGrip_QBaseSharedPainter(const QSizeGrip* self) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_SharedPainter_IsBase(true);
        return vqsizegrip->sharedPainter();
    } else {
        return ((VirtualQSizeGrip*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnSharedPainter(const QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_SharedPainter_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_InputMethodEvent(QSizeGrip* self, QInputMethodEvent* param1) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->inputMethodEvent(param1);
    } else {
        ((VirtualQSizeGrip*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseInputMethodEvent(QSizeGrip* self, QInputMethodEvent* param1) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_InputMethodEvent_IsBase(true);
        vqsizegrip->inputMethodEvent(param1);
    } else {
        ((VirtualQSizeGrip*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnInputMethodEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_InputMethodEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QSizeGrip_InputMethodQuery(const QSizeGrip* self, int param1) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return new QVariant(vqsizegrip->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQSizeGrip*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QSizeGrip_QBaseInputMethodQuery(const QSizeGrip* self, int param1) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_InputMethodQuery_IsBase(true);
        return new QVariant(vqsizegrip->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQSizeGrip*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnInputMethodQuery(const QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_InputMethodQuery_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSizeGrip_FocusNextPrevChild(QSizeGrip* self, bool next) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return vqsizegrip->focusNextPrevChild(next);
    } else {
        return ((VirtualQSizeGrip*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QSizeGrip_QBaseFocusNextPrevChild(QSizeGrip* self, bool next) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_FocusNextPrevChild_IsBase(true);
        return vqsizegrip->focusNextPrevChild(next);
    } else {
        return ((VirtualQSizeGrip*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnFocusNextPrevChild(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_TimerEvent(QSizeGrip* self, QTimerEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->timerEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseTimerEvent(QSizeGrip* self, QTimerEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_TimerEvent_IsBase(true);
        vqsizegrip->timerEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnTimerEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_TimerEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_ChildEvent(QSizeGrip* self, QChildEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->childEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseChildEvent(QSizeGrip* self, QChildEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_ChildEvent_IsBase(true);
        vqsizegrip->childEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnChildEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_ChildEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_CustomEvent(QSizeGrip* self, QEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->customEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseCustomEvent(QSizeGrip* self, QEvent* event) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_CustomEvent_IsBase(true);
        vqsizegrip->customEvent(event);
    } else {
        ((VirtualQSizeGrip*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnCustomEvent(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_CustomEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_ConnectNotify(QSizeGrip* self, const QMetaMethod* signal) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->connectNotify(*signal);
    } else {
        ((VirtualQSizeGrip*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseConnectNotify(QSizeGrip* self, const QMetaMethod* signal) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_ConnectNotify_IsBase(true);
        vqsizegrip->connectNotify(*signal);
    } else {
        ((VirtualQSizeGrip*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnConnectNotify(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_ConnectNotify_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_DisconnectNotify(QSizeGrip* self, const QMetaMethod* signal) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->disconnectNotify(*signal);
    } else {
        ((VirtualQSizeGrip*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseDisconnectNotify(QSizeGrip* self, const QMetaMethod* signal) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_DisconnectNotify_IsBase(true);
        vqsizegrip->disconnectNotify(*signal);
    } else {
        ((VirtualQSizeGrip*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnDisconnectNotify(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_DisconnectNotify_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_UpdateMicroFocus(QSizeGrip* self) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->updateMicroFocus();
    } else {
        ((VirtualQSizeGrip*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QSizeGrip_QBaseUpdateMicroFocus(QSizeGrip* self) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_UpdateMicroFocus_IsBase(true);
        vqsizegrip->updateMicroFocus();
    } else {
        ((VirtualQSizeGrip*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnUpdateMicroFocus(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_Create(QSizeGrip* self) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->create();
    } else {
        ((VirtualQSizeGrip*)self)->create();
    }
}

// Base class handler implementation
void QSizeGrip_QBaseCreate(QSizeGrip* self) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_Create_IsBase(true);
        vqsizegrip->create();
    } else {
        ((VirtualQSizeGrip*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnCreate(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_Create_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_Destroy(QSizeGrip* self) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->destroy();
    } else {
        ((VirtualQSizeGrip*)self)->destroy();
    }
}

// Base class handler implementation
void QSizeGrip_QBaseDestroy(QSizeGrip* self) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_Destroy_IsBase(true);
        vqsizegrip->destroy();
    } else {
        ((VirtualQSizeGrip*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnDestroy(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_Destroy_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSizeGrip_FocusNextChild(QSizeGrip* self) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return vqsizegrip->focusNextChild();
    } else {
        return ((VirtualQSizeGrip*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QSizeGrip_QBaseFocusNextChild(QSizeGrip* self) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_FocusNextChild_IsBase(true);
        return vqsizegrip->focusNextChild();
    } else {
        return ((VirtualQSizeGrip*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnFocusNextChild(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_FocusNextChild_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSizeGrip_FocusPreviousChild(QSizeGrip* self) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return vqsizegrip->focusPreviousChild();
    } else {
        return ((VirtualQSizeGrip*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QSizeGrip_QBaseFocusPreviousChild(QSizeGrip* self) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_FocusPreviousChild_IsBase(true);
        return vqsizegrip->focusPreviousChild();
    } else {
        return ((VirtualQSizeGrip*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnFocusPreviousChild(QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_FocusPreviousChild_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSizeGrip_Sender(const QSizeGrip* self) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return vqsizegrip->sender();
    } else {
        return ((VirtualQSizeGrip*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSizeGrip_QBaseSender(const QSizeGrip* self) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_Sender_IsBase(true);
        return vqsizegrip->sender();
    } else {
        return ((VirtualQSizeGrip*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnSender(const QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_Sender_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSizeGrip_SenderSignalIndex(const QSizeGrip* self) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return vqsizegrip->senderSignalIndex();
    } else {
        return ((VirtualQSizeGrip*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSizeGrip_QBaseSenderSignalIndex(const QSizeGrip* self) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_SenderSignalIndex_IsBase(true);
        return vqsizegrip->senderSignalIndex();
    } else {
        return ((VirtualQSizeGrip*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnSenderSignalIndex(const QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSizeGrip_Receivers(const QSizeGrip* self, const char* signal) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return vqsizegrip->receivers(signal);
    } else {
        return ((VirtualQSizeGrip*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSizeGrip_QBaseReceivers(const QSizeGrip* self, const char* signal) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_Receivers_IsBase(true);
        return vqsizegrip->receivers(signal);
    } else {
        return ((VirtualQSizeGrip*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnReceivers(const QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_Receivers_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSizeGrip_IsSignalConnected(const QSizeGrip* self, const QMetaMethod* signal) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return vqsizegrip->isSignalConnected(*signal);
    } else {
        return ((VirtualQSizeGrip*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSizeGrip_QBaseIsSignalConnected(const QSizeGrip* self, const QMetaMethod* signal) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_IsSignalConnected_IsBase(true);
        return vqsizegrip->isSignalConnected(*signal);
    } else {
        return ((VirtualQSizeGrip*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnIsSignalConnected(const QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_IsSignalConnected_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QSizeGrip_GetDecodedMetricF(const QSizeGrip* self, int metricA, int metricB) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        return vqsizegrip->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQSizeGrip*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QSizeGrip_QBaseGetDecodedMetricF(const QSizeGrip* self, int metricA, int metricB) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_GetDecodedMetricF_IsBase(true);
        return vqsizegrip->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQSizeGrip*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnGetDecodedMetricF(const QSizeGrip* self, intptr_t slot) {
    auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self));
    if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
        vqsizegrip->setQSizeGrip_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_GetDecodedMetricF_Callback>(slot));
    }
}

void QSizeGrip_Delete(QSizeGrip* self) {
    delete self;
}
