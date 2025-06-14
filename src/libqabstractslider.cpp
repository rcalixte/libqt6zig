#include <QAbstractSlider>
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
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qabstractslider.h>
#include "libqabstractslider.h"
#include "libqabstractslider.hxx"

QAbstractSlider* QAbstractSlider_new(QWidget* parent) {
    return new VirtualQAbstractSlider(parent);
}

QAbstractSlider* QAbstractSlider_new2() {
    return new VirtualQAbstractSlider();
}

QMetaObject* QAbstractSlider_MetaObject(const QAbstractSlider* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractSlider_Metacast(QAbstractSlider* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractSlider_Metacall(QAbstractSlider* self, int param1, int param2, void** param3) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractSlider*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractSlider_OnMetacall(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_Metacall_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractSlider_QBaseMetacall(QAbstractSlider* self, int param1, int param2, void** param3) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_Metacall_IsBase(true);
        return vqabstractslider->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractSlider*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractSlider_Tr(const char* s) {
    QString _ret = QAbstractSlider::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QAbstractSlider_Orientation(const QAbstractSlider* self) {
    return static_cast<int>(self->orientation());
}

void QAbstractSlider_SetMinimum(QAbstractSlider* self, int minimum) {
    self->setMinimum(static_cast<int>(minimum));
}

int QAbstractSlider_Minimum(const QAbstractSlider* self) {
    return self->minimum();
}

void QAbstractSlider_SetMaximum(QAbstractSlider* self, int maximum) {
    self->setMaximum(static_cast<int>(maximum));
}

int QAbstractSlider_Maximum(const QAbstractSlider* self) {
    return self->maximum();
}

void QAbstractSlider_SetSingleStep(QAbstractSlider* self, int singleStep) {
    self->setSingleStep(static_cast<int>(singleStep));
}

int QAbstractSlider_SingleStep(const QAbstractSlider* self) {
    return self->singleStep();
}

void QAbstractSlider_SetPageStep(QAbstractSlider* self, int pageStep) {
    self->setPageStep(static_cast<int>(pageStep));
}

int QAbstractSlider_PageStep(const QAbstractSlider* self) {
    return self->pageStep();
}

void QAbstractSlider_SetTracking(QAbstractSlider* self, bool enable) {
    self->setTracking(enable);
}

bool QAbstractSlider_HasTracking(const QAbstractSlider* self) {
    return self->hasTracking();
}

void QAbstractSlider_SetSliderDown(QAbstractSlider* self, bool sliderDown) {
    self->setSliderDown(sliderDown);
}

bool QAbstractSlider_IsSliderDown(const QAbstractSlider* self) {
    return self->isSliderDown();
}

void QAbstractSlider_SetSliderPosition(QAbstractSlider* self, int sliderPosition) {
    self->setSliderPosition(static_cast<int>(sliderPosition));
}

int QAbstractSlider_SliderPosition(const QAbstractSlider* self) {
    return self->sliderPosition();
}

void QAbstractSlider_SetInvertedAppearance(QAbstractSlider* self, bool invertedAppearance) {
    self->setInvertedAppearance(invertedAppearance);
}

bool QAbstractSlider_InvertedAppearance(const QAbstractSlider* self) {
    return self->invertedAppearance();
}

void QAbstractSlider_SetInvertedControls(QAbstractSlider* self, bool invertedControls) {
    self->setInvertedControls(invertedControls);
}

bool QAbstractSlider_InvertedControls(const QAbstractSlider* self) {
    return self->invertedControls();
}

int QAbstractSlider_Value(const QAbstractSlider* self) {
    return self->value();
}

void QAbstractSlider_TriggerAction(QAbstractSlider* self, int action) {
    self->triggerAction(static_cast<QAbstractSlider::SliderAction>(action));
}

void QAbstractSlider_SetValue(QAbstractSlider* self, int value) {
    self->setValue(static_cast<int>(value));
}

void QAbstractSlider_SetOrientation(QAbstractSlider* self, int orientation) {
    self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

void QAbstractSlider_SetRange(QAbstractSlider* self, int min, int max) {
    self->setRange(static_cast<int>(min), static_cast<int>(max));
}

void QAbstractSlider_ValueChanged(QAbstractSlider* self, int value) {
    self->valueChanged(static_cast<int>(value));
}

void QAbstractSlider_Connect_ValueChanged(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*, int) = reinterpret_cast<void (*)(QAbstractSlider*, int)>(slot);
    QAbstractSlider::connect(self, &QAbstractSlider::valueChanged, [self, slotFunc](int value) {
        int sigval1 = value;
        slotFunc(self, sigval1);
    });
}

void QAbstractSlider_SliderPressed(QAbstractSlider* self) {
    self->sliderPressed();
}

void QAbstractSlider_Connect_SliderPressed(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*) = reinterpret_cast<void (*)(QAbstractSlider*)>(slot);
    QAbstractSlider::connect(self, &QAbstractSlider::sliderPressed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractSlider_SliderMoved(QAbstractSlider* self, int position) {
    self->sliderMoved(static_cast<int>(position));
}

void QAbstractSlider_Connect_SliderMoved(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*, int) = reinterpret_cast<void (*)(QAbstractSlider*, int)>(slot);
    QAbstractSlider::connect(self, &QAbstractSlider::sliderMoved, [self, slotFunc](int position) {
        int sigval1 = position;
        slotFunc(self, sigval1);
    });
}

void QAbstractSlider_SliderReleased(QAbstractSlider* self) {
    self->sliderReleased();
}

void QAbstractSlider_Connect_SliderReleased(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*) = reinterpret_cast<void (*)(QAbstractSlider*)>(slot);
    QAbstractSlider::connect(self, &QAbstractSlider::sliderReleased, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractSlider_RangeChanged(QAbstractSlider* self, int min, int max) {
    self->rangeChanged(static_cast<int>(min), static_cast<int>(max));
}

void QAbstractSlider_Connect_RangeChanged(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*, int, int) = reinterpret_cast<void (*)(QAbstractSlider*, int, int)>(slot);
    QAbstractSlider::connect(self, &QAbstractSlider::rangeChanged, [self, slotFunc](int min, int max) {
        int sigval1 = min;
        int sigval2 = max;
        slotFunc(self, sigval1, sigval2);
    });
}

void QAbstractSlider_ActionTriggered(QAbstractSlider* self, int action) {
    self->actionTriggered(static_cast<int>(action));
}

void QAbstractSlider_Connect_ActionTriggered(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*, int) = reinterpret_cast<void (*)(QAbstractSlider*, int)>(slot);
    QAbstractSlider::connect(self, &QAbstractSlider::actionTriggered, [self, slotFunc](int action) {
        int sigval1 = action;
        slotFunc(self, sigval1);
    });
}

libqt_string QAbstractSlider_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractSlider::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractSlider_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractSlider::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QAbstractSlider_Event(QAbstractSlider* self, QEvent* e) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return vqabstractslider->event(e);
    } else {
        return ((VirtualQAbstractSlider*)self)->event(e);
    }
}

// Base class handler implementation
bool QAbstractSlider_QBaseEvent(QAbstractSlider* self, QEvent* e) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_Event_IsBase(true);
        return vqabstractslider->event(e);
    } else {
        return ((VirtualQAbstractSlider*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_Event_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_SliderChange(QAbstractSlider* self, int change) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->sliderChange(static_cast<VirtualQAbstractSlider::SliderChange>(change));
    } else {
        ((VirtualQAbstractSlider*)self)->sliderChange(static_cast<VirtualQAbstractSlider::SliderChange>(change));
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseSliderChange(QAbstractSlider* self, int change) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_SliderChange_IsBase(true);
        vqabstractslider->sliderChange(static_cast<VirtualQAbstractSlider::SliderChange>(change));
    } else {
        ((VirtualQAbstractSlider*)self)->sliderChange(static_cast<VirtualQAbstractSlider::SliderChange>(change));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSliderChange(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_SliderChange_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SliderChange_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_KeyPressEvent(QAbstractSlider* self, QKeyEvent* ev) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->keyPressEvent(ev);
    } else {
        ((VirtualQAbstractSlider*)self)->keyPressEvent(ev);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseKeyPressEvent(QAbstractSlider* self, QKeyEvent* ev) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_KeyPressEvent_IsBase(true);
        vqabstractslider->keyPressEvent(ev);
    } else {
        ((VirtualQAbstractSlider*)self)->keyPressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnKeyPressEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_KeyPressEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_TimerEvent(QAbstractSlider* self, QTimerEvent* param1) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->timerEvent(param1);
    } else {
        ((VirtualQAbstractSlider*)self)->timerEvent(param1);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseTimerEvent(QAbstractSlider* self, QTimerEvent* param1) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_TimerEvent_IsBase(true);
        vqabstractslider->timerEvent(param1);
    } else {
        ((VirtualQAbstractSlider*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnTimerEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_WheelEvent(QAbstractSlider* self, QWheelEvent* e) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->wheelEvent(e);
    } else {
        ((VirtualQAbstractSlider*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseWheelEvent(QAbstractSlider* self, QWheelEvent* e) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_WheelEvent_IsBase(true);
        vqabstractslider->wheelEvent(e);
    } else {
        ((VirtualQAbstractSlider*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnWheelEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_WheelEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_ChangeEvent(QAbstractSlider* self, QEvent* e) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->changeEvent(e);
    } else {
        ((VirtualQAbstractSlider*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseChangeEvent(QAbstractSlider* self, QEvent* e) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_ChangeEvent_IsBase(true);
        vqabstractslider->changeEvent(e);
    } else {
        ((VirtualQAbstractSlider*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnChangeEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_ChangeEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSlider_DevType(const QAbstractSlider* self) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return vqabstractslider->devType();
    } else {
        return self->QAbstractSlider::devType();
    }
}

// Base class handler implementation
int QAbstractSlider_QBaseDevType(const QAbstractSlider* self) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_DevType_IsBase(true);
        return vqabstractslider->devType();
    } else {
        return self->QAbstractSlider::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnDevType(const QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_DevType_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_SetVisible(QAbstractSlider* self, bool visible) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setVisible(visible);
    } else {
        self->QAbstractSlider::setVisible(visible);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseSetVisible(QAbstractSlider* self, bool visible) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_SetVisible_IsBase(true);
        vqabstractslider->setVisible(visible);
    } else {
        self->QAbstractSlider::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSetVisible(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_SetVisible_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractSlider_SizeHint(const QAbstractSlider* self) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return new QSize(vqabstractslider->sizeHint());
    } else {
        return new QSize(((VirtualQAbstractSlider*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QAbstractSlider_QBaseSizeHint(const QAbstractSlider* self) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_SizeHint_IsBase(true);
        return new QSize(vqabstractslider->sizeHint());
    } else {
        return new QSize(((VirtualQAbstractSlider*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSizeHint(const QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_SizeHint_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractSlider_MinimumSizeHint(const QAbstractSlider* self) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return new QSize(vqabstractslider->minimumSizeHint());
    } else {
        return new QSize(((VirtualQAbstractSlider*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QAbstractSlider_QBaseMinimumSizeHint(const QAbstractSlider* self) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_MinimumSizeHint_IsBase(true);
        return new QSize(vqabstractslider->minimumSizeHint());
    } else {
        return new QSize(((VirtualQAbstractSlider*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMinimumSizeHint(const QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_MinimumSizeHint_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSlider_HeightForWidth(const QAbstractSlider* self, int param1) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return vqabstractslider->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QAbstractSlider::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QAbstractSlider_QBaseHeightForWidth(const QAbstractSlider* self, int param1) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_HeightForWidth_IsBase(true);
        return vqabstractslider->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QAbstractSlider::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnHeightForWidth(const QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_HeightForWidth_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSlider_HasHeightForWidth(const QAbstractSlider* self) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return vqabstractslider->hasHeightForWidth();
    } else {
        return self->QAbstractSlider::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QAbstractSlider_QBaseHasHeightForWidth(const QAbstractSlider* self) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_HasHeightForWidth_IsBase(true);
        return vqabstractslider->hasHeightForWidth();
    } else {
        return self->QAbstractSlider::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnHasHeightForWidth(const QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_HasHeightForWidth_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QAbstractSlider_PaintEngine(const QAbstractSlider* self) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return vqabstractslider->paintEngine();
    } else {
        return self->QAbstractSlider::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QAbstractSlider_QBasePaintEngine(const QAbstractSlider* self) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_PaintEngine_IsBase(true);
        return vqabstractslider->paintEngine();
    } else {
        return self->QAbstractSlider::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnPaintEngine(const QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_PaintEngine_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_MousePressEvent(QAbstractSlider* self, QMouseEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->mousePressEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseMousePressEvent(QAbstractSlider* self, QMouseEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_MousePressEvent_IsBase(true);
        vqabstractslider->mousePressEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMousePressEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_MousePressEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_MouseReleaseEvent(QAbstractSlider* self, QMouseEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->mouseReleaseEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseMouseReleaseEvent(QAbstractSlider* self, QMouseEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_MouseReleaseEvent_IsBase(true);
        vqabstractslider->mouseReleaseEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMouseReleaseEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_MouseDoubleClickEvent(QAbstractSlider* self, QMouseEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseMouseDoubleClickEvent(QAbstractSlider* self, QMouseEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_MouseDoubleClickEvent_IsBase(true);
        vqabstractslider->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMouseDoubleClickEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_MouseMoveEvent(QAbstractSlider* self, QMouseEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->mouseMoveEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseMouseMoveEvent(QAbstractSlider* self, QMouseEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_MouseMoveEvent_IsBase(true);
        vqabstractslider->mouseMoveEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMouseMoveEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_MouseMoveEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_KeyReleaseEvent(QAbstractSlider* self, QKeyEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->keyReleaseEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseKeyReleaseEvent(QAbstractSlider* self, QKeyEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_KeyReleaseEvent_IsBase(true);
        vqabstractslider->keyReleaseEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnKeyReleaseEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_FocusInEvent(QAbstractSlider* self, QFocusEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->focusInEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseFocusInEvent(QAbstractSlider* self, QFocusEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_FocusInEvent_IsBase(true);
        vqabstractslider->focusInEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnFocusInEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_FocusInEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_FocusOutEvent(QAbstractSlider* self, QFocusEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->focusOutEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseFocusOutEvent(QAbstractSlider* self, QFocusEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_FocusOutEvent_IsBase(true);
        vqabstractslider->focusOutEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnFocusOutEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_FocusOutEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_EnterEvent(QAbstractSlider* self, QEnterEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->enterEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseEnterEvent(QAbstractSlider* self, QEnterEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_EnterEvent_IsBase(true);
        vqabstractslider->enterEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnEnterEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_EnterEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_LeaveEvent(QAbstractSlider* self, QEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->leaveEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseLeaveEvent(QAbstractSlider* self, QEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_LeaveEvent_IsBase(true);
        vqabstractslider->leaveEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnLeaveEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_LeaveEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_PaintEvent(QAbstractSlider* self, QPaintEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->paintEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBasePaintEvent(QAbstractSlider* self, QPaintEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_PaintEvent_IsBase(true);
        vqabstractslider->paintEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnPaintEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_PaintEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_MoveEvent(QAbstractSlider* self, QMoveEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->moveEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseMoveEvent(QAbstractSlider* self, QMoveEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_MoveEvent_IsBase(true);
        vqabstractslider->moveEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMoveEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_MoveEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_ResizeEvent(QAbstractSlider* self, QResizeEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->resizeEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseResizeEvent(QAbstractSlider* self, QResizeEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_ResizeEvent_IsBase(true);
        vqabstractslider->resizeEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnResizeEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_ResizeEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_CloseEvent(QAbstractSlider* self, QCloseEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->closeEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseCloseEvent(QAbstractSlider* self, QCloseEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_CloseEvent_IsBase(true);
        vqabstractslider->closeEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnCloseEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_CloseEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_ContextMenuEvent(QAbstractSlider* self, QContextMenuEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->contextMenuEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseContextMenuEvent(QAbstractSlider* self, QContextMenuEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_ContextMenuEvent_IsBase(true);
        vqabstractslider->contextMenuEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnContextMenuEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_ContextMenuEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_TabletEvent(QAbstractSlider* self, QTabletEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->tabletEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseTabletEvent(QAbstractSlider* self, QTabletEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_TabletEvent_IsBase(true);
        vqabstractslider->tabletEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnTabletEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_TabletEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_ActionEvent(QAbstractSlider* self, QActionEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->actionEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseActionEvent(QAbstractSlider* self, QActionEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_ActionEvent_IsBase(true);
        vqabstractslider->actionEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnActionEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_ActionEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_DragEnterEvent(QAbstractSlider* self, QDragEnterEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->dragEnterEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseDragEnterEvent(QAbstractSlider* self, QDragEnterEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_DragEnterEvent_IsBase(true);
        vqabstractslider->dragEnterEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnDragEnterEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_DragEnterEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_DragMoveEvent(QAbstractSlider* self, QDragMoveEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->dragMoveEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseDragMoveEvent(QAbstractSlider* self, QDragMoveEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_DragMoveEvent_IsBase(true);
        vqabstractslider->dragMoveEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnDragMoveEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_DragMoveEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_DragLeaveEvent(QAbstractSlider* self, QDragLeaveEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->dragLeaveEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseDragLeaveEvent(QAbstractSlider* self, QDragLeaveEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_DragLeaveEvent_IsBase(true);
        vqabstractslider->dragLeaveEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnDragLeaveEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_DragLeaveEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_DropEvent(QAbstractSlider* self, QDropEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->dropEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseDropEvent(QAbstractSlider* self, QDropEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_DropEvent_IsBase(true);
        vqabstractslider->dropEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnDropEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_DropEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_ShowEvent(QAbstractSlider* self, QShowEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->showEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseShowEvent(QAbstractSlider* self, QShowEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_ShowEvent_IsBase(true);
        vqabstractslider->showEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnShowEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_ShowEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_HideEvent(QAbstractSlider* self, QHideEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->hideEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseHideEvent(QAbstractSlider* self, QHideEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_HideEvent_IsBase(true);
        vqabstractslider->hideEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnHideEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_HideEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSlider_NativeEvent(QAbstractSlider* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return vqabstractslider->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQAbstractSlider*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QAbstractSlider_QBaseNativeEvent(QAbstractSlider* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_NativeEvent_IsBase(true);
        return vqabstractslider->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQAbstractSlider*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnNativeEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_NativeEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSlider_Metric(const QAbstractSlider* self, int param1) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return vqabstractslider->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQAbstractSlider*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QAbstractSlider_QBaseMetric(const QAbstractSlider* self, int param1) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_Metric_IsBase(true);
        return vqabstractslider->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQAbstractSlider*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMetric(const QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_Metric_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_InitPainter(const QAbstractSlider* self, QPainter* painter) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->initPainter(painter);
    } else {
        ((VirtualQAbstractSlider*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseInitPainter(const QAbstractSlider* self, QPainter* painter) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_InitPainter_IsBase(true);
        vqabstractslider->initPainter(painter);
    } else {
        ((VirtualQAbstractSlider*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnInitPainter(const QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_InitPainter_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QAbstractSlider_Redirected(const QAbstractSlider* self, QPoint* offset) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return vqabstractslider->redirected(offset);
    } else {
        return ((VirtualQAbstractSlider*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QAbstractSlider_QBaseRedirected(const QAbstractSlider* self, QPoint* offset) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_Redirected_IsBase(true);
        return vqabstractslider->redirected(offset);
    } else {
        return ((VirtualQAbstractSlider*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnRedirected(const QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_Redirected_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QAbstractSlider_SharedPainter(const QAbstractSlider* self) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return vqabstractslider->sharedPainter();
    } else {
        return ((VirtualQAbstractSlider*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QAbstractSlider_QBaseSharedPainter(const QAbstractSlider* self) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_SharedPainter_IsBase(true);
        return vqabstractslider->sharedPainter();
    } else {
        return ((VirtualQAbstractSlider*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSharedPainter(const QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_SharedPainter_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_InputMethodEvent(QAbstractSlider* self, QInputMethodEvent* param1) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->inputMethodEvent(param1);
    } else {
        ((VirtualQAbstractSlider*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseInputMethodEvent(QAbstractSlider* self, QInputMethodEvent* param1) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_InputMethodEvent_IsBase(true);
        vqabstractslider->inputMethodEvent(param1);
    } else {
        ((VirtualQAbstractSlider*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnInputMethodEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_InputMethodEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractSlider_InputMethodQuery(const QAbstractSlider* self, int param1) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return new QVariant(vqabstractslider->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQAbstractSlider*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QAbstractSlider_QBaseInputMethodQuery(const QAbstractSlider* self, int param1) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_InputMethodQuery_IsBase(true);
        return new QVariant(vqabstractslider->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQAbstractSlider*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnInputMethodQuery(const QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_InputMethodQuery_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSlider_FocusNextPrevChild(QAbstractSlider* self, bool next) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return vqabstractslider->focusNextPrevChild(next);
    } else {
        return ((VirtualQAbstractSlider*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QAbstractSlider_QBaseFocusNextPrevChild(QAbstractSlider* self, bool next) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_FocusNextPrevChild_IsBase(true);
        return vqabstractslider->focusNextPrevChild(next);
    } else {
        return ((VirtualQAbstractSlider*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnFocusNextPrevChild(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSlider_EventFilter(QAbstractSlider* self, QObject* watched, QEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return vqabstractslider->eventFilter(watched, event);
    } else {
        return self->QAbstractSlider::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAbstractSlider_QBaseEventFilter(QAbstractSlider* self, QObject* watched, QEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_EventFilter_IsBase(true);
        return vqabstractslider->eventFilter(watched, event);
    } else {
        return self->QAbstractSlider::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnEventFilter(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_EventFilter_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_ChildEvent(QAbstractSlider* self, QChildEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->childEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseChildEvent(QAbstractSlider* self, QChildEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_ChildEvent_IsBase(true);
        vqabstractslider->childEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnChildEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_CustomEvent(QAbstractSlider* self, QEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->customEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseCustomEvent(QAbstractSlider* self, QEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_CustomEvent_IsBase(true);
        vqabstractslider->customEvent(event);
    } else {
        ((VirtualQAbstractSlider*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnCustomEvent(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_ConnectNotify(QAbstractSlider* self, const QMetaMethod* signal) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->connectNotify(*signal);
    } else {
        ((VirtualQAbstractSlider*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseConnectNotify(QAbstractSlider* self, const QMetaMethod* signal) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_ConnectNotify_IsBase(true);
        vqabstractslider->connectNotify(*signal);
    } else {
        ((VirtualQAbstractSlider*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnConnectNotify(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_DisconnectNotify(QAbstractSlider* self, const QMetaMethod* signal) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractSlider*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseDisconnectNotify(QAbstractSlider* self, const QMetaMethod* signal) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_DisconnectNotify_IsBase(true);
        vqabstractslider->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractSlider*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnDisconnectNotify(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_SetRepeatAction(QAbstractSlider* self, int action) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else {
        ((VirtualQAbstractSlider*)self)->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseSetRepeatAction(QAbstractSlider* self, int action) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_SetRepeatAction_IsBase(true);
        vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else {
        ((VirtualQAbstractSlider*)self)->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSetRepeatAction(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_SetRepeatAction_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SetRepeatAction_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSlider_RepeatAction(const QAbstractSlider* self) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return static_cast<int>(vqabstractslider->repeatAction());
    } else {
        return static_cast<int>(((VirtualQAbstractSlider*)self)->repeatAction());
    }
}

// Base class handler implementation
int QAbstractSlider_QBaseRepeatAction(const QAbstractSlider* self) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_RepeatAction_IsBase(true);
        return static_cast<int>(vqabstractslider->repeatAction());
    } else {
        return static_cast<int>(((VirtualQAbstractSlider*)self)->repeatAction());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnRepeatAction(const QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_RepeatAction_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_RepeatAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_SetRepeatAction2(QAbstractSlider* self, int action, int thresholdTime) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime));
    } else {
        ((VirtualQAbstractSlider*)self)->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime));
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseSetRepeatAction2(QAbstractSlider* self, int action, int thresholdTime) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_SetRepeatAction2_IsBase(true);
        vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime));
    } else {
        ((VirtualQAbstractSlider*)self)->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSetRepeatAction2(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_SetRepeatAction2_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SetRepeatAction2_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_SetRepeatAction3(QAbstractSlider* self, int action, int thresholdTime, int repeatTime) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime), static_cast<int>(repeatTime));
    } else {
        ((VirtualQAbstractSlider*)self)->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime), static_cast<int>(repeatTime));
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseSetRepeatAction3(QAbstractSlider* self, int action, int thresholdTime, int repeatTime) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_SetRepeatAction3_IsBase(true);
        vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime), static_cast<int>(repeatTime));
    } else {
        ((VirtualQAbstractSlider*)self)->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime), static_cast<int>(repeatTime));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSetRepeatAction3(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_SetRepeatAction3_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SetRepeatAction3_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_UpdateMicroFocus(QAbstractSlider* self) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->updateMicroFocus();
    } else {
        ((VirtualQAbstractSlider*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseUpdateMicroFocus(QAbstractSlider* self) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_UpdateMicroFocus_IsBase(true);
        vqabstractslider->updateMicroFocus();
    } else {
        ((VirtualQAbstractSlider*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnUpdateMicroFocus(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_Create(QAbstractSlider* self) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->create();
    } else {
        ((VirtualQAbstractSlider*)self)->create();
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseCreate(QAbstractSlider* self) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_Create_IsBase(true);
        vqabstractslider->create();
    } else {
        ((VirtualQAbstractSlider*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnCreate(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_Create_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_Destroy(QAbstractSlider* self) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->destroy();
    } else {
        ((VirtualQAbstractSlider*)self)->destroy();
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseDestroy(QAbstractSlider* self) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_Destroy_IsBase(true);
        vqabstractslider->destroy();
    } else {
        ((VirtualQAbstractSlider*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnDestroy(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_Destroy_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSlider_FocusNextChild(QAbstractSlider* self) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return vqabstractslider->focusNextChild();
    } else {
        return ((VirtualQAbstractSlider*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QAbstractSlider_QBaseFocusNextChild(QAbstractSlider* self) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_FocusNextChild_IsBase(true);
        return vqabstractslider->focusNextChild();
    } else {
        return ((VirtualQAbstractSlider*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnFocusNextChild(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_FocusNextChild_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSlider_FocusPreviousChild(QAbstractSlider* self) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return vqabstractslider->focusPreviousChild();
    } else {
        return ((VirtualQAbstractSlider*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QAbstractSlider_QBaseFocusPreviousChild(QAbstractSlider* self) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_FocusPreviousChild_IsBase(true);
        return vqabstractslider->focusPreviousChild();
    } else {
        return ((VirtualQAbstractSlider*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnFocusPreviousChild(QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_FocusPreviousChild_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractSlider_Sender(const QAbstractSlider* self) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return vqabstractslider->sender();
    } else {
        return ((VirtualQAbstractSlider*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAbstractSlider_QBaseSender(const QAbstractSlider* self) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_Sender_IsBase(true);
        return vqabstractslider->sender();
    } else {
        return ((VirtualQAbstractSlider*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSender(const QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_Sender_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSlider_SenderSignalIndex(const QAbstractSlider* self) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return vqabstractslider->senderSignalIndex();
    } else {
        return ((VirtualQAbstractSlider*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractSlider_QBaseSenderSignalIndex(const QAbstractSlider* self) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_SenderSignalIndex_IsBase(true);
        return vqabstractslider->senderSignalIndex();
    } else {
        return ((VirtualQAbstractSlider*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSenderSignalIndex(const QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSlider_Receivers(const QAbstractSlider* self, const char* signal) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return vqabstractslider->receivers(signal);
    } else {
        return ((VirtualQAbstractSlider*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractSlider_QBaseReceivers(const QAbstractSlider* self, const char* signal) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_Receivers_IsBase(true);
        return vqabstractslider->receivers(signal);
    } else {
        return ((VirtualQAbstractSlider*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnReceivers(const QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_Receivers_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSlider_IsSignalConnected(const QAbstractSlider* self, const QMetaMethod* signal) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        return vqabstractslider->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractSlider*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractSlider_QBaseIsSignalConnected(const QAbstractSlider* self, const QMetaMethod* signal) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_IsSignalConnected_IsBase(true);
        return vqabstractslider->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractSlider*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnIsSignalConnected(const QAbstractSlider* self, intptr_t slot) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider && vqabstractslider->isVirtualQAbstractSlider) {
        vqabstractslider->setQAbstractSlider_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_IsSignalConnected_Callback>(slot));
    }
}

void QAbstractSlider_Delete(QAbstractSlider* self) {
    delete self;
}
