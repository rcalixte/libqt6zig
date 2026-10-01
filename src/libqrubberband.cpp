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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QRubberBand_Tr(const char* s) {
    auto _ret = QRubberBand::tr(s);
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
    if (vqrubberband) {
        return vqrubberband->event(e);
    }
    qFatal("Error: Protected method QRubberBand::event called without a directly constructed type");
}

void QRubberBand_PaintEvent(QRubberBand* self, QPaintEvent* param1) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->paintEvent(param1);
    }
}

void QRubberBand_ChangeEvent(QRubberBand* self, QEvent* param1) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->changeEvent(param1);
    }
}

void QRubberBand_ShowEvent(QRubberBand* self, QShowEvent* param1) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->showEvent(param1);
    }
}

void QRubberBand_ResizeEvent(QRubberBand* self, QResizeEvent* param1) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->resizeEvent(param1);
    }
}

void QRubberBand_MoveEvent(QRubberBand* self, QMoveEvent* param1) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->moveEvent(param1);
    }
}

void QRubberBand_InitStyleOption(const QRubberBand* self, QStyleOptionRubberBand* option) {
    auto* vqrubberband = dynamic_cast<const VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->initStyleOption(option);
    }
}

libqt_string QRubberBand_Tr2(const char* s, const char* c) {
    auto _ret = QRubberBand::tr(s, c);
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
    auto _ret = QRubberBand::tr(s, c, static_cast<int>(n));
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
QMetaObject* QRubberBand_SuperMetaObject(const QRubberBand* self) {
    return (QMetaObject*)self->QRubberBand::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMetaObject(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self)))
        vqrubberband->qrubberband_metaobject_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QRubberBand_SuperMetacast(QRubberBand* self, const char* param1) {
    return self->QRubberBand::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMetacast(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_metacast_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_Metacast_Callback>(slot);
}

// Base class handler implementation
int QRubberBand_SuperMetacall(QRubberBand* self, int param1, int param2, void** param3) {
    return self->QRubberBand::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMetacall(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_metacall_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QRubberBand_SuperEvent(QRubberBand* self, QEvent* e) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        return vqrubberband->QRubberBand::event(e);
    } else
        qFatal("Error: Protected virtual method QRubberBand::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_event_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_Event_Callback>(slot);
}

// Base class handler implementation
void QRubberBand_SuperPaintEvent(QRubberBand* self, QPaintEvent* param1) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRubberBand::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnPaintEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_paintevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QRubberBand_SuperChangeEvent(QRubberBand* self, QEvent* param1) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRubberBand::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnChangeEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_changeevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QRubberBand_SuperShowEvent(QRubberBand* self, QShowEvent* param1) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRubberBand::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnShowEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_showevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void QRubberBand_SuperResizeEvent(QRubberBand* self, QResizeEvent* param1) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRubberBand::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnResizeEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_resizeevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QRubberBand_SuperMoveEvent(QRubberBand* self, QMoveEvent* param1) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::moveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRubberBand::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMoveEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_moveevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_MoveEvent_Callback>(slot);
}

// Base class handler implementation
void QRubberBand_SuperInitStyleOption(const QRubberBand* self, QStyleOptionRubberBand* option) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->QRubberBand::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QRubberBand::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnInitStyleOption(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self)))
        vqrubberband->qrubberband_initstyleoption_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QRubberBand_DevType(const QRubberBand* self) {
    return self->devType();
}

