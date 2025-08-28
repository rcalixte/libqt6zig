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
#include <QByteArray>
#include <cstring>
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
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQLCDNumber*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QLCDNumber_OnMetacall(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_Metacall_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QLCDNumber_QBaseMetacall(QLCDNumber* self, int param1, int param2, void** param3) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_Metacall_IsBase(true);
        return vqlcdnumber->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQLCDNumber*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QLCDNumber_Tr(const char* s) {
    QString _ret = QLCDNumber::tr(s);
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
    auto* vqlcdnumber = dynamic_cast<const VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualQLCDNumber*)self)->sizeHint());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QLCDNumber_OnSizeHint(const QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_SizeHint_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_SizeHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* QLCDNumber_QBaseSizeHint(const QLCDNumber* self) {
    auto* vqlcdnumber = dynamic_cast<const VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_SizeHint_IsBase(true);
        return new QSize(vqlcdnumber->sizeHint());
    } else {
        return new QSize(((VirtualQLCDNumber*)self)->sizeHint());
    }
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
    QLCDNumber::connect(self, &QLCDNumber::overflow, [self, slotFunc]() {
        slotFunc(self);
    });
}

bool QLCDNumber_Event(QLCDNumber* self, QEvent* e) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return vqlcdnumber->event(e);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QLCDNumber_OnEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_Event_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Event_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QLCDNumber_QBaseEvent(QLCDNumber* self, QEvent* e) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_Event_IsBase(true);
        return vqlcdnumber->event(e);
    }
    return {};
}

void QLCDNumber_PaintEvent(QLCDNumber* self, QPaintEvent* param1) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->paintEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QLCDNumber_OnPaintEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_PaintEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_PaintEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QLCDNumber_QBasePaintEvent(QLCDNumber* self, QPaintEvent* param1) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_PaintEvent_IsBase(true);
        vqlcdnumber->paintEvent(param1);
    }
}

