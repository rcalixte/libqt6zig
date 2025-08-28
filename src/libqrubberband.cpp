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
#include <QRect>
#include <QResizeEvent>
#include <QRubberBand>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionRubberBand>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qrubberband.h>
#include "libqrubberband.h"
#include "libqrubberband.hxx"

QRubberBand* QRubberBand_new(int param1) {
    return new VirtualQRubberBand(static_cast<QRubberBand::Shape>(param1));
}

QRubberBand* QRubberBand_new2(int param1, QWidget* param2) {
    return new VirtualQRubberBand(static_cast<QRubberBand::Shape>(param1), param2);
}

QMetaObject* QRubberBand_MetaObject(const QRubberBand* self) {
    return (QMetaObject*)self->metaObject();
}

void* QRubberBand_Metacast(QRubberBand* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QRubberBand_Metacall(QRubberBand* self, int param1, int param2, void** param3) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQRubberBand*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QRubberBand_OnMetacall(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_Metacall_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QRubberBand_QBaseMetacall(QRubberBand* self, int param1, int param2, void** param3) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_Metacall_IsBase(true);
        return vqrubberband->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQRubberBand*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QRubberBand_Tr(const char* s) {
    QString _ret = QRubberBand::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QRubberBand_Shape(const QRubberBand* self) {
    return static_cast<int>(self->shape());
}

void QRubberBand_SetGeometry(QRubberBand* self, const QRect* r) {
    self->setGeometry(*r);
}

void QRubberBand_SetGeometry2(QRubberBand* self, int x, int y, int w, int h) {
    self->setGeometry(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QRubberBand_Move(QRubberBand* self, int x, int y) {
    self->move(static_cast<int>(x), static_cast<int>(y));
}

void QRubberBand_Move2(QRubberBand* self, const QPoint* p) {
    self->move(*p);
}

void QRubberBand_Resize(QRubberBand* self, int w, int h) {
    self->resize(static_cast<int>(w), static_cast<int>(h));
}

void QRubberBand_Resize2(QRubberBand* self, const QSize* s) {
    self->resize(*s);
}

bool QRubberBand_Event(QRubberBand* self, QEvent* e) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return vqrubberband->event(e);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QRubberBand_OnEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_Event_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_Event_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QRubberBand_QBaseEvent(QRubberBand* self, QEvent* e) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_Event_IsBase(true);
        return vqrubberband->event(e);
    }
    return {};
}

void QRubberBand_PaintEvent(QRubberBand* self, QPaintEvent* param1) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->paintEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QRubberBand_OnPaintEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_PaintEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_PaintEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QRubberBand_QBasePaintEvent(QRubberBand* self, QPaintEvent* param1) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_PaintEvent_IsBase(true);
        vqrubberband->paintEvent(param1);
    }
}

void QRubberBand_ChangeEvent(QRubberBand* self, QEvent* param1) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->changeEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QRubberBand_OnChangeEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_ChangeEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_ChangeEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QRubberBand_QBaseChangeEvent(QRubberBand* self, QEvent* param1) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_ChangeEvent_IsBase(true);
        vqrubberband->changeEvent(param1);
    }
}

void QRubberBand_ShowEvent(QRubberBand* self, QShowEvent* param1) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->showEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QRubberBand_OnShowEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_ShowEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_ShowEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QRubberBand_QBaseShowEvent(QRubberBand* self, QShowEvent* param1) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_ShowEvent_IsBase(true);
        vqrubberband->showEvent(param1);
    }
}

void QRubberBand_ResizeEvent(QRubberBand* self, QResizeEvent* param1) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->resizeEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QRubberBand_OnResizeEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_ResizeEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_ResizeEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QRubberBand_QBaseResizeEvent(QRubberBand* self, QResizeEvent* param1) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_ResizeEvent_IsBase(true);
        vqrubberband->resizeEvent(param1);
    }
}

void QRubberBand_MoveEvent(QRubberBand* self, QMoveEvent* param1) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->moveEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QRubberBand_OnMoveEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_MoveEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_MoveEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QRubberBand_QBaseMoveEvent(QRubberBand* self, QMoveEvent* param1) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_MoveEvent_IsBase(true);
        vqrubberband->moveEvent(param1);
    }
}

