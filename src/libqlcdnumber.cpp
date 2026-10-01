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
#include <QLCDNumber>
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
#include <qlcdnumber.h>
#include "libqlcdnumber.h"
#include "libqlcdnumber.hxx"

QLCDNumber* QLCDNumber_new(QWidget* parent) {
    return new VirtualQLCDNumber(parent);
}

QLCDNumber* QLCDNumber_new2() {
    return new VirtualQLCDNumber();
}

QLCDNumber* QLCDNumber_new3(unsigned int numDigits) {
    return new VirtualQLCDNumber(static_cast<uint>(numDigits));
}

QLCDNumber* QLCDNumber_new4(unsigned int numDigits, QWidget* parent) {
    return new VirtualQLCDNumber(static_cast<uint>(numDigits), parent);
}

QMetaObject* QLCDNumber_MetaObject(const QLCDNumber* self) {
    return (QMetaObject*)self->metaObject();
}

void* QLCDNumber_Metacast(QLCDNumber* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QLCDNumber_Metacall(QLCDNumber* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QLCDNumber_Tr(const char* s) {
    auto _ret = QLCDNumber::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QLCDNumber_SmallDecimalPoint(const QLCDNumber* self) {
    return self->smallDecimalPoint();
}

int QLCDNumber_DigitCount(const QLCDNumber* self) {
    return self->digitCount();
}

void QLCDNumber_SetDigitCount(QLCDNumber* self, int nDigits) {
    self->setDigitCount(static_cast<int>(nDigits));
}

bool QLCDNumber_CheckOverflow(const QLCDNumber* self, double num) {
    return self->checkOverflow(static_cast<double>(num));
}

bool QLCDNumber_CheckOverflow2(const QLCDNumber* self, int num) {
    return self->checkOverflow(static_cast<int>(num));
}

int QLCDNumber_Mode(const QLCDNumber* self) {
    return static_cast<int>(self->mode());
}

void QLCDNumber_SetMode(QLCDNumber* self, int mode) {
    self->setMode(static_cast<QLCDNumber::Mode>(mode));
}

int QLCDNumber_SegmentStyle(const QLCDNumber* self) {
    return static_cast<int>(self->segmentStyle());
}

void QLCDNumber_SetSegmentStyle(QLCDNumber* self, int segmentStyle) {
    self->setSegmentStyle(static_cast<QLCDNumber::SegmentStyle>(segmentStyle));
}

double QLCDNumber_Value(const QLCDNumber* self) {
    return self->value();
}

int QLCDNumber_IntValue(const QLCDNumber* self) {
    return self->intValue();
}

QSize* QLCDNumber_SizeHint(const QLCDNumber* self) {
    return new QSize(self->sizeHint());
}

void QLCDNumber_Display(QLCDNumber* self, const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    self->display(str_QString);
}

void QLCDNumber_Display2(QLCDNumber* self, int num) {
    self->display(static_cast<int>(num));
}

void QLCDNumber_Display3(QLCDNumber* self, double num) {
    self->display(static_cast<double>(num));
}

void QLCDNumber_SetHexMode(QLCDNumber* self) {
    self->setHexMode();
}

void QLCDNumber_SetDecMode(QLCDNumber* self) {
    self->setDecMode();
}

void QLCDNumber_SetOctMode(QLCDNumber* self) {
    self->setOctMode();
}

void QLCDNumber_SetBinMode(QLCDNumber* self) {
    self->setBinMode();
}

void QLCDNumber_SetSmallDecimalPoint(QLCDNumber* self, bool smallDecimalPoint) {
    self->setSmallDecimalPoint(smallDecimalPoint);
}

void QLCDNumber_Overflow(QLCDNumber* self) {
    self->overflow();
}

void QLCDNumber_Connect_Overflow(QLCDNumber* self, intptr_t slot) {
    void (*slotFunc)(QLCDNumber*) = reinterpret_cast<void (*)(QLCDNumber*)>(slot);
    QLCDNumber::connect(self,
                        static_cast<void (QLCDNumber::*)()>(&QLCDNumber::overflow),
                        [self, slotFunc]() {
                            slotFunc(self);
                        });
}

bool QLCDNumber_Event(QLCDNumber* self, QEvent* e) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        return vqlcdnumber->event(e);
    }
    qFatal("Error: Protected method QLCDNumber::event called without a directly constructed type");
}

void QLCDNumber_PaintEvent(QLCDNumber* self, QPaintEvent* param1) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->paintEvent(param1);
    }
}