// Base class handler implementation
int QRubberBand_SuperDevType(const QRubberBand* self) {
    return self->QRubberBand::devType();
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnDevType(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self)))
        vqrubberband->qrubberband_devtype_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_DevType_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_SetVisible(QRubberBand* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QRubberBand_SuperSetVisible(QRubberBand* self, bool visible) {
    self->QRubberBand::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnSetVisible(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_setvisible_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QRubberBand_SizeHint(const QRubberBand* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QRubberBand_SuperSizeHint(const QRubberBand* self) {
    return new QSize(self->QRubberBand::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnSizeHint(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self)))
        vqrubberband->qrubberband_sizehint_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QRubberBand_MinimumSizeHint(const QRubberBand* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QRubberBand_SuperMinimumSizeHint(const QRubberBand* self) {
    return new QSize(self->QRubberBand::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMinimumSizeHint(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self)))
        vqrubberband->qrubberband_minimumsizehint_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QRubberBand_HeightForWidth(const QRubberBand* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QRubberBand_SuperHeightForWidth(const QRubberBand* self, int param1) {
    return self->QRubberBand::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnHeightForWidth(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self)))
        vqrubberband->qrubberband_heightforwidth_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QRubberBand_HasHeightForWidth(const QRubberBand* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QRubberBand_SuperHasHeightForWidth(const QRubberBand* self) {
    return self->QRubberBand::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnHasHeightForWidth(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self)))
        vqrubberband->qrubberband_hasheightforwidth_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QRubberBand_PaintEngine(const QRubberBand* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QRubberBand_SuperPaintEngine(const QRubberBand* self) {
    return self->QRubberBand::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnPaintEngine(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self)))
        vqrubberband->qrubberband_paintengine_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_MousePressEvent(QRubberBand* self, QMouseEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperMousePressEvent(QRubberBand* self, QMouseEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMousePressEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_mousepressevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_MouseReleaseEvent(QRubberBand* self, QMouseEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperMouseReleaseEvent(QRubberBand* self, QMouseEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMouseReleaseEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_mousereleaseevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_MouseDoubleClickEvent(QRubberBand* self, QMouseEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperMouseDoubleClickEvent(QRubberBand* self, QMouseEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMouseDoubleClickEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_mousedoubleclickevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_MouseMoveEvent(QRubberBand* self, QMouseEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperMouseMoveEvent(QRubberBand* self, QMouseEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMouseMoveEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_mousemoveevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_WheelEvent(QRubberBand* self, QWheelEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperWheelEvent(QRubberBand* self, QWheelEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnWheelEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_wheelevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_KeyPressEvent(QRubberBand* self, QKeyEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperKeyPressEvent(QRubberBand* self, QKeyEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnKeyPressEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_keypressevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_KeyReleaseEvent(QRubberBand* self, QKeyEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperKeyReleaseEvent(QRubberBand* self, QKeyEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnKeyReleaseEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_keyreleaseevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_FocusInEvent(QRubberBand* self, QFocusEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperFocusInEvent(QRubberBand* self, QFocusEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnFocusInEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_focusinevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_FocusOutEvent(QRubberBand* self, QFocusEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperFocusOutEvent(QRubberBand* self, QFocusEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnFocusOutEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_focusoutevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_EnterEvent(QRubberBand* self, QEnterEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperEnterEvent(QRubberBand* self, QEnterEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnEnterEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_enterevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_LeaveEvent(QRubberBand* self, QEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperLeaveEvent(QRubberBand* self, QEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnLeaveEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_leaveevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_CloseEvent(QRubberBand* self, QCloseEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperCloseEvent(QRubberBand* self, QCloseEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnCloseEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_closeevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_ContextMenuEvent(QRubberBand* self, QContextMenuEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperContextMenuEvent(QRubberBand* self, QContextMenuEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnContextMenuEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_contextmenuevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_TabletEvent(QRubberBand* self, QTabletEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperTabletEvent(QRubberBand* self, QTabletEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnTabletEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_tabletevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_ActionEvent(QRubberBand* self, QActionEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperActionEvent(QRubberBand* self, QActionEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnActionEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_actionevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_DragEnterEvent(QRubberBand* self, QDragEnterEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperDragEnterEvent(QRubberBand* self, QDragEnterEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnDragEnterEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_dragenterevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_DragMoveEvent(QRubberBand* self, QDragMoveEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperDragMoveEvent(QRubberBand* self, QDragMoveEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnDragMoveEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_dragmoveevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_DragLeaveEvent(QRubberBand* self, QDragLeaveEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperDragLeaveEvent(QRubberBand* self, QDragLeaveEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnDragLeaveEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_dragleaveevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_DropEvent(QRubberBand* self, QDropEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperDropEvent(QRubberBand* self, QDropEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnDropEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_dropevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_HideEvent(QRubberBand* self, QHideEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperHideEvent(QRubberBand* self, QHideEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnHideEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_hideevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QRubberBand_NativeEvent(QRubberBand* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        return vqrubberband->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QRubberBand::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QRubberBand_SuperNativeEvent(QRubberBand* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        return vqrubberband->QRubberBand::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QRubberBand::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnNativeEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_nativeevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QRubberBand_Metric(const QRubberBand* self, int param1) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband) {
        return vqrubberband->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QRubberBand::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QRubberBand_SuperMetric(const QRubberBand* self, int param1) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return vqrubberband->QRubberBand::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QRubberBand::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMetric(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self)))
        vqrubberband->qrubberband_metric_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_Metric_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_InitPainter(const QRubberBand* self, QPainter* painter) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband) {
        vqrubberband->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperInitPainter(const QRubberBand* self, QPainter* painter) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->QRubberBand::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QRubberBand::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnInitPainter(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self)))
        vqrubberband->qrubberband_initpainter_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QRubberBand_Redirected(const QRubberBand* self, QPoint* offset) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband) {
        return vqrubberband->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QRubberBand_SuperRedirected(const QRubberBand* self, QPoint* offset) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return vqrubberband->QRubberBand::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QRubberBand::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnRedirected(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self)))
        vqrubberband->qrubberband_redirected_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QRubberBand_SharedPainter(const QRubberBand* self) {
    auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self));
    if (vqrubberband) {
        return vqrubberband->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QRubberBand::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QRubberBand_SuperSharedPainter(const QRubberBand* self) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return vqrubberband->QRubberBand::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QRubberBand::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnSharedPainter(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self)))
        vqrubberband->qrubberband_sharedpainter_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_InputMethodEvent(QRubberBand* self, QInputMethodEvent* param1) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperInputMethodEvent(QRubberBand* self, QInputMethodEvent* param1) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QRubberBand::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnInputMethodEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_inputmethodevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QRubberBand_InputMethodQuery(const QRubberBand* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QRubberBand_SuperInputMethodQuery(const QRubberBand* self, int param1) {
    return new QVariant(self->QRubberBand::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnInputMethodQuery(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self)))
        vqrubberband->qrubberband_inputmethodquery_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QRubberBand_FocusNextPrevChild(QRubberBand* self, bool next) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        return vqrubberband->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QRubberBand_SuperFocusNextPrevChild(QRubberBand* self, bool next) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        return vqrubberband->QRubberBand::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QRubberBand::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnFocusNextPrevChild(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_focusnextprevchild_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QRubberBand_EventFilter(QRubberBand* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QRubberBand_SuperEventFilter(QRubberBand* self, QObject* watched, QEvent* event) {
    return self->QRubberBand::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnEventFilter(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_eventfilter_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_TimerEvent(QRubberBand* self, QTimerEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperTimerEvent(QRubberBand* self, QTimerEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnTimerEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_timerevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_ChildEvent(QRubberBand* self, QChildEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperChildEvent(QRubberBand* self, QChildEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnChildEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_childevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_CustomEvent(QRubberBand* self, QEvent* event) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperCustomEvent(QRubberBand* self, QEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QRubberBand::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnCustomEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_customevent_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_ConnectNotify(QRubberBand* self, const QMetaMethod* signal) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperConnectNotify(QRubberBand* self, const QMetaMethod* signal) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QRubberBand::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnConnectNotify(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_connectnotify_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QRubberBand_DisconnectNotify(QRubberBand* self, const QMetaMethod* signal) {
    auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
    if (vqrubberband) {
        vqrubberband->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QRubberBand::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QRubberBand_SuperDisconnectNotify(QRubberBand* self, const QMetaMethod* signal) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->QRubberBand::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QRubberBand::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnDisconnectNotify(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self))
        vqrubberband->qrubberband_disconnectnotify_callback = reinterpret_cast<VirtualQRubberBand::QRubberBand_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QRubberBand_UpdateMicroFocus(QRubberBand* self) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->VirtualQRubberBand::updateMicroFocus();
    } else
        qFatal("Error: Protected method QRubberBand::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QRubberBand_Create(QRubberBand* self) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->VirtualQRubberBand::create();
    } else
        qFatal("Error: Protected method QRubberBand::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QRubberBand_Destroy(QRubberBand* self) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->VirtualQRubberBand::destroy();
    } else
        qFatal("Error: Protected method QRubberBand::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QRubberBand_FocusNextChild(QRubberBand* self) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        return vqrubberband->VirtualQRubberBand::focusNextChild();
    } else
        qFatal("Error: Protected method QRubberBand::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QRubberBand_FocusPreviousChild(QRubberBand* self) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        return vqrubberband->VirtualQRubberBand::focusPreviousChild();
    } else
        qFatal("Error: Protected method QRubberBand::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QRubberBand_Sender(const QRubberBand* self) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return vqrubberband->VirtualQRubberBand::sender();
    } else
        qFatal("Error: Protected method QRubberBand::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QRubberBand_SenderSignalIndex(const QRubberBand* self) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return vqrubberband->VirtualQRubberBand::senderSignalIndex();
    } else
        qFatal("Error: Protected method QRubberBand::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QRubberBand_Receivers(const QRubberBand* self, const char* signal) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return vqrubberband->VirtualQRubberBand::receivers(signal);
    } else
        qFatal("Error: Protected method QRubberBand::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QRubberBand_IsSignalConnected(const QRubberBand* self, const QMetaMethod* signal) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return vqrubberband->VirtualQRubberBand::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QRubberBand::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QRubberBand_GetDecodedMetricF(const QRubberBand* self, int metricA, int metricB) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return vqrubberband->VirtualQRubberBand::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QRubberBand::getDecodedMetricF called without a directly constructed type");
}

void QRubberBand_Delete(QRubberBand* self) {
    delete self;
}