void QRubberBand_InitStyleOption(const QRubberBand* self, QStyleOptionRubberBand* option) {
    auto* vqrubberband = dynamic_cast<const VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->initStyleOption(option);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QRubberBand_OnInitStyleOption(const QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_InitStyleOption_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_InitStyleOption_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QRubberBand_QBaseInitStyleOption(const QRubberBand* self, QStyleOptionRubberBand* option) {
    auto* vqrubberband = dynamic_cast<const VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_InitStyleOption_IsBase(true);
        vqrubberband->initStyleOption(option);
    }
}

libqt_string QRubberBand_Tr2(const char* s, const char* c) {
    QString _ret = QRubberBand::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QRubberBand_Tr3(const char* s, const char* c, int n) {
    QString _ret = QRubberBand::tr(s, c, static_cast<int>(n));
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
int QRubberBand_DevType(const QRubberBand* self) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return vqrubberband->devType();
    } else {
        return self->QRubberBand::devType();
    }
}

// Base class handler implementation
int QRubberBand_QBaseDevType(const QRubberBand* self) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_DevType_IsBase(true);
        return vqrubberband->devType();
    } else {
        return self->QRubberBand::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnDevType(const QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_DevType_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_SetVisible(QRubberBand* self, bool visible) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setVisible(visible);
    } else {
        self->QRubberBand::setVisible(visible);
    }
}