libqt_string QLCDNumber_Tr2(const char* s, const char* c) {
    auto _ret = QLCDNumber::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QLCDNumber_Tr3(const char* s, const char* c, int n) {
    auto _ret = QLCDNumber::tr(s, c, static_cast<int>(n));
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
QMetaObject* QLCDNumber_SuperMetaObject(const QLCDNumber* self) {
    return (QMetaObject*)self->QLCDNumber::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMetaObject(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self)))
        vqlcdnumber->qlcdnumber_metaobject_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QLCDNumber_SuperMetacast(QLCDNumber* self, const char* param1) {
    return self->QLCDNumber::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMetacast(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_metacast_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Metacast_Callback>(slot);
}

// Base class handler implementation
int QLCDNumber_SuperMetacall(QLCDNumber* self, int param1, int param2, void** param3) {
    return self->QLCDNumber::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMetacall(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_metacall_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QLCDNumber_SuperSizeHint(const QLCDNumber* self) {
    return new QSize(self->QLCDNumber::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnSizeHint(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self)))
        vqlcdnumber->qlcdnumber_sizehint_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_SizeHint_Callback>(slot);
}

// Base class handler implementation
bool QLCDNumber_SuperEvent(QLCDNumber* self, QEvent* e) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        return vqlcdnumber->QLCDNumber::event(e);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_event_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Event_Callback>(slot);
}

// Base class handler implementation
void QLCDNumber_SuperPaintEvent(QLCDNumber* self, QPaintEvent* param1) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnPaintEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_paintevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_ChangeEvent(QLCDNumber* self, QEvent* param1) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperChangeEvent(QLCDNumber* self, QEvent* param1) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnChangeEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_changeevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_InitStyleOption(const QLCDNumber* self, QStyleOptionFrame* option) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber) {
        vqlcdnumber->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperInitStyleOption(const QLCDNumber* self, QStyleOptionFrame* option) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->QLCDNumber::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnInitStyleOption(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self)))
        vqlcdnumber->qlcdnumber_initstyleoption_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QLCDNumber_DevType(const QLCDNumber* self) {
    return self->devType();
}