libqt_string QLCDNumber_Tr2(const char* s, const char* c) {
    QString _ret = QLCDNumber::tr(s, c);
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
    QString _ret = QLCDNumber::tr(s, c, static_cast<int>(n));
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
void QLCDNumber_ChangeEvent(QLCDNumber* self, QEvent* param1) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->changeEvent(param1);
    } else {
        ((VirtualQLCDNumber*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseChangeEvent(QLCDNumber* self, QEvent* param1) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_ChangeEvent_IsBase(true);
        vqlcdnumber->changeEvent(param1);
    } else {
        ((VirtualQLCDNumber*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnChangeEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_ChangeEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_InitStyleOption(const QLCDNumber* self, QStyleOptionFrame* option) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->initStyleOption(option);
    } else {
        ((VirtualQLCDNumber*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseInitStyleOption(const QLCDNumber* self, QStyleOptionFrame* option) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_InitStyleOption_IsBase(true);
        vqlcdnumber->initStyleOption(option);
    } else {
        ((VirtualQLCDNumber*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnInitStyleOption(const QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_InitStyleOption_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QLCDNumber_DevType(const QLCDNumber* self) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return vqlcdnumber->devType();
    } else {
        return self->QLCDNumber::devType();
    }
}

// Base class handler implementation
int QLCDNumber_QBaseDevType(const QLCDNumber* self) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_DevType_IsBase(true);
        return vqlcdnumber->devType();
    } else {
        return self->QLCDNumber::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDevType(const QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_DevType_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_SetVisible(QLCDNumber* self, bool visible) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setVisible(visible);
    } else {
        self->QLCDNumber::setVisible(visible);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseSetVisible(QLCDNumber* self, bool visible) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_SetVisible_IsBase(true);
        vqlcdnumber->setVisible(visible);
    } else {
        self->QLCDNumber::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnSetVisible(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_SetVisible_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QLCDNumber_MinimumSizeHint(const QLCDNumber* self) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return new QSize(vqlcdnumber->minimumSizeHint());
    } else {
        return new QSize(((VirtualQLCDNumber*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QLCDNumber_QBaseMinimumSizeHint(const QLCDNumber* self) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_MinimumSizeHint_IsBase(true);
        return new QSize(vqlcdnumber->minimumSizeHint());
    } else {
        return new QSize(((VirtualQLCDNumber*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMinimumSizeHint(const QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_MinimumSizeHint_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QLCDNumber_HeightForWidth(const QLCDNumber* self, int param1) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return vqlcdnumber->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QLCDNumber::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QLCDNumber_QBaseHeightForWidth(const QLCDNumber* self, int param1) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_HeightForWidth_IsBase(true);
        return vqlcdnumber->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QLCDNumber::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnHeightForWidth(const QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_HeightForWidth_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLCDNumber_HasHeightForWidth(const QLCDNumber* self) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return vqlcdnumber->hasHeightForWidth();
    } else {
        return self->QLCDNumber::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QLCDNumber_QBaseHasHeightForWidth(const QLCDNumber* self) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_HasHeightForWidth_IsBase(true);
        return vqlcdnumber->hasHeightForWidth();
    } else {
        return self->QLCDNumber::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnHasHeightForWidth(const QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_HasHeightForWidth_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QLCDNumber_PaintEngine(const QLCDNumber* self) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return vqlcdnumber->paintEngine();
    } else {
        return self->QLCDNumber::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QLCDNumber_QBasePaintEngine(const QLCDNumber* self) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_PaintEngine_IsBase(true);
        return vqlcdnumber->paintEngine();
    } else {
        return self->QLCDNumber::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnPaintEngine(const QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_PaintEngine_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_MousePressEvent(QLCDNumber* self, QMouseEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->mousePressEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseMousePressEvent(QLCDNumber* self, QMouseEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_MousePressEvent_IsBase(true);
        vqlcdnumber->mousePressEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMousePressEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_MousePressEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_MouseReleaseEvent(QLCDNumber* self, QMouseEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->mouseReleaseEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseMouseReleaseEvent(QLCDNumber* self, QMouseEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_MouseReleaseEvent_IsBase(true);
        vqlcdnumber->mouseReleaseEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMouseReleaseEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_MouseDoubleClickEvent(QLCDNumber* self, QMouseEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseMouseDoubleClickEvent(QLCDNumber* self, QMouseEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_MouseDoubleClickEvent_IsBase(true);
        vqlcdnumber->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMouseDoubleClickEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_MouseMoveEvent(QLCDNumber* self, QMouseEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->mouseMoveEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseMouseMoveEvent(QLCDNumber* self, QMouseEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_MouseMoveEvent_IsBase(true);
        vqlcdnumber->mouseMoveEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMouseMoveEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_MouseMoveEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_WheelEvent(QLCDNumber* self, QWheelEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->wheelEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseWheelEvent(QLCDNumber* self, QWheelEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_WheelEvent_IsBase(true);
        vqlcdnumber->wheelEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnWheelEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_WheelEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_KeyPressEvent(QLCDNumber* self, QKeyEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->keyPressEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseKeyPressEvent(QLCDNumber* self, QKeyEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_KeyPressEvent_IsBase(true);
        vqlcdnumber->keyPressEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnKeyPressEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_KeyPressEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_KeyReleaseEvent(QLCDNumber* self, QKeyEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->keyReleaseEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseKeyReleaseEvent(QLCDNumber* self, QKeyEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_KeyReleaseEvent_IsBase(true);
        vqlcdnumber->keyReleaseEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnKeyReleaseEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_FocusInEvent(QLCDNumber* self, QFocusEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->focusInEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseFocusInEvent(QLCDNumber* self, QFocusEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_FocusInEvent_IsBase(true);
        vqlcdnumber->focusInEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnFocusInEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_FocusInEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_FocusOutEvent(QLCDNumber* self, QFocusEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->focusOutEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseFocusOutEvent(QLCDNumber* self, QFocusEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_FocusOutEvent_IsBase(true);
        vqlcdnumber->focusOutEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnFocusOutEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_FocusOutEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_EnterEvent(QLCDNumber* self, QEnterEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->enterEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseEnterEvent(QLCDNumber* self, QEnterEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_EnterEvent_IsBase(true);
        vqlcdnumber->enterEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnEnterEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_EnterEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_LeaveEvent(QLCDNumber* self, QEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->leaveEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseLeaveEvent(QLCDNumber* self, QEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_LeaveEvent_IsBase(true);
        vqlcdnumber->leaveEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnLeaveEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_LeaveEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_MoveEvent(QLCDNumber* self, QMoveEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->moveEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseMoveEvent(QLCDNumber* self, QMoveEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_MoveEvent_IsBase(true);
        vqlcdnumber->moveEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMoveEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_MoveEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_ResizeEvent(QLCDNumber* self, QResizeEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->resizeEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseResizeEvent(QLCDNumber* self, QResizeEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_ResizeEvent_IsBase(true);
        vqlcdnumber->resizeEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnResizeEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_ResizeEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_CloseEvent(QLCDNumber* self, QCloseEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->closeEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseCloseEvent(QLCDNumber* self, QCloseEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_CloseEvent_IsBase(true);
        vqlcdnumber->closeEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnCloseEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_CloseEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_ContextMenuEvent(QLCDNumber* self, QContextMenuEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->contextMenuEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseContextMenuEvent(QLCDNumber* self, QContextMenuEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_ContextMenuEvent_IsBase(true);
        vqlcdnumber->contextMenuEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnContextMenuEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_ContextMenuEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_TabletEvent(QLCDNumber* self, QTabletEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->tabletEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseTabletEvent(QLCDNumber* self, QTabletEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_TabletEvent_IsBase(true);
        vqlcdnumber->tabletEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnTabletEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_TabletEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_ActionEvent(QLCDNumber* self, QActionEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->actionEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseActionEvent(QLCDNumber* self, QActionEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_ActionEvent_IsBase(true);
        vqlcdnumber->actionEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnActionEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_ActionEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_DragEnterEvent(QLCDNumber* self, QDragEnterEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->dragEnterEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseDragEnterEvent(QLCDNumber* self, QDragEnterEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_DragEnterEvent_IsBase(true);
        vqlcdnumber->dragEnterEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDragEnterEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_DragEnterEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_DragMoveEvent(QLCDNumber* self, QDragMoveEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->dragMoveEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseDragMoveEvent(QLCDNumber* self, QDragMoveEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_DragMoveEvent_IsBase(true);
        vqlcdnumber->dragMoveEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDragMoveEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_DragMoveEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_DragLeaveEvent(QLCDNumber* self, QDragLeaveEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->dragLeaveEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseDragLeaveEvent(QLCDNumber* self, QDragLeaveEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_DragLeaveEvent_IsBase(true);
        vqlcdnumber->dragLeaveEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDragLeaveEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_DragLeaveEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_DropEvent(QLCDNumber* self, QDropEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->dropEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseDropEvent(QLCDNumber* self, QDropEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_DropEvent_IsBase(true);
        vqlcdnumber->dropEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDropEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_DropEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_ShowEvent(QLCDNumber* self, QShowEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->showEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseShowEvent(QLCDNumber* self, QShowEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_ShowEvent_IsBase(true);
        vqlcdnumber->showEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnShowEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_ShowEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_HideEvent(QLCDNumber* self, QHideEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->hideEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseHideEvent(QLCDNumber* self, QHideEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_HideEvent_IsBase(true);
        vqlcdnumber->hideEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnHideEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_HideEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLCDNumber_NativeEvent(QLCDNumber* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return vqlcdnumber->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQLCDNumber*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QLCDNumber_QBaseNativeEvent(QLCDNumber* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_NativeEvent_IsBase(true);
        return vqlcdnumber->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQLCDNumber*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnNativeEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_NativeEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QLCDNumber_Metric(const QLCDNumber* self, int param1) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return vqlcdnumber->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQLCDNumber*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QLCDNumber_QBaseMetric(const QLCDNumber* self, int param1) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_Metric_IsBase(true);
        return vqlcdnumber->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQLCDNumber*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMetric(const QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_Metric_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_InitPainter(const QLCDNumber* self, QPainter* painter) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->initPainter(painter);
    } else {
        ((VirtualQLCDNumber*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseInitPainter(const QLCDNumber* self, QPainter* painter) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_InitPainter_IsBase(true);
        vqlcdnumber->initPainter(painter);
    } else {
        ((VirtualQLCDNumber*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnInitPainter(const QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_InitPainter_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QLCDNumber_Redirected(const QLCDNumber* self, QPoint* offset) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return vqlcdnumber->redirected(offset);
    } else {
        return ((VirtualQLCDNumber*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QLCDNumber_QBaseRedirected(const QLCDNumber* self, QPoint* offset) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_Redirected_IsBase(true);
        return vqlcdnumber->redirected(offset);
    } else {
        return ((VirtualQLCDNumber*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnRedirected(const QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_Redirected_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QLCDNumber_SharedPainter(const QLCDNumber* self) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return vqlcdnumber->sharedPainter();
    } else {
        return ((VirtualQLCDNumber*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QLCDNumber_QBaseSharedPainter(const QLCDNumber* self) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_SharedPainter_IsBase(true);
        return vqlcdnumber->sharedPainter();
    } else {
        return ((VirtualQLCDNumber*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnSharedPainter(const QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_SharedPainter_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_InputMethodEvent(QLCDNumber* self, QInputMethodEvent* param1) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->inputMethodEvent(param1);
    } else {
        ((VirtualQLCDNumber*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseInputMethodEvent(QLCDNumber* self, QInputMethodEvent* param1) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_InputMethodEvent_IsBase(true);
        vqlcdnumber->inputMethodEvent(param1);
    } else {
        ((VirtualQLCDNumber*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnInputMethodEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_InputMethodEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QLCDNumber_InputMethodQuery(const QLCDNumber* self, int param1) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return new QVariant(vqlcdnumber->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQLCDNumber*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QLCDNumber_QBaseInputMethodQuery(const QLCDNumber* self, int param1) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_InputMethodQuery_IsBase(true);
        return new QVariant(vqlcdnumber->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQLCDNumber*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnInputMethodQuery(const QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_InputMethodQuery_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLCDNumber_FocusNextPrevChild(QLCDNumber* self, bool next) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return vqlcdnumber->focusNextPrevChild(next);
    } else {
        return ((VirtualQLCDNumber*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QLCDNumber_QBaseFocusNextPrevChild(QLCDNumber* self, bool next) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_FocusNextPrevChild_IsBase(true);
        return vqlcdnumber->focusNextPrevChild(next);
    } else {
        return ((VirtualQLCDNumber*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnFocusNextPrevChild(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLCDNumber_EventFilter(QLCDNumber* self, QObject* watched, QEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return vqlcdnumber->eventFilter(watched, event);
    } else {
        return self->QLCDNumber::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QLCDNumber_QBaseEventFilter(QLCDNumber* self, QObject* watched, QEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_EventFilter_IsBase(true);
        return vqlcdnumber->eventFilter(watched, event);
    } else {
        return self->QLCDNumber::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnEventFilter(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_EventFilter_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_TimerEvent(QLCDNumber* self, QTimerEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->timerEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseTimerEvent(QLCDNumber* self, QTimerEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_TimerEvent_IsBase(true);
        vqlcdnumber->timerEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnTimerEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_TimerEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_ChildEvent(QLCDNumber* self, QChildEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->childEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseChildEvent(QLCDNumber* self, QChildEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_ChildEvent_IsBase(true);
        vqlcdnumber->childEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnChildEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_ChildEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_CustomEvent(QLCDNumber* self, QEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->customEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseCustomEvent(QLCDNumber* self, QEvent* event) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_CustomEvent_IsBase(true);
        vqlcdnumber->customEvent(event);
    } else {
        ((VirtualQLCDNumber*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnCustomEvent(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_CustomEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_ConnectNotify(QLCDNumber* self, const QMetaMethod* signal) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->connectNotify(*signal);
    } else {
        ((VirtualQLCDNumber*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseConnectNotify(QLCDNumber* self, const QMetaMethod* signal) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_ConnectNotify_IsBase(true);
        vqlcdnumber->connectNotify(*signal);
    } else {
        ((VirtualQLCDNumber*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnConnectNotify(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_ConnectNotify_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_DisconnectNotify(QLCDNumber* self, const QMetaMethod* signal) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->disconnectNotify(*signal);
    } else {
        ((VirtualQLCDNumber*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseDisconnectNotify(QLCDNumber* self, const QMetaMethod* signal) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_DisconnectNotify_IsBase(true);
        vqlcdnumber->disconnectNotify(*signal);
    } else {
        ((VirtualQLCDNumber*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDisconnectNotify(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_DisconnectNotify_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_DrawFrame(QLCDNumber* self, QPainter* param1) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->drawFrame(param1);
    } else {
        ((VirtualQLCDNumber*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseDrawFrame(QLCDNumber* self, QPainter* param1) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_DrawFrame_IsBase(true);
        vqlcdnumber->drawFrame(param1);
    } else {
        ((VirtualQLCDNumber*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDrawFrame(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_DrawFrame_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_UpdateMicroFocus(QLCDNumber* self) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->updateMicroFocus();
    } else {
        ((VirtualQLCDNumber*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QLCDNumber_QBaseUpdateMicroFocus(QLCDNumber* self) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_UpdateMicroFocus_IsBase(true);
        vqlcdnumber->updateMicroFocus();
    } else {
        ((VirtualQLCDNumber*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnUpdateMicroFocus(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_Create(QLCDNumber* self) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->create();
    } else {
        ((VirtualQLCDNumber*)self)->create();
    }
}

// Base class handler implementation
void QLCDNumber_QBaseCreate(QLCDNumber* self) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_Create_IsBase(true);
        vqlcdnumber->create();
    } else {
        ((VirtualQLCDNumber*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnCreate(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_Create_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_Destroy(QLCDNumber* self) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->destroy();
    } else {
        ((VirtualQLCDNumber*)self)->destroy();
    }
}

// Base class handler implementation
void QLCDNumber_QBaseDestroy(QLCDNumber* self) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_Destroy_IsBase(true);
        vqlcdnumber->destroy();
    } else {
        ((VirtualQLCDNumber*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDestroy(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_Destroy_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLCDNumber_FocusNextChild(QLCDNumber* self) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return vqlcdnumber->focusNextChild();
    } else {
        return ((VirtualQLCDNumber*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QLCDNumber_QBaseFocusNextChild(QLCDNumber* self) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_FocusNextChild_IsBase(true);
        return vqlcdnumber->focusNextChild();
    } else {
        return ((VirtualQLCDNumber*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnFocusNextChild(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_FocusNextChild_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLCDNumber_FocusPreviousChild(QLCDNumber* self) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return vqlcdnumber->focusPreviousChild();
    } else {
        return ((VirtualQLCDNumber*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QLCDNumber_QBaseFocusPreviousChild(QLCDNumber* self) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_FocusPreviousChild_IsBase(true);
        return vqlcdnumber->focusPreviousChild();
    } else {
        return ((VirtualQLCDNumber*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnFocusPreviousChild(QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self);
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_FocusPreviousChild_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QLCDNumber_Sender(const QLCDNumber* self) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return vqlcdnumber->sender();
    } else {
        return ((VirtualQLCDNumber*)self)->sender();
    }
}

// Base class handler implementation
QObject* QLCDNumber_QBaseSender(const QLCDNumber* self) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_Sender_IsBase(true);
        return vqlcdnumber->sender();
    } else {
        return ((VirtualQLCDNumber*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnSender(const QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_Sender_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QLCDNumber_SenderSignalIndex(const QLCDNumber* self) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return vqlcdnumber->senderSignalIndex();
    } else {
        return ((VirtualQLCDNumber*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QLCDNumber_QBaseSenderSignalIndex(const QLCDNumber* self) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_SenderSignalIndex_IsBase(true);
        return vqlcdnumber->senderSignalIndex();
    } else {
        return ((VirtualQLCDNumber*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnSenderSignalIndex(const QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_SenderSignalIndex_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QLCDNumber_Receivers(const QLCDNumber* self, const char* signal) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return vqlcdnumber->receivers(signal);
    } else {
        return ((VirtualQLCDNumber*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QLCDNumber_QBaseReceivers(const QLCDNumber* self, const char* signal) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_Receivers_IsBase(true);
        return vqlcdnumber->receivers(signal);
    } else {
        return ((VirtualQLCDNumber*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnReceivers(const QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_Receivers_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLCDNumber_IsSignalConnected(const QLCDNumber* self, const QMetaMethod* signal) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return vqlcdnumber->isSignalConnected(*signal);
    } else {
        return ((VirtualQLCDNumber*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QLCDNumber_QBaseIsSignalConnected(const QLCDNumber* self, const QMetaMethod* signal) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_IsSignalConnected_IsBase(true);
        return vqlcdnumber->isSignalConnected(*signal);
    } else {
        return ((VirtualQLCDNumber*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnIsSignalConnected(const QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_IsSignalConnected_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QLCDNumber_GetDecodedMetricF(const QLCDNumber* self, int metricA, int metricB) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        return vqlcdnumber->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQLCDNumber*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QLCDNumber_QBaseGetDecodedMetricF(const QLCDNumber* self, int metricA, int metricB) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_GetDecodedMetricF_IsBase(true);
        return vqlcdnumber->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQLCDNumber*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnGetDecodedMetricF(const QLCDNumber* self, intptr_t slot) {
    auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self));
    if (vqlcdnumber && vqlcdnumber->isVirtualQLCDNumber) {
        vqlcdnumber->setQLCDNumber_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_GetDecodedMetricF_Callback>(slot));
    }
}

void QLCDNumber_Delete(QLCDNumber* self) {
    delete self;
}