// Base class handler implementation
void QRubberBand_QBaseSetVisible(QRubberBand* self, bool visible) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_SetVisible_IsBase(true);
        vqrubberband->setVisible(visible);
    } else {
        self->QRubberBand::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnSetVisible(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_SetVisible_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QRubberBand_SizeHint(const QRubberBand* self) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return new QSize(vqrubberband->sizeHint());
    } else {
        return new QSize(((VirtualQRubberBand*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QRubberBand_QBaseSizeHint(const QRubberBand* self) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_SizeHint_IsBase(true);
        return new QSize(vqrubberband->sizeHint());
    } else {
        return new QSize(((VirtualQRubberBand*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnSizeHint(const QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_SizeHint_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QRubberBand_MinimumSizeHint(const QRubberBand* self) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return new QSize(vqrubberband->minimumSizeHint());
    } else {
        return new QSize(((VirtualQRubberBand*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QRubberBand_QBaseMinimumSizeHint(const QRubberBand* self) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_MinimumSizeHint_IsBase(true);
        return new QSize(vqrubberband->minimumSizeHint());
    } else {
        return new QSize(((VirtualQRubberBand*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMinimumSizeHint(const QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_MinimumSizeHint_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QRubberBand_HeightForWidth(const QRubberBand* self, int param1) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return vqrubberband->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QRubberBand::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QRubberBand_QBaseHeightForWidth(const QRubberBand* self, int param1) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_HeightForWidth_IsBase(true);
        return vqrubberband->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QRubberBand::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnHeightForWidth(const QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_HeightForWidth_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRubberBand_HasHeightForWidth(const QRubberBand* self) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return vqrubberband->hasHeightForWidth();
    } else {
        return self->QRubberBand::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QRubberBand_QBaseHasHeightForWidth(const QRubberBand* self) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_HasHeightForWidth_IsBase(true);
        return vqrubberband->hasHeightForWidth();
    } else {
        return self->QRubberBand::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnHasHeightForWidth(const QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_HasHeightForWidth_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QRubberBand_PaintEngine(const QRubberBand* self) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return vqrubberband->paintEngine();
    } else {
        return self->QRubberBand::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QRubberBand_QBasePaintEngine(const QRubberBand* self) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_PaintEngine_IsBase(true);
        return vqrubberband->paintEngine();
    } else {
        return self->QRubberBand::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnPaintEngine(const QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_PaintEngine_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_MousePressEvent(QRubberBand* self, QMouseEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->mousePressEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseMousePressEvent(QRubberBand* self, QMouseEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_MousePressEvent_IsBase(true);
        vqrubberband->mousePressEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMousePressEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_MousePressEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_MouseReleaseEvent(QRubberBand* self, QMouseEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->mouseReleaseEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseMouseReleaseEvent(QRubberBand* self, QMouseEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_MouseReleaseEvent_IsBase(true);
        vqrubberband->mouseReleaseEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMouseReleaseEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_MouseDoubleClickEvent(QRubberBand* self, QMouseEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseMouseDoubleClickEvent(QRubberBand* self, QMouseEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_MouseDoubleClickEvent_IsBase(true);
        vqrubberband->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMouseDoubleClickEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_MouseMoveEvent(QRubberBand* self, QMouseEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->mouseMoveEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseMouseMoveEvent(QRubberBand* self, QMouseEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_MouseMoveEvent_IsBase(true);
        vqrubberband->mouseMoveEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMouseMoveEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_MouseMoveEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_WheelEvent(QRubberBand* self, QWheelEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->wheelEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseWheelEvent(QRubberBand* self, QWheelEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_WheelEvent_IsBase(true);
        vqrubberband->wheelEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnWheelEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_WheelEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_KeyPressEvent(QRubberBand* self, QKeyEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->keyPressEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseKeyPressEvent(QRubberBand* self, QKeyEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_KeyPressEvent_IsBase(true);
        vqrubberband->keyPressEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnKeyPressEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_KeyPressEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_KeyReleaseEvent(QRubberBand* self, QKeyEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->keyReleaseEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseKeyReleaseEvent(QRubberBand* self, QKeyEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_KeyReleaseEvent_IsBase(true);
        vqrubberband->keyReleaseEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnKeyReleaseEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_FocusInEvent(QRubberBand* self, QFocusEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->focusInEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseFocusInEvent(QRubberBand* self, QFocusEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_FocusInEvent_IsBase(true);
        vqrubberband->focusInEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnFocusInEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_FocusInEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_FocusOutEvent(QRubberBand* self, QFocusEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->focusOutEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseFocusOutEvent(QRubberBand* self, QFocusEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_FocusOutEvent_IsBase(true);
        vqrubberband->focusOutEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnFocusOutEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_FocusOutEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_EnterEvent(QRubberBand* self, QEnterEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->enterEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseEnterEvent(QRubberBand* self, QEnterEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_EnterEvent_IsBase(true);
        vqrubberband->enterEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnEnterEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_EnterEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_LeaveEvent(QRubberBand* self, QEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->leaveEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseLeaveEvent(QRubberBand* self, QEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_LeaveEvent_IsBase(true);
        vqrubberband->leaveEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnLeaveEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_LeaveEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_CloseEvent(QRubberBand* self, QCloseEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->closeEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseCloseEvent(QRubberBand* self, QCloseEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_CloseEvent_IsBase(true);
        vqrubberband->closeEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnCloseEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_CloseEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_ContextMenuEvent(QRubberBand* self, QContextMenuEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->contextMenuEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseContextMenuEvent(QRubberBand* self, QContextMenuEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_ContextMenuEvent_IsBase(true);
        vqrubberband->contextMenuEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnContextMenuEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_ContextMenuEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_TabletEvent(QRubberBand* self, QTabletEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->tabletEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseTabletEvent(QRubberBand* self, QTabletEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_TabletEvent_IsBase(true);
        vqrubberband->tabletEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnTabletEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_TabletEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_ActionEvent(QRubberBand* self, QActionEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->actionEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseActionEvent(QRubberBand* self, QActionEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_ActionEvent_IsBase(true);
        vqrubberband->actionEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnActionEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_ActionEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_DragEnterEvent(QRubberBand* self, QDragEnterEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->dragEnterEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseDragEnterEvent(QRubberBand* self, QDragEnterEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_DragEnterEvent_IsBase(true);
        vqrubberband->dragEnterEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnDragEnterEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_DragEnterEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_DragMoveEvent(QRubberBand* self, QDragMoveEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->dragMoveEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseDragMoveEvent(QRubberBand* self, QDragMoveEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_DragMoveEvent_IsBase(true);
        vqrubberband->dragMoveEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnDragMoveEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_DragMoveEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_DragLeaveEvent(QRubberBand* self, QDragLeaveEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->dragLeaveEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseDragLeaveEvent(QRubberBand* self, QDragLeaveEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_DragLeaveEvent_IsBase(true);
        vqrubberband->dragLeaveEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnDragLeaveEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_DragLeaveEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_DropEvent(QRubberBand* self, QDropEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->dropEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseDropEvent(QRubberBand* self, QDropEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_DropEvent_IsBase(true);
        vqrubberband->dropEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnDropEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_DropEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_HideEvent(QRubberBand* self, QHideEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->hideEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseHideEvent(QRubberBand* self, QHideEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_HideEvent_IsBase(true);
        vqrubberband->hideEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnHideEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_HideEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRubberBand_NativeEvent(QRubberBand* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return vqrubberband->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQRubberBand*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QRubberBand_QBaseNativeEvent(QRubberBand* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_NativeEvent_IsBase(true);
        return vqrubberband->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQRubberBand*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnNativeEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_NativeEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QRubberBand_Metric(const QRubberBand* self, int param1) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return vqrubberband->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQRubberBand*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QRubberBand_QBaseMetric(const QRubberBand* self, int param1) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_Metric_IsBase(true);
        return vqrubberband->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQRubberBand*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMetric(const QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_Metric_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_InitPainter(const QRubberBand* self, QPainter* painter) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->initPainter(painter);
    } else {
        ((VirtualQRubberBand*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QRubberBand_QBaseInitPainter(const QRubberBand* self, QPainter* painter) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_InitPainter_IsBase(true);
        vqrubberband->initPainter(painter);
    } else {
        ((VirtualQRubberBand*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnInitPainter(const QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_InitPainter_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QRubberBand_Redirected(const QRubberBand* self, QPoint* offset) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return vqrubberband->redirected(offset);
    } else {
        return ((VirtualQRubberBand*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QRubberBand_QBaseRedirected(const QRubberBand* self, QPoint* offset) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_Redirected_IsBase(true);
        return vqrubberband->redirected(offset);
    } else {
        return ((VirtualQRubberBand*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnRedirected(const QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_Redirected_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QRubberBand_SharedPainter(const QRubberBand* self) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return vqrubberband->sharedPainter();
    } else {
        return ((VirtualQRubberBand*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QRubberBand_QBaseSharedPainter(const QRubberBand* self) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_SharedPainter_IsBase(true);
        return vqrubberband->sharedPainter();
    } else {
        return ((VirtualQRubberBand*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnSharedPainter(const QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_SharedPainter_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_InputMethodEvent(QRubberBand* self, QInputMethodEvent* param1) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->inputMethodEvent(param1);
    } else {
        ((VirtualQRubberBand*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QRubberBand_QBaseInputMethodEvent(QRubberBand* self, QInputMethodEvent* param1) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_InputMethodEvent_IsBase(true);
        vqrubberband->inputMethodEvent(param1);
    } else {
        ((VirtualQRubberBand*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnInputMethodEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_InputMethodEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QRubberBand_InputMethodQuery(const QRubberBand* self, int param1) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return new QVariant(vqrubberband->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQRubberBand*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QRubberBand_QBaseInputMethodQuery(const QRubberBand* self, int param1) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_InputMethodQuery_IsBase(true);
        return new QVariant(vqrubberband->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQRubberBand*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnInputMethodQuery(const QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_InputMethodQuery_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRubberBand_FocusNextPrevChild(QRubberBand* self, bool next) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return vqrubberband->focusNextPrevChild(next);
    } else {
        return ((VirtualQRubberBand*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QRubberBand_QBaseFocusNextPrevChild(QRubberBand* self, bool next) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_FocusNextPrevChild_IsBase(true);
        return vqrubberband->focusNextPrevChild(next);
    } else {
        return ((VirtualQRubberBand*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnFocusNextPrevChild(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRubberBand_EventFilter(QRubberBand* self, QObject* watched, QEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return vqrubberband->eventFilter(watched, event);
    } else {
        return self->QRubberBand::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QRubberBand_QBaseEventFilter(QRubberBand* self, QObject* watched, QEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_EventFilter_IsBase(true);
        return vqrubberband->eventFilter(watched, event);
    } else {
        return self->QRubberBand::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnEventFilter(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_EventFilter_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_TimerEvent(QRubberBand* self, QTimerEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->timerEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseTimerEvent(QRubberBand* self, QTimerEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_TimerEvent_IsBase(true);
        vqrubberband->timerEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnTimerEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_TimerEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_ChildEvent(QRubberBand* self, QChildEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->childEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseChildEvent(QRubberBand* self, QChildEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_ChildEvent_IsBase(true);
        vqrubberband->childEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnChildEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_ChildEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_CustomEvent(QRubberBand* self, QEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->customEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseCustomEvent(QRubberBand* self, QEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_CustomEvent_IsBase(true);
        vqrubberband->customEvent(event);
    } else {
        ((VirtualQRubberBand*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnCustomEvent(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_CustomEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_ConnectNotify(QRubberBand* self, const QMetaMethod* signal) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->connectNotify(*signal);
    } else {
        ((VirtualQRubberBand*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QRubberBand_QBaseConnectNotify(QRubberBand* self, const QMetaMethod* signal) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_ConnectNotify_IsBase(true);
        vqrubberband->connectNotify(*signal);
    } else {
        ((VirtualQRubberBand*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnConnectNotify(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_ConnectNotify_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_DisconnectNotify(QRubberBand* self, const QMetaMethod* signal) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->disconnectNotify(*signal);
    } else {
        ((VirtualQRubberBand*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QRubberBand_QBaseDisconnectNotify(QRubberBand* self, const QMetaMethod* signal) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_DisconnectNotify_IsBase(true);
        vqrubberband->disconnectNotify(*signal);
    } else {
        ((VirtualQRubberBand*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnDisconnectNotify(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_DisconnectNotify_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_UpdateMicroFocus(QRubberBand* self) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->updateMicroFocus();
    } else {
        ((VirtualQRubberBand*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QRubberBand_QBaseUpdateMicroFocus(QRubberBand* self) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_UpdateMicroFocus_IsBase(true);
        vqrubberband->updateMicroFocus();
    } else {
        ((VirtualQRubberBand*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnUpdateMicroFocus(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_Create(QRubberBand* self) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->create();
    } else {
        ((VirtualQRubberBand*)self)->create();
    }
}

// Base class handler implementation
void QRubberBand_QBaseCreate(QRubberBand* self) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_Create_IsBase(true);
        vqrubberband->create();
    } else {
        ((VirtualQRubberBand*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnCreate(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_Create_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_Destroy(QRubberBand* self) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->destroy();
    } else {
        ((VirtualQRubberBand*)self)->destroy();
    }
}

// Base class handler implementation
void QRubberBand_QBaseDestroy(QRubberBand* self) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_Destroy_IsBase(true);
        vqrubberband->destroy();
    } else {
        ((VirtualQRubberBand*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnDestroy(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_Destroy_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRubberBand_FocusNextChild(QRubberBand* self) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return vqrubberband->focusNextChild();
    } else {
        return ((VirtualQRubberBand*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QRubberBand_QBaseFocusNextChild(QRubberBand* self) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_FocusNextChild_IsBase(true);
        return vqrubberband->focusNextChild();
    } else {
        return ((VirtualQRubberBand*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnFocusNextChild(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_FocusNextChild_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRubberBand_FocusPreviousChild(QRubberBand* self) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return vqrubberband->focusPreviousChild();
    } else {
        return ((VirtualQRubberBand*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QRubberBand_QBaseFocusPreviousChild(QRubberBand* self) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_FocusPreviousChild_IsBase(true);
        return vqrubberband->focusPreviousChild();
    } else {
        return ((VirtualQRubberBand*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnFocusPreviousChild(QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_FocusPreviousChild_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QRubberBand_Sender(const QRubberBand* self) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return vqrubberband->sender();
    } else {
        return ((VirtualQRubberBand*)self)->sender();
    }
}

// Base class handler implementation
QObject* QRubberBand_QBaseSender(const QRubberBand* self) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_Sender_IsBase(true);
        return vqrubberband->sender();
    } else {
        return ((VirtualQRubberBand*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnSender(const QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_Sender_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QRubberBand_SenderSignalIndex(const QRubberBand* self) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return vqrubberband->senderSignalIndex();
    } else {
        return ((VirtualQRubberBand*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QRubberBand_QBaseSenderSignalIndex(const QRubberBand* self) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_SenderSignalIndex_IsBase(true);
        return vqrubberband->senderSignalIndex();
    } else {
        return ((VirtualQRubberBand*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnSenderSignalIndex(const QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_SenderSignalIndex_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QRubberBand_Receivers(const QRubberBand* self, const char* signal) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return vqrubberband->receivers(signal);
    } else {
        return ((VirtualQRubberBand*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QRubberBand_QBaseReceivers(const QRubberBand* self, const char* signal) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_Receivers_IsBase(true);
        return vqrubberband->receivers(signal);
    } else {
        return ((VirtualQRubberBand*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnReceivers(const QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_Receivers_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRubberBand_IsSignalConnected(const QRubberBand* self, const QMetaMethod* signal) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return vqrubberband->isSignalConnected(*signal);
    } else {
        return ((VirtualQRubberBand*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QRubberBand_QBaseIsSignalConnected(const QRubberBand* self, const QMetaMethod* signal) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_IsSignalConnected_IsBase(true);
        return vqrubberband->isSignalConnected(*signal);
    } else {
        return ((VirtualQRubberBand*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnIsSignalConnected(const QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_IsSignalConnected_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QRubberBand_GetDecodedMetricF(const QRubberBand* self, int metricA, int metricB) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        return vqrubberband->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQRubberBand*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QRubberBand_QBaseGetDecodedMetricF(const QRubberBand* self, int metricA, int metricB) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_GetDecodedMetricF_IsBase(true);
        return vqrubberband->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQRubberBand*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnGetDecodedMetricF(const QRubberBand* self, intptr_t slot) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
        vqrubberband->setQRubberBand_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_GetDecodedMetricF_Callback>(slot));
    }
}

void QRubberBand_Delete(QRubberBand* self) {
    delete self;
}