// Base class handler implementation
int QLCDNumber_SuperDevType(const QLCDNumber* self) {
    return self->QLCDNumber::devType();
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDevType(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self)))
        vqlcdnumber->qlcdnumber_devtype_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_DevType_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_SetVisible(QLCDNumber* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QLCDNumber_SuperSetVisible(QLCDNumber* self, bool visible) {
    self->QLCDNumber::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnSetVisible(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_setvisible_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QLCDNumber_MinimumSizeHint(const QLCDNumber* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QLCDNumber_SuperMinimumSizeHint(const QLCDNumber* self) {
    return new QSize(self->QLCDNumber::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMinimumSizeHint(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self)))
        vqlcdnumber->qlcdnumber_minimumsizehint_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QLCDNumber_HeightForWidth(const QLCDNumber* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QLCDNumber_SuperHeightForWidth(const QLCDNumber* self, int param1) {
    return self->QLCDNumber::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnHeightForWidth(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self)))
        vqlcdnumber->qlcdnumber_heightforwidth_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QLCDNumber_HasHeightForWidth(const QLCDNumber* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QLCDNumber_SuperHasHeightForWidth(const QLCDNumber* self) {
    return self->QLCDNumber::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnHasHeightForWidth(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self)))
        vqlcdnumber->qlcdnumber_hasheightforwidth_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QLCDNumber_PaintEngine(const QLCDNumber* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QLCDNumber_SuperPaintEngine(const QLCDNumber* self) {
    return self->QLCDNumber::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnPaintEngine(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self)))
        vqlcdnumber->qlcdnumber_paintengine_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_MousePressEvent(QLCDNumber* self, QMouseEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperMousePressEvent(QLCDNumber* self, QMouseEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMousePressEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_mousepressevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_MouseReleaseEvent(QLCDNumber* self, QMouseEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperMouseReleaseEvent(QLCDNumber* self, QMouseEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMouseReleaseEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_mousereleaseevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_MouseDoubleClickEvent(QLCDNumber* self, QMouseEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperMouseDoubleClickEvent(QLCDNumber* self, QMouseEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMouseDoubleClickEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_mousedoubleclickevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_MouseMoveEvent(QLCDNumber* self, QMouseEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperMouseMoveEvent(QLCDNumber* self, QMouseEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMouseMoveEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_mousemoveevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_WheelEvent(QLCDNumber* self, QWheelEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperWheelEvent(QLCDNumber* self, QWheelEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnWheelEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_wheelevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_KeyPressEvent(QLCDNumber* self, QKeyEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperKeyPressEvent(QLCDNumber* self, QKeyEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnKeyPressEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_keypressevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_KeyReleaseEvent(QLCDNumber* self, QKeyEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperKeyReleaseEvent(QLCDNumber* self, QKeyEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnKeyReleaseEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_keyreleaseevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_FocusInEvent(QLCDNumber* self, QFocusEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperFocusInEvent(QLCDNumber* self, QFocusEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnFocusInEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_focusinevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_FocusOutEvent(QLCDNumber* self, QFocusEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperFocusOutEvent(QLCDNumber* self, QFocusEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnFocusOutEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_focusoutevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_EnterEvent(QLCDNumber* self, QEnterEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperEnterEvent(QLCDNumber* self, QEnterEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnEnterEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_enterevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_LeaveEvent(QLCDNumber* self, QEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperLeaveEvent(QLCDNumber* self, QEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnLeaveEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_leaveevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_MoveEvent(QLCDNumber* self, QMoveEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperMoveEvent(QLCDNumber* self, QMoveEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMoveEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_moveevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_ResizeEvent(QLCDNumber* self, QResizeEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperResizeEvent(QLCDNumber* self, QResizeEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnResizeEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_resizeevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_CloseEvent(QLCDNumber* self, QCloseEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperCloseEvent(QLCDNumber* self, QCloseEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnCloseEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_closeevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_ContextMenuEvent(QLCDNumber* self, QContextMenuEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperContextMenuEvent(QLCDNumber* self, QContextMenuEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnContextMenuEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_contextmenuevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_TabletEvent(QLCDNumber* self, QTabletEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperTabletEvent(QLCDNumber* self, QTabletEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnTabletEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_tabletevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_ActionEvent(QLCDNumber* self, QActionEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperActionEvent(QLCDNumber* self, QActionEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnActionEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_actionevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_DragEnterEvent(QLCDNumber* self, QDragEnterEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperDragEnterEvent(QLCDNumber* self, QDragEnterEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDragEnterEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_dragenterevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_DragMoveEvent(QLCDNumber* self, QDragMoveEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperDragMoveEvent(QLCDNumber* self, QDragMoveEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDragMoveEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_dragmoveevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_DragLeaveEvent(QLCDNumber* self, QDragLeaveEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperDragLeaveEvent(QLCDNumber* self, QDragLeaveEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDragLeaveEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_dragleaveevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_DropEvent(QLCDNumber* self, QDropEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperDropEvent(QLCDNumber* self, QDropEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDropEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_dropevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_ShowEvent(QLCDNumber* self, QShowEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperShowEvent(QLCDNumber* self, QShowEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnShowEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_showevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_HideEvent(QLCDNumber* self, QHideEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperHideEvent(QLCDNumber* self, QHideEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnHideEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_hideevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QLCDNumber_NativeEvent(QLCDNumber* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        return vqlcdnumber->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QLCDNumber_SuperNativeEvent(QLCDNumber* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        return vqlcdnumber->QLCDNumber::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QLCDNumber::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnNativeEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_nativeevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QLCDNumber_Metric(const QLCDNumber* self, int param1) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber) {
        return vqlcdnumber->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QLCDNumber_SuperMetric(const QLCDNumber* self, int param1) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return vqlcdnumber->QLCDNumber::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QLCDNumber::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMetric(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self)))
        vqlcdnumber->qlcdnumber_metric_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Metric_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_InitPainter(const QLCDNumber* self, QPainter* painter) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber) {
        vqlcdnumber->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperInitPainter(const QLCDNumber* self, QPainter* painter) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->QLCDNumber::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnInitPainter(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self)))
        vqlcdnumber->qlcdnumber_initpainter_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QLCDNumber_Redirected(const QLCDNumber* self, QPoint* offset) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber) {
        return vqlcdnumber->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QLCDNumber_SuperRedirected(const QLCDNumber* self, QPoint* offset) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return vqlcdnumber->QLCDNumber::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnRedirected(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self)))
        vqlcdnumber->qlcdnumber_redirected_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QLCDNumber_SharedPainter(const QLCDNumber* self) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber) {
        return vqlcdnumber->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QLCDNumber_SuperSharedPainter(const QLCDNumber* self) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return vqlcdnumber->QLCDNumber::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QLCDNumber::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnSharedPainter(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self)))
        vqlcdnumber->qlcdnumber_sharedpainter_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_InputMethodEvent(QLCDNumber* self, QInputMethodEvent* param1) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperInputMethodEvent(QLCDNumber* self, QInputMethodEvent* param1) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnInputMethodEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_inputmethodevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QLCDNumber_InputMethodQuery(const QLCDNumber* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QLCDNumber_SuperInputMethodQuery(const QLCDNumber* self, int param1) {
    return new QVariant(self->QLCDNumber::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnInputMethodQuery(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self)))
        vqlcdnumber->qlcdnumber_inputmethodquery_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QLCDNumber_FocusNextPrevChild(QLCDNumber* self, bool next) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        return vqlcdnumber->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QLCDNumber_SuperFocusNextPrevChild(QLCDNumber* self, bool next) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        return vqlcdnumber->QLCDNumber::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnFocusNextPrevChild(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_focusnextprevchild_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QLCDNumber_EventFilter(QLCDNumber* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QLCDNumber_SuperEventFilter(QLCDNumber* self, QObject* watched, QEvent* event) {
    return self->QLCDNumber::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnEventFilter(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_eventfilter_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_TimerEvent(QLCDNumber* self, QTimerEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperTimerEvent(QLCDNumber* self, QTimerEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnTimerEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_timerevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_ChildEvent(QLCDNumber* self, QChildEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperChildEvent(QLCDNumber* self, QChildEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnChildEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_childevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_CustomEvent(QLCDNumber* self, QEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperCustomEvent(QLCDNumber* self, QEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnCustomEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_customevent_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_ConnectNotify(QLCDNumber* self, const QMetaMethod* signal) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperConnectNotify(QLCDNumber* self, const QMetaMethod* signal) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnConnectNotify(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_connectnotify_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QLCDNumber_DisconnectNotify(QLCDNumber* self, const QMetaMethod* signal) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber) {
        vqlcdnumber->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QLCDNumber::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QLCDNumber_SuperDisconnectNotify(QLCDNumber* self, const QMetaMethod* signal) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->QLCDNumber::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QLCDNumber::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDisconnectNotify(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self))
        vqlcdnumber->qlcdnumber_disconnectnotify_callback = reinterpret_cast<VirtualQLCDNumber::QLCDNumber_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QLCDNumber_DrawFrame(QLCDNumber* self, QPainter* param1) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->VirtualQLCDNumber::drawFrame(param1);
    } else
        qFatal("Error: Protected method QLCDNumber::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QLCDNumber_UpdateMicroFocus(QLCDNumber* self) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->VirtualQLCDNumber::updateMicroFocus();
    } else
        qFatal("Error: Protected method QLCDNumber::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QLCDNumber_Create(QLCDNumber* self) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->VirtualQLCDNumber::create();
    } else
        qFatal("Error: Protected method QLCDNumber::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QLCDNumber_Destroy(QLCDNumber* self) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->VirtualQLCDNumber::destroy();
    } else
        qFatal("Error: Protected method QLCDNumber::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QLCDNumber_FocusNextChild(QLCDNumber* self) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        return vqlcdnumber->VirtualQLCDNumber::focusNextChild();
    } else
        qFatal("Error: Protected method QLCDNumber::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QLCDNumber_FocusPreviousChild(QLCDNumber* self) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        return vqlcdnumber->VirtualQLCDNumber::focusPreviousChild();
    } else
        qFatal("Error: Protected method QLCDNumber::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QLCDNumber_Sender(const QLCDNumber* self) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return vqlcdnumber->VirtualQLCDNumber::sender();
    } else
        qFatal("Error: Protected method QLCDNumber::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QLCDNumber_SenderSignalIndex(const QLCDNumber* self) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return vqlcdnumber->VirtualQLCDNumber::senderSignalIndex();
    } else
        qFatal("Error: Protected method QLCDNumber::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QLCDNumber_Receivers(const QLCDNumber* self, const char* signal) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return vqlcdnumber->VirtualQLCDNumber::receivers(signal);
    } else
        qFatal("Error: Protected method QLCDNumber::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QLCDNumber_IsSignalConnected(const QLCDNumber* self, const QMetaMethod* signal) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return vqlcdnumber->VirtualQLCDNumber::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QLCDNumber::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QLCDNumber_GetDecodedMetricF(const QLCDNumber* self, int metricA, int metricB) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return vqlcdnumber->VirtualQLCDNumber::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QLCDNumber::getDecodedMetricF called without a directly constructed type");
}

void QLCDNumber_Delete(QLCDNumber* self) {
    delete self;
}
